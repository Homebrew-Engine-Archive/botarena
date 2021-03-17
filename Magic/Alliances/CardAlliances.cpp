#include "stdafx.h"
#include "CardAlliances.h"

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

		DEFINE_CARD(CAesthirGliderCard);
		DEFINE_CARD(CAgentOfStromgaldCard);
		DEFINE_CARD(CArcaneDenialCard);
		DEFINE_CARD(CAstrolabeCard);
		DEFINE_CARD(CBalduvianTradingPostCard);
		DEFINE_CARD(CBalduvianDeadCard);
		DEFINE_CARD(CBalduvianWarMakersCard);
		DEFINE_CARD(CBestialFuryCard);
		DEFINE_CARD(CBurnoutCard);
		DEFINE_CARD(CCarrierPigeonsCard);
		DEFINE_CARD(CCastingOfBonesCard);
		DEFINE_CARD(CContagionCard);
		DEFINE_CARD(CDeadlyInsectCard);
		DEFINE_CARD(CDeathSparkCard);
		DEFINE_CARD(CDystopiaCard);
		DEFINE_CARD(CElvishRangerCard);
		DEFINE_CARD(CElvishSpiritGuideCard);
		DEFINE_CARD(CEnergyArcCard);
		DEFINE_CARD(CEnslavedScoutCard);
		DEFINE_CARD(CFalseDemiseCard);
		DEFINE_CARD(CFeastOrFamineCard);
		DEFINE_CARD(CFeveredStrengthCard);
		DEFINE_CARD(CFloodwaterDamCard);
		DEFINE_CARD(CForceOfWillCard);
		DEFINE_CARD(CForesightCard);
		DEFINE_CARD(CGiftOfTheWoodsCard);
		DEFINE_CARD(CGorillaBerserkersCard);
		DEFINE_CARD(CGorillaShamanCard);
		DEFINE_CARD(CGorillaWarCryCard);
		DEFINE_CARD(CHailStormCard);
		DEFINE_CARD(CHeartOfYavimayaCard);
		DEFINE_CARD(CHelmOfObedienceCard);
		DEFINE_CARD(CInheritanceCard);
		DEFINE_CARD(CInsidiousBookwormsCard);
		DEFINE_CARD(CIvoryGargoyleCard);
		DEFINE_CARD(CJuniperOrderAdvocateCard);
		DEFINE_CARD(CKaysaCard);
		DEFINE_CARD(CKjeldoranHomeGuardCard);
		DEFINE_CARD(CKjeldoranOutpostCard);
		DEFINE_CARD(CKrovikanHorrorCard);
		DEFINE_CARD(CKrovikanPlagueCard);
		DEFINE_CARD(CLakeOfTheDeadCard);
		DEFINE_CARD(CLatNamsLegacyCard);
		DEFINE_CARD(CLimDulsHighGuardCard);
		DEFINE_CARD(CLimDulsVaultCard);
		DEFINE_CARD(CLordOfTresserhornCard);
		//DEFINE_CARD(CMisinformationCard);
		DEFINE_CARD(CMishrasGroundbreakerCard);
		DEFINE_CARD(CNaturesChosenCard);
		DEFINE_CARD(CNaturesWrathCard);
		DEFINE_CARD(CNobleSteedsCard);
		DEFINE_CARD(COmenOfFireCard);
		DEFINE_CARD(CPhantasmalFiendCard);
		DEFINE_CARD(CPhantasmalSphereCard);
		DEFINE_CARD(CPhelddagrifCard);
		DEFINE_CARD(CPhyrexianBoonCard);
		DEFINE_CARD(CPhyrexianWarBeastCard);
		DEFINE_CARD(CPyrokinesisCard);
		DEFINE_CARD(CReinforcementsCard);
		DEFINE_CARD(CRitualOfTheMachineCard);
		DEFINE_CARD(CRoyalDecreeCard);
		DEFINE_CARD(CSchoolOfTheUnseenCard);
		DEFINE_CARD(CScarabOfTheUnseenCard);
		DEFINE_CARD(CShelteredValleyCard);
		DEFINE_CARD(CShieldSphereCard);
		DEFINE_CARD(CSolGrailCard);
		DEFINE_CARD(CSoldeviDiggerCard);
		DEFINE_CARD(CSoldeviExcavationsCard);
		DEFINE_CARD(CSoldeviSteamBeastCard);
		DEFINE_CARD(CSoldierOfFortuneCard);
		DEFINE_CARD(CSpinyStarfishCard);
		DEFINE_CARD(CStenchOfDecayCard);
		DEFINE_CARD(CSurgeOfStrengthCard);
		DEFINE_CARD(CSustainingSpiritCard);
		DEFINE_CARD(CSwampMosquitoCard);
		DEFINE_CARD(CTasteOfParadiseCard);
		DEFINE_CARD(CThawingGlaciersCard);
		DEFINE_CARD(CUnlikelyAllianceCard);
		DEFINE_CARD(CVarchildsCrusaderCard);
		DEFINE_CARD(CVarchildsWarRidersCard);
		DEFINE_CARD(CVeteransVoiceCard);
		DEFINE_CARD(CVisceridArmorCard);
		DEFINE_CARD(CVisceridDroneCard);
		DEFINE_CARD(CWanderingMageCard);
		DEFINE_CARD(CWildAesthirCard);
		DEFINE_CARD(CYavimayaAncientsCard);
		DEFINE_CARD(CYavimayaAntsCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CYavimayaAncientsCard::CYavimayaAncientsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Yavimaya Ancients"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(7),
		GREEN_MANA_TEXT, Power(+1), Life(-2))
{
}

//____________________________________________________________________________
//
CAgentOfStromgaldCard::CAgentOfStromgaldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agent of Stromgald"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeadlyInsectCard::CDeadlyInsectCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadly Insect"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("4") GREEN_MANA_TEXT, Power(6), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CElvishRangerCard::CElvishRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Ranger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(4), Life(1))
{
}

//____________________________________________________________________________
//
CEnslavedScoutCard::CEnslavedScoutCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Enslaved Scout"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T("2"), Power(+0), Life(+0), CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CKaysaCard::CKaysaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kaysa"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLimDulsHighGuardCard::CLimDulsHighGuardCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Lim-Dul's High Guard"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CWildAesthirCard::CWildAesthirCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wild Aesthir"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Power(+2), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CAesthirGliderCard::CAesthirGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aesthir Glider"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("3"), Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CSchoolOfTheUnseenCard::CSchoolOfTheUnseenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("School of the Unseen"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CInheritanceCard::CInheritanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Inheritance"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetResolutionCost(_T("3"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNobleSteedsCard::CNobleSteedsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Noble Steeds"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnlikelyAllianceCard::CUnlikelyAllianceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Unlikely Alliance"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AttackingCreatureComparer);
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new BlockingCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVisceridArmorCard::CVisceridArmorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Viscerid Armor"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+1), Life(+1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFeastOrFamineCard::CFeastOrFamineCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Feast or Famine"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude artifact OR black cards

	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT,
				_T("Zombie B"), 2881,
				1));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CReinforcementsCard::CReinforcementsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Reinforcements"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 3);
}

//____________________________________________________________________________
//
CStenchOfDecayCard::CStenchOfDecayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stench of Decay"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRitualOfTheMachineCard::CRitualOfTheMachineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ritual of the Machine"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude artifact OR black cards

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJuniperOrderAdvocateCard::CJuniperOrderAdvocateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juniper Order Advocate"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShieldSphereCard::CShieldSphereCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shield Sphere"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("0"), Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-0/-1"), +1));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNaturesWrathCard::CNaturesWrathCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nature's Wrath"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(GREEN_MANA_TEXT);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Island | CardType::Blue, false));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Island | CardType::Blue, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Swamp | CardType::Black, false));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Swamp | CardType::Black, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIvoryGargoyleCard::CIvoryGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ivory Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CIvoryGargoyleCard::OnResolutionCompleted))
{
	{
		// Exile this permanent
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("4") WHITE_MANA_TEXT,
				ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

void CIvoryGargoyleCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	if (IsInGraveyard())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier1 = CContainerEffectModifier(GetGame(), _T("End Step Reanimate Effect"), 61072, &pSubjects);
	pModifier1.ApplyTo(pAbilityAction->GetController());

	CPlayerEffectModifier pModifier2 =  CPlayerEffectModifier(PlayerEffectType::SkipNextDrawStep);
	pModifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CVarchildsCrusaderCard::CVarchildsCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Varchild's Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
    , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CVarchildsCrusaderCard::OnResolutionCompleted))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+0), CreatureKeyword::Unblockable));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Walls")));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetMaxTurnUsageCount(2);// Added to avoid infinite AI activation 

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddAbility(cpAbility.GetPointer());
}

void CVarchildsCrusaderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPhyrexianWarBeastCard::CPhyrexianWarBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian War Beast"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("3"), Power(3), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CForceOfWillCard::CForceOfWillCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Force of Will"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

	{ //Alternative cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
			_T(""),
			new TrueCardComparer));

		cpSpell->AddPayLifeDeltaCost(Life(-1));
		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CForceOfWillCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CForceOfWillCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CThawingGlaciersCard::CThawingGlaciersCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Thawing Glaciers"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"), Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->AddTapCost();
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetTapped(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThawingGlaciersCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::CleanupStep1));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThawingGlaciersCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThawingGlaciersCard::SetTriggerContext1(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
											  CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

bool CThawingGlaciersCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CNode* pToNode) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CBalduvianDeadCard::CBalduvianDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Dead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBalduvianDeadCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBalduvianDeadCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Graveborn A"), 2760, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CInsidiousBookwormsCard::CInsidiousBookwormsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Insidious Bookworms"), CardType::Creature, CREATURE_TYPE(Worm), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(_T("1") BLACK_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFloodwaterDamCard::CFloodwaterDamCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Floodwater Dam"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1"),
			TRUE, FALSE,	// Tap, Untap
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiftOfTheWoodsCard::CGiftOfTheWoodsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gift of the Woods"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CGiftOfTheWoodsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CGiftOfTheWoodsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->SetToCreature((CCreatureCard*)pEnchantedCard);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeteransVoiceCard::CVeteransVoiceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Veteran's Voice"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CVeteransVoiceCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CVeteransVoiceCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantCard,
			_T(""),
			Power(+2), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new SpecificCardComparer(pEnchantedCard));
	cpEnchantAbility->GetCost().AddTapCardCost(1, new CCardFilter(
		new SpecificCardComparer(pEnchantedCard)));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyrokinesisCard::CPyrokinesisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pyrokinesis"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-4), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

		//Alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-4), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPyrokinesisCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CPyrokinesisCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBalduvianWarMakersCard::CBalduvianWarMakersCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Balduvian War-Makers"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBalduvianWarMakersCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBalduvianWarMakersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 1;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CGorillaBerserkersCard::CGorillaBerserkersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorilla Berserkers"), CardType::Creature, CREATURE_TYPE2(Ape, Berserker), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddCantBeBlockedByOneOrTwo(FALSE, 0);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGorillaBerserkersCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGorillaBerserkersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 2;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CKjeldoranHomeGuardCard::CKjeldoranHomeGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Home Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(6))
	, bAttackedOrBlocked(FALSE)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranHomeGuardCard::SetTriggerContext));
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-0/-1"), +1));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Deserter"), 2844, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranHomeGuardCard::SetTriggerContextAux1));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranHomeGuardCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranHomeGuardCard::SetTriggerContextAux3));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKjeldoranHomeGuardCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard)
{
	bAttackedOrBlocked = TRUE;

	return false;
}

bool CKjeldoranHomeGuardCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CKjeldoranHomeGuardCard::SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CKjeldoranHomeGuardCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return bAttackedOrBlocked == TRUE;
}

//____________________________________________________________________________
//
CCarrierPigeonsCard::CCarrierPigeonsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Carrier Pigeons"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAstrolabeCard::CAstrolabeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Astrolabe"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBestialFuryCard::CBestialFuryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bestial Fury"), CardType::EnchantCreature, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("2") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CBestialFuryCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CBestialFuryCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+4));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
	cpAbility->SetToCreature((CCreatureCard*)pEnchantedCard);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFeveredStrengthCard::CFeveredStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fevered Strength"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CForesightCard::CForesightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Foresight"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Exile, true, true, false));

	cpSpell->SetSearchCount(MinimumValue(3), MaximumValue(3));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSoldeviDiggerCard::CSoldeviDiggerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soldevi Digger"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Graveyard, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcaneDenialCard::CArcaneDenialCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Arcane Denial"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CArcaneDenialCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CArcaneDenialCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Arcane Denial Effect"), 61015, 1, FALSE, ZoneId::_Effects);
	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);

	pModifier1.ApplyTo(pAbilityAction->GetAssociatedCard()->GetController());
	pModifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CGorillaWarCryCard::CGorillaWarCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gorilla War Cry"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CGorillaWarCryCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

BOOL CGorillaWarCryCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = GetGame()->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2);
}

//____________________________________________________________________________
//
CContagionCard::CContagionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Contagion"), CardType::Instant, nID)
{
	{
		//Regular mana cost - One target.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-2/-1"), +2));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());	
	}
	{
		//Regular mana cost - Two targets.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-2/-1"), +1));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());	
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

		//Alternative cost - One target.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-2/-1"), +2));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->AddPayLifeDeltaCost(Life(-1));
		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CContagionCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());	
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

		//Alternative cost - Two targets.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-2/-1"), +1));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->AddPayLifeDeltaCost(Life(-1));
		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CContagionCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());	
	}
}

BOOL CContagionCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CElvishSpiritGuideCard::CElvishSpiritGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Spirit Guide"), CardType::Creature, CREATURE_TYPE2(Elf, Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("Elvish Spirit Guide"), _T("Elvish Spirit Guides"), new SpecificCardComparer(this))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	
	cpAbility->SetHandOnly();

	cpAbility->GetCost().AddExileHandCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEnergyArcCard::CEnergyArcCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Energy Arc"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT BLUE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHailStormCard::CHailStormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Hail Storm"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Life(-2), // life delta
		new AttackingCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CHailStormCard::OnResolutionCompleted))
{
	m_pGlobalChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																			   DamageType::SpellDamage | DamageType::NonCombatDamage));

	m_pGlobalChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CHailStormCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CLatNamsLegacyCard::CLatNamsLegacyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lat-Nam's Legacy"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLatNamsLegacyCard::OnResolutionCompleted))
{
	counted_ptr<CDiscardCardSpell> cpSpell(
		::CreateObject<CDiscardCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			1, MoveType::Others,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Library, TRUE)); //Discard a card.

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CLatNamsLegacyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	return (pHand->GetSize() > 0);
}

void CLatNamsLegacyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		pAbilityAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Lat-Nam's Legacy Effect"), 61026, 1, FALSE, ZoneId::_Effects);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CLordOfTresserhornCard::CLordOfTresserhornCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Lord of Tresserhorn"), CardType::_LegendaryCreature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(10), Life(4),
		BLACK_MANA_TEXT)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
										CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetDrawCount(2);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
//"Misinformation\n{B}\nInstant\nALL,U\nPut up to three target cards from an opponent's graveyard on top of his or her library in any order."
//You can't decide the order.
//CMisinformationCard::CMisinformationCard(CGame* pGame, UINT nID)
//	: CTargetMoveCardSpellCard(pGame, _T("Misinformation"), CardType::Instant, nID,
//		BLACK_MANA_TEXT, AbilityType::Instant,
//		new TrueCardComparer,
//		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
//{
//	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
//	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 3);
//}
//
////____________________________________________________________________________
////
CSoldeviSteamBeastCard::CSoldeviSteamBeastCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Soldevi Steam Beast"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("5"), Power(4), Life(2),
		_T("2"))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVisceridDroneCard::CVisceridDroneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viscerid Drone"), CardType::Creature, CREATURE_TYPE2(Homarid, Drone), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
	, m_CardFilter(new CardTypeComparer(CardType::Snow | CardType::Swamp, true))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));
		
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWanderingMageCard::CWanderingMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wandering Mage"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(2), SourceColor::Null));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(1), SourceColor::Null));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Cleric) | CREATURE_TYPE(Wizard), false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(2), SourceColor::Null));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("-1/-1"), +1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CSoldierOfFortuneCard::CSoldierOfFortuneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soldier of Fortune"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Target player shuffles his or her library. Activates"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoldierOfFortuneCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSoldierOfFortuneCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();

	target->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CPhantasmalFiendCard::CPhantasmalFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantasmal Fiend"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(5))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+1), Life(-1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::SwitchedPT));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKjeldoranOutpostCard::CKjeldoranOutpostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kjeldoran Outpost"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains, false));

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				_T("Soldier B"), 2716,
				1));

		cpAbility->AddTapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLakeOfTheDeadCard::CLakeOfTheDeadCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lake of the Dead"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Swamp, false));

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT ));
		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

		cpAbility->AddTapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHeartOfYavimayaCard::CHeartOfYavimayaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Heart of Yavimaya"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Forest, false));

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoldeviExcavationsCard::CSoldeviExcavationsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Soldevi Excavations"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Island, false));
	m_CardFilter.AddComparer(new UntappedComparer);

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") BLUE_MANA_TEXT));
		
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpellEx>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpellEx>>(this,
				_T("1"),
				1));

		cpAbility->AddTapCost();

		cpAbility->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
		cpAbility->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		cpAbility->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

		
		cpAbility->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(1), 
			CZoneModifier::RoleType::PrimaryPlayer,
			CZoneModifier::RoleType::PrimaryPlayer,
			NULL,
			ZoneId::Library,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Bottom,
			MoveType::Others,
			CZoneModifier::RoleType::PrimaryPlayer);

		cpAbility->GetZoneModifier().SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBalduvianTradingPostCard::CBalduvianTradingPostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Balduvian Trading Post"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Mountain, false));
	m_CardFilter.AddComparer(new UntappedComparer);

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") RED_MANA_TEXT));
		
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AttackingCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShelteredValleyCard::CShelteredValleyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sheltered Valley"), nID)
{
	m_CardFilter.AddComparer(new CardNameComparer(_T("Sheltered Valley")));
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));
		
		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShelteredValleyCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShelteredValleyCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShelteredValleyCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pBattlefield = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);

	int nLandsInPlay = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsLand()) 
			++nLandsInPlay;
	}

	if (nLandsInPlay > 3) return false;

	return true;
}

bool CShelteredValleyCard::BeforeResolution(CShelteredValleyCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pBattlefield = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);

	int nLandsInPlay = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsLand()) 
			++nLandsInPlay;
	}

	if (nLandsInPlay > 3) return false;

	return true;
}

//____________________________________________________________________________
//
CBurnoutCard::CBurnoutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burnout"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Instant, false)));

	cpSpell->SetAbilityText(_T("Counter target instant spell if it's blue. Casts"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBurnoutCard::BeforeResolution));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

bool CBurnoutCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	CPlayer* pPlayer = target->GetController();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, TRUE, MoveType::Others);

	if ((target->GetCardType() & CardType::Blue).Any())
	{
		BOOL bCantBeCountered = FALSE;

		if (target->GetCardKeyword()->CantBeCountered())
			bCantBeCountered = TRUE;

		// To support Gaea's Herald
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);

		// To support Autumn's Veil
		std::set<const CCardFilter*> cantCounterFilterIndexes2;
		pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCounteredBySpells, cantCounterFilterIndexes2);

		// To support Gaea's Herald
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
			//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
			if ((*it)->IsCardIncluded(target))
			{
				bCantBeCountered = TRUE;
				break;
			}

		// To support Autumn's Veil
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes2.begin(); it != cantCounterFilterIndexes2.end(); ++it)
			//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
			if ((*it)->IsCardIncluded(this))
			{
				bCantBeCountered = TRUE;
				break;
			}

		if (bCantBeCountered == FALSE)
			pModifier.ApplyTo(target);
	}

	return true;
}

//____________________________________________________________________________
//
CPhyrexianBoonCard::CPhyrexianBoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phyrexian Boon"), CardType::EnchantCreature, nID)	
{
	counted_ptr<CDoubleChgPwrTghAttrExclusiveEnchant> cpSpell(
		::CreateObject<CDoubleChgPwrTghAttrExclusiveEnchant>(this, 
			_T("2") BLACK_MANA_TEXT,
			Power(+2), Life(+1), CreatureKeyword::Null, CardType::Black,		// Option 1 applies to black creatures
			Power(-1), Life(-2), CreatureKeyword::Null, CardType::Creature));	// Option 2 applies to non black creatures
																				// CDoubleChgPwrTghAttrExclusiveEnchant code
																				// The code only checks Option 2 if enchanted
																				// creature does not satisfy Option 1.
																				// This is how black creatures are excluded from Option 2. 									
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSwampMosquitoCard::CSwampMosquitoCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Swamp Mosquito"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetPoisonCount(1);
	cpAbility->SetReplacePoisonCount(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSwampMosquitoCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CSwampMosquitoCard::SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CSurgeOfStrengthCard::CSurgeOfStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Surge of Strength"), CardType::Instant, nID, AbilityType::Instant,
	    RED_MANA_TEXT GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
		, m_CardFilter(_T("a red or green card"), _T("red or green cards"), new CardTypeComparer(CardType::Red | CardType::Green, false))
{	
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSurgeOfStrengthCard::BeforeResolution));
	m_pTargetChgPwrTghAttrSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);
}

bool CSurgeOfStrengthCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue2 = converted;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CYavimayaAntsCard::CYavimayaAntsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Yavimaya Ants"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(1))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CYavimayaAntsCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}
void CYavimayaAntsCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Green, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Green, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CSustainingSpiritCard::CSustainingSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sustaining Spirit"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(3))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CSustainingSpiritCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::Worship, 1, TRUE));

	cpEnchantment->SetAffectControllerOnly();

	cpEnchantment->SetMainSpell(FALSE);
	AddSpell(cpEnchantment.GetPointer());
	}
}
void CSustainingSpiritCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	mCost.AddCost(CManaCost::Color::White, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		mCost.AddCost(CManaCost::Color::White, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CDystopiaCard::CDystopiaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dystopia"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CDystopiaCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetAbilityName(_T("sacrifice ability"));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(	new CardTypeComparer(CardType::Green | CardType::White, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->SetAbilityName(_T("cumulative upkeep ability"));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}
void CDystopiaCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetPayLifeResolutionCost(Life(0)); 
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetPayLifeResolutionCost(Life(-1*n_value));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CRoyalDecreeCard::CRoyalDecreeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Royal Decree"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CRoyalDecreeCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
	{ 
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
		cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Mountain | CardType::Swamp | CardType::Black | CardType::Red, false));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}
void CRoyalDecreeCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::White, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::White, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CGorillaShamanCard::CGorillaShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorilla Shaman"), CardType::Creature, CREATURE_TYPE2(Ape, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));		

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AlsoCardTypeComparer(CardType::Creature, false));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CTasteOfParadiseCard::CTasteOfParadiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Taste of Paradise"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(_T("1") GREEN_MANA_TEXT,true);
	cpSpell->SetExtraValueMultiplier(3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CScarabOfTheUnseenCard::CScarabOfTheUnseenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scarab of the Unseen"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardOwnerComparer(this),
			false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScarabOfTheUnseenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScarabOfTheUnseenCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EnchantedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CFalseDemiseCard::CFalseDemiseCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("False Demise"), CardType::EnchantCreature, nID,
		_T("2") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFalseDemiseCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CFalseDemiseCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController());
	return true;
}

//____________________________________________________________________________
//
CDeathSparkCard::CDeathSparkCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Death Spark"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-1),
		PreventableType::Preventable)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));

	cpAbility->SetResolutionCost(_T("1"));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathSparkCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CDeathSparkCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetZoneId() != ZoneId::Graveyard) return false;

	int nPosition = GetZone()->FindCardIndex(this);
	if (nPosition < GetZone()->GetSize() - 1)
		return (GetZone()->GetAt(nPosition + 1)->GetCardType().IsCreature());

	return false;
}

//____________________________________________________________________________
//
CKrovikanHorrorCard::CKrovikanHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krovikan Horror"), CardType::Creature, CREATURE_TYPE2(Horror, Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrovikanHorrorCard::SetTriggerContext));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrovikanHorrorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetZoneId() != ZoneId::Graveyard) return false;

	int nPosition = GetZone()->FindCardIndex(this);
	if (nPosition < GetZone()->GetSize() - 1)
		return (GetZone()->GetAt(nPosition + 1)->GetCardType().IsCreature());

	return false;
}

//____________________________________________________________________________
//
CCastingOfBonesCard::CCastingOfBonesCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Casting of Bones"), CardType::EnchantCreature, nID,
		_T("2") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetDrawCount(3);
	cpAbility->SetDiscard(1, TRUE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNaturesChosenCard::CNaturesChosenCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Nature's Chosen"), CardType::EnchantCreature, nID,
		GREEN_MANA_TEXT,
		new AnyCreatureComparer)
	, m_CardFilter(new EnchantedByComparer(this))
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				_T("")));

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

		cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
		cpAbility->SetMaxTurnUsageCount(1);

		cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
					_T(""),
					false, true,
					new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false)));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);
		cpAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this, &CNaturesChosenCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNaturesChosenCard::CanPlay(BOOL bIncludeTricks) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return FALSE;

	return (pCard->GetCardType() & CardType::White).Any();
}

//____________________________________________________________________________
//
CPhelddagrifCard::CPhelddagrifCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phelddagrif"), CardType::_LegendaryCreature, CREATURE_TYPE(Phelddagrif), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				GREEN_MANA_TEXT,
				FALSE_CARD_COMPARER, true));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhelddagrifCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				Life(+2), PreventableType::NotPreventable));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhelddagrifCard::BeforeResolution2));
		cpAbility->SetDamageType(DamageType::NotDealingDamage);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, true));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhelddagrifCard::BeforeResolution3));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhelddagrifCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier(CreatureKeyword::Trample, true, true);
	pModifier1->ApplyTo((CCreatureCard*)this);

	CTokenCreationModifier* pModifier2 = new CTokenCreationModifier(GetGame(), _T("Hippo A"), 2965, 1);
	pModifier2->ApplyTo(pTarget);

	return true;
}

bool CPhelddagrifCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier(CreatureKeyword::Flying, true, true);
	pModifier->ApplyTo((CCreatureCard*)this);

	return true;
}

bool CPhelddagrifCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, MoveType::Others);
	pModifier1->ApplyTo((CCard*)this);

	CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(0), MaximumValue(1));
	pModifier2->ApplyTo(pTarget);

	return true;
}
//____________________________________________________________________________
//
CVarchildsWarRidersCard::CVarchildsWarRidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Varchilds War-Riders"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(4))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVarchildsWarRidersCard::OnCUSelected))
		, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVarchildsWarRidersCard::OnOpponentSelected))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVarchildsWarRidersCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVarchildsWarRidersCard::BeforeResolution2));
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CVarchildsWarRidersCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 1;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

bool CVarchildsWarRidersCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("put %d Survivor token onto the battlefield under opponent's control"), nCounters);
			else
				selectionEntry.strText.Format(_T("put %d Survivor tokens onto the battlefield under opponents' control"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CVarchildsWarRidersCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s puts %d Survivor token onto the battlefield under opponent's control"), pSelectionPlayer->GetPlayerName(), (int)dwContext1);
					else
						strMessage.Format(_T("%s puts %d Survivor tokens onto the battlefield under opponents' control"), pSelectionPlayer->GetPlayerName(), (int)dwContext1);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) OpponentSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CVarchildsWarRidersCard::OpponentSelection(CPlayer* pPlayer, DWORD CurrentToken, DWORD TotalTokens)
{
	std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
			if (pSelectedPlayer != pPlayer)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pSelectedPlayer;
									
				entry.strText.Format(_T("give a Survivor token to %s"),
					pSelectedPlayer->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, CurrentToken, TotalTokens);
}

void CVarchildsWarRidersCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Survivor"), 2979, 1);
			pModifier.SetDoubling(false);

			pModifier.ApplyTo(pPlayer);

			if (dwContext1 < dwContext2) OpponentSelection(pSelectionPlayer, dwContext1 + 1, dwContext2);
		}
}


//____________________________________________________________________________
//
CKrovikanPlagueCard::CKrovikanPlagueCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Krovikan Plague"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0))
	, m_CardFilter(new EnchantedByComparer(this))
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				true));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKrovikanPlagueCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrovikanPlagueCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	if (pTargetCreature)
		pModifier1.ApplyTo(pTargetCreature);
	else
		pModifier1.ApplyTo(pTargetPlayer);

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("-0/-1"), 1)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CLimDulsVaultCard::CLimDulsVaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lim-Dul's Vault"), CardType::Instant, nID)
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLimDulsVaultCard::OnPaymentSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLimDulsVaultCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLimDulsVaultCard::BeforeResolution(CAbilityAction* pAction)
{
	RevealCards(pAction->GetController());
	return true;
}

void CLimDulsVaultCard::RevealCards(CPlayer* pController)
{
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int nCards;
	if (pLibrary->GetSize() < 5)
		nCards = pLibrary->GetSize();
	else
		nCards = 5;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nCards , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.ApplyTo(pController);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't pay life"));

		entries.push_back(selectionEntry);
	}
	if (pController->GetLife() >= 1 && !pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Pay 1 life"));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)nCards);
}

void CLimDulsVaultCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CCountedCardContainer pTopFive;
				pTopFive.RemoveAll();

				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				int nCards = (int)dwContext1;

				for (int i = 1; i <= nCards; i++)
				{
					pTopFive.AddCard(pLibrary->GetAt(pLibrary->GetSize() - i), CardPlacement::Top);
				}

				pLibrary->Shuffle();

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new ContainedinComparer(&pTopFive));

				CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Library, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Library, TRUE, MoveType::Others)));

				pModifier1.ApplyTo(pSelectionPlayer);

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCards, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.SetReorderInformation(true,
					ZoneId::Library,
					CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top);
		
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays 1 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				pModifier1.ApplyTo(pSelectionPlayer);

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, dwContext1 , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.SetReorderInformation(true,
					ZoneId::Library,
					CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Bottom);
		
				pModifier2.ApplyTo(pSelectionPlayer);

				RevealCards(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CSolGrailCard::CSolGrailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sol Grail"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSolGrailCard::OnSelectionDone))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolGrailCard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolGrailCard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolGrailCard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolGrailCard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolGrailCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSolGrailCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue = false;
		cBlack = false;
		cRed = false;
		cGreen = false;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("blue"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("green"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CSolGrailCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cWhite = true;

				return;
			}
			if (nSelectedIndex == 2)
			{
				cBlue = true;

				return;
			}
			if (nSelectedIndex == 3)
			{
				cBlack = true;

				return;
			}
			if (nSelectedIndex == 4)
			{
				cRed = true;

				return;
			}
			if (nSelectedIndex == 5)
			{
				cGreen = true;

				return;
			}
		}
}

BOOL CSolGrailCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CSolGrailCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CSolGrailCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CSolGrailCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CSolGrailCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CSpinyStarfishCard::CSpinyStarfishCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Spiny Starfish"), CardType::Creature, CREATURE_TYPE(Starfish), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(1), BLUE_MANA_TEXT)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Starfish"), 2984, 0);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpinyStarfishCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpinyStarfishCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSpinyStarfishCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	return GetRegenerationsThisTurn() > 0;
}

bool CSpinyStarfishCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = GetRegenerationsThisTurn();
	pAction->SetTriggerContext(triggerContext);	

	return true;
}

//____________________________________________________________________________
//
CMishrasGroundbreakerCard::CMishrasGroundbreakerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mishra's Groundbreaker"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMishrasGroundbreakerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CMishrasGroundbreakerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Animated Land E"), 64050, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CHelmOfObedienceCard::CHelmOfObedienceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helm of Obedience"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CXLowerLimitTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CXLowerLimitTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelmOfObedienceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHelmOfObedienceCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCards = pAction->GetCostConfigEntry().GetExtraValue();
	
	if (nCards > 0)
	{
		CPlayer* pController = pAction->GetController();
		CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
		int n = 0;
		bool bSearch = true;
		CCard* pFound;
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pTarget);
				
		CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

		while (bSearch && (n < nCards) && (pLibrary->GetSize() > 0))
		{
			CCard* pCard = pLibrary->GetTopCard();

			pModifier1.ApplyTo(pCard);
			
			if (pCard->IsInGraveyard())
			{
				n += 1;
				if (pCard->GetCardType().IsCreature())
				{
					bSearch = false;
					pFound = pCard;
				}
			}
		}

		if (!bSearch)
		{
			CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
			pModifier2.ApplyTo(this);

			pFound->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CPhantasmalSphereCard::CPhantasmalSphereCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantasmal Sphere"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(1))
{	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhantasmalSphereCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhantasmalSphereCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantasmalSphereCard::BeforeResolution1(CAbilityAction* pAction)
{
	int nValue = 0;
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
		pModifier.ApplyTo(this);

		nValue = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	}
	else
		nValue = GetLastKnownp11Counters();
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	mCost.AddCost(CManaCost::Color::Generic, nValue);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
	CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
	pModifier.ApplyTo(this);

	return true;
}

bool CPhantasmalSphereCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	int nCounters = GetLastKnownp11Counters();

	int nTokenCount = 1;

	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pTarget->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (pTarget->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Orb"), 62026));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62026); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Orb")); }

		pTarget->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nCounters));
		pCreature->SetPrintedToughness(Life(nCounters));		

		cpToken->Move(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield), pTarget, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
COmenOfFireCard::COmenOfFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Omen of Fire"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&COmenOfFireCard::OnResolutionCompleted))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &COmenOfFireCard::OnCardSelected))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void COmenOfFireCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	pSelected.RemoveAll();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::White, false));

	int nWhite = m_CardFilter.CountIncluded(pActivePlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	ChoiceFunction(pActivePlayerID, nWhite, nWhite);
}

void COmenOfFireCard::ChoiceFunction(int PlayerID, int nToSelect, int nTotal)
{
	if (nToSelect == 0)
	{
		int NextPlayer = PlayerID + 1;
		int PlayerCount = GetGame()->GetPlayerCount();
		CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

		if (NextPlayer >= PlayerCount)
			NextPlayer -= PlayerCount;
		if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		{
			CCardFilter m_CardFilter;
			m_CardFilter.SetComparer(new CardTypeComparer(CardType::White, false));

			int nWhite = m_CardFilter.CountIncluded(GetGame()->GetPlayer(NextPlayer)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			ChoiceFunction(NextPlayer, nWhite, nWhite);
		}
		else
			for (int i = 0; i < pSelected.GetSize(); ++i)
			{
				CCard* pCard = pSelected.GetAt(i);
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pCard->GetController());
				pModifier.ApplyTo(pCard);
			}
	}
	else
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (!pSelected.HasCard(pCard) && ((pCard->GetCardType() & CardType::Plains).Any() || pCard->IsColor(CManaPool::Color::White)))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Sacrifice %s (card %d of %d)"),
					pCard->GetCardName(TRUE), nTotal - nToSelect + 1, nTotal);

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, nToSelect, nTotal);
	}
}


void COmenOfFireCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s selects %s to sacrifice"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pSelected.AddCard(pCard, CardPlacement::Top);
				
			ChoiceFunction(dwContext1, dwContext2 - 1, dwContext3);

			return;
		}
}

//____________________________________________________________________________
//
