#include "stdafx.h"
#include "CardUrzasDestiny.h"

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
		
		DEFINE_CARD(CAcademyRectorCard);
		DEFINE_CARD(CAEtherStingCard);
		DEFINE_CARD(CApprenticeNecromancerCard);
		DEFINE_CARD(CArcheryTrainingCard);
		DEFINE_CARD(CAttritionCard);
		DEFINE_CARD(CBlizzardElementalCard);
		DEFINE_CARD(CBodySnatcherCard);
		DEFINE_CARD(CBraidwoodCupCard);
		DEFINE_CARD(CBraidwoodSextantCard);
		DEFINE_CARD(CBrassSecretaryCard);
		DEFINE_CARD(CBubblingBeeblesCard);
		DEFINE_CARD(CBubblingMuckCard);
		DEFINE_CARD(CCapashenStandardCard);
		DEFINE_CARD(CCapashenTemplarCard);
		DEFINE_CARD(CCarnivalOfSoulsCard);
		DEFINE_CARD(CChimeOfNightCard);
		DEFINE_CARD(CCinderSeerCard);
		DEFINE_CARD(CColosYearlingCard);
		DEFINE_CARD(CCovetousDragonCard);
		DEFINE_CARD(CDisappearCard);
		DEFINE_CARD(CDiseaseCarriersCard);
		DEFINE_CARD(CDonateCard);
		DEFINE_CARD(CDyingWailCard);
		DEFINE_CARD(CElvishLookoutCard);
		DEFINE_CARD(CEncroachCard);
		DEFINE_CARD(CEradicateCard);
		DEFINE_CARD(CExtruderCard);
		DEFINE_CARD(CFalseProphetCard);
		DEFINE_CARD(CFatigueCard);
		DEFINE_CARD(CFendOffCard);
		DEFINE_CARD(CFesteringWoundCard);
		DEFINE_CARD(CFieldSurgeonCard);
		DEFINE_CARD(CFlameJetCard);
		DEFINE_CARD(CFledglingOspreyCard);
		DEFINE_CARD(CFlickerCard);
		DEFINE_CARD(CGamekeeperCard);
		DEFINE_CARD(CGoblinBerserkerCard);
		DEFINE_CARD(CGoblinMasonsCard);
		DEFINE_CARD(CGoblinMarshalCard);
		DEFINE_CARD(CGoliathBeetleCard);
		DEFINE_CARD(CHeartWardenCard);
		DEFINE_CARD(CHulkingOgreCard);
		DEFINE_CARD(CHuntingMoaCard);
		DEFINE_CARD(CIlluminatedWingsCard);
		DEFINE_CARD(CIncendiaryCard);
		DEFINE_CARD(CIridescentDrakeCard);
		DEFINE_CARD(CIvySeerCard);
		DEFINE_CARD(CJasmineSeerCard);
		DEFINE_CARD(CJunkDiverCard);
		DEFINE_CARD(CKeldonChampionCard);
		DEFINE_CARD(CKeldonVandalsCard);
		DEFINE_CARD(CKingfisherCard);
		DEFINE_CARD(CLandslideCard);
		DEFINE_CARD(CMagnifyCard);
		DEFINE_CARD(CMarkerBeetlesCard);
		DEFINE_CARD(CMarkOfFuryCard);
		DEFINE_CARD(CMaskOfLawAndGraceCard);
		DEFINE_CARD(CMasticoreCard);
		DEFINE_CARD(CMentalDisciplineCard);
		DEFINE_CARD(CMetalworkerCard);
		DEFINE_CARD(CMetathranEliteCard);
		DEFINE_CARD(CMetathranSoldierCard);
		DEFINE_CARD(CMultanisDecreeCard);
		DEFINE_CARD(CNightshadeSeerCard);
		DEFINE_CARD(CPatternOfRebirthCard);
		DEFINE_CARD(CPhyrexianMonitorCard);
		DEFINE_CARD(CPhyrexianNegatorCard);
		DEFINE_CARD(CPlagueDogsCard);
		DEFINE_CARD(CPlatedSpiderCard);
		DEFINE_CARD(CPowderKegCard);
		DEFINE_CARD(CPrivateResearchCard);
		DEFINE_CARD(CQuashCard);
		DEFINE_CARD(CRapidDecayCard);
		DEFINE_CARD(CRayneAcademyChancellorCard);
		DEFINE_CARD(CRecklessAbandonCard);
		DEFINE_CARD(CReliquaryMonkCard);
		DEFINE_CARD(CRepercussionCard);
		DEFINE_CARD(CReplenishCard);
		DEFINE_CARD(CRescueCard);
		DEFINE_CARD(CRofellossGiftCard);
		DEFINE_CARD(CRofellosLlanowarEmissaryCard);
		DEFINE_CARD(CScentOfCinderCard);
		DEFINE_CARD(CScentOfIvyCard);
		DEFINE_CARD(CScentOfJasmineCard);
		DEFINE_CARD(CScentOfNightshadeCard);
		DEFINE_CARD(CScourCard);
		DEFINE_CARD(CScryingGlassCard);
		DEFINE_CARD(CSigilOfSleepCard);
		DEFINE_CARD(CSkitteringHorrorCard);
		DEFINE_CARD(CSlinkingSkirgeCard);
		DEFINE_CARD(CSowingSaltCard);
		DEFINE_CARD(CSplinterCard);
		DEFINE_CARD(CSquirmingMassCard);
		DEFINE_CARD(CTauntingElfCard);
		DEFINE_CARD(CTetheredGriffinCard);
		DEFINE_CARD(CThranDynamoCard);
		DEFINE_CARD(CThranFoundryCard);
		DEFINE_CARD(CTormentedAngelCard);
		DEFINE_CARD(CTreacheryCard);
		DEFINE_CARD(CTwistedExperimentCard);
		DEFINE_CARD(CUrzasIncubatorCard);
		DEFINE_CARD(CVoiceOfDutyCard);
		DEFINE_CARD(CVoiceOfReasonCard);
		DEFINE_CARD(CWakeOfDestructionCard);
		DEFINE_CARD(CWallOfGlareCard);
		DEFINE_CARD(CWildColosCard);
		DEFINE_CARD(CYavimayaElderCard);
		DEFINE_CARD(CYavimayaHollowCard);
		DEFINE_CARD(CYawgmothsBargainCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAttritionCard::CAttritionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Attrition"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlizzardElementalCard::CBlizzardElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blizzard Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			_T("3") BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCovetousDragonCard::CCovetousDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Covetous Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT, Power(6), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCovetousDragonCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CCovetousDragonCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCovetousDragonCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Artifact).Any())
			return false;
	}

	return true;
}

bool CCovetousDragonCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Artifact).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CMasticoreCard::CMasticoreCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Masticore"), CardType::_ArtifactCreature, CREATURE_TYPE(Masticore), nID,
		_T("4"), Power(4), Life(4),
		_T("2"))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMetathranSoldierCard::CMetathranSoldierCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Metathran Soldier"), CardType::Creature, CREATURE_TYPE2(Metathran, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CTauntingElfCard::CTauntingElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Taunting Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
{
	GetCreatureKeyword()->AddLure(FALSE);
}

//____________________________________________________________________________
//
CThranDynamoCard::CThranDynamoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thran Dynamo"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYawgmothsBargainCard::CYawgmothsBargainCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Yawgmoth's Bargain"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCapashenTemplarCard::CCapashenTemplarCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Capashen Templar"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
}

//____________________________________________________________________________
//
CColosYearlingCard::CColosYearlingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Colos Yearling"), CardType::Creature, CREATURE_TYPE2(Goat, Beast), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Mountainwalk, FALSE);
}

//____________________________________________________________________________
//
CDiseaseCarriersCard::CDiseaseCarriersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disease Carriers"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishLookoutCard::CElvishLookoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Lookout"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CFalseProphetCard::CFalseProphetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("False Prophet"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	// Not optional
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieldSurgeonCard::CFieldSurgeonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Field Surgeon"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(1), SourceColor::Null));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFledglingOspreyCard::CFledglingOspreyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fledgling Osprey"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinBerserkerCard::CGoblinBerserkerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Goblin Berserker"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CGoblinMasonsCard::CGoblinMasonsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Masons"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoliathBeetleCard::CGoliathBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goliath Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CHeartWardenCard::CHeartWardenCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Heart Warden"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKingfisherCard::CKingfisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kingfisher"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarkerBeetlesCard::CMarkerBeetlesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marker Beetles"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMetathranEliteCard::CMetathranEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Metathran Elite"), CardType::Creature, CREATURE_TYPE2(Metathran, Soldier), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(
			CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(
			CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhyrexianMonitorCard::CPhyrexianMonitorCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Phyrexian Monitor"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CPlagueDogsCard::CPlagueDogsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Dogs"), CardType::Creature, CREATURE_TYPE2(Zombie, Hound), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPlatedSpiderCard::CPlatedSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plated Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CReliquaryMonkCard::CReliquaryMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reliquary Monk"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkitteringHorrorCard::CSkitteringHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skittering Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlinkingSkirgeCard::CSlinkingSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Slinking Skirge"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSquirmingMassCard::CSquirmingMassCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squirming Mass"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CTetheredGriffinCard::CTetheredGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tethered Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTetheredGriffinCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTetheredGriffinCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTetheredGriffinCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0;
}

bool CTetheredGriffinCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0;
}

//____________________________________________________________________________
//
CTormentedAngelCard::CTormentedAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tormented Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CVoiceOfDutyCard::CVoiceOfDutyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of Duty"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CVoiceOfReasonCard::CVoiceOfReasonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of Reason"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CWallOfGlareCard::CWallOfGlareCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Glare"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	SetMaxBlockingCount(SpecialNumber::Any);
}

//____________________________________________________________________________
//
CWildColosCard::CWildColosCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Wild Colos"), CardType::Creature, CREATURE_TYPE2(Goat, Beast), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CYavimayaElderCard::CYavimayaElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Elder"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
		cpAbility->SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBrassSecretaryCard::CBrassSecretaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brass Secretary"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExtruderCard::CExtruderCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Extruder"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
        _T("4"), Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CExtruderCard::CreateTemporaryAbility),
                _T("4"),
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CExtruderCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExtruderCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CExtruderCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CExtruderCard::CreateTemporaryAbility()
{
    return this;
}

void CExtruderCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CJunkDiverCard::CJunkDiverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Junk Diver"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("3"), Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYavimayaHollowCard::CYavimayaHollowCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Yavimaya Hollow"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBraidwoodCupCard::CBraidwoodCupCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Braidwood Cup"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBraidwoodSextantCard::CBraidwoodSextantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Braidwood Sextant"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAEtherStingCard::CAEtherStingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Æther Sting"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCapashenStandardCard::CCapashenStandardCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Capashen Standard"), nID,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChimeOfNightCard::CChimeOfNightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chime of Night"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				CardKeyword::Null)); //Fake ability, does nothing (I hope so.). I needed it to do this card (it only has a triggered ability).
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIlluminatedWingsCard::CIlluminatedWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Illuminated Wings"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarkOfFuryCard::CMarkOfFuryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mark of Fury"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Haste)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaskOfLawAndGraceCard::CMaskOfLawAndGraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mask of Law and Grace"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromBlack | CardKeyword::ProtectionFromRed));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMentalDisciplineCard::CMentalDisciplineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mental Discipline"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT, 1));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwistedExperimentCard::CTwistedExperimentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Twisted Experiment"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(+3), Life(-1))
{
}

//____________________________________________________________________________
//
CFendOffCard::CFendOffCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fend Off"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CFendOffCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CFendOffCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CMagnifyCard::CMagnifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magnify"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1),
			Life(+1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRapidDecayCard::CRapidDecayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rapid Decay"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(0, 3);
		cpSpell->GetTargeting()->SetSingleSourceZone(true);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRapidDecayCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRapidDecayCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRescueCard::CRescueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rescue"), CardType::Instant, nID)
{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Battlefield);

		AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBubblingMuckCard::CBubblingMuckCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bubbling Muck"), CardType::Sorcery, nID)
/*{
	counted_ptr<CProdExtraManaEnchantment> cpSpell(
		::CreateObject<CProdExtraManaEnchantment>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT, 
			new CardTypeComparer(CardType::Swamp, false),
			BLACK_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}*/
{//Now when this spell is casted several times in a turn, all copies have effect.
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Bubbling Muck Effect"), 61016, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEncroachCard::CEncroachCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Encroach"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	//only discards nonbasic lands
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlameJetCard::CFlameJetCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flame Jet"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CFlameJetCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CFlameJetCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRecklessAbandonCard::CRecklessAbandonCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Reckless Abandon"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CTreacheryCard::CTreacheryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Treachery"), CardType::EnchantCreature, nID)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 5);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinMarshalCard::CGoblinMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Marshal"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin D"), 2704, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin C"), 2702, 2);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CGoblinMarshalCard::CreateTemporaryAbility),
                _T("4") RED_MANA_TEXT RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CGoblinMarshalCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinMarshalCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CGoblinMarshalCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CGoblinMarshalCard::CreateTemporaryAbility()
{
    return this;
}

void CGoblinMarshalCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CHuntingMoaCard::CHuntingMoaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunting Moa"), CardType::Creature, CREATURE_TYPE2(Bird, Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CHuntingMoaCard::CreateTemporaryAbility),
                _T("2") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CHuntingMoaCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntingMoaCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CHuntingMoaCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CHuntingMoaCard::CreateTemporaryAbility()
{
    return this;
}

void CHuntingMoaCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CKeldonChampionCard::CKeldonChampionCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Keldon Champion"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CKeldonChampionCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CKeldonChampionCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKeldonChampionCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CKeldonChampionCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CKeldonChampionCard::CreateTemporaryAbility()
{
    return this;
}

void CKeldonChampionCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CKeldonVandalsCard::CKeldonVandalsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keldon Vandals"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CKeldonVandalsCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CKeldonVandalsCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKeldonVandalsCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CKeldonVandalsCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CKeldonVandalsCard::CreateTemporaryAbility()
{
    return this;
}

void CKeldonVandalsCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CRofellosLlanowarEmissaryCard::CRofellosLlanowarEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rofellos, Llanowar Emissary"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {G} to your mana pool for each Forest you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRofellosLlanowarEmissaryCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRofellosLlanowarEmissaryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Forest, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CWakeOfDestructionCard::CWakeOfDestructionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wake of Destruction"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, 
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Battlefield, TRUE, MoveType::Destroy));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered | CardKeyword::NoUntapInUntapPhase | CardKeyword::SplitSecond);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

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
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWakeOfDestructionCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CWakeOfDestructionCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetCardKeyword()->CantBeCountered() == TRUE &&
			pCard->GetCardKeyword()->HasSplitSecond() == TRUE &&
			pCard->GetCardKeyword()->NoUntapInUntapPhase() == TRUE)
		{
			m_pTriggeredAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom); 
			m_pTriggeredAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));
			return true;
		}
	}

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardKeyword()->CantBeCountered() == TRUE &&
			pOppCard->GetCardKeyword()->HasSplitSecond() == TRUE &&
			pOppCard->GetCardKeyword()->NoUntapInUntapPhase() == TRUE)
		{
			m_pTriggeredAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom); 
			m_pTriggeredAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(pOppCard->GetPrintedCardName()));
			return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CPhyrexianNegatorCard::CPhyrexianNegatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Negator"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianNegatorCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CPhyrexianNegatorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(GET_INTEGER(-damage.m_nLifeDelta), GET_INTEGER(-damage.m_nLifeDelta), TRUE);
	return true;
}

//____________________________________________________________________________
//
CThranFoundryCard::CThranFoundryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thran Foundry"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerCardsSpell>>(this,
			_T("1"),
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("cards"))));

	CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE);
	pCardModifier->SetShuffle(TRUE);
	cpAbility->AddCardModifier(pCardModifier);

	cpAbility->AddTapCost();
	cpAbility->AddExileCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarnivalOfSoulsCard::CCarnivalOfSoulsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Carnival of Souls"), CardType::GlobalEnchantment, nID, 
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetTriggeredPlayerModifiers().Add(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT)));

	cpAbility->AddAbilityTag(AbilityTag::Mana | AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHulkingOgreCard::CHulkingOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hulking Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CAcademyRectorCard::CAcademyRectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Academy Rector"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEradicateCard::CEradicateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Eradicate"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					   &CEradicateCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CEradicateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle(); 
	}
}

//____________________________________________________________________________
//
CSplinterCard::CSplinterCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Splinter"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					   &CSplinterCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CSplinterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle();
	}
}

//____________________________________________________________________________
//
CScourCard::CScourCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Scour"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					   &CScourCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CScourCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle();
	}
}

//____________________________________________________________________________
//
CSowingSaltCard::CSowingSaltCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Sowing Salt"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					   &CSowingSaltCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CSowingSaltCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle();
	}
}

//____________________________________________________________________________
//
CQuashCard::CQuashCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Quash"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new CardTypeComparer(CardType::Instant | CardType::Sorcery, false))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					   &CQuashCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CQuashCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle();
	}
}

//____________________________________________________________________________
//
CGamekeeperCard::CGamekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gamekeeper"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
	/* , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CGamekeeperCard::OnResolutionCompleted)) */
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter);
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}
/* {
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
} */

/* void CGamekeeperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=0;
	int stop=0;
	for (int i = 0; i < pLib->GetSize(); i++)

	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
		// if ((!ppCard->GetCardType().IsCreature()) && (stop<4))
		if ((stop<1))
			++reveal;
		if (ppCard->GetCardType().IsCreature())
			++stop;
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Battlefield, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.SetReorderInformation(
		true, 
		ZoneId::Graveyard, 
		CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		CardPlacement::Top);
	pmodifier2.ApplyTo(GetController());
} */

//____________________________________________________________________________
//
CApprenticeNecromancerCard::CApprenticeNecromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apprentice Necromancer"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CApprenticeNecromancerCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier3->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier3);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CApprenticeNecromancerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBubblingBeeblesCard::CBubblingBeeblesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bubbling Beebles"), CardType::Creature, CREATURE_TYPE(Beeble), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddUnblockableWalk(FALSE, CCardFilter::GetFilter(_T("enchantments")));
}

//____________________________________________________________________________
//
CFatigueCard::CFatigueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fatigue"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFatigueCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

void CFatigueCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::SkipNextDrawStep);	
	
	if (bResult) pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CFlickerCard::CFlickerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flicker"), CardType::Sorcery, nID)

    , m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFlickerCard::OnResolutionCompleted1))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("1") WHITE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CFlickerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	//CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));

	pModifier->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CRepercussionCard::CRepercussionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Repercussion"), CardType::GlobalEnchantment, nID, 
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRepercussionCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CRepercussionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											 CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CSigilOfSleepCard::CSigilOfSleepCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sigil of Sleep"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSigilOfSleepCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSigilOfSleepCard::CreateAdditionalAbility2));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
}

counted_ptr<CAbility> CSigilOfSleepCard::CreateAdditionalAbility1(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSigilOfSleepCard::CreateAdditionalAbility2(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPowderKegCard::CPowderKegCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Powder Keg"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(FUSE_COUNTER, +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CExplosiveKegSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CExplosiveKegSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false), ZoneId::Graveyard, MoveType::Destroy, ZoneId::Battlefield, FUSE_COUNTER, 0));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDisappearCard::CDisappearCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Disappear"), CardType::EnchantCreature, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDisappearCard::BeforeResolution));
	cpAbility->SetAbilityText(_T("Return enchanted creature and Disappear to their owners' hands. Activates"));

	AddAbility(cpAbility.GetPointer());
}

bool CDisappearCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others);
	modifier.ApplyTo(this);
	modifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CReplenishCard::CReplenishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Replenish"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, FALSE, MoveType::Others, ZoneId::Graveyard));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDonateCard::CDonateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Donate"), CardType::Sorcery, nID)
{
	counted_ptr<CDonateSpell> cpSpell(
		::CreateObject<CDonateSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT
			));	

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMetalworkerCard::CMetalworkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Metalworker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(1), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMetalworkerCard::OnCardSelected))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMetalworkerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CMetalworkerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CMetalworkerCard::RevealCards(CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->GetCardType().IsArtifact() && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CMetalworkerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer);
				
				return;
			}
		}
}

void CMetalworkerCard::Finale(CPlayer* pController)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("2")));

		for (int i = 0; i < nSize; i++) pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CArcheryTrainingCard::CArcheryTrainingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Archery Training"), CardType::EnchantCreature, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(ARROW_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				WHITE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CArcheryTrainingCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CArcheryTrainingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			new AttackingBlockingCreatureComparer, false,
			Life(-0), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArcheryTrainingCard::BeforeResolution));
	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

bool CArcheryTrainingCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -GetCounterContainer()->GetCounter(ARROW_COUNTER)->GetCount();

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CDyingWailCard::CDyingWailCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Dying Wail"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetDiscardCount(2);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	AddAbility(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CIridescentDrakeCard::CIridescentDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Iridescent Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Aura, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIridescentDrakeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIridescentDrakeCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = pAction->GetAssociatedCard();

	for (int i = 0; i < pCard->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		if (!pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(this))
			return false;
	}

	for (int i = 0; i < pCard->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(this, GetController(), pCard->GetSpells().GetAt(i)->GetActionValue());
	}

	return true;
}

//____________________________________________________________________________
//
CMultanisDecreeCard::CMultanisDecreeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Multani's Decree"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CMultanisDecreeCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new CardTypeComparer(CardTypeComparer(CardType::_Enchantment, false)),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMultanisDecreeCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CMultanisDecreeCard::BeforeResolution(CAbilityAction* pAction)
{
	m_nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CMultanisDecreeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer());
	}

	CLifeModifier* pModifier = new CLifeModifier(Life(2 * m_nCards), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CIncendiaryCard::CIncendiaryCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Incendiary"), CardType::EnchantCreature, nID,
		RED_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(FUSE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIncendiaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIncendiaryCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-GetCounterContainer()->GetCounter(FUSE_COUNTER)->GetCount()));
    return true;
}

//____________________________________________________________________________
//
CPrivateResearchCard::CPrivateResearchCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Private Research"), CardType::EnchantCreature, nID,
		BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(PAGE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrivateResearchCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPrivateResearchCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.nValue1 = GetCounterContainer()->GetCounter(PAGE_COUNTER)->GetCount();
    return true;
}

//____________________________________________________________________________
//
CPatternOfRebirthCard::CPatternOfRebirthCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Pattern of Rebirth"), CardType::EnchantCreature, nID,
		_T("3") GREEN_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRayneAcademyChancellorCard::CRayneAcademyChancellorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rayne, Academy Chancellor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, true, false));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::PlayerEventCallback, &CWhenSubjectTargeted::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, false, false));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSkipStack(true);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRayneAcademyChancellorCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRayneAcademyChancellorCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CCard* pCard, int n_value) const
{
	return GetEnchantCount() > 0;
}

//____________________________________________________________________________
//
CFesteringWoundCard::CFesteringWoundCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Festering Wound"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(INFECTION_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<TriggeredAbility3> cpAbility(::CreateObject<TriggeredAbility3>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility3::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility3::ContextFunction(this, &CFesteringWoundCard::SetTriggerContext3));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility3::BeforeResolveSelectionCallback(this, &CFesteringWoundCard::BeforeResolution));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFesteringWoundCard::SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

bool CFesteringWoundCard::BeforeResolution(TriggeredAbility3::TriggeredActionType* pAction)
{
	TriggeredAbility3::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(GetCounterContainer()->GetCounter(INFECTION_COUNTER)->GetCount()));
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CScryingGlassCard::CScryingGlassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scrying Glass"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScryingGlassCard::OnNumberSelected))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScryingGlassCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"), FALSE_CARD_COMPARER, TRUE));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScryingGlassCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScryingGlassCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	std::vector<SelectionEntry> entries;
	for (int i = 1; i < nCount + 1; i++)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i;
		selectionEntry.strText.Format(_T("Select %d"), i);

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = nCount + 1;
		selectionEntry.strText.Format(_T("Select a stupid number"));

		entries.push_back(selectionEntry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pTarget);

	return true;
}

void CScryingGlassCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			ChosenNumber = (int)it->dwContext;
			
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("white"), this->GetCardName());

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 2;
				selectionEntry.strText.Format(_T("blue"), this->GetCardName());

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 3;
				selectionEntry.strText.Format(_T("black"), this->GetCardName());

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 4;
				selectionEntry.strText.Format(_T("red"), this->GetCardName());

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 5;
				selectionEntry.strText.Format(_T("green"), this->GetCardName());

				entries.push_back(selectionEntry);
			}
	
			m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, dwContext1);
		}
}

void CScryingGlassCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
					
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pTarget);

				int nCount = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pHand->GetCardContainer());
				if (nCount == ChosenNumber)
				{
					CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
					pModifier2->ApplyTo(pSelectionPlayer);
				}

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
					
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pTarget);

				int nCount = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pHand->GetCardContainer());
				if (nCount == ChosenNumber)
				{
					CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
					pModifier2->ApplyTo(pSelectionPlayer);
				}

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
					
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pTarget);

				int nCount = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pHand->GetCardContainer());
				if (nCount == ChosenNumber)
				{
					CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
					pModifier2->ApplyTo(pSelectionPlayer);
				}

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
					
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pTarget);

				int nCount = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pHand->GetCardContainer());
				if (nCount == ChosenNumber)
				{
					CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
					pModifier2->ApplyTo(pSelectionPlayer);
				}

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
					
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pTarget);

				int nCount = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pHand->GetCardContainer());
				if (nCount == ChosenNumber)
				{
					CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
					pModifier2->ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
	
}

//____________________________________________________________________________
//
CLandslideCard::CLandslideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Landslide"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLandslideCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLandslideCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CLandslideCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));

	int nMountains = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nMountains > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nMountains; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Sacrifice %d Mountain"),
					i);
			else
				entry.strText.Format(_T("Sacrifice %d Mountains"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedPlayer());
	}
	return true;
}

void CLandslideCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't sacrifice anything"), pSelectionPlayer->GetPlayerName());
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
					if (nValue == 1)
						strMessage.Format(_T("%s sacrifices %d Mountain"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s sacrifices %d Mountains"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CLifeModifier pModifier2 = CLifeModifier(Life(-nValue), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo((CPlayer*)dwContext1);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CBodySnatcherCard::CBodySnatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Body Snatcher"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
 
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBodySnatcherCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBodySnatcherCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController = pAction->GetController();

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(this);
	}
	if (pTarget->IsInGraveyard())
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier2.ApplyTo(pTarget);
	}

	return true;
}

//____________________________________________________________________________
//
CCinderSeerCard::CCinderSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cinder Seer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCinderSeerCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCinderSeerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCinderSeerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard(), pAction->GetAssociatedPlayer());
	return true;
}

void CCinderSeerCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Red) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature, (DWORD)pTargetPlayer);
}

void CCinderSeerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1, (CPlayer*)dwContext2);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
		}
}

void CCinderSeerCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(-nSize), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		if (pTargetCreature)
			pModifier.ApplyTo(pTargetCreature);
		else
			pModifier.ApplyTo(pTargetPlayer);
	}
}

//____________________________________________________________________________
//
CIvySeerCard::CIvySeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ivy Seer"), CardType::Creature, CREATURE_TYPE2(Elf, Wizard), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIvySeerCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIvySeerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CIvySeerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard());
	return true;
}

void CIvySeerCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Green) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature);
}

void CIvySeerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

void CIvySeerCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(nSize));
		CLifeModifier pModifier2 = CLifeModifier(Life(nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}
}

//____________________________________________________________________________
//
CJasmineSeerCard::CJasmineSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jasmine Seer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJasmineSeerCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJasmineSeerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CJasmineSeerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CJasmineSeerCard::RevealCards(CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::White) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CJasmineSeerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer);
				
				return;
			}
		}
}

void CJasmineSeerCard::Finale(CPlayer* pController)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(2*nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CUrzasIncubatorCard::CUrzasIncubatorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Urza's Incubator"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CUrzasIncubatorCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CUrzasIncubatorCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(SelectedType, false),
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->SetAbilityName(_T("Urza's Incubator cheap"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CUrzasIncubatorCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;
		if (m_pGame->IsThinking() || GetController()->IsComputer())
		{
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				BOOL bAdd = FALSE;

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
							}
						}
			
				if (bAdd == TRUE)
				{
					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName());		
					entries.push_back(entry);
				}
			}

		}
		else
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				SelectionEntry entry;
				entry.dwContext = creatureType;
				entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
				entries.push_back(entry);
			}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CUrzasIncubatorCard::CreateAdditionAbility));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier.RemoveFrom(this);
	}
}

void CUrzasIncubatorCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CUrzasIncubatorCard::CreateAdditionAbility));

			pModifier.ApplyTo(this);

			for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
			{
				CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
				if (!pEnchantSpell) 
					continue;

				pEnchantSpell->StartEnchantment();
			}

			break;
		}
}

//____________________________________________________________________________
//
CNightshadeSeerCard::CNightshadeSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightshade Seer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNightshadeSeerCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNightshadeSeerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CNightshadeSeerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard());
	return true;
}

void CNightshadeSeerCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Black) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature);
}

void CNightshadeSeerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

void CNightshadeSeerCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(-nSize));
		CLifeModifier pModifier2 = CLifeModifier(Life(-nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}
}

//____________________________________________________________________________
//
CRofellossGiftCard::CRofellossGiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rofellos's Gift"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRofellossGiftCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRofellossGiftCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CRofellossGiftCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CRofellossGiftCard::RevealCards(CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Green) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CRofellossGiftCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer);
				
				return;
			}
		}
}

void CRofellossGiftCard::Finale(CPlayer* pController)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(nSize), MaximumValue(nSize), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("enchantments")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CScentOfCinderCard::CScentOfCinderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scent of Cinder"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScentOfCinderCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScentOfCinderCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CScentOfCinderCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard(), pAction->GetAssociatedPlayer());
	return true;
}

void CScentOfCinderCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Red) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature, (DWORD)pTargetPlayer);
}

void CScentOfCinderCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1, (CPlayer*)dwContext2);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
		}
}

void CScentOfCinderCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(-nSize), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		if (pTargetCreature)
			pModifier.ApplyTo(pTargetCreature);
		else
			pModifier.ApplyTo(pTargetPlayer);
	}
}

//____________________________________________________________________________
//
CScentOfIvyCard::CScentOfIvyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scent of Ivy"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScentOfIvyCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScentOfIvyCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CScentOfIvyCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard());
	return true;
}

void CScentOfIvyCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Green) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature);
}

void CScentOfIvyCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

void CScentOfIvyCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(nSize));
		CLifeModifier pModifier2 = CLifeModifier(Life(nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}
}

//____________________________________________________________________________
//
CScentOfJasmineCard::CScentOfJasmineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scent of Jasmine"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScentOfJasmineCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScentOfJasmineCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CScentOfJasmineCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CScentOfJasmineCard::RevealCards(CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::White) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CScentOfJasmineCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer);
				
				return;
			}
		}
}

void CScentOfJasmineCard::Finale(CPlayer* pController)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(2*nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CScentOfNightshadeCard::CScentOfNightshadeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scent of Nightshade"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScentOfNightshadeCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScentOfNightshadeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CScentOfNightshadeCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard());
	return true;
}

void CScentOfNightshadeCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Black) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature);
}

void CScentOfNightshadeCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

void CScentOfNightshadeCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(-nSize));
		CLifeModifier pModifier2 = CLifeModifier(Life(-nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}
}

//____________________________________________________________________________
//