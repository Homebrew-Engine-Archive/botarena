#include "stdafx.h"
#include "CardFifthDawn.h"

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

		DEFINE_CARD(CAbunasChantCard);
		DEFINE_CARD(CAdvancedHoverguardCard);
		DEFINE_CARD(CAnodetLurkerCard);
		DEFINE_CARD(CAcquireCard);
		DEFINE_CARD(CArachnoidCard);
		DEFINE_CARD(CArcboundWandererCard);
		DEFINE_CARD(CArmedResponseCard);
		DEFINE_CARD(CArtificersIntuitionCard);
		DEFINE_CARD(CAuriokChampionCard);
		DEFINE_CARD(CAuriokSalvagersCard);
		DEFINE_CARD(CAuriokWindwalkerCard);
		DEFINE_CARD(CAvariceTotemCard);
		DEFINE_CARD(CBatonofCourageCard);
		DEFINE_CARD(CBatteredGolemCard);
		DEFINE_CARD(CBeaconOfCreationCard);
		DEFINE_CARD(CBeaconOfTomorrowsCard);
		DEFINE_CARD(CBlastingStationCard);
		DEFINE_CARD(CBlindCreeperCard);
		DEFINE_CARD(CBlinkmothInfusionCard);
		DEFINE_CARD(CBringerOfTheBlackDawnCard);
		DEFINE_CARD(CBringerOfTheBlueDawnCard);
		DEFINE_CARD(CBringerOfTheGreenDawnCard);
		DEFINE_CARD(CBringerOfTheRedDawnCard);
		DEFINE_CARD(CBringerOfTheWhiteDawnCard);
		DEFINE_CARD(CCacklingImpCard);
		DEFINE_CARD(CChannelTheSunsCard);
		DEFINE_CARD(CClearwaterGobletCard);
		DEFINE_CARD(CCondescendCard);
		DEFINE_CARD(CConjurersBaubleCard);
		DEFINE_CARD(CCosmicLarvaCard);
		DEFINE_CARD(CCranialPlatingCard);
		DEFINE_CARD(CDawnsReflectionCard);
		DEFINE_CARD(CDesecrationElementalCard);
		DEFINE_CARD(CDevourInShadowCard);
		DEFINE_CARD(CEarlyFrostCard);
		DEFINE_CARD(CEbonDrakeCard);
		DEFINE_CARD(CEnergyChamberCard);
		DEFINE_CARD(CEngineeredExplosivesCard);
		DEFINE_CARD(CEnsouledScimitarCard);
		DEFINE_CARD(CEtchedOracleCard);
		DEFINE_CARD(CEternalWitnessCard);
		DEFINE_CARD(CEyesOfTheWatcherCard);
		DEFINE_CARD(CFangrenPathcutterCard);
		DEFINE_CARD(CFeedbackBoltCard);
		DEFINE_CARD(CFerociousChargeCard);
		DEFINE_CARD(CFerropedeCard);
		DEFINE_CARD(CFillWithFrightCard);
		DEFINE_CARD(CFleshgrafterCard);
		DEFINE_CARD(CGemstoneArrayCard);
		DEFINE_CARD(CGoblinCannonCard);
		DEFINE_CARD(CGraftedWargearCard);
		DEFINE_CARD(CGranulateCard);
		DEFINE_CARD(CGrindingStationCard);
		DEFINE_CARD(CGuardianIdolCard);
		DEFINE_CARD(CHealersHeaddressCard);
		DEFINE_CARD(CHeliophialCard);
		DEFINE_CARD(CHelmofKaldraCard);
		DEFINE_CARD(CHornedHelmCard);
		DEFINE_CARD(CHoverguardSweepersCard);
		DEFINE_CARD(CInfusedArrowsCard);
		DEFINE_CARD(CIntoThinAirCard);
		DEFINE_CARD(CIonStormCard);
		DEFINE_CARD(CIronBarbHellionCard);
		DEFINE_CARD(CKrarkClanEngineersCard);
		DEFINE_CARD(CKrarkClanIronworksCard);
		DEFINE_CARD(CKrarkClanOgreCard);
		DEFINE_CARD(CLeoninSquireCard);
		DEFINE_CARD(CLoseHopeCard);
		DEFINE_CARD(CLoxodonAnchoriteCard);
		DEFINE_CARD(CLoxodonStalwartCard);
		DEFINE_CARD(CLunarAvengerCard);
		DEFINE_CARD(CMagmaJetCard);
		DEFINE_CARD(CMagneticTheftCard);
		DEFINE_CARD(CManaGeyserCard);
		//DEFINE_CARD(CMephidrossVampireCard);
		DEFINE_CARD(CMoriokRiggerCard);
		DEFINE_CARD(CMyrQuadropodCard);
		DEFINE_CARD(CMyrServitorCard);
		DEFINE_CARD(CNeurokStealthsuitCard);
		DEFINE_CARD(CNightsWhisperCard);
		DEFINE_CARD(CNimGrotesqueCard);
		DEFINE_CARD(COpalineBracersCard);
		DEFINE_CARD(CParadiseMantleCard);
		DEFINE_CARD(CPentadPrismCard);
		DEFINE_CARD(CPlasmaElementalCard);
		DEFINE_CARD(CPlungeIntoDarknessCard);
		DEFINE_CARD(CQumuloxCard);
		DEFINE_CARD(CRainOfRustCard);
		DEFINE_CARD(CRiteOfPassageCard);
		DEFINE_CARD(CRoarOfReclamationCard);
		DEFINE_CARD(CRudeAwakeningCard);
		DEFINE_CARD(CSalvagingStationCard);
		DEFINE_CARD(CSawtoothThresherCard);
		DEFINE_CARD(CScreamingFuryCard);
		DEFINE_CARD(CSerumVisionsCard);
		DEFINE_CARD(CShatteredDreamsCard);
		DEFINE_CARD(CSkullcageCard);
		DEFINE_CARD(CSkyreachMantaCard);
		DEFINE_CARD(CSolarionCard);
		DEFINE_CARD(CSparringCollarCard);
		DEFINE_CARD(CSpinalParasiteCard);
		DEFINE_CARD(CStaffOfDominationCard);
		DEFINE_CARD(CStandFirmCard);
		DEFINE_CARD(CSteelshapersGiftCard);
		DEFINE_CARD(CSummoningStationCard);
		DEFINE_CARD(CSuncrusherCard);
		DEFINE_CARD(CSuntouchedMyrCard);
		DEFINE_CARD(CSylvokExplorerCard);
		DEFINE_CARD(CSynodCenturionCard);
		DEFINE_CARD(CTangleAspCard);
		DEFINE_CARD(CTelJiladJusticeCard);
		DEFINE_CARD(CTelJiladLifebreatherCard);
		DEFINE_CARD(CThermalNavigatorCard);
		DEFINE_CARD(CTornadoElementalCard);
		DEFINE_CARD(CTrinketMageCard);
		DEFINE_CARD(CTyrranaxCard);
		DEFINE_CARD(CVanquishCard);
		DEFINE_CARD(CVedalkenOrreryCard);
		DEFINE_CARD(CVedalkenShacklesCard);
		DEFINE_CARD(CViciousBetrayalCard);
		DEFINE_CARD(CViridianLorebearersCard);
		DEFINE_CARD(CViridianScoutCard);
		DEFINE_CARD(CVulshokSorcererCard);
		DEFINE_CARD(CWayfarersBaubleCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CNightsWhisperCard::CNightsWhisperCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Night's Whisper"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT, 
			2));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPlasmaElementalCard::CPlasmaElementalCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Plasma Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(1))
{
}

//____________________________________________________________________________
//
CSteelshapersGiftCard::CSteelshapersGiftCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Steelshaper's Gift"), CardType::Sorcery, nID,
		WHITE_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter,
		ZoneId::Hand, TRUE, TRUE, FALSE)

	, m_CardFilter(_T("an Equipment card"), _T("Equipment cards"), new CardTypeComparer(CardType::Equipment, false))
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CAdvancedHoverguardCard::CAdvancedHoverguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Advanced Hoverguard"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuriokChampionCard::CAuriokChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Champion"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAuriokSalvagersCard::CAuriokSalvagersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Salvagers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlindCreeperCard::CBlindCreeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blind Creeper"), CardType::Creature, CREATURE_TYPE2(Zombie, Beast), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBringerOfTheBlueDawnCard::CBringerOfTheBlueDawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bringer of the Blue Dawn"), CardType::Creature, CREATURE_TYPE(Bringer), nID,
		_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBringerOfTheBlueDawnCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetDrawCount(2);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
}

BOOL CBringerOfTheBlueDawnCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBringerOfTheGreenDawnCard::CBringerOfTheGreenDawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bringer of the Green Dawn"), CardType::Creature, CREATURE_TYPE(Bringer), nID,
		_T("7") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBringerOfTheGreenDawnCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetCreateTokenOption(TRUE, _T("Beast C"), 2768, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Green, CardType::_ColorMask); //to fix the color of this card.
}

BOOL CBringerOfTheGreenDawnCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBringerOfTheBlackDawnCard::CBringerOfTheBlackDawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bringer of the Black Dawn"), CardType::Creature, CREATURE_TYPE(Bringer), nID,
		_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBringerOfTheBlackDawnCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetToZone(ZoneId::Library);
		
		cpAbility->SetPayLifeResolutionCost(Life(-2));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Black, CardType::_ColorMask); //to fix the color of this card.
}

BOOL CBringerOfTheBlackDawnCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBringerOfTheWhiteDawnCard::CBringerOfTheWhiteDawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bringer of the White Dawn"), CardType::Creature, CREATURE_TYPE(Bringer), nID,
		_T("7") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBringerOfTheWhiteDawnCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.
}

BOOL CBringerOfTheWhiteDawnCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CCacklingImpCard::CCacklingImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cackling Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCosmicLarvaCard::CCosmicLarvaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cosmic Larva"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().SetSubjectCount(2, 2);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDesecrationElementalCard::CDesecrationElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Desecration Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEbonDrakeCard::CEbonDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ebon Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEternalWitnessCard::CEternalWitnessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eternal Witness"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFangrenPathcutterCard::CFangrenPathcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fangren Pathcutter"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleshgrafterCard::CFleshgrafterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fleshgrafter"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CHoverguardSweepersCard::CHoverguardSweepersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hoverguard Sweepers"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetGatherer().SetSubjectCount(0, 2);
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIronBarbHellionCard::CIronBarbHellionCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Iron-Barb Hellion"), CardType::Creature, CREATURE_TYPE2(Hellion, Beast), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CKrarkClanEngineersCard::CKrarkClanEngineersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krark-Clan Engineers"), CardType::Creature, CREATURE_TYPE2(Goblin, Artificer), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrarkClanOgreCard::CKrarkClanOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krark-Clan Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeoninSquireCard::CLeoninSquireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Squire"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonAnchoriteCard::CLoxodonAnchoriteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Anchorite"), CardType::Creature, CREATURE_TYPE2(Elephant, Cleric), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CLoxodonStalwartCard::CLoxodonStalwartCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Loxodon Stalwart"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		WHITE_MANA_TEXT, Power(0), Life(+1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CMoriokRiggerCard::CMoriokRiggerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moriok Rigger"), CardType::Creature, CREATURE_TYPE3(Human, Rogue, Rigger), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimGrotesqueCard::CNimGrotesqueCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nim Grotesque"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("6") BLACK_MANA_TEXT, Power(3), Life(6))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSylvokExplorerCard::CSylvokExplorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvok Explorer"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
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
				CManaPool::Color::Blue));

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
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::White));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTangleAspCard::CTangleAspCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tangle Asp"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTangleAspCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CTangleAspCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CTelJiladLifebreatherCard::CTelJiladLifebreatherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Lifebreather"), CardType::Creature, CREATURE_TYPE2(Troll, Shaman), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTornadoElementalCard::CTornadoElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tornado Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-6));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTrinketMageCard::CTrinketMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trinket Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTyrranaxCard::CTyrranaxCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Tyrranax"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4),
		_T("1") GREEN_MANA_TEXT, Power(-1), Life(+1))
{
}

//____________________________________________________________________________
//
CViridianScoutCard::CViridianScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Scout"), CardType::Creature, CREATURE_TYPE3(Elf, Warrior, Scout), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-2),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVulshokSorcererCard::CVulshokSorcererCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Vulshok Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CAnodetLurkerCard::CAnodetLurkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anodet Lurker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArachnoidCard::CArachnoidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arachnoid"), CardType::_ArtifactCreature, CREATURE_TYPE(Spider), nID,
		_T("6"), Power(2), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CBatteredGolemCard::CBatteredGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battered Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(3), Life(2))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBatteredGolemCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBatteredGolemCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CSynodCenturionCard::CSynodCenturionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Synod Centurion"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSynodCenturionCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSynodCenturionCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSynodCenturionCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard == this)
			continue;

		if (pCard->GetCardType().IsArtifact())
			return false;
	}

	return true;
}

bool CSynodCenturionCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard == this)
			continue;

		if (pCard->GetCardType().IsArtifact())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CThermalNavigatorCard::CThermalNavigatorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Thermal Navigator"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CBlastingStationCard::CBlastingStationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blasting Station"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE, 
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlastingStationCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlastingStationCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CConjurersBaubleCard::CConjurersBaubleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conjurer's Bauble"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		//cpAbility->GetTargeting()->SetSubjectCount(0, 1);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->SetAbilityText(_T("Choose no targets. Activates"));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCranialPlatingCard::CCranialPlatingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cranial Plating"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CCranialPlatingCard::CreateEquipmentAbility)));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCranialPlatingCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Equip as an instant.
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsInstant);

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CCranialPlatingCard::CreateEquipmentAbility)));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCranialPlatingCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCranialPlatingCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

counted_ptr<CAbility> CCranialPlatingCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false)));

	cpEquipAbility->SetChangePowerOnly();

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrindingStationCard::CGrindingStationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grinding Station"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 3));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrindingStationCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrindingStationCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CGuardianIdolCard::CGuardianIdolCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Guardian Idol"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2"),
				_T("Golem AA"), 64045));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHealersHeaddressCard::CHealersHeaddressCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Healer's Headdress"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHealersHeaddressCard::CreateEquipmentAbility)));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHealersHeaddressCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Equip as an instant.
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsInstant);

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHealersHeaddressCard::CreateEquipmentAbility)));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHealersHeaddressCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHealersHeaddressCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

	counted_ptr<CAbility> CHealersHeaddressCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornedHelmCard::CHornedHelmCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horned Helm"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHornedHelmCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Equip as an instant.
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsInstant);

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHornedHelmCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHornedHelmCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

//____________________________________________________________________________
//
CKrarkClanIronworksCard::CKrarkClanIronworksCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Krark-Clan Ironworks"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility( 
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNeurokStealthsuitCard::CNeurokStealthsuitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Neurok Stealthsuit"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Shroud);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNeurokStealthsuitCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Equip as an instant.
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsInstant);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Shroud);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNeurokStealthsuitCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNeurokStealthsuitCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

//____________________________________________________________________________
//
CParadiseMantleCard::CParadiseMantleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paradise Mantle"), CardType::Artifact | CardType::Equipment, nID, 
		_T("0"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CParadiseMantleCard::CreateEquipmentAbility1)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CParadiseMantleCard::CreateEquipmentAbility2)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CParadiseMantleCard::CreateEquipmentAbility3)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CParadiseMantleCard::CreateEquipmentAbility4)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CParadiseMantleCard::CreateEquipmentAbility5)));

		AddAbility(cpAbility.GetPointer());
	}
}

	counted_ptr<CAbility> CParadiseMantleCard::CreateEquipmentAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpEquipAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CParadiseMantleCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpEquipAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CParadiseMantleCard::CreateEquipmentAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpEquipAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CParadiseMantleCard::CreateEquipmentAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpEquipAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CParadiseMantleCard::CreateEquipmentAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpEquipAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CSalvagingStationCard::CSalvagingStationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Salvaging Station"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSalvagingStationCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSalvagingStationCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CSparringCollarCard::CSparringCollarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sparring Collar"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSparringCollarCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Equip as an instant.
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsInstant);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSparringCollarCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSparringCollarCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

//____________________________________________________________________________
//
CStaffOfDominationCard::CStaffOfDominationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of Domination"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("1")));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("2"),
				Life(+1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("3"),
				FALSE, TRUE,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("4"),
				TRUE, FALSE,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("5"), 1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSummoningStationCard::CSummoningStationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Summoning Station"), CardType::Artifact, nID,
		_T("7"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Pincher"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSummoningStationCard::BeforeResolution));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSummoningStationCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CWayfarersBaubleCard::CWayfarersBaubleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wayfarer's Bauble"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"), 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArtificersIntuitionCard::CArtificersIntuitionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Artificer's Intuition"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.SetFilterName(_T("an artifact card with converted mana cost 1 or less"), _T("artifact cards with converted mana cost 1 or less"));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			BLUE_MANA_TEXT,
			&m_CardFilter,
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArmedResponseCard::CArmedResponseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Armed Response"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AttackingCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Equipment, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEarlyFrostCard::CEarlyFrostCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Early Frost"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			TRUE,
			FALSE,
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFeedbackBoltCard::CFeedbackBoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feedback Bolt"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("4") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, //no comparer=no creatures can be targeted
			TRUE, //target player?
			ZoneId::Battlefield,
			TRUE, //TRUE = spells controller zone
			new CardTypeComparer(CardType::Artifact, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRainOfRustCard::CRainOfRustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rain of Rust"), CardType::Instant, nID)

	, m_EntwineCost(_T("3") RED_MANA_TEXT)
{
	{
		//Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

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
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CRainOfRustCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::_Tokens);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CVanquishCard::CVanquishCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vanquish"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new BlockingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CAcquireCard::CAcquireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Acquire"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			MinimumValue(0), MaximumValue(1),
			CCardFilter::GetFilter(_T("artifact cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetSearchLibraryData(ZoneId::Battlefield, FALSE, FALSE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBeaconOfCreationCard::CBeaconOfCreationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beacon of Creation"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			FALSE, FALSE,
			_T("Insect B"), 2723, 1));

	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CChannelTheSunsCard::CChannelTheSunsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Channel the Suns"), CardType::Sorcery, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Sorcery,					
			_T("3") GREEN_MANA_TEXT,
			ALL_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGranulateCard::CGranulateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Granulate"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRoarOfReclamationCard::CRoarOfReclamationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Roar of Reclamation"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CScreamingFuryCard::CScreamingFuryCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Screaming Fury"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			Power(+5), Life(0), 
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShatteredDreamsCard::CShatteredDreamsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shattered Dreams"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("artifact cards"))));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGemstoneArrayCard::CGemstoneArrayCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gemstone Array"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

        cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiteOfPassageCard::CRiteOfPassageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rite of Passage"), CardType::GlobalEnchantment, nID, 
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt, 
						   CWhenDamageDealt::CreatureEventCallback,
						   &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter
	/*cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetToBase(TRUE);
	cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetPowerModifier().SetToBase(TRUE);
	cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);*/

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRiteOfPassageCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CRiteOfPassageCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										   CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CClearwaterGobletCard::CClearwaterGobletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Clearwater Goblet"), CardType::Artifact, nID, 
		_T("5"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CClearwaterGobletCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CClearwaterGobletCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CClearwaterGobletCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(Life(GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount()));
	pAction->SetTriggerContext(triggerContext);

	return true;
}

void CClearwaterGobletCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSkyreachMantaCard::CSkyreachMantaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyreach Manta"), CardType::_ArtifactCreature, CREATURE_TYPE(Fish), nID,
		_T("5"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkyreachMantaCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CSkyreachMantaCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSuntouchedMyrCard::CSuntouchedMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Suntouched Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSuntouchedMyrCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CSuntouchedMyrCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CBatonofCourageCard::CBatonofCourageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Baton of Courage"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBatonofCourageCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCardKeyword()->AddFlash(FALSE);
	
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

	AddAbility(cpAbility.GetPointer());	
}

void CBatonofCourageCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CPentadPrismCard::CPentadPrismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pentad Prism"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPentadPrismCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

        cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CPentadPrismCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CEtchedOracleCard::CEtchedOracleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etched Oracle"), CardType::_ArtifactCreature, CREATURE_TYPE(Wizard), nID,
		_T("4"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEtchedOracleCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			_T("1"), 3));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -4);

	AddAbility(cpAbility.GetPointer());
}

void CEtchedOracleCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CLunarAvengerCard::CLunarAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lunar Avenger"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLunarAvengerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CLunarAvengerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSawtoothThresherCard::CSawtoothThresherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sawtooth Thresher"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSawtoothThresherCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+4), Life(+4)));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -2);

	AddAbility(cpAbility.GetPointer());
}

void CSawtoothThresherCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSuncrusherCard::CSuncrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Suncrusher"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("9"), Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSuncrusherCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("4"),
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("2"),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CSuncrusherCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CEyesOfTheWatcherCard::CEyesOfTheWatcherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eyes of the Watcher"), CardType::GlobalEnchantment, nID, 
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->SetResolutionCost(_T("1"));

	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCondescendCard::CCondescendCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Condescend"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);
	m_pCounterSpell->SetExtraActionValueVector();
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->SetExtraCostToDenialCost();

	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CFerociousChargeCard::CFerociousChargeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Ferocious Charge"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CLoseHopeCard::CLoseHopeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Lose Hope"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CMagmaJetCard::CMagmaJetCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Magma Jet"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CStandFirmCard::CStandFirmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Stand Firm"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CTelJiladJusticeCard::CTelJiladJusticeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Tel-Jilad Justice"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CFillWithFrightCard::CFillWithFrightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fill with Fright"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSerumVisionsCard::CSerumVisionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Serum Visions"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CSerumVisionsCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT, 1));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSerumVisionsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	//Scry 2.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	pModifier->ApplyTo(GetController());
}

//____________________________________________________________________________
//
CGoblinCannonCard::CGoblinCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Cannon"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);
		
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBeaconOfTomorrowsCard::CBeaconOfTomorrowsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beacon of Tomorrows"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CBeaconOfTomorrowsCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	//Shuffle <this> into its owner's library.
	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

void CBeaconOfTomorrowsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);	
	
	if (bResult) pmodifier.ApplyTo(target);  // You can apply it two times if you want to add two turns
	//pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CVedalkenShacklesCard::CVedalkenShacklesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vedalken Shackles"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new VedalkenShacklesComparer((CCard*)this), FALSE));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CGainControlModifier(GetGame(), (CCard*)this));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(
			this, &CVedalkenShacklesCard::BeforeResolution));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->SetMaxTurnUsageCount(1);
	cpAbility->SetAbilityType(AbilityType::Untap);
	cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

	AddAbility(cpAbility.GetPointer());
	}
	{
//		typedef
//		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
//						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
		typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(), (CCard*)this));
		cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(),(CCard*)this, true));
		
		// Setting to all player cards because the card might have been re-controlled by opponent
		// If that is the case our modifier won't cause change of control
		// but still, it needs to be applied so that the effect is removed from control stack
		cpAbility->SetModifyCardOption(CTriggeredModifyCardAbility::ModifyCardOption::ModifyAllPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this));

// CTriggeredMoveCardAbility's additional move modifier was causing edge case bugs
// Replaced with TriggeredModifyCardAbility
//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(),(CCard*)this, true));
//
//		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
//		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this));
//		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
//		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(), (CCard*)this));
		cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(),(CCard*)this, true));
		
		// Setting to all player cards because the card might have been re-controlled by opponent
		// If that is the case our modifier won't cause change of control
		// but still, it needs to be applied so that the effect is removed from control stack
		cpAbility->SetModifyCardOption(CTriggeredModifyCardAbility::ModifyCardOption::ModifyAllPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this));

// CTriggeredMoveCardAbility's additional move modifier was causing edge case bugs
// Replaced with TriggeredModifyCardAbility
//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(),(CCard*)this, true));
//
//		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
//		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this));
//		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
//		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVedalkenShacklesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return !(this->GetCardKeyword()->NoUntapInUntapPhase() || this->GetCardKeyword()->NoUntapInNextContUntap() || this->GetOrientation()->IsUntapped());
}

bool CVedalkenShacklesCard::BeforeResolution(CAbilityAction* pAction) const
{
	return GetZoneId() == ZoneId::Battlefield && GetOrientation()->IsTapped();
}

//____________________________________________________________________________
//
CIonStormCard::CIonStormCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ion Storm"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));

		cpAbility->GetCost().AddAnyCardCounterCost(CHARGE_COUNTER, -1, 1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEngineeredExplosivesCard::CEngineeredExplosivesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Engineered Explosives"), CardType::Artifact, nID, 
		_T("0"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEngineeredExplosivesCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	counted_ptr<CActivatedAbility<CExplosiveKegSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CExplosiveKegSpell>>(this,
			_T("2"),
			new TrueCardComparer, ZoneId::Graveyard, MoveType::Destroy, ZoneId::Battlefield, CHARGE_COUNTER));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

void CEngineeredExplosivesCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDevourInShadowCard::CDevourInShadowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devour in Shadow"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevourInShadowCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDevourInShadowCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	int nToughness = GET_INTEGER(pTarget->GetLastKnownToughness());

	CMoveCardModifier pModifier1 = CMoveCardModifier (ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pController);
	CLifeModifier pModifier2 = CLifeModifier(Life(-nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CHelmofKaldraCard::CHelmofKaldraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helm of Kaldra"), CardType::_LegendaryArtifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
	, m_HelmFilter(new CardNameComparer(_T("Helm of Kaldra")))
	, m_ShieldFilter(new CardNameComparer(_T("Shield of Kaldra")))
	, m_SwordFilter(new CardNameComparer(_T("Sword of Kaldra")))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHelmofKaldraCard::OnResolutionCompleted))
{
	m_HelmFilter.AddComparer(new CardTypeComparer(CardType::Equipment, false));
	m_ShieldFilter.AddComparer(new CardTypeComparer(CardType::Equipment, false));
	m_SwordFilter.AddComparer(new CardTypeComparer(CardType::Equipment, false));

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Kaldra"), TOKEN_ID_BY_NAME, 1));
		ATLASSERT(cpAbility);

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelmofKaldraCard::BeforeResolution));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::FirstStrike, true, false));
		cpAbility->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Trample, true, false));
		cpAbility->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Haste, true, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHelmofKaldraCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return m_SwordFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0 && m_ShieldFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0
				&& m_HelmFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0;
}

void CHelmofKaldraCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	// Find the token we just created and attach equipment
	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (!m_CardFilter.GetIncluded(*pBattlefield, tokens)) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(tokens.GetAt(0));
	if (!pCreature) return;

	for (int k = 0; k < pBattlefield->GetSize(); ++k)
	{
		CCard* pCard = pBattlefield->GetAt(k);
		if ((pCard->GetCardType() & CardType::Equipment).Any() &&
			(pCard->GetPrintedCardName() == _T("Sword of Kaldra")
			|| pCard->GetPrintedCardName() == _T("Shield of Kaldra")
			|| pCard->GetPrintedCardName() == _T("Helm of Kaldra")))
		{
			for (int i = 0; i < pCard->GetAbilityCount(); ++i)
			{
				CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbility(i));
				if (!pEquipAbility) continue;
				{
					pEquipAbility->Unequip();
					pEquipAbility->Equip(pCreature);
				}
			}
		}
	}
}

//____________________________________________________________________________
//
CMyrQuadropodCard::CMyrQuadropodCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Myr Quadropod"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("4"), Power(1), Life(4),
		_T("3"), Power(+0), Life(+0), CreatureKeyword::SwitchedPT)
{
}

//____________________________________________________________________________
//
CArcboundWandererCard::CArcboundWandererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Wanderer"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CArcboundWandererCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->SetAbilityName(_T("Modular ability"));
	cpAbility->SetAbilityText(_T("Modular ability"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArcboundWandererCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

void CArcboundWandererCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

bool CArcboundWandererCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCounterModifier modifier(_T("+1/+1"), +GetLastKnownp11Counters());
	modifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CQumuloxCard::CQumuloxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Qumulox"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(4))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlinkmothInfusionCard::CBlinkmothInfusionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blinkmoth Infusion"), CardType::Instant, nID)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CGlobalUntapSpell> cpSpell(
			::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
				_T("12") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIntoThinAirCard::CIntoThinAirCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Into Thin Air"), CardType::Instant, nID,
		_T("5") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBringerOfTheRedDawnCard::CBringerOfTheRedDawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bringer of the Red Dawn"), CardType::Creature, CREATURE_TYPE(Bringer), nID,
		_T("7") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CBringerOfTheRedDawnCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

		CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCardModifier::Operation::ApplyToLater);
		CCardOrientationModifier* pModifier3 = new CCardOrientationModifier(0);

		pModifier2->LinkCardModifier(pModifier3);
		pModifier1->LinkCardModifier(pModifier2);

		cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
}

void CBringerOfTheRedDawnCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier;
	pModifier.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier.GetModifier().SetOneTurnOnly(TRUE);

	if (target->GetCardType().IsCreature()) pModifier.ApplyTo((CCreatureCard*)target);
}

//____________________________________________________________________________
//
CViridianLorebearersCard::CViridianLorebearersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Lorebearers"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViridianLorebearersCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CViridianLorebearersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay;
	int nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) == GetController()) continue;
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCards += CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer());
	}

	if (nCards == 0) return false;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCards;
	Context.nValue2 = nCards;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CMyrServitorCard::CMyrServitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Servitor"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("1"), Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Myr Servitor")));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMyrServitorCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMyrServitorCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CMyrServitorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Battlefield);
}

bool CMyrServitorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Battlefield);
}

//____________________________________________________________________________
//
CAbunasChantCard::CAbunasChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abuna's Chant"), CardType::Instant, nID)

	, m_EntwineCost(_T("2"))
{
	{
		//You gain 5 life.
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				Life(+5), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Prevent the next 5 damage that would be dealt to target creature this turn.
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT, 
				new AnyCreatureComparer, 
				FALSE,
				Life(5), SourceColor::Null));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAbunasChantCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CAbunasChantCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CLifeModifier pModifier = CLifeModifier(Life(+5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CManaGeyserCard::CManaGeyserCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mana Geyser"), CardType::Sorcery, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			_T("")));

	cpSpell->SetAbilityText(_T("Add {R} to your mana pool for each tapped land your opponents control with"));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaGeyserCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CManaGeyserCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TappedComparer);
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::_Land, false));

	int n = m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CVedalkenOrreryCard::CVedalkenOrreryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vedalken Orrery"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//_____________________________________________________________________________
//
CEnsouledScimitarCard::CEnsouledScimitarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ensouled Scimitar"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("3"),
				_T("Spirit F"),2903));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+5), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CEnsouledScimitarCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CEnsouledScimitarCard::CanPlay(BOOL bIncludeTricks)
{
if (GetIsAlsoA()) return !GetIsAlsoA()->GetCardType().IsCreature();
else return true;
}

//____________________________________________________________________________
//
CAuriokWindwalkerCard::CAuriokWindwalkerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Auriok Windwalker"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
	counted_ptr<CActivatedAbility<CEquipSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CEquipSpell>>(this,
			_T("")));

	cpAbility->GetTargeting1()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting2()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagneticTheftCard::CMagneticTheftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magnetic Theft"), CardType::Instant, nID)
{
	counted_ptr<CEquipSpell> cpSpell(
		::CreateObject<CEquipSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT
			));	

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGraftedWargearCard::CGraftedWargearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grafted Wargear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("0")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenEquipped > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetOnUnequip();
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraftedWargearCard::SetTriggerContext));		

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGraftedWargearCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pEquipCard, CCard* pFromCard, CCard* pToCard) const
{
	if (pFromCard)
	{
	triggerContext.m_pCard = pFromCard;
	return TRUE;
	}
	else
	return FALSE;
}


//____________________________________________________________________________
//
CHeliophialCard::CHeliophialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heliophial"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHeliophialCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CActivatedAbility<CTargetChgLifeSpellCounter>> cpAbility( 
	::CreateObject<CActivatedAbility<CTargetChgLifeSpellCounter>>(this,
		_T("2"),
		new AnyCreatureComparer,
		TRUE, 
		PreventableType::Preventable, CHARGE_COUNTER, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

void CHeliophialCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSkullcageCard::CSkullcageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skullcage"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkullcageCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSkullcageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return (pHand->GetSize() < 3 || pHand->GetSize() > 4);
}

//____________________________________________________________________________
//
CViciousBetrayalCard::CViciousBetrayalCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Vicious Betrayal"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		true, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().AddSacrificeCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("creatures")));
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViciousBetrayalCard::BeforeResolution));
}

bool CViciousBetrayalCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = 2 * nCount;
	Context.nValue2 = 2 * nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CInfusedArrowsCard::CInfusedArrowsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Infused Arrows"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CInfusedArrowsCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-0), Life(-0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInfusedArrowsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CInfusedArrowsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

bool CInfusedArrowsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetExtraValue();

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCount;
	Context.nValue2 = nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CDawnsReflectionCard::CDawnsReflectionCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Dawn's Reflection"), CardType::EnchantLand, nID,
		_T("3") GREEN_MANA_TEXT,
		new CardTypeComparer(CardType::_Land, false))
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDawnsReflectionCard::OnSelectionDone))
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(true);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDawnsReflectionCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CDawnsReflectionCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	CPlayer* pPlayer = m_pEnchantSpell->GetEnchantedOnCard()->GetController();

	static const DWORD manaColors[] = {
		CManaPool::Color::Black,
		CManaPool::Color::Blue,
		CManaPool::Color::Green,
		CManaPool::Color::Red,
		CManaPool::Color::White };

	std::vector<SelectionEntry> entries;
	for (int i = 0; i < ARRAY_SIZE(manaColors); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = manaColors[i];
		entry.strText.Format(_T("select "));
		entry.strText += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)manaColors[i]);
		entries.push_back(entry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, this, pPlayer);
	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, this, pPlayer);

	return true;
}

void CDawnsReflectionCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CManaPoolModifier modifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool((CManaPool::Color::Enum)it->dwContext, 1));
			modifier.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CSolarionCard::CSolarionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Solarion"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("7"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSolarionCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSolarionCard::BeforeResolution));
	cpAbility->SetAbilityText(_T("Double the number of +1/+1 counters on. Activates"));
		
	AddAbility(cpAbility.GetPointer());
}

bool CSolarionCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	CCardCounterModifier modifier(_T("+1/+1"), nCounterCount);
	modifier.ApplyTo(this);

	return true;
}

void CSolarionCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSpinalParasiteCard::CSpinalParasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spinal Parasite"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("5"), Power(-1), Life(-1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSpinalParasiteCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CActivatedAbility<CTargetRemoveCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRemoveCounterSpell>>(this,
			_T(""),
			new TrueCardComparer,
			1));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -2);
		
	AddAbility(cpAbility.GetPointer());
}

void CSpinalParasiteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(_T("+1/+1"), nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
COpalineBracersCard::COpalineBracersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Opaline Bracers"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &COpalineBracersCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, CHARGE_COUNTER));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));		
		cpAbility->SetEquipment();


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
}

void COpalineBracersCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Sunburst
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingManaCost().GetColorCount(false);

		CCardCounterModifier modifier(CHARGE_COUNTER, nColorCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CAvariceTotemCard::CAvariceTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Avarice Totem"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("5"),
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), FALSE));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAvariceTotemCard::BeforeResolution));
			
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAvariceTotemCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController1 = this->GetController();
	CPlayer* pController2 = pTarget->GetController();
		
	if (this->IsInplay() && (pController1 != pController2))
	{
		CZone* pBattlefield1 = pController1->GetZoneById(ZoneId::Battlefield);
		CZone* pBattlefield2 = pController2->GetZoneById(ZoneId::Battlefield);
		
		this->Move(pBattlefield2, pController1, MoveType::Others);
		pTarget->Move(pBattlefield1, pController2, MoveType::Others);
	}
	return true;
}
//____________________________________________________________________________
//
CPlungeIntoDarknessCard::CPlungeIntoDarknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plunge into Darkness"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPlungeIntoDarknessCard::OnNumberSelected))
	, m_LifeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPlungeIntoDarknessCard::OnLifeSelected))
	, m_EntwineCost(BLACK_MANA_TEXT)
{
	{
		//Sacrifice any number of creatures, then you gain 3 life for each sacrificed creature.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlungeIntoDarknessCard::BeforeResolution1));
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Sacrifice any number of creatures, then you gain 3 life for each sacrificed creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Pay X life, then look at the top X cards of your library, put one of those cards into your hand, and exile the rest. 
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlungeIntoDarknessCard::BeforeResolution2));
		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Pay X life, then look at the top X cards of your library, put one of those cards into your hand, and exile the rest. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CPlungeIntoDarknessCard::BeforeResolution1(CAbilityAction* pAction)
{
	bool bEntwine = pAction->GetCostConfigEntry().HasOptionalManaCost(m_EntwineCost);

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new AnyCreatureComparer);

	int nCreatures = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nCreatures > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCreatures; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Sacrifice %d creature"),
					i);
			else
				entry.strText.Format(_T("Sacrifice %d creatures"),
					i);

			entries.push_back(entry);
		}
		if (bEntwine)
			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 1);
		else
			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 0);
	}
	return true;
}

void CPlungeIntoDarknessCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
						strMessage.Format(_T("%s sacrifices %d creature"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s sacrifices %d creatures"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new AnyCreatureComparer);

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
				
				CLifeModifier pModifier2 = CLifeModifier(Life(3*nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				if (dwContext1 > 0)
					LifeChoose(pSelectionPlayer);
				
				return;
			}
		}
}

bool CPlungeIntoDarknessCard::BeforeResolution2(CAbilityAction* pAction)
{
	LifeChoose(pAction->GetController());

	return true;
}

void CPlungeIntoDarknessCard::LifeChoose(CPlayer* pPlayer)
{
	int nLife = (int)pPlayer->GetLife();

	if ((nLife > 0) && !pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
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
		m_LifeSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
	}
}

void CPlungeIntoDarknessCard::OnLifeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't pay any life"), pSelectionPlayer->GetPlayerName());
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
				CLifeModifier pModifier1 = CLifeModifier(Life(-nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				CCardFilter m_CardFilter_temp;
		
				m_CardFilter_temp.AddComparer(new TrueCardComparer);

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nValue, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter_temp, // what cards
						ZoneId::Hand, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on 
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

					pModifier2.SetReorderInformation(
						true, 
						ZoneId::Exile,	
						CZoneModifier::RoleType::PrimaryPlayer,	// this player's exile
						CardPlacement::Top);

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}
		}
}

//____________________________________________________________________________
//
/*
CMephidrossVampireCard::CMephidrossVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mephidross Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetOtherCardModifiers().Add((CCardModifier*)(new CCreatureTypeModifier(SingleCreatureType::Vampire)));
		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMephidrossVampireCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CMephidrossVampireCard::ForceStart)));
		
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CMephidrossVampireCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CMephidrossVampireCard::ForceStart(CAbility* pAbility) const
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;
	
	((TriggeredAbility*)pAbility)->GetTrigger().ForceStart();
}
*/
//____________________________________________________________________________
//
CFerropedeCard::CFerropedeCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Ferropede"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("3"), Power(1), Life(1))
	, m_CounterSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFerropedeCard::OnCounterSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFerropedeCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CFerropedeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (!pTarget->GetCounterContainer()->HasAnyCounters())
		return true;

	struct PushBack
	{
		PushBack(CCard* nCard)
			: entries()
			, kCard(nCard)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name = c->GetName();
		
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)c;  //assuming size_of(c)==size_of(DWORD)
			selectionEntry.strText.Format(_T("remove %s from %s"), name, kCard->GetCardName());

			if (c->GetCount()!=0)
				entries.push_back(selectionEntry);
		}

		CCard* kCard;
		
		std::vector<SelectionEntry> entries;

	} push(pTarget);
	
	m_CounterSelection.AddSelectionRequest(
		pTarget->GetCounterContainer()->ForEachCounter(push).entries, 1, 1, NULL, pAction->GetController(), (DWORD)pTarget);

	return true;
}

void CFerropedeCard::OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			Counter* counter = (Counter*)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;

			CCardCounterModifier modifier(counter->GetName(), -1);
			modifier.ApplyTo(pCard);
		}
}

//____________________________________________________________________________
//
CRudeAwakeningCard::CRudeAwakeningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rude Awakening"), CardType::Sorcery, nID)

	, m_EntwineCost(_T("2") GREEN_MANA_TEXT)
{
	{
		//Untap all lands you control.
		counted_ptr<CGlobalUntapSpell> cpSpell(
			::CreateObject<CGlobalUntapSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
		cpSpell->SetAbilityText(_T("Untap all lands you control. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Until end of turn, lands you control become 2/2 creatures that are still lands.
		counted_ptr<CIsAlsoAEnchantment> cpSpell(
			::CreateObject<CIsAlsoAEnchantment>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				_T("Animated Land B"), 64008));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);

		cpSpell->SetAbilityText(_T("Until end of turn, lands you control become 2/2 creatures that are still lands. Casts"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRudeAwakeningCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CRudeAwakeningCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
			std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
		pModifier.ApplyTo(pAction->GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CEnergyChamberCard::CEnergyChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Energy Chamber"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEnergyChamberCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEnergyChamberCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));
		
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->SetAbilityName(_T("Mode 1 - +1/+1 counter on an artifact creature"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false)); // add one counter

		cpAbility->SetAbilityName(_T("Mode 2 - charge counter on a noncreature artifact"));
		AddAbility(cpAbility.GetPointer());
	}	
}

BOOL CEnergyChamberCard::TargetCheck(CCard* pCard)
{
	if (pCard->HasProtectionFrom(this, FALSE))
		return FALSE;

	if (pCard->GetCardKeyword()->HasShroud(this))
		return FALSE;

	if (pCard->GetCardKeyword()->HasHexproof() && (GetController() != pCard->GetController()))
	{
		if (!pCard->GetCardType().IsCreature()) return FALSE;
		if (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IgnoreHexproofOnCreatures)) return FALSE;
	}

	return TRUE;
}

bool CEnergyChamberCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CNode* pNode)
{
	bool bFirstModeAllowed = false;
	bool bSecondModeAllowed = false;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsArtifact() && pCard->GetCardType().IsCreature() && TargetCheck(pCard))
			{
				bFirstModeAllowed = true;
				break;
			}
		}

		if (bFirstModeAllowed) break;
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsArtifact() && !pCard->GetCardType().IsCreature() && TargetCheck(pCard))
			{
				bSecondModeAllowed = true;
				break;
			}
		}

		if (bSecondModeAllowed) break;
	}

	if (bFirstModeAllowed || bSecondModeAllowed)
	{
		std::vector<SelectionEntry> entries;
		if (bFirstModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("%s: Put a +1/+1 counter on target artifact creature"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		if (bSecondModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("%s: Put a charge counter on target noncreature artifact"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}

	return false;
}

void CEnergyChamberCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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