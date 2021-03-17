#include "stdafx.h"
#include "CardIceAge.h"

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

		DEFINE_CARD(CAdarkarSentinelCard);
		DEFINE_CARD(CAegisOfTheMeekCard);
		DEFINE_CARD(CAggressionCard);
		DEFINE_CARD(CAltarOfBoneCard);
		DEFINE_CARD(CAnarchyCard);
		DEFINE_CARD(CArcumsSleighCard);
		DEFINE_CARD(CArcumsWeathervaneCard);
		DEFINE_CARD(CArcticFoxesCard);
		DEFINE_CARD(CArnjlotsAscentCard);
		DEFINE_CARD(CAshenGhoulCard);
		DEFINE_CARD(CAvalancheCard);
		DEFINE_CARD(CBalduvianBearsCard);
		DEFINE_CARD(CBalduvianConjurerCard);
		DEFINE_CARD(CBalduvianHydraCard);
		DEFINE_CARD(CBarbarianGuidesCard);
		//DEFINE_CARD(CBattleCryCard);
		DEFINE_CARD(CBattleFrenzyCard);
		DEFINE_CARD(CBlackScarabCard);
		DEFINE_CARD(CBlizzardCard);
		DEFINE_CARD(CBlueScarabCard);
		DEFINE_CARD(CBrineShamanCard);
		DEFINE_CARD(CBrownOupheCard);
		DEFINE_CARD(CBurntOfferingCard);
		DEFINE_CARD(CCelestialSwordCard);
		DEFINE_CARD(CCentaurArcherCard);
		DEFINE_CARD(CChaosLordCard);
		DEFINE_CARD(CClairvoyanceCard);
		DEFINE_CARD(CColdSnapCard);
		DEFINE_CARD(CCurseOfMaritLageCard);
		DEFINE_CARD(CDanceOfTheDeadCard);
		DEFINE_CARD(CDemonicConsultationCard);
		DEFINE_CARD(CDespoticScepterCard);
		DEFINE_CARD(CDiabolicVisionCard);
		DEFINE_CARD(CDriftOfTheDeadCard);
		DEFINE_CARD(CDwarvenArmoryCard);
		DEFINE_CARD(CEarthlinkCard);
		DEFINE_CARD(CEarthloreCard);
		DEFINE_CARD(CElementalAuguryCard);
		DEFINE_CARD(CEssenceFilterCard);
		DEFINE_CARD(CEssenceFlareCard);
		DEFINE_CARD(CFanaticalFeverCard);
		DEFINE_CARD(CFieryJusticeCard);
		DEFINE_CARD(CFlowOfMaggotsCard);
		DEFINE_CARD(CFolkOfThePinesCard);
		DEFINE_CARD(CForbiddenLoreCard);
		DEFINE_CARD(CForceVoidCard);
		DEFINE_CARD(CFoulFamiliarCard);
		DEFINE_CARD(CFreyaliseSCharmCard);
		DEFINE_CARD(CFreyaliseSupplicantCard);
		DEFINE_CARD(CFumaroleCard);
		DEFINE_CARD(CFylgjaCard);
		DEFINE_CARD(CFyndhornBowCard);
		DEFINE_CARD(CFyndhornElvesCard);
		DEFINE_CARD(CFyndhornPollenCard);
		DEFINE_CARD(CGangrenousZombiesCard);
		DEFINE_CARD(CGiantTrapDoorSpiderCard);
		DEFINE_CARD(CGlacialChasmCard);
		DEFINE_CARD(CGlacialCrevassesCard);
		DEFINE_CARD(CGlaciersCard);
		DEFINE_CARD(CGoblinLyreCard);
		DEFINE_CARD(CGoblinMutantCard);
		DEFINE_CARD(CGoblinSappersCard);
		DEFINE_CARD(CGoblinSkiPatrolCard);
		DEFINE_CARD(CGoblinSnowmanCard);
		DEFINE_CARD(CGorillaPackCard);
		DEFINE_CARD(CGravebindCard);
		DEFINE_CARD(CGreenScarabCard);
		DEFINE_CARD(CGrizzledWolverineCard);
		DEFINE_CARD(CHallowedGroundCard);
		DEFINE_CARD(CHematiteTalismanCard);
		DEFINE_CARD(CHoarShadeCard);
		DEFINE_CARD(CHotSpringsCard);
		DEFINE_CARD(CHyalopterousLemureCard);
		DEFINE_CARD(CHymnOfRebirthCard);
		DEFINE_CARD(CIcebergCard);
		DEFINE_CARD(CIcequakeCard);
		DEFINE_CARD(CIllusionaryForcesCard);
		DEFINE_CARD(CIllusionaryPresenceCard);
		DEFINE_CARD(CIllusionaryWallCard);
		DEFINE_CARD(CIllusionsOfGrandeurCard);
		DEFINE_CARD(CInfuseCard);
		DEFINE_CARD(CJuniperOrderDruidCard);
		DEFINE_CARD(CKarplusanGiantCard);
		DEFINE_CARD(CKelsinkoRangerCard);
		DEFINE_CARD(CKjeldoranEliteGuardCard);
		DEFINE_CARD(CKjeldoranFrostbeastCard);
		DEFINE_CARD(CKjeldoranGuardCard);
		DEFINE_CARD(CKrovikanElementalistCard);
		DEFINE_CARD(CLandCapCard);
		DEFINE_CARD(CLapisLazuliTalismanCard);
		DEFINE_CARD(CLavaTubesCard);
		DEFINE_CARD(CLegionsOfLimDulCard);
		DEFINE_CARD(CLightningBlowCard);
		DEFINE_CARD(CLimDulsCohortCard);
		DEFINE_CARD(CLostOrderOfJarkeldCard);
		DEFINE_CARD(CMaddeningWindCard);
		DEFINE_CARD(CMalachiteTalismanCard);
		DEFINE_CARD(CMartonStromgaldCard);
		DEFINE_CARD(CMeltingCard);
		DEFINE_CARD(CMesmericTranceCard);
		DEFINE_CARD(CMeteorShowerCard);
		DEFINE_CARD(CMinionOfLeshracCard);
		DEFINE_CARD(CMinionOfTeveshSzatCard);
		DEFINE_CARD(CMistfolkCard);
		DEFINE_CARD(CMoorFiendCard);
		DEFINE_CARD(CMysticMightCard);
		DEFINE_CARD(CMysticRemoraCard);
		DEFINE_CARD(CNacreTalismanCard);
		DEFINE_CARD(CNorrittCard);
		DEFINE_CARD(COnyxTalismanCard);
		DEFINE_CARD(COrcishCannoneersCard);
		DEFINE_CARD(COrcishHealerCard);
		DEFINE_CARD(COrcishLibrarianCard);
		DEFINE_CARD(COrcishLumberjackCard);
		DEFINE_CARD(CPaleBearsCard);
		DEFINE_CARD(CPestilenceRatsCard);
		DEFINE_CARD(CPhantasmalMountCard);
		DEFINE_CARD(CPolarKrakenCard);
		DEFINE_CARD(CPygmyAllosaurusCard);
		DEFINE_CARD(CPykniteCard);
		DEFINE_CARD(CRallyCard);
		DEFINE_CARD(CRayOfErasureCard);
		DEFINE_CARD(CRedScarabCard);
		DEFINE_CARD(CRimeDryadCard);
		DEFINE_CARD(CRiverDeltaCard);
		DEFINE_CARD(CRunedArchCard);
		DEFINE_CARD(CShamblingStriderCard);
		DEFINE_CARD(CShieldOfTheAgesCard);
		DEFINE_CARD(CSilverErneCard);
		DEFINE_CARD(CSkeletonShipCard);
		DEFINE_CARD(CSnowCoveredForestCard);
		DEFINE_CARD(CSnowCoveredIslandCard);
		DEFINE_CARD(CSnowCoveredMountainCard);
		DEFINE_CARD(CSnowCoveredPlainsCard);
		DEFINE_CARD(CSnowCoveredSwampCard);
		DEFINE_CARD(CSnowFortressCard);
		DEFINE_CARD(CSnowHoundCard);
		DEFINE_CARD(CSoldeviSimulacrumCard);
		DEFINE_CARD(CSongsOfTheDamnedCard);
		DEFINE_CARD(CSoulKissCard);
		DEFINE_CARD(CSpectralShieldCard);
		DEFINE_CARD(CStaffOfTheAgesCard);
		DEFINE_CARD(CStonehandsCard);
		DEFINE_CARD(CStormSpiritCard);
		DEFINE_CARD(CStuntedGrowthCard);
		DEFINE_CARD(CSunstoneCard);
		DEFINE_CARD(CThermokarstCard);
		DEFINE_CARD(CThunderWallCard);
		DEFINE_CARD(CTimberlineRidgeCard);
		DEFINE_CARD(CTinderWallCard);
		DEFINE_CARD(CTrailblazerCard);
		DEFINE_CARD(CTorGiantCard);
		DEFINE_CARD(CVeldtCard);
		DEFINE_CARD(CWalkingWallCard);
		DEFINE_CARD(CWallOfLavaCard);
		DEFINE_CARD(CWallOfPineNeedlesCard);
		DEFINE_CARD(CWarChariotCard);
		DEFINE_CARD(CWarningCard);
		DEFINE_CARD(CWhaleboneGliderCard);
		DEFINE_CARD(CWhiteScarabCard);
		DEFINE_CARD(CWhiteoutCard);
		DEFINE_CARD(CWingsOfAesthirCard);
		DEFINE_CARD(CWoollyMammothsCard);
		DEFINE_CARD(CWoollySpiderCard);
		DEFINE_CARD(CWordOfUndoingCard);
		DEFINE_CARD(CYavimayaGnatsCard);
		DEFINE_CARD(CZuranEnchanterCard);
		DEFINE_CARD(CZuranOrbCard);
		DEFINE_CARD(CZuranSpellcasterCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBalduvianBearsCard::CBalduvianBearsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Bears"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CBrineShamanCard::CBrineShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brine Shaman"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCentaurArcherCard::CCentaurArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Archer"), CardType::Creature, CREATURE_TYPE2(Centaur, Archer), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFolkOfThePinesCard::CFolkOfThePinesCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Folk of the Pines"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(5),
		_T("1") GREEN_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CFoulFamiliarCard::CFoulFamiliarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foul Familiar"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLACK_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFyndhornElvesCard::CFyndhornElvesCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Fyndhorn Elves"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CGorillaPackCard::CGorillaPackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorilla Pack"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		//Can't attack if defending player doesn't control a Forest
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CGorillaPackCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control a Forest
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGorillaPackCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CGorillaPackCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CGorillaPackCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Forest).Any())
			return TRUE;

	return FALSE;
}

bool CGorillaPackCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Forest).Any())
			return false;
	}

	return true;
}

bool CGorillaPackCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Forest).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CHoarShadeCard::CHoarShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Hoar Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
//CHyalopterousLemureCard::CHyalopterousLemureCard(CGame* pGame, UINT nID)
//	: CPumpCreatureCard(pGame, _T("Hyalopterous Lemure"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
//		_T("4") BLACK_MANA_TEXT, Power(4), Life(3),
//		_T("0"), Power(-1), Life(+0), CreatureKeyword::Flying)
//{
//
//	SetDefaultCharacteristic(Characteristic::Negative);
//}
CHyalopterousLemureCard::CHyalopterousLemureCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hyalopterous Lemure"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(-1), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetMaxTurnUsageCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJuniperOrderDruidCard::CJuniperOrderDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juniper Order Druid"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKelsinkoRangerCard::CKelsinkoRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kelsinko Ranger"), CardType::Creature, CREATURE_TYPE(Human), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinionOfLeshracCard::CMinionOfLeshracCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minion of Leshrac"), CardType::Creature, CREATURE_TYPE2(Demon, Minion), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
			new CCardFilter(new CardTypeComparer(CardType::_Land, false)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMinionOfTeveshSzatCard::CMinionOfTeveshSzatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minion of Tevesh Szat"), CardType::Creature, CREATURE_TYPE2(Demon, Minion), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CMinionOfTeveshSzatCard::CreateTemporaryAbility),
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CMinionOfTeveshSzatCard::PreRemoveAbilityCallback));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

CCard* CMinionOfTeveshSzatCard::CreateTemporaryAbility()
{
	return this;
}

void CMinionOfTeveshSzatCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CLifeModifier modifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(pTriggeredPlayer);
}

//____________________________________________________________________________
//
CMoorFiendCard::CMoorFiendCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Moor Fiend"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
COrcishCannoneersCard::COrcishCannoneersCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Orcish Cannoneers"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																				 DamageType::AbilityDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
COrcishLumberjackCard::COrcishLumberjackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Lumberjack"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPaleBearsCard::CPaleBearsCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Pale Bears"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CPygmyAllosaurusCard::CPygmyAllosaurusCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Pygmy Allosaurus"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CShamblingStriderCard::CShamblingStriderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Shambling Strider"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5),
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CSilverErneCard::CSilverErneCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silver Erne"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CStormSpiritCard::CStormSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Storm Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThunderWallCard::CThunderWallCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thunder Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+1), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTorGiantCard::CTorGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tor Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CWallOfLavaCard::CWallOfLavaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Lava"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3),
		RED_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfPineNeedlesCard::CWallOfPineNeedlesCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Wall of Pine Needles"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CZuranEnchanterCard::CZuranEnchanterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zuran Enchanter"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();

	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZuranSpellcasterCard::CZuranSpellcasterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Zuran Spellcaster"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CAdarkarSentinelCard::CAdarkarSentinelCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Adarkar Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("5"), Power(3), Life(3),
		RED_MANA_TEXT, Power(+0), Life(+1))
{
}

//____________________________________________________________________________
//
CWalkingWallCard::CWalkingWallCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Walking Wall"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("4"), Power(0), Life(6),
		_T("3"), Power(+3), Life(-1), CreatureKeyword::DefenderMayAttack)
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CCelestialSwordCard::CCelestialSwordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Celestial Sword"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CCelestialSwordCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(3), Life(3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CCelestialSwordCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sure Sacrifice Effect"), 61064, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CFyndhornBowCard::CFyndhornBowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fyndhorn Bow"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHematiteTalismanCard::CHematiteTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hematite Talisman"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionCost(_T("3"));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLapisLazuliTalismanCard::CLapisLazuliTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lapis Lazuli Talisman"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionCost(_T("3"));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMalachiteTalismanCard::CMalachiteTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Malachite Talisman"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionCost(_T("3"));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNacreTalismanCard::CNacreTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nacre Talisman"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionCost(_T("3"));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COnyxTalismanCard::COnyxTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Onyx Talisman"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionCost(_T("3"));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShieldOfTheAgesCard::CShieldOfTheAgesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shield of the Ages"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("2"),
			Life(1), SourceColor::_AllSources, 
			TRUE)); // prevent damage to this card's controller

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarChariotCard::CWarChariotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("War Chariot"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhaleboneGliderCard::CWhaleboneGliderCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Whalebone Glider"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(4)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCurseOfMaritLageCard::CCurseOfMaritLageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Curse of Marit Lage"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpSpell(
			::CreateObject<CCardKeywordEnchantment>(this,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Island, false)));

		cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFreyaliseSCharmCard::CFreyaliseSCharmCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Freyalise's Charm"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetResolutionCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlaciersCard::CGlaciersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glaciers"), CardType::GlobalEnchantment, nID)
{
	AddUpkeepCost(WHITE_MANA_TEXT BLUE_MANA_TEXT);

	{
		counted_ptr<CCardTypeEnchantment> cpSpell(
			::CreateObject<CCardTypeEnchantment>(this,
				_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Mountain, false),
				CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulKissCard::CSoulKissCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul Kiss"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this, &CSoulKissCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSoulKissCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			BLACK_MANA_TEXT,
			Power(+2), Life(+2), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->AddPayLifeDeltaCost(Life(-1));
	cpEnchantAbility->SetMaxTurnUsageCount(3);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CWingsOfAesthirCard::CWingsOfAesthirCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Wings of Aesthir"), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CFanaticalFeverCard::CFanaticalFeverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fanatical Fever"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+0),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CRallyCard::CRallyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rally"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new BlockingCreatureComparer,
			Power(+1), Life(+1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTrailblazerCard::CTrailblazerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Trailblazer"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Unblockable, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CWarningCard::CWarningCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Warning"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);
}

//____________________________________________________________________________
//
CAltarOfBoneCard::CAltarOfBoneCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Altar of Bone"), CardType::Sorcery, nID,
		WHITE_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CDiabolicVisionCard::CDiabolicVisionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diabolic Vision"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLACK_MANA_TEXT, 5));

	cpSpell->SetDiscard(4, TRUE, MoveType::Others, ZoneId::Library, CardPlacement::Top);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHymnOfRebirthCard::CHymnOfRebirthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hymn of Rebirth"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false), 
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CPestilenceRatsCard::CPestilenceRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pestilence Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Rat), false)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetListenToAllPlayersZones();
	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZuranOrbCard::CZuranOrbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Zuran Orb"), CardType::Artifact, nID,
		_T(""), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+2), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnarchyCard::CAnarchyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Anarchy"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::White, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEssenceFilterCard::CEssenceFilterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Essence Filter"), CardType::Sorcery, nID)
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEssenceFilterCard::OnTargetZoneSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEssenceFilterCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CEssenceFilterCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Destroy all enchantments"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Destroy all nonwhite enchantments"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, this, GetController());
	return false;
}

void CEssenceFilterCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				m_CardFilter1.AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

				CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter1,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

				pModifier1.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));
				return;
			}
			if ((int)it->dwContext == 2)
			{
				m_CardFilter2.AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
				m_CardFilter2.AddNegateComparer(new CardTypeComparer(CardType::White, false));
        
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter2,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

				pModifier2.ApplyTo(GetController());
				pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));
				return;
			}
		return;
		}
}

//____________________________________________________________________________
//
CYavimayaGnatsCard::CYavimayaGnatsCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Yavimaya Gnats"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(1),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CEarthlinkCard::CEarthlinkCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Earthlink"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(_T("2"));

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKjeldoranFrostbeastCard::CKjeldoranFrostbeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Frostbeast"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	//Needs an oracle function update: "At end of combat, destroy all creatures blocking or blocked by Kjeldoran Frostbeast." To fix it a BlockedByThisCreatureComparer need to be created.
	//Previous rules text: "Whenever Kjeldoran Frostbeast blocks or becomes blocked by a creature, destroy that creature at end of combat."
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

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranFrostbeastCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CKjeldoranFrostbeastCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CRunedArchCard::CRunedArchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Runed Arch"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStuntedGrowthCard::CStuntedGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stunted Growth"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			3, MoveType::Others, ZoneId::Library, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWoollySpiderCard::CWoollySpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woolly Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWoollySpiderCard::SetTriggerContext));

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWoollySpiderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CMeteorShowerCard::CMeteorShowerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Meteor Shower"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-1),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CElementalAuguryCard::CElementalAuguryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elemental Augury"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("3"),
			3));

	cpAbility->SetReorder(TRUE, ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrovikanElementalistCard::CKrovikanElementalistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krovikan Elementalist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKrovikanElementalistCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") RED_MANA_TEXT,
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		AddAbility(cpAbility.GetPointer());
	}
}

void CKrovikanElementalistCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CGrizzledWolverineCard::CGrizzledWolverineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grizzled Wolverine"), CardType::Creature, CREATURE_TYPE(Wolverine), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::BlockEventCallback,
									&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->SetResolutionCost(RED_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAegisOfTheMeekCard::CAegisOfTheMeekCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aegis of the Meek"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(1), Life(2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::equal_to<int>>(1)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureLifeComparer<std::equal_to<int>>(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CDespoticScepterCard::CDespoticScepterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Despotic Scepter"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardOwnerComparer(this),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLimDulsCohortCard::CLimDulsCohortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lim-Dul's Cohort"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantRegenerate);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLimDulsCohortCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CLimDulsCohortCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CLostOrderOfJarkeldCard::CLostOrderOfJarkeldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lost Order of Jarkeld"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Creature, false))); //"creatures"

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrcishHealerCard::COrcishHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Healer"), CardType::Creature, CREATURE_TYPE2(Orc, Cleric), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::CantRegenerate, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Black | CardType::Green, false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Black | CardType::Green, false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkeletonShipCard::CSkeletonShipCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skeleton Ship"), CardType::_LegendaryCreature, CREATURE_TYPE(Skeleton), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("-1/-1"), +1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkeletonShipCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSkeletonShipCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkeletonShipCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CSkeletonShipCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CSnowFortressCard::CSnowFortressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snow Fortress"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("5"), Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(+0), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3"),
				new TrueCardComparer, false, new CSnowFortressTargeting));
		ATLASSERT(cpAbility);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSnowFortressCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSnowFortressCard::CSnowFortressTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CSnowFortressCard::CSnowFortressTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (pCreature->GetCreatureKeyword()->Flying()) return FALSE;
	
	if (pCreature->GetAttackedPlayer() != GetSourceCard()->GetController()) return FALSE;

	return TRUE;
}

bool CSnowFortressCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CDwarvenArmoryCard::CDwarvenArmoryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dwarven Armory"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+2/+2"), +1));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, FALSE); //any upkeep step

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEarthloreCard::CEarthloreCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Earthlore"), CardType::EnchantLand, nID,
		GREEN_MANA_TEXT,
		new CardTypeComparer(CardType::_Land, false))
	, m_CardFilter(new EnchantedByComparer(this))
{
	m_pEnchantSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CEarthloreCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CEarthloreCard::CanPlay(BOOL bIncludeTricks)
{
	return m_pEnchantSpell->GetEnchantedOnCard()->GetOrientation()->IsUntapped();
}

//____________________________________________________________________________
//
CForbiddenLoreCard::CForbiddenLoreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forbidden Lore"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CForbiddenLoreCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CForbiddenLoreCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(+2), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CHotSpringsCard::CHotSpringsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hot Springs"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CHotSpringsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CHotSpringsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattleFrenzyCard::CBattleFrenzyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Battle Frenzy"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

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
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Green, false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFieryJusticeCard::CFieryJusticeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fiery Justice"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-5),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinSappersCard::CGoblinSappersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Sappers"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGoblinSappersCard::OnResolutionCompleted1))
		, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGoblinSappersCard::OnResolutionCompleted2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CGoblinSappersCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

void CGoblinSappersCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBalduvianHydraCard::CBalduvianHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBalduvianHydraCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				_T(""),
				Life(1),
				SourceColor::Null, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+0")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		cpAbility->SetAbilityText(_T("Put a +1/+0 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+0"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

void CBalduvianHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+0"), +nColorCount);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CIcebergCard::CIcebergCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Iceberg"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CIcebergCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->SetAbilityText(_T("Put an ice counters on"));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(ICE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(ICE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CIcebergCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = GetLastCastingExtraValue();

		CCardCounterModifier modifier(ICE_COUNTER, nCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSnowCoveredForestCard::CSnowCoveredForestCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Snow-Covered Forest"), uID, GREEN_MANA_TEXT, CardType::Forest | CardType::BasicLand | CardType::Snow)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CSnowCoveredIslandCard::CSnowCoveredIslandCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Snow-Covered Island"), uID, BLUE_MANA_TEXT, CardType::Island | CardType::BasicLand | CardType::Snow)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CSnowCoveredMountainCard::CSnowCoveredMountainCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Snow-Covered Mountain"), uID, RED_MANA_TEXT, CardType::Mountain | CardType::BasicLand | CardType::Snow)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CSnowCoveredPlainsCard::CSnowCoveredPlainsCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Snow-Covered Plains"), uID, WHITE_MANA_TEXT, CardType::Plains | CardType::BasicLand | CardType::Snow)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CSnowCoveredSwampCard::CSnowCoveredSwampCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Snow-Covered Swamp"), uID, BLACK_MANA_TEXT, CardType::Swamp | CardType::BasicLand | CardType::Snow)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CDriftOfTheDeadCard::CDriftOfTheDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drift of the Dead"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") BLACK_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Snow, false)));

		cpAbility->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinSkiPatrolCard::CGoblinSkiPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Ski Patrol"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGoblinSkiPatrolCard::OnResolutionCompleted))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow | CardType::Mountain, true));

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") RED_MANA_TEXT,
			Power(+2), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetMaxTurnUsageCount(1);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CGoblinSkiPatrolCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CGoblinSkiPatrolCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

void CGoblinSkiPatrolCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sure Sacrifice Effect"), 61064, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CKarplusanGiantCard::CKarplusanGiantCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Karplusan Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("6") RED_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+1), Life(+1))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	m_pPumpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
CWoollyMammothsCard::CWoollyMammothsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woolly Mammoths"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Snow, false));
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunstoneCard::CSunstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sunstone"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T("2"),
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGlacialCrevassesCard::CGlacialCrevassesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glacial Crevasses"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow | CardType::Mountain, true));

	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""),
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHallowedGroundCard::CHallowedGroundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hallowed Ground"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Snow, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMeltingCard::CMeltingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Melting"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardTypeEnchantment> cpSpell(
		::CreateObject<CCardTypeEnchantment>(this,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Null, CardType::Snow));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWhiteoutCard::CWhiteoutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whiteout"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT, 
				new AnyCreatureComparer,
				Power(+0), Life(+0)));	// power delta, life delta

		cpSpell->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpSpell->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetGraveyardOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvalancheCard::CAvalancheCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Avalanche"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Snow, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
}

//____________________________________________________________________________
//
CPykniteCard::CPykniteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pyknite"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
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
CClairvoyanceCard::CClairvoyanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Clairvoyance"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 
			0, MoveType::Others, ZoneId::Null, FALSE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CForceVoidCard::CForceVoidCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Force Void"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));

	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CGravebindCard::CGravebindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gravebind"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantRegenerate, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInfuseCard::CInfuseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Infuse"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			FALSE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLightningBlowCard::CLightningBlowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lightning Blow"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRayOfErasureCard::CRayOfErasureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ray of Erasure"), CardType::Instant, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			1));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlackScarabCard::CBlackScarabCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Black Scarab"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-black creature"), _T("non-black creatures"), new NegateCardComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by black creatures

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBlackScarabCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CBlackScarabCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Black, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(2));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlueScarabCard::CBlueScarabCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Blue Scarab"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-blue creature"), _T("non-blue creatures"), new NegateCardComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by blue creatures

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBlueScarabCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CBlueScarabCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Blue, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(2));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEssenceFlareCard::CEssenceFlareCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Essence Flare"), nID,
		BLUE_MANA_TEXT,
		Power(+2), Life(+0))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CEssenceFlareCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CEssenceFlareCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-0/-1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreenScarabCard::CGreenScarabCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Green Scarab"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-green creature"), _T("non-green creatures"), new NegateCardComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by green creatures

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CGreenScarabCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CGreenScarabCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Green, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(2));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRedScarabCard::CRedScarabCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Red Scarab"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-red creature"), _T("non-red creatures"), new NegateCardComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by red creatures

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRedScarabCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CRedScarabCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Red, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(2));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhiteScarabCard::CWhiteScarabCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("White Scarab"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-white creature"), _T("non-white creatures"), new NegateCardComparer(new CardTypeComparer(CardType::White | CardType::Creature, true)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by white creatures

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CWhiteScarabCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CWhiteScarabCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::White, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(2));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAggressionCard::CAggressionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Aggression"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::FirstStrike | CreatureKeyword::Trample)
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAggressionCard::SetTriggerContext));
	
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CAggressionCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pChgPwrTghAttrEnchant->GetEnchantedOnCard())
		return false;

	if (pToNode->GetGraph()->GetPlayer() != m_pChgPwrTghAttrEnchant->GetEnchantedOnCard()->GetController())
		return false;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(m_pChgPwrTghAttrEnchant->GetEnchantedOnCard());
	if (!pCreature) return false;

	if (pCreature->AttackedThisTurn()) return false;

	triggerContext.m_pCard = m_pChgPwrTghAttrEnchant->GetEnchantedOnCard();

	return true;
}

//____________________________________________________________________________
//
CArcumsWeathervaneCard::CArcumsWeathervaneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arcum's Weathervane"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Snow, false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

		cpAbility->AddTapCost();

		cpAbility->AddCardTypeToSelection(CardType::Snow, CardType::Null, FALSE, _T("nonsnow land"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::BasicLand, false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Snow, false));

		cpAbility->AddTapCost();

		cpAbility->AddCardTypeToSelection(CardType::Null, CardType::Snow, FALSE, _T("snow basic land"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFumaroleCard::CFumaroleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fumarole"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->AddPayLifeDeltaCost(Life(-3));

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

//____________________________________________________________________________
//
CFylgjaCard::CFylgjaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fylgja"), CardType::EnchantCreature, nID)
{
	GetCounterContainer()->ScheduleCounter(HEALING_COUNTER, 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				WHITE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CFylgjaCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(HEALING_COUNTER), +1);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CFylgjaCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpEnchantAbility( 
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(pEnchantedCard, 
			_T(""),
			Life(1),
			SourceColor::Null, FALSE));

	cpEnchantAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(HEALING_COUNTER), -1);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcumsSleighCard::CArcumsSleighCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arcum's Sleigh"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Vigilance, CreatureKeyword::Null,
			true,
			PreventableType::NotPreventable));
		
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CArcumsSleighCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CArcumsSleighCard::CanPlay(BOOL bIncludeTricks)
{
	CCardFilter cfilter(new CardTypeComparer(CardType::Snow, false));
	cfilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	if (cfilter.CountIncluded(GetGame()->GetNextPlayer(GetGame()->GetActivePlayer())->GetZoneById(ZoneId::Battlefield)->GetCardContainer())  == 0)
		return FALSE;

	CNode* pCurrentNode = GetGame()->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

//____________________________________________________________________________
//
CGoblinMutantCard::CGoblinMutantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Mutant"), CardType::Creature, CREATURE_TYPE2(Goblin, Mutant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
	m_CardFilter1.AddComparer(new CreaturePowerComparer<std::less<int>>(3));

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE, &m_CardFilter1);

	{
		m_CardFilter.AddComparer(new UntappedComparer);
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(2));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CGoblinMutantCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CGoblinMutantCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CSnowHoundCard::CSnowHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snow Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Blue, false));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMistfolkCard::CMistfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mistfolk"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));

	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcticFoxesCard::CArcticFoxesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arctic Foxes"), CardType::Creature, CREATURE_TYPE(Fox), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcticFoxesCard::SetTriggerContext1));
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
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcticFoxesCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcticFoxesCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcticFoxesCard::SetTriggerContext4));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("creatures with power less than 2")));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcticFoxesCard::SetTriggerContext5));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcticFoxesCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int n = 0;

	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	return n > 0;
}

bool CArcticFoxesCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int n = 0;

	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	return (n == 1 &&  m_CardFilter.IsCardIncluded(pCard));
}

bool CArcticFoxesCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int n = 0;

	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	return (n == 0 &&  m_CardFilter.IsCardIncluded(pCard));
}

bool CArcticFoxesCard::SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CardType fromCardType, CardType toCardType) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int n = 0;

	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	return n > 0;
}

bool CArcticFoxesCard::SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CardType fromCardType, CardType toCardType) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int n = 0;

	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	return (n == 0 &&  m_CardFilter.IsCardIncluded(pCard));
}

//____________________________________________________________________________
//
CIcequakeCard::CIcequakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Icequake"), CardType::Sorcery, nID)
{
	{
		//Destroy target non-snow land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Snow, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target snow land and deal damage on resolution.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Snow, false));

		cpSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
													   DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThermokarstCard::CThermokarstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thermokarst"), CardType::Sorcery, nID)
{
	{
		//Destroy target non-snow land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Snow, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target snow land and gain life on resolution.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Snow, false));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIllusionsOfGrandeurCard::CIllusionsOfGrandeurCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Illusions of Grandeur"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CIllusionsOfGrandeurCard::OnCounterMoved))
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
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+20));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-20));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}
void CIllusionsOfGrandeurCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CGlacialChasmCard::CGlacialChasmCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Glacial Chasm"), nID, CardType::NonbasicLand)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CGlacialChasmCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
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
		//Creatures you control can't attack
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantAttack));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Prevent all damage
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::PreventDamage, 262144));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
void CGlacialChasmCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetPayLifeResolutionCost(Life(0)); 
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetPayLifeResolutionCost(Life(-2*n_value));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CIllusionaryForcesCard::CIllusionaryForcesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusionary Forces"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(4))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CIllusionaryForcesCard::OnCounterMoved))
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
}
void CIllusionaryForcesCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Blue, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CIllusionaryWallCard::CIllusionaryWallCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusionary Wall"), CardType::Creature, CREATURE_TYPE2(Illusion, Wall), nID,
		_T("4") BLUE_MANA_TEXT, Power(7), Life(4))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CIllusionaryWallCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddDefender(FALSE);
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
void CIllusionaryWallCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Blue, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CSoldeviSimulacrumCard::CSoldeviSimulacrumCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Soldevi Simulacrum"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("4"), Power(2), Life(4),
		_T("1"), Power(+1), Life(+0))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CSoldeviSimulacrumCard::OnCounterMoved))
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
}
void CSoldeviSimulacrumCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CFlowOfMaggotsCard::CFlowOfMaggotsCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Flow of Maggots"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		CCardFilter::GetFilter(_T("Walls"))) //can't be blocked except by "this"
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CFlowOfMaggotsCard::OnCounterMoved))
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
}
void CFlowOfMaggotsCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CFyndhornPollenCard::CFyndhornPollenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fyndhorn Pollen"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CFyndhornPollenCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(-1), Life(0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1") GREEN_MANA_TEXT,
				Power(-1), Life(+0),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

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
void CFyndhornPollenCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CColdSnapCard::CColdSnapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cold Snap"), CardType::GlobalEnchantment, nID,
		_T("2")	WHITE_MANA_TEXT, AbilityType::Enchantment)
		, m_CardFilter(_T("a Snow land"), _T("snow lands"), new CardTypeComparer(CardType::_SnowLand, false))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CColdSnapCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
			cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, 
				&CColdSnapCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetAbilityName(_T("damage ability"));

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
void CColdSnapCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

bool CColdSnapCard::BeforeResolution(CColdSnapCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(
		m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CMesmericTranceCard::CMesmericTranceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mesmeric Trance"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CMesmericTranceCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			BLUE_MANA_TEXT, 1));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

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
void CMesmericTranceCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CMysticMightCard::CMysticMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mystic Might"), CardType::EnchantLand, nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CMysticMightCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CMysticMightCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
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
counted_ptr<CAbility> CMysticMightCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}


void CMysticMightCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	mCost.AddCost(CManaCost::Color::Blue, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CArnjlotsAscentCard::CArnjlotsAscentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arnjlot's Ascent"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CArnjlotsAscentCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

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
void CArnjlotsAscentCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Blue, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CMaddeningWindCard::CMaddeningWindCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Maddening Wind"), CardType::EnchantCreature, nID,
		_T("2") GREEN_MANA_TEXT,
		new AnyCreatureComparer)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CMaddeningWindCard::OnCounterMoved))
{	
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(GetInstanceID());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaddeningWindCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetAbilityName(_T("cumulative upkeep ability"));
		
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::Add(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CMaddeningWindCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

void CMaddeningWindCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Green, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Green, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CBrownOupheCard::CBrownOupheCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brown Ouphe"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
		counted_ptr<CActivatedAbility<CCounterAbilitySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterAbilitySpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("artifact cards")), TRUE, FALSE));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CStonehandsCard::CStonehandsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Stonehands"), nID, 
		_T("2") RED_MANA_TEXT,
		Power(+0), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStonehandsCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CStonehandsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpectralShieldCard::CSpectralShieldCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Spectral Shield"), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+2))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant | CardType::_Enchantment, false)))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter);
}

//____________________________________________________________________________
//
CAshenGhoulCard::CAshenGhoulCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ashen Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshenGhoulCard::SetTriggerContext));
	cpAbility->SetResolutionCost(BLACK_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}

bool CAshenGhoulCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	unsigned int nCreatures = 0;

	if (GetZoneId() != ZoneId::Graveyard) return false;
	for (int i = GetZone()->GetSize() - 1; i >= 0; --i)
	{
		if (GetZone()->GetAt(i) == this) break;
		if (GetZone()->GetAt(i)->GetCardType().IsCreature()) ++nCreatures;
	}
	if (nCreatures < 3) return false;

	return true;
}

//____________________________________________________________________________
//
CRimeDryadCard::CRimeDryadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rime Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Forest, false));

	GetCreatureKeyword()->AddNonBasicWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CLegionsOfLimDulCard::CLegionsOfLimDulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Legions of Lim-Dûl"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Swamp, false));

	GetCreatureKeyword()->AddNonBasicWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CStaffOfTheAgesCard::CStaffOfTheAgesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Ages"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Alltypewalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarbarianGuidesCard::CBarbarianGuidesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian Guides"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
		, m_LandwalkSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBarbarianGuidesCard::OnLandwalkSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBarbarianGuidesCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBarbarianGuidesCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Desert"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Forest"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("Gate"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("Island"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("Lair"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 6;
		selectionEntry.strText.Format(_T("Locus"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 7;
		selectionEntry.strText.Format(_T("Mine"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 8;
		selectionEntry.strText.Format(_T("Mountain"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 9;
		selectionEntry.strText.Format(_T("Plains"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 10;
		selectionEntry.strText.Format(_T("Power-Plant"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 11;
		selectionEntry.strText.Format(_T("Swamp"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 12;
		selectionEntry.strText.Format(_T("Tower"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 13;
		selectionEntry.strText.Format(_T("Urza's"));

		entries.push_back(selectionEntry);
	}
	m_LandwalkSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pAction->GetAssociatedCard());
	return true;
}

void CBarbarianGuidesCard::OnLandwalkSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects Desert"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Desert, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Forest"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Forest, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Gate"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Gate, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 4)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Island"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Island, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Lair"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Lair, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 6)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Locus"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Locus, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 7)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Mine"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Mine, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}

			if ((int)it->dwContext == 8)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Mountain"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Mountain, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 9)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Plains"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Plains, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 10)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Power-Plant"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::PowerPlant, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 11)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Swamp"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Swamp, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 12)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Tower"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Tower, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 13)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Urza's"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier1->GetModifier().SetOneTurnOnly(FALSE);

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Urzas, true));
				pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
				
				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

				CCountedCardContainer pSubjects;
				if (pTarget->IsInplay())
					pSubjects.AddCard(pTarget, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);

				pModifier1->ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CWordOfUndoingCard::CWordOfUndoingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Word of Undoing"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWordOfUndoingCard::BeforeResolution));
}

bool CWordOfUndoingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EnchantedOnComparer(pCard));
	cfilter.AddComparer(new CardTypeComparer(CardType::White, false));
	cfilter.AddComparer(new CardTypeComparer(CardType::_Aura, false));
	cfilter.AddComparer(new CardOwnerComparer(pAction->GetController()));

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
CFreyaliseSupplicantCard::CFreyaliseSupplicantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Freyalise Supplicant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red | CardType::White, false));

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			true,
			Life(-0),
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFreyaliseSupplicantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFreyaliseSupplicantCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -GET_INTEGER(pCreature->GetLastKnownPower())/2;

	if (pAction->GetAssociatedPlayer())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	
	if (pAction->GetAssociatedCard())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CTinderWallCard::CTinderWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tinder Wall"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(false);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AttackingThisCreatureComparer(this),
				false, 
				Life(-2),
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinSnowmanCard::CGoblinSnowmanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Snowman"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CreatureKeyword::DealNoCombatDamage);
			pModifier1->GetModifier().SetOneTurnOnly(true);
		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CreatureKeyword::PreventAllCombatDamage);
			pModifier2->GetModifier().SetOneTurnOnly(true);

		cpAbility->GetCreatureModifiers().Add(pModifier1);
		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingThisCreatureComparer(this),
				false, 
				Life(-1),
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDanceOfTheDeadCard::CDanceOfTheDeadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dance of the Dead"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CEnchantDeadCreature> cpSpell(
			::CreateObject<CEnchantDeadCreature>(this,
				_T("1") BLACK_MANA_TEXT,
				Power(+1), Life(+1),
				true));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Exile, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDanceOfTheDeadCard::SetTriggerContext0));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDanceOfTheDeadCard::SetTriggerContext1));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionCost(_T("1") BLACK_MANA_TEXT);
		cpAbility->SetAbilityName(_T("untap ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDanceOfTheDeadCard::SetTriggerContext0(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetByPlayer(pCard->GetController());

	return true;
}

bool CDanceOfTheDeadCard::SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (pToNode->GetGraph()->GetPlayer() != pCard->GetController())	return false;

	triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CChaosLordCard::CChaosLordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chaos Lord"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CChaosLordCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddFirstStrike(false);
	GetCreatureKeyword()->AddHasteCombat(false);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->GetTriggeredPlayerModifiers().Add(new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	cpAbility->SetAbilityName(_T("gain control ability"));
	//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChaosLordCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChaosLordCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

/* bool CChaosLordCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	int nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCards += CCardFilter::GetFilter(_T("cards"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return nCards % 2 == 0;
} */

bool CChaosLordCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCards += CCardFilter::GetFilter(_T("cards"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return nCards % 2 == 0;
}

void CChaosLordCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		// Remove haste-like combat ability the turn it comes into play
		CCreatureKeywordModifier modifier = CCreatureKeywordModifier(CreatureKeyword::HasteCombat, false);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSongsOfTheDamnedCard::CSongsOfTheDamnedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Songs of the Damned"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSongsOfTheDamnedCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSongsOfTheDamnedCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n>0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CPolarKrakenCard::CPolarKrakenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Polar Kraken"), CardType::Creature, CREATURE_TYPE(Kraken), nID,
		_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(11), Life(11))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CPolarKrakenCard::OnCounterMoved))
{
	SetIntoPlayTapped();
	GetCreatureKeyword()->AddTrample(FALSE);

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
}

void CPolarKrakenCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetSacrificeResolutionCost(0, CCardFilter::GetFilter(_T("lands")));
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetSacrificeResolutionCost(n_value, CCardFilter::GetFilter(_T("lands")));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CLandCapCard::CLandCapCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Land Cap"), nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new SpecificCardComparer(this)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DEPLETION_COUNTER, 0));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEPLETION_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLavaTubesCard::CLavaTubesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lava Tubes"), nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new SpecificCardComparer(this)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DEPLETION_COUNTER, 0));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEPLETION_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiverDeltaCard::CRiverDeltaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("River Delta"), nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new SpecificCardComparer(this)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DEPLETION_COUNTER, 0));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEPLETION_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTimberlineRidgeCard::CTimberlineRidgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Timberline Ridge"), nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new SpecificCardComparer(this)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DEPLETION_COUNTER, 0));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEPLETION_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVeldtCard::CVeldtCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lava Tubes"), nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new SpecificCardComparer(this)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DEPLETION_COUNTER, 0));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEPLETION_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(DEPLETION_COUNTER, +1));

		cpAbility->SetAbilityName(_T("Put a depletion counter on"));
		cpAbility->SetAbilityText(_T("Put a depletion counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGangrenousZombiesCard::CGangrenousZombiesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gangrenous Zombies"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(+0),	// life delta
			new AnyCreatureComparer, 
			TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGangrenousZombiesCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGangrenousZombiesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);
	ContextValue Context(pAction->GetValue());

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Snow | CardType::Swamp, true));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0)
		Context.nValue1 = -2;
	else
		Context.nValue1 = -1;

	pAction->SetValue(Context);

	return true;
}
//____________________________________________________________________________
//
CMartonStromgaldCard::CMartonStromgaldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marton Stromgald"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility1::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CMartonStromgaldCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility2::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new BlockingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CMartonStromgaldCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMartonStromgaldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const
{
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter = CCardFilter(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	int nCount = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCount += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CMartonStromgaldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const
{
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter = CCardFilter(new BlockingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	int nCount = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCount += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}
//____________________________________________________________________________
//
CGoblinLyreCard::CGoblinLyreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Lyre"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinLyreCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinLyreCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGoblinLyreCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
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
		CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));
		int nCreatureCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());
		if (nCreatureCount > 0)
		{
			CLifeModifier* pModifier = new CLifeModifier(Life(-nCreatureCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier->ApplyTo(pController);
		}
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
		CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));
		int nCreatureCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());
		if (nCreatureCount > 0)
		{
			CLifeModifier* pModifier = new CLifeModifier(Life(-nCreatureCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier->ApplyTo(pTarget);
		}
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}
	return true;
}

void CGoblinLyreCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CZone* pBattlefield = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));
				int nCreatureCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());
				if (nCreatureCount > 0)
				{
					CLifeModifier* pModifier = new CLifeModifier(Life(-nCreatureCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
					pModifier->ApplyTo((CPlayer*)dwContext1);
				}
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
				CZone* pBattlefield = ((CPlayer*)dwContext1)->GetZoneById(ZoneId::Battlefield);
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));
				int nCreatureCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());
				if (nCreatureCount > 0)
				{
					CLifeModifier* pModifier = new CLifeModifier(Life(-nCreatureCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
					pModifier->ApplyTo(pSelectionPlayer);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CBlizzardCard::CBlizzardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blizzard"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
				CounterMovedEventSource::Listener::EventCallback(this, &CBlizzardCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(
					this, &CBlizzardCard::CanPlay)));

		this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				Power(0), Life(0)));

		cpAbility->SetListenToKeyword();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpAbility.GetPointer());
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
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

BOOL CBlizzardCard::CanPlay(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;

}

void CBlizzardCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CIllusionaryPresenceCard::CIllusionaryPresenceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Illusionary Presence"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CIllusionaryPresenceCard::OnCounterMoved))
		, m_LandwalkSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIllusionaryPresenceCard::OnLandwalkSelected))
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

		cpAbility->SetAbilityName(_T("Cumulative upkeep ability"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				

		cpAbility->SetAbilityName(_T("Landwalk ability"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIllusionaryPresenceCard::BeforeResolution));
		
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

void CIllusionaryPresenceCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Blue, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

bool CIllusionaryPresenceCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Desert"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Forest"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("Gate"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("Island"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("Lair"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 6;
		selectionEntry.strText.Format(_T("Locus"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 7;
		selectionEntry.strText.Format(_T("Mine"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 8;
		selectionEntry.strText.Format(_T("Mountain"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 9;
		selectionEntry.strText.Format(_T("Plains"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 10;
		selectionEntry.strText.Format(_T("Power-Plant"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 11;
		selectionEntry.strText.Format(_T("Swamp"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 12;
		selectionEntry.strText.Format(_T("Tower"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 13;
		selectionEntry.strText.Format(_T("Urza's"));

		entries.push_back(selectionEntry);
	}
	m_LandwalkSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CIllusionaryPresenceCard::OnLandwalkSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects Desert"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Deserts")));
				
				pModifier->ApplyTo(this);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Forest"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Forestwalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				
				pModifier->ApplyTo(this);
					
				return;
			}

			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Gate"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Gates")));
				
				pModifier->ApplyTo(this);

				return;
			}
			
			if ((int)it->dwContext == 4)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Island"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Islandwalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				
				pModifier->ApplyTo(this);
					
				return;
			}

			if ((int)it->dwContext == 5)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Lair"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Lairs")));
				
				pModifier->ApplyTo(this);

				return;
			}

			if ((int)it->dwContext == 6)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Locus"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Loci")));
				
				pModifier->ApplyTo(this);

				return;
			}

			if ((int)it->dwContext == 7)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Mine"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Mines")));
				
				pModifier->ApplyTo(this);

				return;
			}

			if ((int)it->dwContext == 8)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Mountain"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Mountainwalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				
				pModifier->ApplyTo(this);
					
				return;
			}

			if ((int)it->dwContext == 9)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Plains"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Plainswalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				
				pModifier->ApplyTo(this);
					
				return;
			}

			if ((int)it->dwContext == 10)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Power-Plant"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Power-Plants")));
				
				pModifier->ApplyTo(this);

				return;
			}

			if ((int)it->dwContext == 11)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Swamp"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Swampwalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				
				pModifier->ApplyTo(this);
					
				return;
			}

			if ((int)it->dwContext == 12)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Tower"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Towers")));
				
				pModifier->ApplyTo(this);

				return;
			}

			if ((int)it->dwContext == 13)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects Urza's"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
				pModifier->GetModifier().SetOneTurnOnly(FALSE);
				pModifier->GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Urza's lands")));
				
				pModifier->ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CMysticRemoraCard::CMysticRemoraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mystic Remora"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CMysticRemoraCard::OnCounterMoved))
	, m_DrawSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMysticRemoraCard::OnDrawSelected))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

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
			TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->AddAbilityTag(AbilityTag::MoveCard);
		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("4"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMysticRemoraCard::BeforeResolution));

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
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CMysticRemoraCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't draw a card"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Draw a card"));

		entries.push_back(selectionEntry);
	}
	m_DrawSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CMysticRemoraCard::OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't draw a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s draws a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

void CMysticRemoraCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, ((n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CGiantTrapDoorSpiderCard::CGiantTrapDoorSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Trap Door Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
			new TrueCardComparer, false, new CGiantTrapDoorSpiderTargeting));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantTrapDoorSpiderCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

BOOL CGiantTrapDoorSpiderCard::CGiantTrapDoorSpiderTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CGiantTrapDoorSpiderCard::CGiantTrapDoorSpiderTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (pCreature->GetCreatureKeyword()->Flying()) return FALSE;
	
	if (pCreature->GetAttackedPlayer() != GetSourceCard()->GetController()) return FALSE;

	return TRUE;
}

bool CGiantTrapDoorSpiderCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(this);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
COrcishLibrarianCard::COrcishLibrarianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Librarian"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			RED_MANA_TEXT,
			4));

	cpAbility->SetReorder(TRUE, ZoneId::Library);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrcishLibrarianCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool COrcishLibrarianCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int nCards;
	if (pLibrary->GetSize() < 8)
		nCards = pLibrary->GetSize();
	else
		nCards = 8;

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, nCards , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.ApplyTo(pController);

	CCountedCardContainer pTopCards;
	pTopCards.RemoveAll();

	for (int i = 1; i <= nCards; i++)
		pTopCards.AddCard(pLibrary->GetAt(pLibrary->GetSize() - i), CardPlacement::Top);
		
	pTopCards.Shuffle(pController);

	int nToExile;
	if (nCards > 4)
		nToExile = 4;
	else
		nToExile = nCards;

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);
	
	for (int i = 0; i < nToExile; i++)
		pModifier2.ApplyTo(pTopCards.GetAt(i));
	
	return nCards > 4;
}

//____________________________________________________________________________
//
CDemonicConsultationCard::CDemonicConsultationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Demonic Consultation"), CardType::Instant, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDemonicConsultationCard::OnNameSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDemonicConsultationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDemonicConsultationCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nZoneCount = pController->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pController->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken() && !pCard->GetCardType().IsLand())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CDemonicConsultationCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects no name"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 6, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(6), MaximumValue(6), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);

				int nLibrarySize = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize();

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.AddSelection(MinimumValue(nLibrarySize), MaximumValue(nLibrarySize), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s names %s"), pSelectionPlayer->GetPlayerName(), pSelected->GetPrintedCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 6, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(6), MaximumValue(6), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);

				int n = 0;
				bool bSearch = true;
				CCard* pFound;
				
				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
				{		
					if (!bSearch)
						break;
					else
					{
						++n;
						if (pLibrary->GetAt(i)->GetPrintedCardName() == pSelected->GetPrintedCardName())
						{
							bSearch = false;
							pFound = pLibrary->GetAt(i);
						}
					}
				}

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new SpecificCardComparer(pFound));

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter, // any cards
						ZoneId::Hand, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on top
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier2.SetReorderInformation(true, ZoneId::Exile);
		
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CBurntOfferingCard::CBurntOfferingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burnt Offering"), CardType::Instant, nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CBurntOfferingCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBurntOfferingCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBurntOfferingCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);

	int n = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal(); //uses the real converted mana cost

	if (n > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= n; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == 0)
				selectionEntry.strText.Format(_T("%d red mana"), n);
			else if (i == n)
				selectionEntry.strText.Format(_T("%d black mana"), n);
			else
				selectionEntry.strText.Format(_T("%d black mana, %d red mana"), i, n - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), n);
	}
	return true;
}

void CBurntOfferingCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CBalduvianConjurerCard::CBalduvianConjurerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Conjurer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Snow, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBalduvianConjurerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CBalduvianConjurerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land B"), 64008, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CNorrittCard::CNorrittCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norritt"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::Blue | CardType::Creature, true)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false, new CNorrittTargeting));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNorrittCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNorrittCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNorrittCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep);
}

bool CNorrittCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::MustAttack, TRUE);
	pModifier1.ApplyTo(pTarget);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Destroy Pacifists Effect"), 61075, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

BOOL CNorrittCard::CNorrittTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CNorrittCard::CNorrittTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (!pCard->GetCardType().IsCreature()) return FALSE;
	if (pCard->GetCardKeyword()->HasChangeling()) return FALSE;
	if (((CCreatureCard*)pCard)->GetCreatureType().HasType(SingleCreatureType::Wall)) return FALSE;
	if (pCard->GetController() != GetSourceCard()->GetGame()->GetActivePlayer()) return FALSE;
	
	int nTurnInControl = pCard->GetControllerTurnChanged();
	if (nTurnInControl < 0)	return FALSE;
	if (nTurnInControl >= pCard->GetController()->GetPlayerTurnNumber()) return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/*
CBattleCryCard::CBattleCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Battle Cry"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CBattleCryCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalUntapSpell> cpSpell(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::White | CardType::Creature, true)));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CBattleCryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Battle Cry Effect"), 61096, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}
*/
//____________________________________________________________________________
//
CKjeldoranEliteGuardCard::CKjeldoranEliteGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Elite Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKjeldoranEliteGuardCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CKjeldoranEliteGuardCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CKjeldoranEliteGuardCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

void CKjeldoranEliteGuardCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Kjeldoran Elite Guard Effect"), 61098, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CKjeldoranGuardCard::CKjeldoranGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKjeldoranGuardCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CKjeldoranGuardCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CKjeldoranGuardCard::CanPlay(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if ((pPlayer != GetGame()->GetActivePlayer()) && (m_CardFilter.CountIncluded(pPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0))
			return false;
	}

	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

void CKjeldoranGuardCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Kjeldoran Guard Effect"), 61099, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPhantasmalMountCard::CPhantasmalMountCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantasmal Mount"), CardType::Creature, CREATURE_TYPE2(Illusion, Horse), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPhantasmalMountCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureToughnessComparer<std::less_equal<int>>(2));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CPhantasmalMountCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Phantasmal Mount Effect"), 61100, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//