#include "stdafx.h"
#include "CardMirage.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName,
								StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		DEFINE_CARD(CAcidicDaggerCard);
		DEFINE_CARD(CAfiyaGroveCard);
		DEFINE_CARD(CAfterlifeCard);
		DEFINE_CARD(CAgilityCard);
		DEFINE_CARD(CAlarumCard);
		DEFINE_CARD(CAleatoryCard);
		DEFINE_CARD(CAmuletOfUnmakingCard);
		DEFINE_CARD(CArmorerGuildmageCard);
		DEFINE_CARD(CAsmiraHolyAvengerCard);
		DEFINE_CARD(CAuspiciousAncestorCard);
		DEFINE_CARD(CAzimaetDrakeCard);
		DEFINE_CARD(CBadRiverCard);
		DEFINE_CARD(CBarbedBackWurmCard);
		DEFINE_CARD(CBasaltGolemCard);
		DEFINE_CARD(CBayFalconCard);
		DEFINE_CARD(CBazaarOfWondersCard);
		DEFINE_CARD(CBenthicDjinnCard);
		DEFINE_CARD(CBindingAgonyCard);
		DEFINE_CARD(CBlindingLightCard);
		DEFINE_CARD(CBlisteringBarrierCard);
		DEFINE_CARD(CBoneHarvestCard);
		DEFINE_CARD(CBreathstealerCard);
		DEFINE_CARD(CBrushwaggCard);
		DEFINE_CARD(CBurningPalmEfreetCard);
		DEFINE_CARD(CBurningShieldAskariCard);
		DEFINE_CARD(CCadaverousBloomCard);
		DEFINE_CARD(CCadaverousKnightCard);
		DEFINE_CARD(CCanopyDragonCard);
		DEFINE_CARD(CCarrionCard);
		DEFINE_CARD(CCatacombDragonCard);
		DEFINE_CARD(CCeruleanWyvernCard);
		DEFINE_CARD(CCinderCloudCard);
		DEFINE_CARD(CChaosCharmCard);
		DEFINE_CARD(CChaosphereCard);
		DEFINE_CARD(CChariotOfTheSunCard);
		DEFINE_CARD(CChokingSandsCard);
		DEFINE_CARD(CCircleOfDespairCard);
		DEFINE_CARD(CCivicGuildmageCard);
		DEFINE_CARD(CCrashOfRhinosCard);
		DEFINE_CARD(CCrimsonRocCard);
		DEFINE_CARD(CCryptCobraCard);
		DEFINE_CARD(CDeliriumCard);
		DEFINE_CARD(CDirtwaterWraithCard);
		DEFINE_CARD(CDiscordantSpiritCard);
		DEFINE_CARD(CDisempowerCard);
		DEFINE_CARD(CDissipateCard);
		DEFINE_CARD(CDivineRetributionCard);
		DEFINE_CARD(CDreadSpecterCard);
		DEFINE_CARD(CDwarvenMinerCard);
		DEFINE_CARD(CDwarvenNomadCard);
		DEFINE_CARD(CEbonyCharmCard);
		DEFINE_CARD(CElixirOfVitalityCard);
		DEFINE_CARD(CEmberwildeCaliphCard);
		DEFINE_CARD(CEnergyBoltCard);
		DEFINE_CARD(CEtherWellCard);
		DEFINE_CARD(CFemerefHealerCard);
		DEFINE_CARD(CFemerefKnightCard);
		DEFINE_CARD(CFemerefScoutsCard);
		DEFINE_CARD(CFetidHorrorCard);
		DEFINE_CARD(CFlameElementalCard);
		DEFINE_CARD(CFloodPlainCard);
		DEFINE_CARD(CForsakenWastesCard);
		DEFINE_CARD(CFreneticEfreetCard);
		DEFINE_CARD(CGiantMantisCard);
		DEFINE_CARD(CGibberingHyenasCard);
		DEFINE_CARD(CGoblinScoutsCard);
		DEFINE_CARD(CGoblinSoothsayerCard);
		DEFINE_CARD(CGrangerGuildmageCard);
		DEFINE_CARD(CGrasslandsCard);
		DEFINE_CARD(CGrimFeastCard);
		DEFINE_CARD(CHakimLoreweaverCard);
		DEFINE_CARD(CHarbingerOfNightCard);
		DEFINE_CARD(CHarborGuardianCard);
		DEFINE_CARD(CHauntingApparitionCard);
		DEFINE_CARD(CHazeriderDrakeCard);
		DEFINE_CARD(CHorribleHordesCard);
		DEFINE_CARD(CIgneousGolemCard);
		DEFINE_CARD(CIlluminationCard);
		DEFINE_CARD(CIronTuskElephantCard);
		DEFINE_CARD(CIvoryCharmCard);
		DEFINE_CARD(CJabarisInfluenceCard);
		DEFINE_CARD(CJolraelsCentaurCard);
		DEFINE_CARD(CJoltCard);
		DEFINE_CARD(CJunglePatrolCard);
		DEFINE_CARD(CJungleTrollCard);
		DEFINE_CARD(CJungleWurmCard);
		DEFINE_CARD(CKaerveksHexCard);
		DEFINE_CARD(CKaerveksPurgeCard);
		DEFINE_CARD(CKarooMeerkatCard);
		DEFINE_CARD(CKukemssaSerpentCard);
		DEFINE_CARD(CLeeringGargoyleCard);
		DEFINE_CARD(CLionsEyeDiamondCard);
		DEFINE_CARD(CLocustSwarmCard);
		DEFINE_CARD(CMalignantGrowthCard);
		DEFINE_CARD(CMangarasBlessingCard);
		DEFINE_CARD(CMangarasEquityCard);
		DEFINE_CARD(CMelesseSpiritCard);
		DEFINE_CARD(CMerfolkRaidersCard);
		DEFINE_CARD(CMerfolkSeerCard);
		DEFINE_CARD(CMindHarnessCard);
		DEFINE_CARD(CMireShadeCard);
		DEFINE_CARD(CMisersCageCard);
		DEFINE_CARD(CMistDragonCard);
		DEFINE_CARD(CMountainValleyCard);
		DEFINE_CARD(CMtendaGriffinCard);
		DEFINE_CARD(CMtendaHerderCard);
		//DEFINE_CARD(CMtendaLionCard);
		DEFINE_CARD(CNettletoothDjinnCard);
		DEFINE_CARD(CNullChamberCard);
		DEFINE_CARD(CPaupersCageCard);
		DEFINE_CARD(CPhyrexianDreadnoughtCard);
		DEFINE_CARD(CPhyrexianTributeCard);
		DEFINE_CARD(CPoliticalTrickeryCard);
		DEFINE_CARD(CPrismaticBoonCard);
		DEFINE_CARD(CPrismaticCircleCard);
		DEFINE_CARD(CPrismaticLaceCard);
		DEFINE_CARD(CPurrajOfUrborgCard);
		DEFINE_CARD(CPyricSalamanderCard);
		DEFINE_CARD(CQuirionElvesCard);
		DEFINE_CARD(CRadiantEssenceCard);
		DEFINE_CARD(CRagingSpiritCard);
		DEFINE_CARD(CRashidaScalebaneCard);
		DEFINE_CARD(CRavenousVampireCard);
		DEFINE_CARD(CRealityRippleCard);
		DEFINE_CARD(CReignOfTerrorCard);
		DEFINE_CARD(CRestlessDeadCard);
		DEFINE_CARD(CRitualOfSteelCard);
		DEFINE_CARD(CRockBasiliskCard);
		DEFINE_CARD(CRockyTarPitCard);
		DEFINE_CARD(CRootsOfLifeCard);
		DEFINE_CARD(CSacredMesaCard);
		DEFINE_CARD(CSandGolemCard);
		DEFINE_CARD(CSandbarCrocodileCard);
		//DEFINE_CARD(CSapphireCharmCard);
		DEFINE_CARD(CSavageTwisterCard);
		DEFINE_CARD(CSawbackManticoreCard);
		DEFINE_CARD(CSearingSpearAskariCard);
		DEFINE_CARD(CSeaScryerCard);
		DEFINE_CARD(CSealedFateCard);
		DEFINE_CARD(CSeedsOfInnocenceCard);
		//DEFINE_CARD(CSeedlingCharmCard);
		DEFINE_CARD(CSereneHeartCard);
		DEFINE_CARD(CSewerRatsCard);
		DEFINE_CARD(CShadowbaneCard);
		DEFINE_CARD(CShadowGuildmageCard);
		DEFINE_CARD(CShallowGraveCard);
		DEFINE_CARD(CShaperGuildmageCard);
		DEFINE_CARD(CShaukuEndbringerCard);
		DEFINE_CARD(CShaukusMinionCard);
		DEFINE_CARD(CSidarJabariCard);
		DEFINE_CARD(CSkulkingGhostCard);
		DEFINE_CARD(CSoulRendCard);
		DEFINE_CARD(CSoulshriekCard);
		DEFINE_CARD(CSpectralGuardianCard);
		DEFINE_CARD(CSpiritOfTheNightCard);
		DEFINE_CARD(CSubterraneanSpiritCard);
		DEFINE_CARD(CSuqAtaFirewalkerCard);
		DEFINE_CARD(CTaintedSpecterCard);
		DEFINE_CARD(CTaniwhaCard);
		DEFINE_CARD(CTeekasDragonCard);
		DEFINE_CARD(CTeferisDrakeCard)
		DEFINE_CARD(CTeferisIsleCard);
		DEFINE_CARD(CTelimTorCard);
		DEFINE_CARD(CTelimTorsDartsCard);
		DEFINE_CARD(CTelimTorsEdictCard);
		DEFINE_CARD(CThirstCard);
		DEFINE_CARD(CTidalWaveCard);
		DEFINE_CARD(CTombstoneStairwellCard);
		DEFINE_CARD(CTranquilDomainCard);
		DEFINE_CARD(CTropicalStormCard);
		DEFINE_CARD(CUktabiFaerieCard);
		DEFINE_CARD(CUnfulfilledDesiresCard);
		DEFINE_CARD(CUnyaroBeeStingCard);
		DEFINE_CARD(CUrborgPantherCard);
		DEFINE_CARD(CVentifactBottleCard);
		DEFINE_CARD(CVigilantMartyrCard);
		DEFINE_CARD(CVillageElderCard);
		DEFINE_CARD(CVitalizingCascadeCard);
		DEFINE_CARD(CWallOfCorpsesCard);
		DEFINE_CARD(CWallOfResistanceCard);
		DEFINE_CARD(CWallOfRootsCard);
		//DEFINE_CARD(CWardOfLightsCard);
		DEFINE_CARD(CWaveElementalCard);
		DEFINE_CARD(CWildElephantCard);
		DEFINE_CARD(CWildfireEmissaryCard);
		DEFINE_CARD(CWindreaperFalconCard);
		DEFINE_CARD(CWitheringBoonCard);
		DEFINE_CARD(CYareCard);
		DEFINE_CARD(CZebraUnicornCard);
		DEFINE_CARD(CZhalfirinCommanderCard);
		DEFINE_CARD(CZhalfirinKnightCard);
		DEFINE_CARD(CZirilanOfTheClawCard);
		DEFINE_CARD(CZombieMobCard);
		DEFINE_CARD(CZuberiGoldenFeatherCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDisempowerCard::CDisempowerCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Disempower"), CardType::Instant, nID, 
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CFemerefHealerCard::CFemerefHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Femeref Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CFemerefScoutsCard::CFemerefScoutsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Femeref Scouts"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CIronTuskElephantCard::CIronTuskElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iron Tusk Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CMelesseSpiritCard::CMelesseSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Melesse Spirit"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CZuberiGoldenFeatherCard::CZuberiGoldenFeatherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zuberi, Golden Feather"), CardType::_LegendaryCreature, CREATURE_TYPE(Griffin), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Griffin), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzimaetDrakeCard::CAzimaetDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Azimaet Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBayFalconCard::CBayFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bay Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCeruleanWyvernCard::CCeruleanWyvernCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cerulean Wyvern"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CBreathstealerCard::CBreathstealerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Breathstealer"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CDirtwaterWraithCard::CDirtwaterWraithCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dirtwater Wraith"), CardType::Creature, CREATURE_TYPE(Wraith), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(3),
		BLACK_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Swampwalk, FALSE);
}

//____________________________________________________________________________
//
CDreadSpecterCard::CDreadSpecterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dread Specter"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-black creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDreadSpecterCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDreadSpecterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDreadSpecterCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CDreadSpecterCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CFetidHorrorCard::CFetidHorrorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fetid Horror"), CardType::Creature, CREATURE_TYPE2(Shade, Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CPhyrexianTributeCard::CPhyrexianTributeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Phyrexian Tribute"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CRestlessDeadCard::CRestlessDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Restless Dead"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSewerRatsCard::CSewerRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sewer Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->AddPayLifeDeltaCost(Life(-1));

	cpAbility->SetMaxTurnUsageCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShaperGuildmageCard::CShaperGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shaper Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmorerGuildmageCard::CArmorerGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armorer Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlisteringBarrierCard::CBlisteringBarrierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blistering Barrier"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(5), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CBurningPalmEfreetCard::CBurningPalmEfreetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burning Palm Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			Power(+0), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Flying,
			TRUE, PreventableType::Preventable));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChaosCharmCard::CChaosCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Chaos Charm"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIvoryCharmCard::CIvoryCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ivory Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT, 
				new AnyCreatureComparer, 
				TRUE, Life(1), SourceColor::Null));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(-2), Life(+0))); 

		cpSpell->SetAbilityText(_T("All creatures get -2/-0 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				TRUE, FALSE,
				new CardTypeComparer(CardType::Creature, false)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDwarvenMinerCard::CDwarvenMinerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Miner"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenNomadCard::CDwarvenNomadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Nomad"), CardType::Creature, CREATURE_TYPE2(Dwarf, Nomad), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlameElementalCard::CFlameElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flame Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildfireEmissaryCard::CWildfireEmissaryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wildfire Emissary"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(4),
		_T("1") RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CBrushwaggCard::CBrushwaggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brushwagg"), CardType::Creature, CREATURE_TYPE(Brushwagg), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback
							> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCanopyDragonCard::CCanopyDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Canopy Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrashOfRhinosCard::CCrashOfRhinosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crash of Rhinos"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CGiantMantisCard::CGiantMantisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Mantis"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CGibberingHyenasCard::CGibberingHyenasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gibbering Hyenas"), CardType::Creature, CREATURE_TYPE(Hyena), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("non-black creatures")));
}

//____________________________________________________________________________
//
CGrangerGuildmageCard::CGrangerGuildmageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Granger Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(-1), PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																				 DamageType::AbilityDamage | DamageType::NonCombatDamage));

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKarooMeerkatCard::CKarooMeerkatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karoo Meerkat"), CardType::Creature, CREATURE_TYPE(Mongoose), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CNettletoothDjinnCard::CNettletoothDjinnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nettletooth Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUktabiFaerieCard::CUktabiFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Uktabi Faerie"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") GREEN_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnyaroBeeStingCard::CUnyaroBeeStingCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Unyaro Bee Sting"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") GREEN_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CVillageElderCard::CVillageElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Village Elder"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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
CWildElephantCard::CWildElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CBenthicDjinnCard::CBenthicDjinnCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Benthic Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3),
		CreatureKeyword::Islandwalk)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSereneHeartCard::CSereneHeartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Serene Heart"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Aura, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpiritOfTheNightCard::CSpiritOfTheNightCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spirit of the Night"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new AttackingCreatureComparer);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::FirstStrike);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	} */
}

//____________________________________________________________________________
//
CTranquilDomainCard::CTranquilDomainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tranquil Domain"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::GlobalEnchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWindreaperFalconCard::CWindreaperFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windreaper Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CHarborGuardianCard::CHarborGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harbor Guardian"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHazeriderDrakeCard::CHazeriderDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hazerider Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CLeeringGargoyleCard::CLeeringGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Leering Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
									Power(-2), Life(+2), CreatureKeyword::Null));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfDespairCard::CCircleOfDespairCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Despair"), CardType::GlobalEnchantment,	nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("1"), 
			new AnyCreatureComparer, TRUE,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnfulfilledDesiresCard::CUnfulfilledDesiresCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Unfulfilled Desires"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1"), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmberwildeCaliphCard::CEmberwildeCaliphCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emberwilde Caliph"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
		&CEmberwildeCaliphCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CEmberwildeCaliphCard::SetTriggerContext(CTriggeredModifyLifeAbility
							::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	return true;
}

//____________________________________________________________________________
//
CShaukusMinionCard::CShaukusMinionCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Shauku's Minion"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
		Power(2), Life(2),
		BLACK_MANA_TEXT RED_MANA_TEXT,
		new CardTypeComparer(CardType::White | CardType::Creature, true),
		FALSE, Life(-2), PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CJungleTrollCard::CJungleTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Jungle Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1),
		GREEN_MANA_TEXT)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			RED_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRockBasiliskCard::CRockBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rock Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-Wall creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRockBasiliskCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRockBasiliskCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRockBasiliskCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CRockBasiliskCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSavageTwisterCard::CSavageTwisterCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Savage Twister"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CEnergyBoltCard::CEnergyBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Energy Bolt"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(0), PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(1));
		cpSpell->AddAbilityTag(AbilityTag::LifeGain);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVitalizingCascadeCard::CVitalizingCascadeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vitalizing Cascade"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT WHITE_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));

	cpSpell->SetExtraManaCost(SpecialNumber::Any, TRUE,	CManaCost::AllCostColors);

	cpSpell->AddAbilityTag(AbilityTag::LifeGain);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CZebraUnicornCard::CZebraUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zebra Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
									&CZebraUnicornCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CZebraUnicornCard::SetTriggerContext(CTriggeredModifyLifeAbility
								::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CAmuletOfUnmakingCard::CAmuletOfUnmakingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Amulet of Unmaking"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("5"),
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddTapCost();
	cpAbility->AddExileCost();
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElixirOfVitalityCard::CElixirOfVitalityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elixir of Vitality"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+4), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("8"),
				Life(+8), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIgneousGolemCard::CIgneousGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Igneous Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(4),
		_T("2"), Power(+0), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CLionsEyeDiamondCard::CLionsEyeDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lion's Eye Diamond"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,
			CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,
			CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,
			CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,
			CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,
			CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPaupersCageCard::CPaupersCageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paupers' Cage"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,&CPaupersCageCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPaupersCageCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CPaupersCageCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

bool CPaupersCageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

//____________________________________________________________________________
//
CMisersCageCard::CMisersCageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Misers' Cage"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMisersCageCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMisersCageCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMisersCageCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() >= 5;
}

bool CMisersCageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() >= 5;
}

//____________________________________________________________________________
//
CTelimTorsDartsCard::CTelimTorsDartsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Telim'Tor's Darts"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2"),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBadRiverCard::CBadRiverCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bad River"), nID)

	, m_CardFilter(_T("a Swamp or an Island"), _T("Swamps or Islands"), new CardTypeComparer(CardType::Swamp | CardType::Island, false))
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFloodPlainCard::CFloodPlainCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Flood Plain"), nID)

	, m_CardFilter(_T("a Plains or an Island"), _T("Plains or Islands"), new CardTypeComparer(CardType::Plains | CardType::Island, false))
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRockyTarPitCard::CRockyTarPitCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rocky Tar Pit"), nID)

	, m_CardFilter(_T("a Swamp or a Mountain"), _T("Swamps or Mountains"), new CardTypeComparer(CardType::Swamp | CardType::Mountain, false))
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrasslandsCard::CGrasslandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grasslands"), nID)

	, m_CardFilter(_T("a Forest or a Plains"), _T("Forests or Plains"), new CardTypeComparer(CardType::Forest | CardType::Plains, false))
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMountainValleyCard::CMountainValleyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mountain Valley"), nID)

	, m_CardFilter(_T("a Mountain or a Forest"), _T("Mountains or Forests"), new CardTypeComparer(CardType::Mountain | CardType::Forest, false))
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlarumCard::CAlarumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Alarum"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(+3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AttackingCreatureComparer);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAuspiciousAncestorCard::CAuspiciousAncestorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auspicious Ancestor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->SetResolutionCost(_T("1"));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlindingLightCard::CBlindingLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blinding Light"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalTapSpell> cpSpell(
		::CreateObject<CGlobalTapSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::White, false))));

	cpSpell->GetGlobalCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCivicGuildmageCard::CCivicGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Civic Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMireShadeCard::CMireShadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mire Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLACK_MANA_TEXT));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRashidaScalebaneCard::CRashidaScalebaneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rashida Scalebane"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell3>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell3>>(this,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration,
			TRUE, FALSE));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new AttackingBlockingCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShadowGuildmageCard::CShadowGuildmageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Shadow Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(-1),
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																				 DamageType::AbilityDamage | DamageType::NonCombatDamage));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDissipateCard::CDissipateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dissipate"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CDivineRetributionCard::CDivineRetributionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divine Retribution"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AttackingCreatureComparer, FALSE,
			ZoneId::Battlefield, FALSE,
			new AttackingCreatureComparer, PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJabarisInfluenceCard::CJabarisInfluenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jabari's Influence"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Battlefield, false, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureAttackedPlayerComparer(this));

	cpSpell->GetTargetModifier().CCardModifiers::Add(
		new CCardCounterModifier(_T("-1/-0"), +1));

	cpSpell->SetUseInSpecificNode(NodeId::MainPhaseStep | NodeId::EndStep, true, false);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMtendaGriffinCard::CMtendaGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mtenda Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(	
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Griffin), false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->SetToZoneIfSuccess(ZoneId::Hand, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNullChamberCard::CNullChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Null Chamber"), CardType::_WorldEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
						CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(CCardFilter::GetFilter(_T("non-basic lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(FALSE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSacredMesaCard::CSacredMesaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sacred Mesa"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				_T("Pegasus C"), 62007, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Pegasus), false));
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
CShadowbaneCard::CShadowbaneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shadowbane"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant, 
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(PreventionType::PreventNextDamage),
				SourceColor::BlueSource	| SourceColor::RedSource | SourceColor::GreenSource | SourceColor::WhiteSource | SourceColor::ColorlessSource));

		cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpSpell->GetTargeting()->SetIncludeControllerPlayerOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant, 
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(PreventionType::ReverseNextDamage),
				SourceColor::BlackSource));

		cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpSpell->GetTargeting()->SetIncludeControllerPlayerOnly();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpectralGuardianCard::CSpectralGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Guardian"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new AnyCreatureComparer);

	cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkulkingGhostCard::CSkulkingGhostCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skulking Ghost"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, 
							&CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfResistanceCard::CWallOfResistanceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Resistance"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+0/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+0/+1"), +1));
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWallOfResistanceCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfResistanceCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCreatureFlag()->HasTakenCombatDamage() == TRUE) || (GetCreatureFlag()->HasTakenNonCombatDamage() == TRUE);
}

//____________________________________________________________________________
//
//CWardOfLightsCard::CWardOfLightsCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Ward of Lights"), CardType::EnchantCreature, nID)
//{
//	{
//		counted_ptr<CCardKeywordEnchant> cpSpell(
//			::CreateObject<CCardKeywordEnchant>(this,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				new AnyCreatureComparer,
//				CardKeyword::ProtectionFromRed));
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		counted_ptr<CCardKeywordEnchant> cpSpell(
//			::CreateObject<CCardKeywordEnchant>(this,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				new AnyCreatureComparer,
//				CardKeyword::ProtectionFromBlack));
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		counted_ptr<CCardKeywordEnchant> cpSpell(
//			::CreateObject<CCardKeywordEnchant>(this,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				new AnyCreatureComparer,
//				CardKeyword::ProtectionFromBlue));
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		counted_ptr<CCardKeywordEnchant> cpSpell(
//			::CreateObject<CCardKeywordEnchant>(this,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				new AnyCreatureComparer,
//				CardKeyword::ProtectionFromGreen));
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		counted_ptr<CCardKeywordEnchant> cpSpell(
//			::CreateObject<CCardKeywordEnchant>(this,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				new AnyCreatureComparer,
//				CardKeyword::ProtectionFromWhite));
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				Power(+0), Life(+0),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
//		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//	}
//	{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				Power(+0), Life(+0),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
//		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//	}
//	{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				Power(+0), Life(+0),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
//		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//	}
//	{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				Power(+0), Life(+0),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
//		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//	}
//	{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				WHITE_MANA_TEXT WHITE_MANA_TEXT,
//				Power(+0), Life(+0),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
//		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//	}
//}
//
//____________________________________________________________________________
//
CKukemssaSerpentCard::CKukemssaSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kukemssa Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKukemssaSerpentCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKukemssaSerpentCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, 
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CKukemssaSerpentCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CKukemssaSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

bool CKukemssaSerpentCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CKukemssaSerpentCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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
CMerfolkSeerCard::CMerfolkSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Seer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionCost(_T("1") BLUE_MANA_TEXT);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeaScryerCard::CSeaScryerCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Sea Scryer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1),
		_T("1"))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTidalWaveCard::CTidalWaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tidal Wave"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTidalWaveCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTidalWaveCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Wall A"), 2746, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CWaveElementalCard::CWaveElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wave Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
				new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	cpAbility->GetTargeting()->SetSubjectCount(0, 3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHarbingerOfNightCard::CHarbingerOfNightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harbinger of Night"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	// pump ability
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter
/*	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetToBase(TRUE);
	cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetPowerModifier().SetToBase(TRUE);
	cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);*/

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAfterlifeCard::CAfterlifeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Afterlife"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Spirit F"), 2903, 1));
}

//____________________________________________________________________________
//
CGrimFeastCard::CGrimFeastCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grim Feast"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrimFeastCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrimFeastCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_LifeModifier.SetLifeDelta(pCreature->GetLastKnownToughness());
	return true;
}

//____________________________________________________________________________
//
CCrimsonRocCard::CCrimsonRocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crimson Roc"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrimsonRocCard::SetTriggerContext));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCrimsonRocCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CGoblinSoothsayerCard::CGoblinSoothsayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Soothsayer"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			RED_MANA_TEXT,
			Power(+1), Life(+1),
			new CardTypeComparer(CardType::Red, false)));

	cpAbility->SetToActivatedAbility();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHauntingApparitionCard::CHauntingApparitionCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Haunting Apparition"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard, //"graveyard"
			new CardTypeComparer(CardType::Creature | CardType::Green, true))); //"green creatures"

	cpAbility->SetChangePowerOnly();

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJunglePatrolCard::CJunglePatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jungle Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				_T("Wood"), TOKEN_ID_BY_NAME,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CardNameComparer(_T("Wood")));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLocustSwarmCard::CLocustSwarmCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Locust Swarm"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPurrajOfUrborgCard::CPurrajOfUrborgCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Purraj of Urborg"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new AttackingCreatureComparer);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::FirstStrike);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	} */
	{
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetResolutionCost(BLACK_MANA_TEXT);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPyricSalamanderCard::CPyricSalamanderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pyric Salamander"), CardType::Creature, CREATURE_TYPE(Salamander), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CPyricSalamanderCard::OnResolutionCompleted))
{
	m_pPumpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CPyricSalamanderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CRadiantEssenceCard::CRadiantEssenceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Radiant Essence"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Black, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSubterraneanSpiritCard::CSubterraneanSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Subterranean Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T(""),
				Life(-1),	// life delta
				new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSuqAtaFirewalkerCard::CSuqAtaFirewalkerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Suq'Ata Firewalker"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCardKeyword()->AddShroud(FALSE, CCardFilter::GetFilter(_T("non-red cards")));//It can't be the target of red spells or abilities from red sources.
}

//____________________________________________________________________________
//
CEbonyCharmCard::CEbonyCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Ebony Charm"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Fear, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Above: Target creature gains fear until end of turn.
	
	{
		//Target opponent loses 1 life and you gain 1 life.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile up to three target cards from a single graveyard.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(0, 3);
		cpSpell->GetTargeting()->SetSingleSourceZone(true);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrismaticBoonCard::CPrismaticBoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Prismatic Boon"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpSpell->SetAbilityText(_T("Choose white. X target creatures gain protection from white until end of turn. Casts"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpSpell->SetAbilityText(_T("Choose blue. X target creatures gain protection from blue until end of turn. Casts"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpSpell->SetAbilityText(_T("Choose black. X target creatures gain protection from black until end of turn. Casts"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpSpell->SetAbilityText(_T("Choose red. X target creatures gain protection from red until end of turn. Casts"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpSpell->SetAbilityText(_T("Choose green. X target creatures gain protection from green until end of turn. Casts"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
//
//"Seedling Charm\n{G}\nInstant\nMRG,C\nChoose one - Return target Aura attached to a creature to its owner's hand; or regenerate target green creature; or target creature gains trample until end of turn."
//
//CSeedlingCharmCard::CSeedlingCharmCard(CGame* pGame, UINT nID)
//	: CChgPwrTghAttrSpellCard(pGame, _T("Seedling Charm"), CardType::Instant, nID, AbilityType::Instant,
//		GREEN_MANA_TEXT,
//		Power(+0), Life(+0),
//		CreatureKeyword::Trample, CreatureKeyword::Null,
//		TRUE, PreventableType::NotPreventable)
//{
//	//Above: Target creature gains trample until end of turn.
//	{
//		//Regenerate target green creature.
//		counted_ptr<CTargetRegenerationSpell> cpSpell(
//			::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
//				GREEN_MANA_TEXT,
//				new CardTypeComparer(CardType::Creature | CardType::Green, true)));
//
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		//Return target Aura attached to a creature to its owner's hand.
//		//You can't target "Enchant Permanet" cards attached to a creature with this.
//		counted_ptr<CTargetMoveCardSpell> cpSpell(
//			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
//				GREEN_MANA_TEXT,
//				new CardTypeComparer(CardType::EnchantCreature, false),
//				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
//
//		AddSpell(cpSpell.GetPointer());
//	}
//}
//
////____________________________________________________________________________
////
CWitheringBoonCard::CWitheringBoonCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Withering Boon"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
	m_pCounterSpell->AddPayLifeDeltaCost(Life(-3));
}

//____________________________________________________________________________
//
CGoblinScoutsCard::CGoblinScoutsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Goblin Scouts"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			_T("Goblin Scout"), TOKEN_ID_BY_NAME,
			3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKaerveksHexCard::CKaerveksHexCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Kaervek's Hex"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT,
		Life(-1),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pGlobalChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTropicalStormCard::CTropicalStormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Tropical Storm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pGlobalChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarbedBackWurmCard::CBarbedBackWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbed-Back Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new BlockingThisCreatureComparer(this));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHorribleHordesCard::CHorribleHordesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horrible Hordes"), CardType::_ArtifactCreature, CREATURE_TYPE(Spirit), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHorribleHordesCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHorribleHordesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
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
CTeekasDragonCard::CTeekasDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Teeka's Dragon"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("9"), Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTeekasDragonCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
	}
}

bool CTeekasDragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 4;
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
CJungleWurmCard::CJungleWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jungle Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CJungleWurmCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
	}
}

bool CJungleWurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampagePower = -1;
	int nRampageToughness = -1;
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

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampageToughness*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampagePower*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CWallOfRootsCard::CWallOfRootsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Roots"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-0/-1")), +1);

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRitualOfSteelCard::CRitualOfSteelCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ritual of Steel"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+2))
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
CBoneHarvestCard::CBoneHarvestCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Bone Harvest"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CJoltCard::CJoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jolt"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTelimTorsEdictCard::CTelimTorsEdictCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Telim'Tor's Edict"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardOwnerComparer(this),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddChildFilter(new CCardFilter(new CardControllerComparer(this)));

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CChaosphereCard::CChaosphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chaosphere"), CardType::_WorldEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				Power(+0), Life(+0), CreatureKeyword::OnlyBlockFlying));

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Reach));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, FALSE));

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCadaverousBloomCard::CCadaverousBloomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cadaverous Bloom"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
		
		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		
		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShaukuEndbringerCard::CShaukuEndbringerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shauku, Endbringer"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new AnyCreatureComparer);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CShaukuEndbringerCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
		
		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CShaukuEndbringerCard::CanAttack(BOOL bIncludeTricks)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
		if (m_CardFilter.CountIncluded(pSurvey->GetCardContainer()) > 0)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CBindingAgonyCard::CBindingAgonyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Binding Agony"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
		CAbilityEnchant::CreateAbilityCallback(this,
			&CBindingAgonyCard::CreateEnchantAbility),
		CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBindingAgonyCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBindingAgonyCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CBindingAgonyCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CChariotOfTheSunCard::CChariotOfTheSunCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chariot of the Sun"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(1));
		pLifeModifier->SetPreventable(PreventableType::NotPreventable);
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetReplacement(TRUE);
		pLifeModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMangarasBlessingCard::CMangarasBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mangara's Blessing"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Life(+5), PreventableType::NotPreventable));

		cpSpell->AddAbilityTag(AbilityTag::LifeGain);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Hand, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMangarasBlessingCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMangarasBlessingCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMangarasBlessingCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	if (pToZone->GetZoneId() == ZoneId::Graveyard)
		triggerContext.nValue1 = 1;
	else
		triggerContext.nValue1 = 0;

	return true;
}

bool CMangarasBlessingCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pController);

	if (pAction->GetTriggerContext().nValue1 == 1)
	{
		CCountedCardContainer pSubjects;
		if (IsInGraveyard())
			pSubjects.AddCard(this, CardPlacement::Top);

		CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Raise Effect"), 61082, &pSubjects);
		pModifier2.ApplyTo(pController);

		return true;
	}

	return true;
}

//____________________________________________________________________________
//
//"Mtenda Lion\n{G}\nCreature - Cat\nMRG,C\nWhenever Mtenda Lion attacks, defending player may pay {U}. If that player does, prevent all combat damage that would be dealt by Mtenda Lion this turn.\n2/1"
//When it attacks, BotArena hangs and you can't do anything.
//CMtendaLionCard::CMtendaLionCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Mtenda Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
//		GREEN_MANA_TEXT, Power(2), Life(1))
//{
//	typedef
//		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
//							CWhenSelfAttackedBlocked::AttackEventCallback, 
//							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//	
//	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
//	cpAbility->SetResolutionCost(BLUE_MANA_TEXT);
//
//	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DealNoCombatDamage);
//	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//
//	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CRagingSpiritCard::CRagingSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raging Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("2"),
			new SpecificCardComparer(this)));

	cpAbility->AddCardTypeToSelection(CardType::Null, CardType::_ColorMask, TRUE, _T("colorless permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavenousVampireCard::CRavenousVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ravenous Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSawbackManticoreCard::CSawbackManticoreCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sawback Manticore"), CardType::Creature, CREATURE_TYPE(Manticore), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4),
		_T("4"), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AttackingBlockingCreatureComparer,
			FALSE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetMaxTurnUsageCount(1);

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CSawbackManticoreCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

BOOL CSawbackManticoreCard::CanPlay(BOOL bIncludeTricks)
{
	return (IsAttacking() == TRUE || IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CPrismaticLaceCard::CPrismaticLaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Prismatic Lace"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, FALSE, _T("white permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, FALSE, _T("blue permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, FALSE, _T("black permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, FALSE, _T("red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, FALSE, _T("green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, FALSE, _T("white and blue permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, FALSE, _T("white and black permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, FALSE, _T("white and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, FALSE, _T("white and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, FALSE, _T("blue and black permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, FALSE, _T("blue and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, FALSE, _T("blue and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("black and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("black and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, FALSE, _T("white, blue and black permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, FALSE, _T("white, blue and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("white, black and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("white, black and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("blue, black and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, black and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("black, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("white, blue, black and red permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue, black and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, black, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, black, red and green permanent"));
	cpSpell->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, FALSE, _T("all colors permanent"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBurningShieldAskariCard::CBurningShieldAskariCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Burning Shield Askari"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBurningShieldAskariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBurningShieldAskariCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CCadaverousKnightCard::CCadaverousKnightCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Cadaverous Knight"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCadaverousKnightCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCadaverousKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CFemerefKnightCard::CFemerefKnightCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Femeref Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFemerefKnightCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFemerefKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CJolraelsCentaurCard::CJolraelsCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jolrael's Centaur"), CardType::Creature, CREATURE_TYPE2(Centaur, Archer), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddShroud(FALSE);
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJolraelsCentaurCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CJolraelsCentaurCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CMtendaHerderCard::CMtendaHerderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mtenda Herder"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMtendaHerderCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMtendaHerderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSearingSpearAskariCard::CSearingSpearAskariCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Searing Spear Askari"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T("1") RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1)
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSearingSpearAskariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSearingSpearAskariCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSidarJabariCard::CSidarJabariCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sidar Jabari"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSidarJabariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
									 CWhenSelfAttackedBlocked::AttackEventCallback,
									 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSidarJabariCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CTelimTorCard::CTelimTorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Telim'Tor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTelimTorCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTelimTorCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CZhalfirinCommanderCard::CZhalfirinCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhalfirin Commander"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZhalfirinCommanderCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Knight), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CZhalfirinCommanderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CZhalfirinKnightCard::CZhalfirinKnightCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Zhalfirin Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZhalfirinKnightCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CZhalfirinKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CAgilityCard::CAgilityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Agility"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Flanking)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CAgilityCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CAgilityCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
		CWhenSelfAttackedBlocked::BlockEventCallback, 
		&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAgilityCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityText(_T("Flanking ability (Agility)"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CAgilityCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CCarrionCard::CCarrionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Carrion"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			_T("Insect C"), 2869,
			0));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCarrionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCarrionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nPower;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CIlluminationCard::CIlluminationCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Illumination"), CardType::Instant, nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false))
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIlluminationCard::BeforeResolution));
}

bool CIlluminationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* TargetsController=pAction->GetAssociatedCard()->GetController();

	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(TargetsController);

	return true;
}

//____________________________________________________________________________
//
CForsakenWastesCard::CForsakenWastesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Forsaken Wastes"), CardType::_WorldEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantGainLife));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CForsakenWastesCard::SetTriggerContext));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CForsakenWastesCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* byPlayer) const
{
	return GetGame()->GetStack().GetTopAction()->IsSpell() == TRUE;
}

//____________________________________________________________________________
//
CVigilantMartyrCard::CVigilantMartyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vigilant Martyr"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new AnyCreatureComparer));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));

		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChokingSandsCard::CChokingSandsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Choking Sands"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CChokingSandsCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery, 
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Swamp, false));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CChokingSandsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CCard* pTarget = pAbilityAction->GetAssociatedCard();
		CPlayer* pPlayer = pTarget->GetController();
		bool bBasic = (pTarget->GetCardType() & CardType::BasicLand).Any();

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAbilityAction->GetController());
		pModifier1.ApplyTo(pTarget);

		if (!bBasic)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pPlayer);
		}
	}
}

//____________________________________________________________________________
//
CSoulRendCard::CSoulRendCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul Rend"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->SetAbilityText(_T("Destroy target creature if it's white. Casts"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulRendCard::BeforeResolution));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

bool CSoulRendCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration);

	if ((target->GetCardType() & CardType::White).Any()) pModifier.ApplyTo(target);

	return true;
}

//____________________________________________________________________________
//
CCryptCobraCard::CCryptCobraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetPoisonCount(1);
	cpAbility->SetReplacePoisonCount(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCryptCobraCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CCryptCobraCard::SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CMindHarnessCard::CMindHarnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Harness"), CardType::EnchantCreature, nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CMindHarnessCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
			BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::Green, true)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
			BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		AddSpell(cpSpell.GetPointer());
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
void CMindHarnessCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CPrismaticCircleCard::CPrismaticCircleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prismatic Circle"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
			, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CPrismaticCircleCard::OnCounterMoved))
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
			TTriggeredAbility< 
				TTriggeredDamagePreventionAbility<TTriggerAdapter<CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback>>,
					CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetPreventionCost(_T("1"));
		cpAbility->SetLifeDelta(Life(PreventionType::PreventNextDamage));
		cpAbility->SetPreventDamageToController(TRUE);

		cpAbility->SetSkipStack(TRUE);

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
void CPrismaticCircleCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CThirstCard::CThirstCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Thirst"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	{
		counted_ptr<CUpkeepAbility> cpAbility(::CreateObject<CUpkeepAbility>(this, BLACK_MANA_TEXT));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThirstCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThirstCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCard* pCard = m_pChgPwrTghAttrEnchant->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CUrborgPantherCard::CUrborgPantherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Panther"), CardType::Creature, CREATURE_TYPE2(Nightstalker, Cat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter1(_T("a card named Spirit of the Night"), _T("cards named Spirit of the Night"), new CardNameComparer(_T("Spirit of the Night")))
	, m_CardFilter2(_T("a card named Feral Shadow"), _T("cards named Feral Shadow"), new CardNameComparer(_T("Feral Shadow")))
	, m_CardFilter3(_T("a card named Breathstealer"), _T("cards named Breathstealer"), new CardNameComparer(_T("Breathstealer")))
{
	{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new BlockingThisCreatureComparer(this), 
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter1, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));
		ATLASSERT(cpAbility);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter2);
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPoliticalTrickeryCard::CPoliticalTrickeryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Political Trickery"), CardType::Sorcery, nID)
{
	counted_ptr<CExhangeControllSpell> cpSpell(
		::CreateObject<CExhangeControllSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPoliticalTrickeryCard::BeforeResolution));
		

	AddSpell(cpSpell.GetPointer());
}

bool CPoliticalTrickeryCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	m_pCard1 = pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	m_pCard2 = pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	if (m_pCard1->GetCardType().IsLand() && m_pCard2->GetCardType().IsLand())
			return true;

	return false;
}
//____________________________________________________________________________
//
CHakimLoreweaverCard::CHakimLoreweaverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hakim, Loreweaver"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Aura, false),
				ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, false, true);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHakimLoreweaverCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CHakimLoreweaverCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new EnchantedOnComparer(this),
				ZoneId::Graveyard, true, MoveType::Destroy));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHakimLoreweaverCard::BeforeResolution(CAbilityAction* pAction)
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

BOOL CHakimLoreweaverCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetEnchantCount() == 0 ? TRUE : FALSE);
}

//____________________________________________________________________________
//
CWallOfCorpsesCard::CWallOfCorpsesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Corpses"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(false);

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AttackingThisCreatureComparer(this),
			ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAsmiraHolyAvengerCard::CAsmiraHolyAvengerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Asmira, Holy Avenger"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAsmiraHolyAvengerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAsmiraHolyAvengerCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCreatures = pAction->GetController()->GetCertainTypeDiedCount(CardType::Creature);
	if (nCreatures == 0) return false;

	CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), nCreatures);
	return true;
}

//____________________________________________________________________________
//
CVentifactBottleCard::CVentifactBottleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ventifact Bottle"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetAbilityText(_T("Put X counters on. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVentifactBottleCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVentifactBottleCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVentifactBottleCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVentifactBottleCard::BeforeResolution1(CAbilityAction* pAction)
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();
	CCardCounterModifier modifier = CCardCounterModifier(CHARGE_COUNTER, nExtra);
	modifier.ApplyTo(this);

	return true;
}

bool CVentifactBottleCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	return (GetGame()->IsFirstMainPhase() && GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount() > 0);
}

bool CVentifactBottleCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount() == 0) return false;
	int n = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	CCardOrientationModifier modifier1 = CCardOrientationModifier(true);
	modifier1.ApplyTo(this);

	CCardCounterModifier modifier2 = CCardCounterModifier(CHARGE_COUNTER, 0, true);
	modifier2.ApplyTo(this);

	CManaPoolModifier modifier3 =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
	for (int i = 0; i < n; ++i) modifier3.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CMerfolkRaidersCard::CMerfolkRaidersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Merfolk Raiders"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(3), CreatureKeyword::Islandwalk)
{
	GetCardKeyword()->AddPhasing(FALSE);
}

//____________________________________________________________________________
//
CSandbarCrocodileCard::CSandbarCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandbar Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("4") BLUE_MANA_TEXT, Power(6), Life(5))
{
	GetCardKeyword()->AddPhasing(FALSE);
}

//____________________________________________________________________________
//
CTeferisDrakeCard::CTeferisDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Teferi's Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddPhasing(FALSE);
}

//____________________________________________________________________________
//
CTeferisIsleCard::CTeferisIsleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Teferi's Isle"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	GetCardKeyword()->AddPhasing(FALSE);

	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMistDragonCard::CMistDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mist Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))

{
	{//Gains flying
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(false);

		cpAbility->SetMaxTurnUsageCount(3);

		AddAbility(cpAbility.GetPointer());
	}
	{//Lose flying
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(false);

		cpAbility->SetMaxTurnUsageCount(3);

		AddAbility(cpAbility.GetPointer());
	}
	{//Phase-out
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));

			CCardFlagModifier* m_CardFlagModifier = new CCardFlagModifier();
			m_CardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
			m_CardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
			m_CardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(m_CardFlagModifier);

		AddAbility(cpAbility.GetPointer());
	}
}


//____________________________________________________________________________
//
CRealityRippleCard::CRealityRippleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reality Ripple"), CardType::Instant, nID)
{
		counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature |  CardType::_Land, false),
			false));

	CCardFlagModifier* m_CardFlagModifier = new CCardFlagModifier();
			m_CardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
			m_CardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
			m_CardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());

	cpSpell->GetTargetModifier().CCardModifiers::push_back(m_CardFlagModifier);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing));


	AddSpell(cpSpell.GetPointer());

		
}

//____________________________________________________________________________
//
CYareCard::CYareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yare"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Power(+3), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetTargetModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		cpSpell->GetTargetModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CYareCard::CanPlay1)));
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Power(+3), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

		cpSpell->GetTargetModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		cpSpell->GetTargetModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CYareCard::CanPlay2)));
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}
BOOL CYareCard::CanPlay1(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() != GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep));
}
BOOL CYareCard::CanPlay2(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep));
}
//____________________________________________________________________________
//
CAleatoryCard::CAleatoryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aleatory"), CardType::Instant, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAleatoryCard::OnFlipSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE));
	
	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CAleatoryCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAleatoryCard::BeforeResolution));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

BOOL CAleatoryCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CAleatoryCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
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
		CPowerModifier* pModifier1 = new CPowerModifier(Power(+1));
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
		pModifier1->ApplyTo(pTarget);
		pModifier2->ApplyTo(pTarget);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"));

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pTarget);
	}
	return true;
}

void CAleatoryCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

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
				CPowerModifier* pModifier1 = new CPowerModifier(Power(+1));
				CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
				pModifier1->ApplyTo(pTarget);
				pModifier2->ApplyTo(pTarget);
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
CFreneticEfreetCard::CFreneticEfreetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Frenetic Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(1))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFreneticEfreetCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::_PhasedOut));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFreneticEfreetCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFreneticEfreetCard::BeforeResolution(CAbilityAction* pAction)
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		pModifier->ApplyTo(this);
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
		CCardFlagModifier* pCardFlagModifier = new CCardFlagModifier();
		pCardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
		pCardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
		pCardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing);
		pCardFlagModifier->ApplyTo(this);
		pModifier->ApplyTo(this);
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

void CFreneticEfreetCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CCardFlagModifier* pCardFlagModifier = new CCardFlagModifier();
				pCardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
				pCardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
				pCardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing);
				pCardFlagModifier->ApplyTo(this);
				pModifier->ApplyTo(this);
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CSeedsOfInnocenceCard::CSeedsOfInnocenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seeds of Innocence"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeedsOfInnocenceCard::BeforeResolution));
		
	AddSpell(cpSpell.GetPointer());
}

bool CSeedsOfInnocenceCard::BeforeResolution(CAbilityAction* pAction)
{
	int P0LifeGain = 0;
	int P1LifeGain = 0;

	CPlayer* P0 = GetGame()->GetPlayer(0);
	CPlayer* P1 = GetGame()->GetPlayer(1);

	CZone* pBattlefield0 = P0->GetZoneById(ZoneId::Battlefield);
	CZone* pBattlefield1 = P1->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield0->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield0->GetAt(i);
		if ((pCard->GetCardType() & CardType::Artifact).Any())
			P0LifeGain += pCard->GetConvertedManaCost();
	}

	for (int i = 0; i < pBattlefield1->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield1->GetAt(i);
		if ((pCard->GetCardType() & CardType::Artifact).Any())
			P1LifeGain += pCard->GetConvertedManaCost();
	}

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("artifact cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	CLifeModifier pModifier0 = CLifeModifier(Life(P0LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier pModifier1 = CLifeModifier(Life(P1LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier0.ApplyTo(P0);
	pModifier1.ApplyTo(P1);

	return true;
}
//____________________________________________________________________________
//
CTaniwhaCard::CTaniwhaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Taniwha"), CardType::_LegendaryCreature, CREATURE_TYPE(Serpent), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddPhasing(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTaniwhaCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CTaniwhaCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFlagModifier* pCardFlagModifier = new CCardFlagModifier();
	pCardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
	pCardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
	pCardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
	CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing);

	for (int i = pBattlefield->GetSize()-1; i >= 0; --i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsLand())
		{
			pCardFlagModifier->ApplyTo(pCard);
			pModifier->ApplyTo(pCard);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CAfiyaGroveCard::CAfiyaGroveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Afiya Grove"), CardType::GlobalEnchantment,	nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAfiyaGroveCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAfiyaGroveCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAfiyaGroveCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (IsInplay() && GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0 && !pTarget->GetCardKeyword()->HasCantGetCounters())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -1);
		CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

		pModifier1.ApplyTo(this);
		pModifier2.ApplyTo(pTarget);
	}

	return true;
}

bool CAfiyaGroveCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == _T("+1/+1"));
}

//____________________________________________________________________________
//
CPhyrexianDreadnoughtCard::CPhyrexianDreadnoughtCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Dreadnought"), CardType::_ArtifactCreature, CREATURE_TYPE(Dreadnought), nID,
		_T("1"), Power(12), Life(12))
	  , m_MainSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPhyrexianDreadnoughtCard::OnMainSelected))
	  , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPhyrexianDreadnoughtCard::OnCreatureSelected))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianDreadnoughtCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianDreadnoughtCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	
	pCreatures.RemoveAll();
	pRemainingCreatures.RemoveAll();
	nSacrificedPower = 0;
	nRemainingPower = 0;
	
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (m_CardFilter.IsCardIncluded(pCard))
		{
			pRemainingCreatures.AddCard(pCard, CardPlacement::Top);
			int nPower = (int)(((CCreatureCard*)pCard)->GetPower());
			if (nPower > 0)
				nRemainingPower += nPower;
		}
	}

	if (nRemainingPower >= 12)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Sacrifice %s"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Sacrifice creatures with total power 12 or more"));

			entries.push_back(selectionEntry);
		}
		m_MainSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		pModifier.ApplyTo(this);
	}

	return true;
}

void CPhyrexianDreadnoughtCard::OnMainSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s decides to sacrifice %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s decides to sacrifice creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CreatureSelection(pSelectionPlayer);

				return;
			}
		}
}

void CPhyrexianDreadnoughtCard::CreatureSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	if (nSacrificedPower >= 12)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop sacrificing creatures -- total power %d"), nSacrificedPower);

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingCreatures.GetSize(); ++i)
	{
		CCard* pCard = pRemainingCreatures.GetAt(i);
		int nPower = (int)(((CCreatureCard*)pCard)->GetPower());
		if ((nPower >= 0) || (nRemainingPower + nPower + nSacrificedPower >= 12))
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Sacrifice %s (power %d, running total %d)"),
				pCard->GetCardName(TRUE), nPower, nSacrificedPower + nPower);

			entries.push_back(entry);
		}
					
	}
	m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CPhyrexianDreadnoughtCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops sacrificing creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Finale(pSelectionPlayer);
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pCreatures.AddCard(pCard, CardPlacement::Top);
				pRemainingCreatures.RemoveCard(pCard);

				int nPower = (int)(((CCreatureCard*)pCard)->GetPower());
				nSacrificedPower += nPower;
				if (nPower > 0)
					nRemainingPower -= nPower;

				CreatureSelection(pSelectionPlayer);

				return;
			}
		}
}

void CPhyrexianDreadnoughtCard::Finale(CPlayer* pPlayer)
{
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pPlayer);

	for (int i = 0; i < pCreatures.GetSize(); ++i)
	{
		CCard* pCard = pCreatures.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CMalignantGrowthCard::CMalignantGrowthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Malignant Growth"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CMalignantGrowthCard::OnCounterMoved))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	GetCounterContainer()->ScheduleCounter(GROWTH_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

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
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(GROWTH_COUNTER, +1, false));		

		cpAbility->SetAbilityName(_T("Growth counter ability"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
				::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);				
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMalignantGrowthCard::BeforeResolution));

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

bool CMalignantGrowthCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	int nCounters = this->GetCounterContainer()->GetCounter(GROWTH_COUNTER)->GetCount();
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	if (nCounters > 0)
	{
		int nPrevDraw = pPlayer->GetTurnDrawCount();

		CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(nCounters), MaximumValue(nCounters));
		pModifier1.ApplyTo(pPlayer);
	
		int nNextDraw = pPlayer->GetTurnDrawCount();
		int nNewDraws = nNextDraw - nPrevDraw;

		if (nNewDraws > 0)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-nNewDraws), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pPlayer);
		}
	}

	return true;
}


void CMalignantGrowthCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CTombstoneStairwellCard::CTombstoneStairwellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tombstone Stairwell"), CardType::_WorldEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener1(VAR_NAME(m_cpAListener1), CounterMovedEventSource::Listener::EventCallback(this, &CTombstoneStairwellCard::OnCounterMoved))
	, m_cpAListener2(VAR_NAME(m_cpAListener2), CardMovementEventSource::Listener::EventCallback(this, &CTombstoneStairwellCard::OnZoneChanged))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener1.GetPointer());
	GetMovedEventSource()->AddListener(m_cpAListener2.GetPointer());
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

		cpAbility->SetAbilityName(_T("Cumulative upkeep ability"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->SetAbilityName(_T("Tombspawn creation ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTombstoneStairwellCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTombstoneStairwellCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTombstoneStairwellCard::BeforeResolution2));
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

void CTombstoneStairwellCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		pTokens.RemoveAll();
}

bool CTombstoneStairwellCard::BeforeResolution1(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Graveyard);
		int nCreatureCards = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

		CCountedCardContainer pCreatedTokens;
		pCreatedTokens.RemoveAll();
		
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Tombspawn"), 2978, nCreatureCards, false, ZoneId::Battlefield, &pCreatedTokens);
		pModifier.ApplyTo(pPlayer);

		for (int ic = 0; ic < pCreatedTokens.GetSize(); ic++)
			pTokens.AddCard(pCreatedTokens.GetAt(ic), CardPlacement::Top);
		
	}
	return true;
}

bool CTombstoneStairwellCard::BeforeResolution2(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration);

	for (int ic = 0; ic < pTokens.GetSize(); ic++)
	{
		CCard* pToken = pTokens.GetAt(ic);
		if (pToken)
			pModifier.ApplyTo(pToken);
	}
	
	return true;
}

void CTombstoneStairwellCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, n_value);
		mCost.AddCost(CManaCost::Color::Black, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CTaintedSpecterCard::CTaintedSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tainted Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTaintedSpecterCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTaintedSpecterCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

bool CTaintedSpecterCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't put a card on library"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Put %s on top of your library"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}
	return true;
}

void CTaintedSpecterCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything on top of his library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					CCardFilter::GetFilter(_T("cards")), // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier1.ApplyTo(pSelectionPlayer);
				
				CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
				std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage)));
				CLifeModifier pModifier3 = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
				}

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier3.ApplyTo(GetGame()->GetPlayer(ip));
				}

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on top of his library"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others, pSelectionPlayer);
				
				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSealedFateCard::CSealedFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sealed Fate"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			0));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetSelectionOptions(MaximumValue(1), ZoneId::Exile, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("cards")));
	cpSpell->SetReorder(TRUE, ZoneId::Library);
	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSealedFateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSealedFateCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nExtraCount = pAction->GetCostConfigEntry().GetExtraValue();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nExtraCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	return true;
}

//____________________________________________________________________________
//
CMangarasEquityCard::CMangarasEquityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mangara's Equity"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CMangarasEquityCard::OnSelectionDone))
{
	{
		counted_ptr<CUpkeepAbility> cpAbility(::CreateObject<CUpkeepAbility>(this, _T("1") WHITE_MANA_TEXT));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CMangarasEquityCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CMangarasEquityCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		AddAbility(cpAbility.GetPointer());
	}
}

void CMangarasEquityCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cBlack = false;
		cRed = false;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("red"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CMangarasEquityCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cBlack = true;

				return;
			}
			if (nSelectedIndex == 2)
			{
				cRed = true;

				return;
			}
		}
}

bool CMangarasEquityCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage)
{
	if (pCard->GetCardType().IsCreature() && ((cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) || (cRed && pCard->IsColor(CManaPoolBase::Color::Red))))
	{
		triggerContext.m_pCreature = (CCreatureCard*)pCard;
		triggerContext.m_LifeModifier = CLifeModifier(pDamage.m_nLifeDelta, this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		return true;
	}
	else return false;
}

bool CMangarasEquityCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (pCard->GetCardType().IsCreature() && (pToCreature->GetController() == GetController()) && (pToCreature->IsColor(CManaPoolBase::Color::White)) &&
		((cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) || (cRed && pCard->IsColor(CManaPoolBase::Color::Red))))
	{
		triggerContext.m_pCreature = (CCreatureCard*)pCard;
		triggerContext.m_LifeModifier = CLifeModifier(pDamage.m_nLifeDelta, this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		return true;
	}
	else return false;
}

//____________________________________________________________________________
//
/*CSapphireCharmCard::CSapphireCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sapphire Charm"), CardType::Instant, nID)
{
	{
		//Target player draws a card at the beginning of the next turn's upkeep
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSapphireCharmCard::BeforeResolution));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Target player draws a card at the beginning of the next turn's upkeep. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target creature gains flying until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Target creature gains flying until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target creature an opponent controls phases out.
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

		CCardFlagModifier* m_CardFlagModifier = new CCardFlagModifier();
				m_CardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
				m_CardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
				m_CardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());

		cpSpell->GetTargetModifier().CCardModifiers::push_back(m_CardFlagModifier);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Target creature an opponent controls phases out. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CSapphireCharmCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(pAction->GetAssociatedPlayer());
	
	return true;
}
*/
//____________________________________________________________________________
//
CQuirionElvesCard::CQuirionElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Elves"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CQuirionElvesCard::OnSelectionDone))
{
	{
	    counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	    counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CQuirionElvesCard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Selected color (W). Activates"));
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
				&CQuirionElvesCard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Selected color (U). Activates"));
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
				&CQuirionElvesCard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Selected color (B). Activates"));
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
				&CQuirionElvesCard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Selected color (R). Activates"));
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
				&CQuirionElvesCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Selected color (G). Activates"));
		AddAbility(cpAbility.GetPointer());
	}
}

void CQuirionElvesCard::Move(CZone* pToZone,
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

void CQuirionElvesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

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

BOOL CQuirionElvesCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CQuirionElvesCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CQuirionElvesCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CQuirionElvesCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CQuirionElvesCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CRootsOfLifeCard::CRootsOfLifeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Roots of Life"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CRootsOfLifeCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRootsOfLifeCard::SetTriggerContext));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

void CRootsOfLifeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cIsland = false;
		cSwamp = false;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("Island"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("Swamp"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CRootsOfLifeCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cIsland = true;

				return;
			}
			if (nSelectedIndex == 2)
			{
				cSwamp = true;

				return;
			}
		}
}

bool CRootsOfLifeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, Orientation fromOrientation, Orientation toOrientation)
{
	if ((cIsland && (pCard->GetCardType() & CardType::Island).Any()) || (cSwamp && (pCard->GetCardType() & CardType::Swamp).Any())) return true;
	else return false;
}

//____________________________________________________________________________
//
CBazaarOfWondersCard::CBazaarOfWondersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bazaar of Wonders"), CardType::_WorldEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);	
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CBazaarOfWondersCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBazaarOfWondersCard::SetTriggerContext));		
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->AddAbilityTag(AbilityTag::Counterspell);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CBazaarOfWondersCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CBazaarOfWondersCard::BeforeResolution(TriggeredAbility2::TriggeredActionType* pAction) const
{
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCard* pCard = triggerContext.m_pCard;

	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	m_CardFilter1.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));
	m_CardFilter2.AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	m_CardFilter2.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
		CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
		if ((m_CardFilter1.CountIncluded(pGraveyard->GetCardContainer()) > 0) || (m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer()) > 0))
		{
			bFound = true;
			break;
		}
	}

	return bFound;
}

//____________________________________________________________________________
//
CCatacombDragonCard::CCatacombDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Catacomb Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCatacombDragonCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCatacombDragonCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CCatacombDragonCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	if (pCreature2->GetCardType().IsArtifact() || pCreature2->GetCardKeyword()->HasChangeling() || pCreature2->GetCreatureType().HasType(SingleCreatureType::Dragon)) return false;

	triggerContext.m_pCard = pCreature2;

	return true;
}

bool CCatacombDragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetTriggerContext().m_pCard;

	int nPowerReduction = pCreature->GetPower() / 2;

	CPowerModifier pModifier = CPowerModifier(Power(-nPowerReduction));
	pModifier.ApplyTo(pCreature);

	return false;
}
//____________________________________________________________________________
//
CShallowGraveCard::CShallowGraveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("	ave"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShallowGraveCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}


bool CShallowGraveCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	int nGraveSize = pGraveyard->GetSize();
	bool bFound = false;
	CCreatureCard* pCard;

	for (int i = nGraveSize - 1; i >= 0; --i)
	{
		if (pGraveyard->GetAt(i)->GetCardType().IsCreature())
		{
			pCard = (CCreatureCard*)pGraveyard->GetAt(i);
			bFound = true;
			break;
		}
	}

	if (bFound)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);

		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier();
			pModifier2.GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier2.GetModifier().SetOneTurnOnly(TRUE);

		pModifier1.ApplyTo(pCard);
		pModifier2.ApplyTo(pCard);

		CCountedCardContainer pSubjects;

		if (pCard->IsInplay())
			pSubjects.AddCard(pCard, CardPlacement::Top);

		CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
		pModifier3.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CSoulshriekCard::CSoulshriekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soulshriek"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulshriekCard::BeforeResolution));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());	
}

bool CSoulshriekCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer());

	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CPowerModifier pModifier1 = CPowerModifier(Power(+nDomainCount));
	pModifier1.ApplyTo(pTarget);

	CCountedCardContainer pSubjects;

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}
//____________________________________________________________________________
//
CSandGolemCard::CSandGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sand Golem"), CardType::Creature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Hand, ZoneId::_AllZones));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandGolemCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSandGolemCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CSandGolemCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	if (pToZone->GetZoneId() == ZoneId::Graveyard)
		triggerContext.nValue1 = 1;
	else
		triggerContext.nValue1 = 0;

	return true;
}

bool CSandGolemCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (pAction->GetTriggerContext().nValue1 == 1)
	{
		CCountedCardContainer pSubjects;
		if (IsInGraveyard())
			pSubjects.AddCard(this, CardPlacement::Top);

		CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Sand Golem Effect"), 61090, &pSubjects);
		pModifier.ApplyTo(pAction->GetController());

		return true;
	}

	return true;
}

//____________________________________________________________________________
//
CZombieMobCard::CZombieMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Mob"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(0))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CZombieMobCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	m_CardFilter.AddComparer(new AnyCreatureComparer);

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

void CZombieMobCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	
		int nCreatures = m_CardFilter.CountIncluded(pGraveyard->GetCardContainer());

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nCreatures, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CEtherWellCard::CEtherWellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ether Well"), CardType::Instant, nID)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CEtherWellCard::OnSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEtherWellCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CEtherWellCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (pTarget->IsColor(CManaPoolBase::Color::Red))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("put %s on top of its owner's library"), pTarget->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("put %s on the bottom of its owner's library"), pTarget->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pTarget);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(pTarget);
	}

	return true;
}

void CEtherWellCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pTarget = (CCard*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on top of its owner's library"), pSelectionPlayer->GetPlayerName(), pTarget->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pTarget);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCard* pTarget = (CCard*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on the bottom of its owner's library"), pSelectionPlayer->GetPlayerName(), pTarget->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pTarget->Move(pTarget->GetOwner()->GetZoneById(ZoneId::Library), pSelectionPlayer, MoveType::Others, CardPlacement::Bottom);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CDiscordantSpiritCard::CDiscordantSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Discordant Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscordantSpiritCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscordantSpiritCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDiscordantSpiritCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int nDamage = pAction->GetController()->GetDamageTakenThisTurn();

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nDamage);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

bool CDiscordantSpiritCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 0, true);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
CReignOfTerrorCard::CReignOfTerrorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reign of Terror"), CardType::Sorcery, nID)
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CReignOfTerrorCard::OnColorSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReignOfTerrorCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CReignOfTerrorCard::BeforeResolution (CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("destroy all green creatures"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("destroy all white creatures"));

		entries.push_back(selectionEntry);
	}
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return true;
}

void CReignOfTerrorCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects green"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				int nBefore = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));

				CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					pModifier1->ApplyTo(GetGame()->GetPlayer(ip));

				int nAfter = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

				if (nAfter > nBefore)
				{
					int nLifeLoss = nAfter - nBefore;

					CLifeModifier pModifier2 = CLifeModifier(Life(-2 * nLifeLoss), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
					pModifier2.ApplyTo(pSelectionPlayer);
				}

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects white"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				int nBefore = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardTypeComparer(CardType::White | CardType::Creature, true));

				CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					pModifier1->ApplyTo(GetGame()->GetPlayer(ip));

				int nAfter = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

				if (nAfter > nBefore)
				{
					int nLifeLoss = nAfter - nBefore;

					CLifeModifier pModifier2 = CLifeModifier(Life(-2 * nLifeLoss), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
					pModifier2.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CCinderCloudCard::CCinderCloudCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cinder Cloud"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCinderCloudCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCinderCloudCard::BeforeResolution (CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetController = pTarget->GetController();

	BOOL bWhite = pTarget->IsColor(CManaPoolBase::Color::White);
	Power nPower = pTarget->GetLastKnownPower();
	int nBefore = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
	pModifier1.ApplyTo(pTarget);
	
	if (bWhite && (nPower > 0))
	{
		int nAfter = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

		if (nAfter > nBefore)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pTargetController);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CKaerveksPurgeCard::CKaerveksPurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kaervek's Purge"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CKaerveksPurgeCard::OnResolutionCompleted))
	, m_nCards(0)
	, nPower(0)
	, pTargetController(0)
{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, false));		

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
			
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKaerveksPurgeCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CKaerveksPurgeCard::BeforeResolution(CAbilityAction* pAction)
{
	m_nCards = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	nPower = GET_INTEGER(pTarget->GetLastKnownPower());
	pTargetController = (DWORD)pTarget->GetController();
	return true;
}

void CKaerveksPurgeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (nPower <= 0) return;

	int nDead = GetGame()->GetCertainTypeDiedCount(CardType::Creature);
	
	if (nDead > m_nCards)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		int pAux = pTargetController;
		pModifier2.ApplyTo((CPlayer*)pAux);
	}
}

//____________________________________________________________________________
//
CAcidicDaggerCard::CAcidicDaggerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Acidic Dagger"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("4"),
			new AnyCreatureComparer, false));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->AddTapCost();
	
	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CAcidicDaggerCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcidicDaggerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

BOOL CAcidicDaggerCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = GetGame()->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2);
}

bool CAcidicDaggerCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Acidic Dagger Effect"), 61042, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDeliriumCard::CDeliriumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Delirium"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDeliriumCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false, new CDeliriumTargeting));
	ATLASSERT(cpSpell);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CDeliriumCard::CanPlay)));

	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDeliriumCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	pModifier1.ApplyTo(pCreature);

	CLifeModifier* pModifier2 = new CLifeModifier(Life(-GET_INTEGER(pCreature->GetPower())), pCreature, PreventableType::Preventable, DamageType::NonCombatDamage);
	pModifier2->ApplyTo(pCreature->GetController());

	CCreatureKeywordModifier pModifier3 = CCreatureKeywordModifier(CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::DealNoCombatDamage, TRUE);
	pModifier3.ApplyTo(pCreature);
}

BOOL CDeliriumCard::CDeliriumTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CDeliriumCard::CDeliriumTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (!pCard->GetCardType().IsCreature()) return FALSE;
	if (pCard->GetController() != GetSourceCard()->GetGame()->GetActivePlayer()) return FALSE;

	return TRUE;
}

BOOL CDeliriumCard::CanPlay(BOOL bIncludeTricks)
{
	return GetGame()->GetActivePlayer() != GetController();
}

//____________________________________________________________________________
//
CZirilanOfTheClawCard::CZirilanOfTheClawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zirilan of the Claw"), CardType::_LegendaryCreature, CREATURE_TYPE2(Viashino, Shaman), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CZirilanOfTheClawCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CZirilanOfTheClawCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));

	CCountedCardContainer pSubjects;

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController, ZoneId::Library, &m_CardFilter,
		ZoneId::Battlefield, TRUE, CardPlacement::Top, FALSE, FALSE, FALSE, &pSubjects);
	pModifier1.ApplyTo(pController);

	if (pSubjects.GetSize() > 0)
	{
		CCard* pCard = pSubjects.GetAt(0);

		if (pCard->GetCardType().IsCreature())
		{
			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
			pModifier2.ApplyTo((CCreatureCard*)pCard);
		}
		else
		{
			CCardKeywordModifier pModifier3 = CCardKeywordModifier(CardKeyword::CardHaste, TRUE);
			pModifier3.ApplyTo(pCard);
		}

		if (!pCard->IsInplay())
			pSubjects.RemoveCard(pCard);

		CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
		pModifier4.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CBasaltGolemCard::CBasaltGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Basalt Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(2), Life(4))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Artifact, false)))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBasaltGolemCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBasaltGolemCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CBasaltGolemCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;

	return true;
}

bool CBasaltGolemCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Basalt Golem Effect"), 61103, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//