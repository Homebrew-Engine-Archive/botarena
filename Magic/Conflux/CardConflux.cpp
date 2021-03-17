#include "stdafx.h"
#include "CardConflux.h"

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

		DEFINE_CARD(CAbsorbVisCard);
		DEFINE_CARD(CAerieMysticsCard);
		DEFINE_CARD(CArmillarySphereCard);
		DEFINE_CARD(CApocalypseHydraCard);
		DEFINE_CARD(CAshasFavorCard);
		DEFINE_CARD(CAvenTrailblazerCard);
		DEFINE_CARD(CBanefireCard);
		DEFINE_CARD(CBeaconBehemothCard);
		DEFINE_CARD(CBloodTyrantCard);
		DEFINE_CARD(CBloodhallOozeCard);
		DEFINE_CARD(CBoneSawCard);
		DEFINE_CARD(CBrackwaterElementalCard);
		DEFINE_CARD(CCharnelhoardWurmCard);
		DEFINE_CARD(CChildOfAlaraCard);
		DEFINE_CARD(CCliffrunnerBehemothCard);
		DEFINE_CARD(CConfluxCard);
		DEFINE_CARD(CConstrictingTendrilsCard);
		DEFINE_CARD(CControlledInstinctsCard);
		DEFINE_CARD(CCorruptedRootsCard);
		DEFINE_CARD(CCountersquallCard);
		DEFINE_CARD(CCourtHomunculusCard);
		DEFINE_CARD(CCumberStoneCard);
		DEFINE_CARD(CCylianSunsingerCard);
		DEFINE_CARD(CDarkTemperCard);
		DEFINE_CARD(CDarklitGargoyleCard);
		DEFINE_CARD(CDragDownCard);
		DEFINE_CARD(CDragonsoulKnightCard);
		DEFINE_CARD(CDreadwingCard);
		DEFINE_CARD(CElderMasteryCard);
		DEFINE_CARD(CEmberWeaverCard);
		DEFINE_CARD(CEsperCormorantsCard);
		DEFINE_CARD(CEsperzoaCard);
		DEFINE_CARD(CEtherswornAdjudicatorCard);
		DEFINE_CARD(CExoticOrchardCard);
		DEFINE_CARD(CExplodingBordersCard);
		DEFINE_CARD(CExtractorDemonCard);
		DEFINE_CARD(CFaerieMechanistCard);
		DEFINE_CARD(CFieryFallCard);
		DEFINE_CARD(CFiligreeFractureCard);
		DEFINE_CARD(CFleshformerCard);
		DEFINE_CARD(CFontOfMythosCard);
		DEFINE_CARD(CFrontlineSageCard);
		DEFINE_CARD(CFusionElementalCard);
		DEFINE_CARD(CGleamOfResistanceCard);
		DEFINE_CARD(CGluttonousSlimeCard);
		DEFINE_CARD(CGoblinOutlanderCard);
		DEFINE_CARD(CGoblinRazerunnersCard);
		DEFINE_CARD(CGrixisIllusionistCard);
		DEFINE_CARD(CGrixisSlavedriverCard);
		DEFINE_CARD(CGwafaHazidProfiteerCard);
		DEFINE_CARD(CHellkiteHatchlingCard);
		DEFINE_CARD(CHellsparkElementalCard);
		DEFINE_CARD(CInfectiousHorrorCard)
		DEFINE_CARD(CInkwellLeviathanCard);
		DEFINE_CARD(CJhessianBalmgiverCard);
		DEFINE_CARD(CKaleidostoneCard);
		DEFINE_CARD(CKederektParasiteCard);
		DEFINE_CARD(CKnightOfTheReliquaryCard);
		DEFINE_CARD(CKnotvineMysticCard);
		DEFINE_CARD(CKraniocerosCard);
		DEFINE_CARD(CLapseOfCertaintyCard);
		DEFINE_CARD(CMagisterSphinxCard);
		DEFINE_CARD(CMalfegorCard);
		DEFINE_CARD(CManaforceMaceCard);
		DEFINE_CARD(CMarkOfAsylumCard);
		DEFINE_CARD(CMartialCoupCard);
		DEFINE_CARD(CMasterTransmuterCard);
		DEFINE_CARD(CMatcaRiotersCard);
		DEFINE_CARD(CMeglonothCard);
		DEFINE_CARD(CMightOfAlaraCard);
		DEFINE_CARD(CMirrorSigilSergeantCard);
		DEFINE_CARD(CMoltenFrameCard);
		DEFINE_CARD(CNacatlOutlanderCard);
		DEFINE_CARD(CNacatlSavageCard);
		DEFINE_CARD(CNobleHierarchCard);
		DEFINE_CARD(CNyxathidCard);
		DEFINE_CARD(CObeliskOfAlaraCard);
		DEFINE_CARD(CPaleolothCard);
		DEFINE_CARD(CParagonOfTheAmeshaCard);
		DEFINE_CARD(CParasiticStrixCard);
		DEFINE_CARD(CPathToExileCard);
		DEFINE_CARD(CPestilentKathariCard);
		DEFINE_CARD(CProgenitusCard);
		DEFINE_CARD(CRakkaMarCard);
		DEFINE_CARD(CRhoxBodyguardCard);
		DEFINE_CARD(CRhoxMeditantCard);
		DEFINE_CARD(CRottingRatsCard);
		DEFINE_CARD(CRuptureSpireCard);
		DEFINE_CARD(CSacellumArchersCard);
		DEFINE_CARD(CSalvageSlasherCard);
		DEFINE_CARD(CScarlandThrinaxCard);
		DEFINE_CARD(CScattershotArcherCard);
		DEFINE_CARD(CScepterOfDominanceCard);
		DEFINE_CARD(CScepterOfFugueCard);
		DEFINE_CARD(CScepterOfInsightCard);
		DEFINE_CARD(CScornfulAEtherLichCard);
		DEFINE_CARD(CSedraxisAlchemistCard);
		DEFINE_CARD(CShamblingRemainsCard);
		DEFINE_CARD(CShardConvergenceCard);
		DEFINE_CARD(CSigilOfTheEmptyThroneCard);
		DEFINE_CARD(CSkywardEyeProphetsCard);
		DEFINE_CARD(CSludgeStriderCard);
		DEFINE_CARD(CSoulsMajestyCard);
		DEFINE_CARD(CSphinxSummonerCard);
		DEFINE_CARD(CSporeBurstCard);
		DEFINE_CARD(CSuicidalChargeCard);
		DEFINE_CARD(CSylvanBountyCard);
		DEFINE_CARD(CTeleminPerformanceCard);
		DEFINE_CARD(CThornlingCard);
		DEFINE_CARD(CToxicIguanarCard);
		DEFINE_CARD(CTraumaticVisionsCard);
		DEFINE_CARD(CTukatongueThallidCard);
		DEFINE_CARD(CUnstableFrontierCard);
		DEFINE_CARD(CVagrantPlowbeastsCard);
		DEFINE_CARD(CValeronOutlanderCard);
		DEFINE_CARD(CValiantGuardCard);
		DEFINE_CARD(CVectisAgentsCard);
		DEFINE_CARD(CVedalkenOutlanderCard);
		DEFINE_CARD(CViashinoSlaughtermasterCard);
		DEFINE_CARD(CViewFromAboveCard);
		DEFINE_CARD(CVoicesFromTheVoidCard);
		DEFINE_CARD(CVolcanicFalloutCard);
		DEFINE_CARD(CVoraciousDragonCard);
		DEFINE_CARD(CWallofReverenceCard);
		DEFINE_CARD(CWanderingGoblinsCard);
		DEFINE_CARD(CWildLeotauCard);
		DEFINE_CARD(CWorldheartPhoenixCard);
		DEFINE_CARD(CWretchedBanquetCard);
		DEFINE_CARD(CYokeOfTheDamnedCard);
		DEFINE_CARD(CZombieOutlanderCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
/*CSporeBurstCard::CSporeBurstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spore Burst"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				Life(+0), PreventableType::NotPreventable));
		
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
	{
	    counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSporeBurstCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CSporeBurstCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
									 	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	m_pTriggeredAbility->SetCreateTokenOption(TRUE, _T("Saproling"), nDomainCount);

	return true;
}
*/
//____________________________________________________________________________
//
CFontOfMythosCard::CFontOfMythosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Font of Mythos"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::DrawStep2));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAerieMysticsCard::CAerieMysticsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aerie Mystics"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->SetToActivatedAbility();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBeaconBehemothCard::CBeaconBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Beacon Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Vigilance, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::greater<int>>(4)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChildOfAlaraCard::CChildOfAlaraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Child of Alara"), CardType::_LegendaryCreature, CREATURE_TYPE(Avatar), nID,
		ALL_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	    counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDreadwingCard::CDreadwingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dreadwing"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(+3), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CFrontlineSageCard::CFrontlineSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frontline Sage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT, 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback,
							   &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrontlineSageCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFrontlineSageCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										   CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CFusionElementalCard::CFusionElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fusion Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		ALL_MANA_TEXT, Power(8), Life(8))
{
}

//____________________________________________________________________________
//
CGoblinOutlanderCard::CGoblinOutlanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Outlander"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CGrixisIllusionistCard::CGrixisIllusionistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grixis Illusionist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::BasicLand, CardType::_All, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::BasicLand, CardType::_All, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::BasicLand, CardType::_All, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::BasicLand, CardType::_All, TRUE, _T("Plains"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJhessianBalmgiverCard::CJhessianBalmgiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhessian Balmgiver"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKnightOfTheReliquaryCard::CKnightOfTheReliquaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of the Reliquary"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Forest or a Plains"), _T("Forests or Plains"), new CardTypeComparer(CardType::Forest | CardType::Plains, false))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::_Land, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), 
				CCardFilter::GetFilter(_T("lands")),		
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->AddTapCost();
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKnotvineMysticCard::CKnotvineMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knotvine Mystic"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated,
			RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKraniocerosCard::CKraniocerosCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kranioceros"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT, Power(5), Life(2),
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+3))
{
}

//____________________________________________________________________________
//
CNacatlOutlanderCard::CNacatlOutlanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nacatl Outlander"), CardType::Creature, CREATURE_TYPE2(Cat, Scout), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CNobleHierarchCard::CNobleHierarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noble Hierarch"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback,
							   &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNobleHierarchCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNobleHierarchCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										   CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CPestilentKathariCard::CPestilentKathariCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pestilent Kathari"), CardType::Creature, CREATURE_TYPE2(Bird, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRakkaMarCard::CRakkaMarCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Rakka Mar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			RED_MANA_TEXT, _T("Elemental C"), 2890, 1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRhoxBodyguardCard::CRhoxBodyguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Bodyguard"), CardType::Creature, CREATURE_TYPE3(Rhino, Monk, Soldier), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback, 
							   &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRhoxBodyguardCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRhoxBodyguardCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										   CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSacellumArchersCard::CSacellumArchersCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Sacellum Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3),
		RED_MANA_TEXT WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-2), PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CScarlandThrinaxCard::CScarlandThrinaxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarland Thrinax"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScattershotArcherCard::CScattershotArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scattershot Archer"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-1),	
			new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
			PreventableType::Preventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkywardEyeProphetsCard::CSkywardEyeProphetsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyward Eye Prophets"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T(""),	1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE, FALSE);
	cpAbility->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Battlefield, CardPlacement::NotApplicable, 
		CCardFilter::GetFilter(_T("lands")));

	cpAbility->AddTapCost();

	cpAbility->SetReorder(TRUE, ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTukatongueThallidCard::CTukatongueThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tukatongue Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling B"), 2712, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVagrantPlowbeastsCard::CVagrantPlowbeastsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vagrant Plowbeasts"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("1"),
			new CreaturePowerComparer<std::greater<int>>(4)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CValeronOutlanderCard::CValeronOutlanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Valeron Outlander"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CValiantGuardCard::CValiantGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Valiant Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(0), Life(3))
{
}

//____________________________________________________________________________
//
CWildLeotauCard::CWildLeotauCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Leotau"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	AddUpkeepCost(GREEN_MANA_TEXT);
}

//____________________________________________________________________________
//
CZombieOutlanderCard::CZombieOutlanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Outlander"), CardType::Creature, CREATURE_TYPE2(Zombie, Scout), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CDarklitGargoyleCard::CDarklitGargoyleCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Darklit Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2),
		BLACK_MANA_TEXT, Power(+2), Life(-1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CEsperCormorantsCard::CEsperCormorantsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Esper Cormorants"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CEsperzoaCard::CEsperzoaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Esperzoa"), CardType::_ArtifactCreature, CREATURE_TYPE(Jellyfish), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEtherswornAdjudicatorCard::CEtherswornAdjudicatorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ethersworn Adjudicator"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Knight), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("2") BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInkwellLeviathanCard::CInkwellLeviathanCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Inkwell Leviathan"), CardType::_ArtifactCreature, CREATURE_TYPE(Leviathan), nID,
		_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(7), Life(11),
		CreatureKeyword::Islandwalk)
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CSalvageSlasherCard::CSalvageSlasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Salvage Slasher"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScornfulAEtherLichCard::CScornfulAEtherLichCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scornful Æther-Lich"), CardType::_ArtifactCreature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance | CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSphinxSummonerCard::CSphinxSummonerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx Summoner"), CardType::_ArtifactCreature, CREATURE_TYPE(Sphinx), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact creatures")));
	cpAbility->SetToZone(ZoneId::Hand);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVectisAgentsCard::CVectisAgentsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Vectis Agents"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3),
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(-2), Life(+0), CreatureKeyword::Unblockable)
{
}

//____________________________________________________________________________
//
CVedalkenOutlanderCard::CVedalkenOutlanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Outlander"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Scout), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CExoticOrchardCard::CExoticOrchardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Exotic Orchard"), nID, CardType::NonbasicLand)
{
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::_Land, false),
			CManaPool::Color::White));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::_Land, false),
			CManaPool::Color::Blue));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::_Land, false),
			CManaPool::Color::Black));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::_Land, false),
			CManaPool::Color::Red));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::_Land, false),
			CManaPool::Color::Green));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnstableFrontierCard::CUnstableFrontierCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Unstable Frontier"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				_T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T(""),	new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::BasicLand, CardType::_All, TRUE, _T("Forest"));
		cpAbility->AddCardTypeToSelection(CardType::Island | CardType::BasicLand, CardType::_All, TRUE, _T("Island"));
		cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::BasicLand, CardType::_All, TRUE, _T("Mountain"));	
		cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::BasicLand, CardType::_All, TRUE, _T("Plains"));
		cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmillarySphereCard::CArmillarySphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Armillary Sphere"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"), CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->SetRevealCards(TRUE);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoneSawCard::CBoneSawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bone Saw"), CardType::Artifact | CardType::Equipment, nID, 
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCumberStoneCard::CCumberStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cumber Stone"), CardType::Artifact, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(-1), Life(+0)));

	cpAbility->SetAffectOpponentCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKaleidostoneCard::CKaleidostoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kaleidostone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated,
				ALL_MANA_TEXT, _T("5")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CObeliskOfAlaraCard::CObeliskOfAlaraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Alara"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Life(+5), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT, 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScepterOfDominanceCard::CScepterOfDominanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scepter of Dominance"), CardType::Artifact, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE, FALSE,
			new TrueCardComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScepterOfFugueCard::CScepterOfFugueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scepter of Fugue"), CardType::Artifact, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScepterOfInsightCard::CScepterOfInsightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scepter of Insight"), CardType::Artifact, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT, 1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAshasFavorCard::CAshasFavorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Asha's Favor"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::FirstStrike | CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CSigilOfTheEmptyThroneCard::CSigilOfTheEmptyThroneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sigil of the Empty Throne"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Angel B"), 2740, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSuicidalChargeCard::CSuicidalChargeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Suicidal Charge"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			_T(""),
			new AnyCreatureComparer,
			Power(-1), Life(-1), CreatureKeyword::MustAttack));

	cpAbility->AddSacrificeCost();

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectOpponentCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLapseOfCertaintyCard::CLapseOfCertaintyCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Lapse of Certainty"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Library, TRUE);
}

//____________________________________________________________________________
//
CVolcanicFalloutCard::CVolcanicFalloutCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Volcanic Fallout"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-2), new AnyCreatureComparer, TRUE,
		PreventableType::Preventable)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CAvenTrailblazerCard::CAvenTrailblazerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Trailblazer"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(0))
{
	{
		//Pseudo-Domain code. Must be changed when Domain ability is implemented
		//Plains pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));
		
		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Island pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Island, false)));

		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Swamp pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false)));

		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Mountain pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Mountain, false)));

		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Forest pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCharnelhoardWurmCard::CCharnelhoardWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charnelhoard Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
									 CWhenSelfDamageDealt::PlayerEventCallback,
									 &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CControlledInstinctsCard::CControlledInstinctsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Controlled Instincts"), CardType::EnchantCreature, nID)
{
	{
		//Red creatures
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				CardKeyword::NoUntapInUntapPhase));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Green creatures
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				CardKeyword::NoUntapInUntapPhase));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCorruptedRootsCard::CCorruptedRootsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Corrupted Roots"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Forest | CardType::Plains, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CCorruptedRootsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CCorruptedRootsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged,
						   CWhenSelfOrientationChanged::EventCallback,
						   &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCourtHomunculusCard::CCourtHomunculusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Court Homunculus"), CardType::_ArtifactCreature, CREATURE_TYPE(Homunculus), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->GetSurveyCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCylianSunsingerCard::CCylianSunsingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cylian Sunsinger"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
			Power(+3), Life(+3),
			new CardNameComparer(_T("Cylian Sunsinger"))));

	cpAbility->SetToActivatedAbility();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInfectiousHorrorCard::CInfectiousHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infectious Horror"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMatcaRiotersCard::CMatcaRiotersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Matca Rioters"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		//Pseudo-Domain code. Must be changed when Domain ability is implemented
		//Plains pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Island pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Island, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Swamp pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Mountain pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Mountain, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Forest pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPaleolothCard::CPaleolothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paleoloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(4));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGleamOfResistanceCard::CGleamOfResistanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gleam of Resistance"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("4") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+2)));

		cpSpell->GetOtherCardModifiers().push_back(new CCardOrientationModifier(FALSE));
		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Basic landcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarkOfAsylumCard::CMarkOfAsylumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mark of Asylum"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllNoncombatDamage));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRhoxMeditantCard::CRhoxMeditantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Meditant"), CardType::Creature, CREATURE_TYPE2(Rhino, Monk), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRhoxMeditantCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRhoxMeditantCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CRhoxMeditantCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
				 										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CRhoxMeditantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CConstrictingTendrilsCard::CConstrictingTendrilsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Constricting Tendrils"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(-3), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTraumaticVisionsCard::CTraumaticVisionsCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Traumatic Visions"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, new TrueCardComparer)
{
	//Basic landcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands"))));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbsorbVisCard::CAbsorbVisCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Absorb Vis"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("6") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(-4), PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();

	{
		//Basic landcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSedraxisAlchemistCard::CSedraxisAlchemistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sedraxis Alchemist"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSedraxisAlchemistCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSedraxisAlchemistCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CSedraxisAlchemistCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CSedraxisAlchemistCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CBloodhallOozeCard::CBloodhallOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodhall Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CBloodhallOozeCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CBloodhallOozeCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBloodhallOozeCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CBloodhallOozeCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloodhallOozeCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

bool CBloodhallOozeCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

bool CBloodhallOozeCard::SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

bool CBloodhallOozeCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CFieryFallCard::CFieryFallCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fiery Fall"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") RED_MANA_TEXT,
		new AnyCreatureComparer, FALSE,	
		Life(-5), PreventableType::Preventable)
{
	//Basic landcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("1") RED_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands"))));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoltenFrameCard::CMoltenFrameCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Molten Frame"), CardType::Instant, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_ArtifactCreature, true),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSylvanBountyCard::CSylvanBountyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Sylvan Bounty"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+8), PreventableType::NotPreventable)
{
	//Basic landcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands"))));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagisterSphinxCard::CMagisterSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Magister Sphinx"), CardType::_ArtifactCreature, CREATURE_TYPE(Sphinx), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(10));
	cpAbility->GetLifeModifier().SetReplacement(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CParasiticStrixCard::CParasiticStrixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Parasitic Strix"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParasiticStrixCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CParasiticStrixCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CParasiticStrixCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CParasiticStrixCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CSludgeStriderCard::CSludgeStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sludge Strider"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
			_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetResolutionCost(_T("1"));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetResolutionCost(_T("1"));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRuptureSpireCard::CRuptureSpireCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rupture Spire"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}

	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CRuptureSpireCard::CreateTemporaryAbility), _T("1"),
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CRuptureSpireCard::PreRemoveAbilityCallback));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

CCard* CRuptureSpireCard::CreateTemporaryAbility()
{
	return this;
}

void CRuptureSpireCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield,	ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CMirrorSigilSergeantCard::CMirrorSigilSergeantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirror-Sigil Sergeant"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMirrorSigilSergeantCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMirrorSigilSergeantCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMirrorSigilSergeantCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CMirrorSigilSergeantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer()) > 0)
	{
		CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
		pModifier.ApplyTo((CCard*)this);
	}

	return true;
}

//____________________________________________________________________________
//
CMartialCoupCard::CMartialCoupCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Martial Coup"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMartialCoupCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMartialCoupCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int n = GetLastCastingExtraValue();
	
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Soldier A"), 2713, n, FALSE, ZoneId::Battlefield, &pTokens);

	pModifier1.ApplyTo(pAbilityAction->GetController());

	if (n > 4) // Does X = 5 or greater?
	{
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&pTokens));

		CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
		}

	}
}

//____________________________________________________________________________
//
CViewFromAboveCard::CViewFromAboveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("View from Above"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

void CViewFromAboveCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer()) > 0))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CDragDownCard::CDragDownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Drag Down"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDragDownCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDragDownCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nDomainCount;
		Context.nValue2 = -nDomainCount;

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
CCountersquallCard::CCountersquallCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Countersquall"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant, 
		new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCountersquallCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CCountersquallCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* spell_controller=pAbilityAction->GetAssociatedCard()->GetController();

	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(spell_controller);
}

//____________________________________________________________________________
//
CConfluxCard::CConfluxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Conflux"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
			_T("3") ALL_MANA_TEXT, 
			CCardFilter::GetFilter(_T("green cards")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpSpell->SetAbilityText(_T("Search your library for a white card, a blue card, a black card, a red card, and a green card. Casts"));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConfluxCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CConfluxCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("white cards")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("blue cards")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier3 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("black cards")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);
	
	CPlayerSearchModifier pModifier4 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("red cards")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
	pModifier3.ApplyTo(GetController());
	pModifier4.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CCliffrunnerBehemothCard::CCliffrunnerBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cliffrunner Behemoth"), CardType::Creature, CREATURE_TYPE2(Rhino, Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Red, false));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::White, false));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmberWeaverCard::CEmberWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ember Weaver"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Red, false));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGluttonousSlimeCard::CGluttonousSlimeCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Gluttonous Slime"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGluttonousSlimeCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	GetCardKeyword()->AddFlash(FALSE);
}

void CGluttonousSlimeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGrixisSlavedriverCard::CGrixisSlavedriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grixis Slavedriver"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie"), 2724, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

//		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	//		pModifier2->GetModifier().SetToAdd(CardKeyword::Flash);
		//	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrixisSlavedriverCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrixisSlavedriverCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CGrixisSlavedriverCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CHellkiteHatchlingCard::CHellkiteHatchlingCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Hellkite Hatchling"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHellkiteHatchlingCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying | CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CHellkiteHatchlingCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);

		CCreatureKeywordModifier* pmodifierUp1 = new CCreatureKeywordModifier;
		pmodifierUp1->GetModifier().SetToAdd(CreatureKeyword::Flying | CreatureKeyword::Trample);
		pmodifierUp1->GetModifier().SetOneTurnOnly(FALSE);

		pmodifierUp1->ApplyTo(this); pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CHellsparkElementalCard::CHellsparkElementalCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Hellspark Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

//		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	//		pModifier2->GetModifier().SetToAdd(CardKeyword::Flash);
		//	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHellsparkElementalCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHellsparkElementalCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CHellsparkElementalCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CPathToExileCard::CPathToExileCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Path to Exile"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSearchSpell> cpSpell(
		::CreateObject<CTargetMoveCardSearchSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others,
			MinimumValue(0), MaximumValue(1), CCardFilter::GetFilter(_T("basic lands"))));

	cpSpell->SetSearchTapped();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRottingRatsCard::CRottingRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotting Rats"), CardType::Creature, CREATURE_TYPE2(Zombie, Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

//		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	//		pModifier2->GetModifier().SetToAdd(CardKeyword::Flash);
		//	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRottingRatsCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRottingRatsCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CRottingRatsCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CShamblingRemainsCard::CShamblingRemainsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shambling Remains"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT BLACK_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

//		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	//		pModifier2->GetModifier().SetToAdd(CardKeyword::Flash);
		//	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShamblingRemainsCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShamblingRemainsCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CShamblingRemainsCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CShardConvergenceCard::CShardConvergenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shard Convergence"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
			_T("3") GREEN_MANA_TEXT , 
			CCardFilter::GetFilter(_T("Mountains")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpSpell->SetAbilityText(_T("Search your library for a Plains card, an Island card, a Swamp card, and a Mountain card. Casts"));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShardConvergenceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CShardConvergenceCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Plains")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Islands")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier3 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Swamps")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
	pModifier3.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CViashinoSlaughtermasterCard::CViashinoSlaughtermasterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Viashino Slaughtermaster"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(+1), Life(+1))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);

	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CBloodTyrantCard::CBloodTyrantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blood Tyrant"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodTyrantCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CBloodTyrantCard::BeforeResolution(CAbilityAction* pAction)
{
	int Counters = 0;
	int PrevLife = 0;
	int NewLife = 0;
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		PrevLife = (int)pPlayer->GetLife();
		pModifier1.ApplyTo(pPlayer);
		NewLife = (int)pPlayer->GetLife();
		if (NewLife < PrevLife)
			Counters += PrevLife - NewLife;
	}

	if (Counters > 0)
	{
		CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), Counters);
		pModifier2.ApplyTo(this);
	}

	return true;
}

//____________________________________________________________________________
//
CBrackwaterElementalCard::CBrackwaterElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brackwater Elemental"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::EventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetScheduledNode(NodeId::EndStep);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	//{
	//	//It doesn't become sacrificed when it has blocked, so I disabled this and added the triggered ability Fog Elemental is using, with NodeId::EndStep.
	//	typedef
	//		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	//	counted_ptr<TriggeredAbility> cpAbility(
	//		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	//	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	//	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrackwaterElementalCard::SetTriggerContext));
	//	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	//	AddAbility(cpAbility.GetPointer());
	//}
	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

//		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	//		pModifier2->GetModifier().SetToAdd(CardKeyword::Flash);
		//	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrackwaterElementalCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBrackwaterElementalCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												  CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CBrackwaterElementalCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);
		
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CDarkTemperCard::CDarkTemperCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dark Temper"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CDarkTemperCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT, 
			new AnyCreatureComparer,
			FALSE));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDarkTemperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
	{
		CLifeModifier modifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		modifier.ApplyTo(reinterpret_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard()));
	}
	else
	{
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CExplodingBordersCard::CExplodingBordersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exploding Borders"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CExplodingBordersCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, 
			FALSE_CARD_COMPARER,
			true));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddSpell(cpSpell.GetPointer());
}

void CExplodingBordersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(
			pAbilityAction->GetController(),
			MinimumValue(0),
			MaximumValue(1),
			GetController(),
			ZoneId::Library,
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield,
			FALSE,
			CardPlacement::Top,
			TRUE,
			TRUE);

	pModifier1.ApplyTo(GetController());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CLifeModifier modifier2 = CLifeModifier(Life(-nDomainCount), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	modifier2.ApplyTo(pAbilityAction->GetAssociatedPlayer());
}

//____________________________________________________________________________
//
CExtractorDemonCard::CExtractorDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Extractor Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, FALSE));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetRevealCount(2);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CTargetMoveCardSpell> cpAbility(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				new SpecificCardComparer(this),
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

		CReplacementKeywordModifier* pModifier2 = new CReplacementKeywordModifier;
			pModifier2->GetModifier().SetToAdd(ReplacementKeyword::Unearth);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExtractorDemonCard::SetTriggerContextU));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CExtractorDemonCard::SetTriggerContextU(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											 CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

/*void CExtractorDemonCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Battlefield) &&
		(pToZone->GetZoneId() != ZoneId::Exile) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}*/

//____________________________________________________________________________
//
CFiligreeFractureCard::CFiligreeFractureCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Filigree Fracture"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFiligreeFractureCard::BeforeResolution));
}

bool CFiligreeFractureCard::BeforeResolution(CAbilityAction* pAction)
{
	if ((pAction->GetAssociatedCard()->GetCardType() & (CardType::Blue | CardType::Black)).Any())
	{
		CDrawCardModifier modifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		modifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CKederektParasiteCard::CKederektParasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kederekt Parasite"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKederektParasiteCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKederektParasiteCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CKederektParasiteCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											  CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

bool CKederektParasiteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	triggerContext.m_LifeModifier.RemoveFrom(GetController());
	pAction->SetTriggerContext(triggerContext);

	return CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CMalfegorCard::CMalfegorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Malfegor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Dragon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, FALSE));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMalfegorCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMalfegorCard::SetTriggerContext2));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMalfegorCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nHand = GetController()->GetZoneById(ZoneId::Hand)->GetSize();

	m_pTriggeredAbility->GetGatherer().SetSubjectCount(nHand, nHand, TRUE);

	return true;
}

bool CMalfegorCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
									   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CManaforceMaceCard::CManaforceMaceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Manaforce Mace"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3"),
		new AnyCreatureComparer));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaforceMaceCard::CreateEquipmentAbility1)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaforceMaceCard::CreateEquipmentAbility2)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaforceMaceCard::CreateEquipmentAbility3)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaforceMaceCard::CreateEquipmentAbility4)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaforceMaceCard::CreateEquipmentAbility5)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManaforceMaceCard::CreateEquipmentAbility1(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Plains, false)));
		
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManaforceMaceCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Island, false)));
		
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManaforceMaceCard::CreateEquipmentAbility3(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));
		
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManaforceMaceCard::CreateEquipmentAbility4(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false)));
		
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManaforceMaceCard::CreateEquipmentAbility5(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));
		
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMightOfAlaraCard::CMightOfAlaraCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Might of Alara"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMightOfAlaraCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMightOfAlaraCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nDomainCount;
		Context.nValue2 = nDomainCount;

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
CMeglonothCard::CMeglonothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meglonoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMeglonothCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMeglonothCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMeglonothCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (IsBlocking() == TRUE);
}

bool CMeglonothCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(-GET_INTEGER(GetLastKnownPower())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CNyxathidCard::CNyxathidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nyxathid"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	cpAbility->GetSurveyCardFilter().AddComparer(new NegateCardComparer(new CardOwnerComparer(this)));
	cpAbility->SetListenToAllPlayersZones();

	cpAbility->SetPowerMultiplier(Power(-1));
	cpAbility->SetToughnessMultiplier(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToxicIguanarCard::CToxicIguanarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Toxic Iguanar"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Green, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoicesFromTheVoidCard::CVoicesFromTheVoidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Voices from the Void"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVoicesFromTheVoidCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CVoicesFromTheVoidCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	if (nDomainCount == 0) return false;
	
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nDomainCount;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
		}
		
		return true;

	return true;
}

//____________________________________________________________________________
//
CWorldheartPhoenixCard::CWorldheartPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Worldheart Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWorldheartPhoenixCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetGraveyardOnly();
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWorldheartPhoenixCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
}

void CWorldheartPhoenixCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() == ZoneId::_Tokens && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2, true);

		pModifier.ApplyTo(this);
	}
}

BOOL CWorldheartPhoenixCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CYokeOfTheDamnedCard::CYokeOfTheDamnedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yoke of the Damned"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CYokeOfTheDamnedCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CYokeOfTheDamnedCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(pEnchantedCard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWanderingGoblinsCard::CWanderingGoblinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wandering Goblins"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				 _T("3")));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWanderingGoblinsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWanderingGoblinsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CPowerModifier pModifier1 = CPowerModifier(Power(nDomainCount), TRUE);
	pModifier1.ApplyTo((CCreatureCard*)this);

	return true;
}

//____________________________________________________________________________
//
CWretchedBanquetCard::CWretchedBanquetCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wretched Banquet"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWretchedBanquetCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CWretchedBanquetCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	CCreatureCard* target = (CCreatureCard*)pCard;

	int nTargetPower = GET_INTEGER(target->GetLastKnownPower());

	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard2 = pContInplay->GetAt(i);
		if (pContCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature2 = (CCreatureCard*)pContCard2;
			if (GET_INTEGER(pContCreature2->GetLastKnownPower()) < nTargetPower)
				return false;
		}
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard2 = pOppInplay->GetAt(i);
		if (pOppCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature2 = (CCreatureCard*)pOppCard2;
			if (GET_INTEGER(pOppCreature2->GetLastKnownPower()) < nTargetPower)
				return false;
		}
	}

	return true;
}

//____________________________________________________________________________
//
CProgenitusCard::CProgenitusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Progenitus"), CardType::_LegendaryCreature, CREATURE_TYPE2(Hydra, Avatar), nID,
		ALL_MANA_TEXT ALL_MANA_TEXT,
		Power(10), Life(10))

	, m_CardFilter(_T("anything"), _T("everything"), new TrueCardComparer)
{
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield | ZoneId::Library | ZoneId::Hand | ZoneId::Exile, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CProgenitusCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if (pToZone->GetZoneId() == ZoneId::Graveyard)
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::_Tokens);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CApocalypseHydraCard::CApocalypseHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apocalypse Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CApocalypseHydraCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CApocalypseHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		if (nColorCount > 4) nColorCount = nColorCount*2;

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CWallofReverenceCard::CWallofReverenceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Reverence"), CardType::Creature, CREATURE_TYPE2(Spirit, Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(6))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CWallofReverenceCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef 
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CWallofReverenceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();

	if (pCard->GetCardType().IsCreature() && (pCard->GetZone()->GetZoneId() == ZoneId::Battlefield)) 
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			int nPower = GET_INTEGER(pCreature->GetLastKnownPower());
			CLifeModifier m_LifeModifier = CLifeModifier(Life(+nPower), this);
			m_LifeModifier.ApplyTo(GetController());				
		}
}

//____________________________________________________________________________
//
CSporeBurstCard::CSporeBurstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spore Burst"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			_T("Saproling B"), 2712,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSporeBurstCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSporeBurstCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nDomainCount;

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CSoulsMajestyCard::CSoulsMajestyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul's Majesty"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSoulsMajestyCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT, 
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->SetAbilityText(_T("Draw cards equal to the power of target creature you control. Casts"));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddSpell(cpSpell.GetPointer());
}

void CSoulsMajestyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	int nCards = GET_INTEGER(pCreature->GetPower());
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nCards), MaximumValue(nCards));
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CTeleminPerformanceCard::CTeleminPerformanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Telemin Performance"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			FALSE_CARD_COMPARER,
			true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTeleminPerformanceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTeleminPerformanceCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CPlayer* pController = pAction->GetController();

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{		
		if (!bSearch)
			break;
		else
		{
			++n;
			if (pLibrary->GetAt(i)->GetCardType().IsCreature())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	int nMill;

	if (pFound) nMill = n-1;
	else nMill = n;
	
	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nMill, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.AddSelection(MinimumValue(nMill), MaximumValue(nMill), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier2.ApplyTo(pTarget);
	
	if (pFound)
	{
		pFound->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CElderMasteryCard::CElderMasteryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Elder Mastery"), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
		Power(+3), Life(+3), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CElderMasteryCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CElderMasteryCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->SetDiscardCount(2);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPickerIsTriggeredPlayer(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThornlingCard::CThornlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornling"), CardType::Creature, CREATURE_TYPE2(Elemental, Shapeshifter), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(+1), Life(-1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(-1), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMasterTransmuterCard::CMasterTransmuterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Transmuter"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("artifact cards")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNacatlSavageCard::CNacatlSavageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nacatl Savage"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CBanefireCard::CBanefireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Banefire"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CBanefireSpell> cpSpell(
		::CreateObject<CBanefireSpell>(this, AbilityType::Sorcery, RED_MANA_TEXT, new AnyCreatureComparer, TRUE,
		Life(0), PreventableType::NotPreventable));	

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardKeywordModifier* pModifier= new CCardKeywordModifier();
		pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);

		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanefireCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardKeywordModifier* pModifier= new CCardKeywordModifier();
		pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);

		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CBanefireCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetLastCastingExtraValue()>4);
}
//____________________________________________________________________________
//
CGwafaHazidProfiteerCard::CGwafaHazidProfiteerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gwafa Hazid, Profiteer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
	_T("1") BLUE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CGwafaHazidProfiteerCard::OnResolutionCompleted))
{	
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));
		
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(BRIBERY_COUNTER, +1));
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater<int>>(BRIBERY_COUNTER, 0),	
			Power(+0), Life(+0), CreatureKeyword::CantAttack));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater<int>>(BRIBERY_COUNTER, 0),	
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

		AddAbility(cpAbility.GetPointer());
	}

}
void CGwafaHazidProfiteerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetAssociatedCard()->GetController());
}

//____________________________________________________________________________
//
CFaerieMechanistCard::CFaerieMechanistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faerie Mechanist"), CardType::_ArtifactCreature, CREATURE_TYPE2(Faerie, Artificer), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFaerieMechanistCard::BeforeResolution1));		

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFaerieMechanistCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{

	CCardFilter m_CardFilter_temp;
		
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, 3, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter_temp, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pmodifier2.SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);

		pmodifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDragonsoulKnightCard::CDragonsoulKnightCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dragonsoul Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		ALL_MANA_TEXT,
		Power(+5), Life(+3),
		CreatureKeyword::Flying | CreatureKeyword::Trample)
{
	GetCreatureKeyword()->AddFirstStrike(false);

	CScheduledCreatureModifier* pModifier1 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Dragon, true),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);
	CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Human, false),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);
	CScheduledCreatureModifier* pModifier3 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Knight, false),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);

	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier1);
	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier2);
	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier3);
}

//____________________________________________________________________________
//
CParagonOfTheAmeshaCard::CParagonOfTheAmeshaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Paragon of the Amesha"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2),
		ALL_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Flying)
{
	GetCreatureKeyword()->AddFirstStrike(false);

	m_pPumpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

	CScheduledCreatureModifier* pModifier1 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Angel, true),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);
	CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Human, false),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);
	CScheduledCreatureModifier* pModifier3 = new CScheduledCreatureModifier(GetGame(),
		new CCreatureTypeModifier(SingleCreatureType::Knight, false),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);

	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier1);
	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier2);
	m_pPumpAbility->GetOtherCreatureModifiers().Add(pModifier3);
}

//____________________________________________________________________________
//
CFleshformerCard::CFleshformerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleshformer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	ATLASSERT(cpAbility);

	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	CCreatureKeywordModifier* pFearModifier = new CCreatureKeywordModifier;
	pFearModifier->GetModifier().SetToAdd(CreatureKeyword::Fear);
	pFearModifier->GetModifier().SetOneTurnOnly(true);
	
	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CPowerModifier(Power(+2)));
	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(pFearModifier);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGoblinRazerunnersCard::CGoblinRazerunnersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Razerunners"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGoblinRazerunnersCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinRazerunnersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCounterCount));
	pAction->SetTriggerContext(triggerContext);

	return (nCounterCount>0);
}

//____________________________________________________________________________
//
CVoraciousDragonCard::CVoraciousDragonCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Voracious Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVoraciousDragonCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoraciousDragonCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

void CVoraciousDragonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CVoraciousDragonCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(2*nDevouredGoblins));

	return true;
}

//____________________________________________________________________________
//