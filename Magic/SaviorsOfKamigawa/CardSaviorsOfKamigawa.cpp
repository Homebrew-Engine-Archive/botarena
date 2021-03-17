#include "stdafx.h"
#include "CardSaviorsOfKamigawa.h"

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

		DEFINE_CARD(CAdamaroFirstToDesireCard);
		DEFINE_CARD(CAEtherShockwaveCard);
		DEFINE_CARD(CAkkiDrillmasterCard);
		DEFINE_CARD(CAkkiUnderlingCard);
		DEFINE_CARD(CAkutaBornofAshCard);
		DEFINE_CARD(CArabaMothriderCard);
		DEFINE_CARD(CArashiTheSkyAsunderCard);
		DEFINE_CARD(CAshesOfTheFallenCard);
		DEFINE_CARD(CAyumiTheLastVisitorCard);
		DEFINE_CARD(CBarrelDownSokenzanCard);
		DEFINE_CARD(CBloodClockCard);
		DEFINE_CARD(CBounteousKirinCard);
		DEFINE_CARD(CBriarknitKamiCard);
		DEFINE_CARD(CBurningEyeZuberaCard);
		DEFINE_CARD(CCaptiveFlameCard);
		DEFINE_CARD(CCelestialKirinCard);
		DEFINE_CARD(CChargeAcrossTheArabaCard);
		DEFINE_CARD(CChoiceOfDamnationsCard);
		DEFINE_CARD(CCloudhoofKirinCard);
		DEFINE_CARD(CCutTheEarthlyBondCard);
		DEFINE_CARD(CDeathDeniedCard);
		DEFINE_CARD(CDeathknellKamiCard);
		DEFINE_CARD(CDeathOfAThousandStingsCard);
		DEFINE_CARD(CDeathmaskNezumiCard);
		DEFINE_CARD(CDenseCanopyCard);
		DEFINE_CARD(CDescendantOfMasumaroCard);
		DEFINE_CARD(CDescendantOfSoramaroCard);
		DEFINE_CARD(CDosansOldestChantCard);
		DEFINE_CARD(CDreamcatcherCard);
		DEFINE_CARD(CEbonyOwlNetsukeCard);
		DEFINE_CARD(CEiganjoFreeRidersCard);
		DEFINE_CARD(CElderPineOfJukaiCard);
		DEFINE_CARD(CErayoSoratamiAscendantCard);
		DEFINE_CARD(CExileIntoDarknessCard);
		DEFINE_CARD(CFeralLightningCard);
		DEFINE_CARD(CFiddleheadKamiCard);
		DEFINE_CARD(CFootstepsOfTheGoryoCard);
		DEFINE_CARD(CFreedFromTheRealCard);
		DEFINE_CARD(CGazeOfAdamaroCard);
		DEFINE_CARD(CGhostLitNourisherCard);
		DEFINE_CARD(CGhostLitRaiderCard);
		DEFINE_CARD(CGhostLitRedeemerCard);
		DEFINE_CARD(CGhostLitStalkerCard);
		DEFINE_CARD(CGhostLitWarderCard);
		DEFINE_CARD(CGlitterfangCard);
		DEFINE_CARD(CGnatMiserCard);
		DEFINE_CARD(CGodosIrregularsCard);
		DEFINE_CARD(CHandOfCrueltyCard);
		DEFINE_CARD(CHandOfHonorCard);
		DEFINE_CARD(CHaruOnnaCard);
		DEFINE_CARD(CHidetsugusSecondRiteCard);
		DEFINE_CARD(CHomuraHumanAscendantCard);
		DEFINE_CARD(CIdeasUnboundCard);
		DEFINE_CARD(CIizukaTheRuthlessCard);
		DEFINE_CARD(CInameAsOneCard);
		DEFINE_CARD(CInfernalKirinCard);
		DEFINE_CARD(CInnerCalmOuterStrengthCard);
		DEFINE_CARD(CInnerChamberGuardCard);
		DEFINE_CARD(CInnerFireCard);
		DEFINE_CARD(CIvoryCraneNetsukeCard);
		DEFINE_CARD(CJiwariTheEarthAflameCard);
		DEFINE_CARD(CKagemaroFirstToSufferCard);
		DEFINE_CARD(CKagemarosClutchCard);
		DEFINE_CARD(CKamiOfEmptyGravesCard);
		DEFINE_CARD(CKamiOfTheCrescentMoonCard);
		DEFINE_CARD(CKamiOfTheTendedGardenCard);
		DEFINE_CARD(CKatakiWarsWageCard);
		DEFINE_CARD(CKemuriOnnaCard);
		DEFINE_CARD(CKikusShadowCard);
		DEFINE_CARD(CKiriOnnaCard);
		DEFINE_CARD(CKitsuneBonesetterCard);
		DEFINE_CARD(CKitsuneDawnbladeCard);
		DEFINE_CARD(CKitsuneLoreweaverCard);
		DEFINE_CARD(CKiyomaroFirstToStandCard);
		DEFINE_CARD(CKuonOgreAscendantCard);
		DEFINE_CARD(CKurosTakenCard);
		DEFINE_CARD(CLocustMiserCard);
		DEFINE_CARD(CMagaTraitortoMortalsCard);
		DEFINE_CARD(CManrikiGusariCard);
		DEFINE_CARD(CMasumaroFirstToLiveCard);
		DEFINE_CARD(CMeasureOfWickednessCard);
		DEFINE_CARD(CMikokoroCenterOfTheSeaCard);
		DEFINE_CARD(CMinamoScrollkeeperCard);
		DEFINE_CARD(CMirentheMoaningWellCard);
		DEFINE_CARD(CMoltingSkinCard);
		DEFINE_CARD(CMoonbowIllusionistCard);
		DEFINE_CARD(CMoonwingMothCard);
		DEFINE_CARD(CNightsoilKamiCard);
		DEFINE_CARD(CNikkoOnnaCard);
		DEFINE_CARD(COboroBreezecallerCard);
		DEFINE_CARD(COboroEnvoyCard);
		DEFINE_CARD(COboroPalaceInTheCloudsCard);
		DEFINE_CARD(CONaginataCard);
		DEFINE_CARD(COneWithNothingCard);
		DEFINE_CARD(COniOfWildPlacesCard);
		DEFINE_CARD(COppressiveWillCard);
		DEFINE_CARD(COverwhelmingIntellectCard);
		DEFINE_CARD(CPathOfAngersFlameCard);
		DEFINE_CARD(CPlowThroughReitoCard);
		DEFINE_CARD(CPresenceOfTheWiseCard);
		DEFINE_CARD(CPromisedKannushiCard);
		DEFINE_CARD(CPromiseOfBunreiCard);
		DEFINE_CARD(CRallyTheHordeCard);
		DEFINE_CARD(CRavingOniSlaveCard);
		DEFINE_CARD(CRazorjawOniCard);
		DEFINE_CARD(CRekiTheHistoryOfKamigawaCard);
		DEFINE_CARD(CReverenceCard);
		DEFINE_CARD(CRoninCavekeeperCard);
		DEFINE_CARD(CRuneTailKitsuneAscendantCard);
		DEFINE_CARD(CRushingTideZuberaCard);
		DEFINE_CARD(CSakuraTribeScoutCard);
		DEFINE_CARD(CScrollOfOriginsCard);
		DEFINE_CARD(CSeedTheLandCard);
		DEFINE_CARD(CSeekTheHorizonCard);
		DEFINE_CARD(CSekkiSeasonsGuideCard);
		DEFINE_CARD(CShinenOfFearsChillCard);
		DEFINE_CARD(CShinenOfFlightsWingsCard);
		DEFINE_CARD(CShinenOfFurysFireCard);
		DEFINE_CARD(CShinenOfLifesRoarCard);
		DEFINE_CARD(CShinenOfStarsLightCard);
		DEFINE_CARD(CSinkIntoTakenumaCard);
		DEFINE_CARD(CSkullCollectorCard);
		DEFINE_CARD(CSkyfireKirinCard);
		DEFINE_CARD(CSokenzanRenegadeCard);
		DEFINE_CARD(CSokenzanSpellbladeCard);
		DEFINE_CARD(CSoramaroFirstToDreamCard);
		DEFINE_CARD(CSoratamiCloudChariotCard);
		DEFINE_CARD(CSpiralingEmbersCard);
		DEFINE_CARD(CStampedingSerowCard);
		DEFINE_CARD(CSunderFromWithinCard);
		DEFINE_CARD(CThoughtsOfRuinCard);
		DEFINE_CARD(CTombOfUramiCard);
		DEFINE_CARD(CToriiWatchwardCard);
		DEFINE_CARD(CTrustedAdvisorCard);
		DEFINE_CARD(CWineOfBloodAndIronCard);
		DEFINE_CARD(CYukiOnnaCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CEiganjoFreeRidersCard::CEiganjoFreeRidersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Eiganjo Free-Riders"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility,
									CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Creature | CardType::White, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAdamaroFirstToDesireCard::CAdamaroFirstToDesireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Adamaro, First to Desire"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //opponents hand

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkkiDrillmasterCard::CAkkiDrillmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Drillmaster"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArabaMothriderCard::CArabaMothriderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Araba Mothrider"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArashiTheSkyAsunderCard::CArashiTheSkyAsunderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arashi, the Sky Asunder"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				GREEN_MANA_TEXT,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				Life(0), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(-1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Life(0),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(-1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathknellKamiCard::CDeathknellKamiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Deathknell Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(
			new CScheduledCardModifier(pGame, new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice),
				TurnNumberDelta(-1),
				NodeId::EndStep, 
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 1
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 1
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2)); //=Soulshift 1

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGhostLitNourisherCard::CGhostLitNourisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost-Lit Nourisher"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGhostLitRaiderCard::CGhostLitRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost-Lit Raider"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGhostLitRedeemerCard::CGhostLitRedeemerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost-Lit Redeemer"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				WHITE_MANA_TEXT,
				Life(+2), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Life(+4), PreventableType::NotPreventable));

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGhostLitStalkerCard::CGhostLitStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost-Lit Stalker"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("4") BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				4, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGhostLitWarderCard::CGhostLitWarderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost-Lit Warder"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("3") BLUE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("2"));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("3") BLUE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("4"));

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGlitterfangCard::CGlitterfangCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Glitterfang"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		RED_MANA_TEXT, Power(1), Life(1))
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
CHandOfCrueltyCard::CHandOfCrueltyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of Cruelty"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHandOfHonorCard::CHandOfHonorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of Honor"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIizukaTheRuthlessCard::CIizukaTheRuthlessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iizuka the Ruthless"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Samurai"), _T("Samurai"), new CreatureTypeComparer(CREATURE_TYPE(Samurai), false))
{
	{
		//Bushido 2
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T("2") RED_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Samurai), false),
				Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInnerChamberGuardCard::CInnerChamberGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Inner-Chamber Guard"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(2))
{
	//Bushido 2
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJiwariTheEarthAflameCard::CJiwariTheEarthAflameCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jiwari, the Earth Aflame"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)), FALSE,
				Life(0), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(-1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Channel ability
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				Life(0),
				new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(-1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKamiOfEmptyGravesCard::CKamiOfEmptyGravesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Empty Graves"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(1))
{
	//Soulshift 3
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTheCrescentMoonCard::CKamiOfTheCrescentMoonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of the Crescent Moon"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTheTendedGardenCard::CKamiOfTheTendedGardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of the Tended Garden"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(4))
{
	AddUpkeepCost(GREEN_MANA_TEXT);

	{
		//Soulshift 3
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKitsuneDawnbladeCard::CKitsuneDawnbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Dawnblade"), CardType::Creature, CREATURE_TYPE2(Fox, Samurai), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKurosTakenCard::CKurosTakenCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Kuro's Taken"), CardType::Creature, CREATURE_TYPE2(Rat, Samurai), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMasumaroFirstToLiveCard::CMasumaroFirstToLiveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Masumaro, First to Live"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	cpAbility->SetPowerMultiplier(Power(2));
	cpAbility->SetToughnessMultiplier(Life(2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoonwingMothCard::CMoonwingMothCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Moonwing Moth"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);	
}

//____________________________________________________________________________
//
CNightsoilKamiCard::CNightsoilKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightsoil Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	//Soulshift 5
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 5
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(6)); //=Soulshift 5

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COniOfWildPlacesCard::COniOfWildPlacesCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Oni of Wild Places"), CardType::Creature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("5") RED_MANA_TEXT, Power(6), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility,
									CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Creature | CardType::Red, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPromisedKannushiCard::CPromisedKannushiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Promised Kannushi"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	//Soulshift 7
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 7
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(8)); //=Soulshift 7

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRazorjawOniCard::CRazorjawOniCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razorjaw Oni"), CardType::Creature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Black, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRekiTheHistoryOfKamigawaCard::CRekiTheHistoryOfKamigawaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reki, the History of Kamigawa"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Legendary, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRoninCavekeeperCard::CRoninCavekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ronin Cavekeeper"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(3))
{
	//Bushido 2
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSakuraTribeScoutCard::CSakuraTribeScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sakura-Tribe Scout"), CardType::Creature, CREATURE_TYPE3(Snake, Shaman, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>( this,
			_T(""),
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShinenOfFearsChillCard::CShinenOfFearsChillCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shinen of Fear's Chill"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//Channel ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CShinenOfFlightsWingsCard::CShinenOfFlightsWingsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shinen of Flight's Wings"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	//Channel ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetAbilityText(_T("Channel - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CShinenOfFurysFireCard::CShinenOfFurysFireCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Shinen of Fury's Fire"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	//Channel ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetAbilityText(_T("Channel - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CShinenOfLifesRoarCard::CShinenOfLifesRoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shinen of Life's Roar"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddLure(FALSE);

	{
		//Channel ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Lure, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetAbilityText(_T("Channel - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CShinenOfStarsLightCard::CShinenOfStarsLightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Shinen of Stars' Light"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	//Channel ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetAbilityText(_T("Channel - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSkullCollectorCard::CSkullCollectorCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skull Collector"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3),
		_T("1") BLACK_MANA_TEXT)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility,
									CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Creature | CardType::Black, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStampedingSerowCard::CStampedingSerowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stampeding Serow"), CardType::Creature, CREATURE_TYPE2(Antelope, Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		// Not optional
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
			new CardTypeComparer(CardType::Creature | CardType::Green, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CToriiWatchwardCard::CToriiWatchwardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Torii Watchward"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		//Soulshift 4
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMikokoroCenterOfTheSeaCard::CMikokoroCenterOfTheSeaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mikokoro, Center of the Sea"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this,
				_T("2"), 1, 1));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Each player draws a card. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COboroPalaceInTheCloudsCard::COboroPalaceInTheCloudsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Oboro, Palace in the Clouds"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1"),
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CManrikiGusariCard::CManrikiGusariCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Manriki-Gusari"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManrikiGusariCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CManrikiGusariCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(pCard,
			_T(""),
			new CardTypeComparer(CardType::Equipment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiCloudChariotCard::CSoratamiCloudChariotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soratami Cloud Chariot"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCaptiveFlameCard::CCaptiveFlameCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Captive Flame"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDenseCanopyCard::CDenseCanopyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dense Canopy"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(+0), Life(+0), CreatureKeyword::OnlyBlockFlying));

	cpAbility->SetListenToKeyword();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoltingSkinCard::CMoltingSkinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Molting Skin"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->GetCost().AddReturnThisCardCost(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReverenceCard::CReverenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Reverence"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)

	, m_CardFilter(new CreaturePowerComparer<std::greater<int>>(2))
{
	counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
		::CreateObject<CCanBeAttackedByEnchantment>(this,
			&m_CardFilter));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeedTheLandCard::CSeedTheLandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seed the Land"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetCreateTokenOption(TRUE, _T("Snake F"), 2877, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAEtherShockwaveCard::CAEtherShockwaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Æther Shockwave"), CardType::Instant, nID)
{
	{
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)));

		cpSpell->SetAbilityText(_T("Tap all Spirits. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

		cpSpell->SetAbilityText(_T("Tap all non-Spirit creatures. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathDeniedCard::CDeathDeniedCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death Denied"), CardType::Instant | CardType::Arcane, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
}

//____________________________________________________________________________
//
CGazeOfAdamaroCard::CGazeOfAdamaroCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaze of Adamaro"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			ZoneId::Hand, FALSE,
			new TrueCardComparer,
			PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COneWithNothingCard::COneWithNothingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("One with Nothing"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COneWithNothingCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool COneWithNothingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = pAction->GetController();

	CDiscardCardCommon::ResolveDiscardCards(
		pPlayer, NULL, pPlayer,
		SpecialNumber::Any, MoveType::Discard,
		ZoneId::Hand);

	return true;
}

//____________________________________________________________________________
//
CPathOfAngersFlameCard::CPathOfAngersFlameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Path of Anger's Flame"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+0)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDosansOldestChantCard::CDosansOldestChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dosan's Oldest Chant"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT,
			Life(+6), PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFeralLightningCard::CFeralLightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feral Lightning"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeralLightningCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CFeralLightningCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental J"), 2739, 3, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(GetGame(),
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater);

	for (int i = 0; i < pTokens.GetSize(); ++i)
		pModifier2->ApplyTo(pTokens.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CPresenceOfTheWiseCard::CPresenceOfTheWiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Presence of the Wise"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("cards")), ZoneId::Hand);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSeekTheHorizonCard::CSeekTheHorizonCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Seek the Horizon"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(3));
}

//____________________________________________________________________________
//
CSpiralingEmbersCard::CSpiralingEmbersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spiraling Embers"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Hand, TRUE,
			new TrueCardComparer, PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSunderFromWithinCard::CSunderFromWithinCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Sunder from Within"), CardType::Sorcery | CardType::Arcane, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CKagemarosClutchCard::CKagemarosClutchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kagemaro's Clutch"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CKagemarosClutchCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CKagemarosClutchCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CKagemarosClutchCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Hand,
			new TrueCardComparer, (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->SetPowerMultiplier(Power(-1));
	cpEnchantAbility->SetToughnessMultiplier(Life(-1));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CKagemarosClutchCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CGodosIrregularsCard::CGodosIrregularsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godo's Irregulars"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			RED_MANA_TEXT,
			new BlockingThisCreatureComparer(this), FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkkiUnderlingCard::CAkkiUnderlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Underling"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Hand);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathmaskNezumiCard::CDeathmaskNezumiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathmask Nezumi"), CardType::Creature, CREATURE_TYPE2(Rat, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Hand);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathOfAThousandStingsCard::CDeathOfAThousandStingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death of a Thousand Stings"), CardType::Instant | CardType::Arcane, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathOfAThousandStingsCard::SetTriggerContext));
	    cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathOfAThousandStingsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CDeathOfAThousandStingsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}

bool CDeathOfAThousandStingsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}

//____________________________________________________________________________
//
CExileIntoDarknessCard::CExileIntoDarknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exile into Darkness"), CardType::Sorcery, nID)
{
	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
				_T("4") BLACK_MANA_TEXT,
				&m_CardFilter));	

		AddSpell(cpSpell.GetPointer());
    }
    {
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExileIntoDarknessCard::SetTriggerContext));
	    cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CExileIntoDarknessCard::BeforeResolution));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CExileIntoDarknessCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}

bool CExileIntoDarknessCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}

//____________________________________________________________________________
//
CAkutaBornofAshCard::CAkutaBornofAshCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akuta, Born of Ash"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkutaBornofAshCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAkutaBornofAshCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetSacrificeResolutionCost(1, CCardFilter::GetFilter(_T("Swamps")));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CAkutaBornofAshCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}

bool CAkutaBornofAshCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
}
/* 	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			FALSE,	// opponent's turn only
			TRUE);	// your turn only
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));
		cpAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAkutaBornofAshCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CAkutaBornofAshCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand));
} */

//____________________________________________________________________________
//
CMagaTraitortoMortalsCard::CMagaTraitortoMortalsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maga, Traitor to Mortals"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMagaTraitortoMortalsCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		typedef 
			TTriggeredTargetAbility < CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);		
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMagaTraitortoMortalsCard::BeforeResolution));		

		AddAbility(cpAbility.GetPointer());
	}
}

void CMagaTraitortoMortalsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);

		pModifier.ApplyTo(this);
	}
}
bool CMagaTraitortoMortalsCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	if (nCounterCount<0) return false;	
	
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCounterCount));
	pAction->SetTriggerContext(triggerContext);
	
	return nCounterCount >= 0;
}

//____________________________________________________________________________
//
CWineOfBloodAndIronCard::CWineOfBloodAndIronCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wine of Blood and Iron"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("4"),
			Power(SpecialNumber::MultiplyBy2), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	//Sacrifice this at the beginning of the next end step.
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(pGame,
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice),
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToLater));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFootstepsOfTheGoryoCard::CFootstepsOfTheGoryoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Footsteps of the Goryo"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->FlagTargets(TRUE,  // flag targets
						TRUE); // until end of turn

	m_CardFilter.AddComparer(new CardAbilityFlagComparer(cpSpell.GetPointer())); // flagged by this spell

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter, //move the targeted and flagged creature
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMirentheMoaningWellCard::CMirentheMoaningWellCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Miren, the Moaning Well"), nID, CardType::NonbasicLand | CardType::Legendary)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CMirentheMoaningWellCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("3"),
				Life(+0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CMirentheMoaningWellCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(pCreature->GetLastKnownToughness()), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NonCombatDamage // Damage Type
		);
		pmodifier1.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CONaginataCard::CONaginataCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("O-Naginata"), CardType::Artifact | CardType::Equipment, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this,
			_T("2"),
			new CreaturePowerComparer<std::greater<int>>(2)));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBriarknitKamiCard::CBriarknitKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Briarknit Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHaruOnnaCard::CHaruOnnaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haru-Onna"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKemuriOnnaCard::CKemuriOnnaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kemuri-Onna"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKiriOnnaCard::CKiriOnnaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiri-Onna"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNikkoOnnaCard::CNikkoOnnaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nikko-Onna"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYukiOnnaCard::CYukiOnnaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yuki-Onna"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(1))
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
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoonbowIllusionistCard::CMoonbowIllusionistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moonbow Illusionist"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("2"),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::BasicLand, CardType::_All, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::BasicLand, CardType::_All, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::BasicLand, CardType::_All, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::BasicLand, CardType::_All, TRUE, _T("Plains"));
	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COboroBreezecallerCard::COboroBreezecallerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oboro Breezecaller"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2"),
			FALSE, TRUE,
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoramaroFirstToDreamCard::CSoramaroFirstToDreamCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soramaro, First to Dream"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("4"), 1));

		cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEbonyOwlNetsukeCard::CEbonyOwlNetsukeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ebony Owl Netsuke"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEbonyOwlNetsukeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEbonyOwlNetsukeCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CEbonyOwlNetsukeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() > 6;
}

bool CEbonyOwlNetsukeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() > 6;
}

//____________________________________________________________________________
//
COverwhelmingIntellectCard::COverwhelmingIntellectCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Overwhelming Intellect"), CardType::Instant, nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false))
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COverwhelmingIntellectCard::BeforeResolution));
}

bool COverwhelmingIntellectCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(converted), MaximumValue(converted));

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CKatakiWarsWageCard::CKatakiWarsWageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kataki, War's Wage"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CKatakiWarsWageCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKatakiWarsWageCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(pCard, _T("1")));

	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
CDescendantOfMasumaroCard::CDescendantOfMasumaroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Descendant of Masumaro"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDescendantOfMasumaroCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

void CDescendantOfMasumaroCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pConHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* pOppHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nConCount = m_CardFilter_temp.CountIncluded(pConHand->GetCardContainer());
	int nOppCount = m_CardFilter_temp.CountIncluded(pOppHand->GetCardContainer());

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +nConCount);
	CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), -nOppCount);

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	//pModifier1.ApplyTo((CCreatureCard*)pAbilityAction->GetOriginatingCard());
	//pModifier2.ApplyTo((CCreatureCard*)pAbilityAction->GetOriginatingCard());
}

//____________________________________________________________________________
//
CDreamcatcherCard::CDreamcatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreamcatcher"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElderPineOfJukaiCard::CElderPineOfJukaiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder Pine of Jukai"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CElderPineOfJukaiCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(3);
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 2
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 2
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3)); //=Soulshift 2

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

void CElderPineOfJukaiCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 3;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::_Land).Any())
			matchingCards.AddCard(pCard, CardPlacement::Top);

		else
			revealedCards.AddCard(pCard, CardPlacement::Top);
	}

	if (matchingCards.GetSize())
		pHand->AddCards(matchingCards, GetController(), MoveType::Others, CardPlacement::Top);

	if (revealedCards.GetSize())
	{
		if (revealedCards.GetSize() == 1)
		{
			pLibrary->AddCard(revealedCards.GetAt(0), GetController(), MoveType::Others, CardPlacement::Bottom);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				revealedCards.Sort();	// ascending
				pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &revealedCards;

				if (GetController()->GetInterface()->OrderCards(&orderCardsData))
					pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
		}
	}
}

//____________________________________________________________________________
//
CFiddleheadKamiCard::CFiddleheadKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fiddlehead Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CFiddleheadKamiCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::Regeneration);

	AddAbility(cpAbility.GetPointer());
}

void CFiddleheadKamiCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CRegenerateModifier pModifier = CRegenerateModifier();

	pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CKitsuneBonesetterCard::CKitsuneBonesetterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Bonesetter"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(3), SourceColor::Null));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CKitsuneBonesetterCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CKitsuneBonesetterCard::CanPlay(BOOL bIncludeTricks)
{
    CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	return (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() < pHand);
}

//____________________________________________________________________________
//
CKitsuneLoreweaverCard::CKitsuneLoreweaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Loreweaver"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") WHITE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKitsuneLoreweaverCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKitsuneLoreweaverCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);
	
	//CCard* pCard = pAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)this;

	pModifier.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
COboroEnvoyCard::COboroEnvoyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oboro Envoy"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &COboroEnvoyCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(-0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void COboroEnvoyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nDomainCount = -(m_CardFilter_temp.CountIncluded(pHand->GetCardContainer()));

	CPowerModifier pModifier = CPowerModifier(Power(nDomainCount));

	if (bResult) pModifier.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
}

//____________________________________________________________________________
//
CRavingOniSlaveCard::CRavingOniSlaveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raving Oni-Slave"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CRavingOniSlaveCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CRavingOniSlaveCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CRavingOniSlaveCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CRavingOniSlaveCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRavingOniSlaveCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
									  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CRavingOniSlaveCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CRavingOniSlaveCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
									  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CRavingOniSlaveCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CSokenzanSpellbladeCard::CSokenzanSpellbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sokenzan Spellblade"), CardType::Creature, CREATURE_TYPE3(Ogre, Samurai, Shaman), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(3))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T("1") RED_MANA_TEXT,
				Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSokenzanSpellbladeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSokenzanSpellbladeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());
	
	CPowerModifier pModifier = CPowerModifier(Power(nDomainCount));
	
	CCard* pCard = pAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	pModifier.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CIvoryCraneNetsukeCard::CIvoryCraneNetsukeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ivory Crane Netsuke"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIvoryCraneNetsukeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIvoryCraneNetsukeCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CIvoryCraneNetsukeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 7;
}

bool CIvoryCraneNetsukeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 7;
}

//____________________________________________________________________________
//
CScrollOfOriginsCard::CScrollOfOriginsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scroll of Origins"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScrollOfOriginsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScrollOfOriginsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 7) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CPromiseOfBunreiCard::CPromiseOfBunreiCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Promise of Bunrei"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit A"), 2800, 4);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPromiseOfBunreiCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}
	
bool CPromiseOfBunreiCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay() && (GetController() == pAction->GetController()))
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, GetController());
		pModifier.ApplyTo(this);
		return true;
	}
	else
		return false;
}

//____________________________________________________________________________
//
CHidetsugusSecondRiteCard::CHidetsugusSecondRiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hidetsugu's Second Rite"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CHidetsugusSecondRiteCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

void CHidetsugusSecondRiteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	
	CLifeModifier pModifier = CLifeModifier(Life(-10), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if ((target->GetLife() == Life(10)) && bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CInnerCalmOuterStrengthCard::CInnerCalmOuterStrengthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inner Calm, Outer Strength"), CardType::Instant | CardType::Arcane, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CInnerCalmOuterStrengthCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CInnerCalmOuterStrengthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	CPowerModifier pModifier = CPowerModifier(Power(+nDomainCount));
	CLifeModifier pModifier1 = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);

	if (bResult)
	{
		pModifier.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
		pModifier1.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CInnerFireCard::CInnerFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inner Fire"), CardType::Sorcery, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			_T("")));

	cpSpell->SetAbilityText(_T("Add {R} to your mana pool for each card in your hand with"));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInnerFireCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CInnerFireCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int n = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CKikusShadowCard::CKikusShadowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kiku's Shadow"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericTargetCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetCreatureSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT, new AnyCreatureComparer()));
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CDamagetoItselfModifier(DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CThoughtsOfRuinCard::CThoughtsOfRuinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughts of Ruin"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CThoughtsOfRuinCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

    AddSpell(cpSpell.GetPointer());
}

void CThoughtsOfRuinCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("lands")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CInameAsOneCard::CInameAsOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iname as One"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("8") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))

	, m_CardFilter1(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Hand, ZoneId::Stack));

		CCardFlagModifier* pModifier1 = new CCardFlagModifier;
		pModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier1);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CInameAsOneCard::SetTriggerContext));
			
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter2);
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);	

		cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInameAsOneCard::SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pFromZone->GetPlayer() == pByPlayer &&
		pFromZone->GetZoneId() == ZoneId::Stack &&
		GetCardFlag()->HasAbilityFlag(0) == TRUE &&
		moveType == MoveType::Cast)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMeasureOfWickednessCard::CMeasureOfWickednessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Measure of Wickedness"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetTriggeredPlayerModifiers().push_back(
			new CLifeModifier(Life(-8), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTriggeredPlayerModifiers().push_back(
			new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetAbilityName(_T("gain control ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGnatMiserCard::CGnatMiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gnat Miser"), CardType::Creature, CREATURE_TYPE2(Rat, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, -1));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLocustMiserCard::CLocustMiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Locust Miser"), CardType::Creature, CREATURE_TYPE2(Rat, Shaman), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, -2));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinamoScrollkeeperCard::CMinamoScrollkeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minamo Scrollkeeper"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, 1));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrustedAdvisorCard::CTrustedAdvisorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trusted Advisor"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPlayerHandEnchantment> cpAbility(
			::CreateObject<CPlayerHandEnchantment>(this, 2));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTombOfUramiCard::CTombOfUramiCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tomb of Urami"), nID, CardType::NonbasicLand | CardType::Legendary)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CTombOfUramiCard::OnResolutionCompleted))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Ogre), false))
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("B")));

		cpNonbasicLandManaAbility->AddTapCost();

		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Urami"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::All, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTombOfUramiCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* pPlayer = pAbilityAction->GetController();
	int nCards =  m_CardFilter.CountIncluded(pPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier* pModifier = new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	if (bResult && !nCards) pModifier->ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CSokenzanRenegadeCard::CSokenzanRenegadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sokenzan Renegade"), CardType::Creature, CREATURE_TYPE3(Ogre, Samurai, Mercenary), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSokenzanRenegadeCard::OnResolutionCompleted))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSokenzanRenegadeCard::SetTriggerContext));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSokenzanRenegadeCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetController()->GetZoneById(ZoneId::Hand)->GetSize() != m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize());
}

void CSokenzanRenegadeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nContHand = GetController()->GetZoneById(ZoneId::Hand)->GetSize();
	int nOppHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize();

	if (nContHand == nOppHand) return;
	CTransferControlModifier* pModifier = new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this);
	
	if (nContHand > nOppHand)
	{
		pModifier->ApplyTo(GetController());
		return;
	}

	if (nContHand < nOppHand)
	{
		pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
}
/*
bool CSokenzanRenegadeCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{ // This is an example of how to check for most cards in hand (no ties allowed) in a multiplayer game.
	CPlayer* pPlayer;
	CPlayer* pWinningPlayer = GetGame()->GetPlayer(0);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer->GetZoneById(ZoneId::Hand)->GetSize() > pWinningPlayer->GetZoneById(ZoneId::Hand)->GetSize())
			pWinningPlayer = pPlayer;
	}
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pWinningPlayer && pPlayer->GetZoneById(ZoneId::Hand)->GetSize() == pWinningPlayer->GetZoneById(ZoneId::Hand)->GetSize())
			return false;
	}
	return true;
}

void CSokenzanRenegadeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer;
	CPlayer* pWinningPlayer = GetGame()->GetPlayer(0);

	for (int ip = 1; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer->GetZoneById(ZoneId::Hand)->GetSize() > pWinningPlayer->GetZoneById(ZoneId::Hand)->GetSize())
			pWinningPlayer = pPlayer;
	}
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pWinningPlayer && pPlayer->GetZoneById(ZoneId::Hand)->GetSize() == pWinningPlayer->GetZoneById(ZoneId::Hand)->GetSize())
			return;
	}

	CTransferControlModifier* pModifier = new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this);
	pModifier->ApplyTo(pWinningPlayer);
}
*/
//____________________________________________________________________________
//
CAyumiTheLastVisitorCard::CAyumiTheLastVisitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ayumi, the Last Visitor"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(3))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Legendary, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	GetCreatureKeyword()->AddNonBasicWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CErayoSoratamiAscendantCard::CErayoSoratamiAscendantCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Erayo, Soratami Ascendant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Moonfolk, Monk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1), Power(1), Life(1), _T("Erayo's Essence"))
{
	GetCreatureKeyword()->AddFlying(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Moonfolk, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Monk, FALSE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::GlobalEnchantment, false, CardType::Creature);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier(CreatureKeyword::Flying, false, false);
	AddCardModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CErayoSoratamiAscendantCard::SetTriggerContext1));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CErayoSoratamiAscendantCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::Counterspell);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CErayoSoratamiAscendantCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	if (GetOrientation()->IsFlipped()) return false;

	return (GetGame()->GetTurnCastedSpellCount() == 4);
}

bool CErayoSoratamiAscendantCard::SetTriggerContext2(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	if (!GetOrientation()->IsFlipped()) return false;
	triggerContext.m_pCard = pCard;
	return (pCard->GetController()->GetTurnCastedSpellCount() == 1);
}

//____________________________________________________________________________
//
CHomuraHumanAscendantCard::CHomuraHumanAscendantCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Homura, Human Ascendant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Monk), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4), Power(4), Life(4), _T("Homura's Essence"))
{
	GetCreatureKeyword()->AddCantBlock(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Monk, FALSE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::GlobalEnchantment, false, CardType::Creature);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier(CreatureKeyword::CantBlock, false, false);
	AddCardModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	{
		typedef	TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHomuraHumanAscendantCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHomuraHumanAscendantCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+2), Life(+2),
				CreatureKeyword::Flying));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHomuraHumanAscendantCard::CreateAbility)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new FlippedComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHomuraHumanAscendantCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	return !GetOrientation()->IsFlipped();
}

bool CHomuraHumanAscendantCard::BeforeResolution(CAbilityAction* pAction)
{
	Flip();
	return true;
}

counted_ptr<CAbility> CHomuraHumanAscendantCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKuonOgreAscendantCard::CKuonOgreAscendantCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Kuon, Ogre Ascendant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Ogre, Monk), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4), Power(2), Life(4), _T("Kuon's Essence"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Ogre, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Monk, FALSE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::GlobalEnchantment, false, CardType::Creature);
	AddCardModifier(pModifier3);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKuonOgreAscendantCard::SetTriggerContext1));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKuonOgreAscendantCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKuonOgreAscendantCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsFlipped() && GetGame()->GetCertainTypeDiedCount(CardType::Creature) >= 3);
}

bool CKuonOgreAscendantCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsFlipped() == TRUE);
}

//____________________________________________________________________________
//
CRuneTailKitsuneAscendantCard::CRuneTailKitsuneAscendantCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Rune-Tail, Kitsune Ascendant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Fox, Monk), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2), Power(2), Life(2), _T("Rune-Tail's Essence"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Fox, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Monk, FALSE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::GlobalEnchantment, false, CardType::Creature);
	AddCardModifier(pModifier3);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRuneTailKitsuneAscendantCard::SetTriggerContext1));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRuneTailKitsuneAscendantCard::SetTriggerContext2));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0),
				CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new FlippedComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRuneTailKitsuneAscendantCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
														const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	return (!GetOrientation()->IsFlipped() && nToLife >= Life(30));
}

bool CRuneTailKitsuneAscendantCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
														CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (!GetOrientation()->IsFlipped() && pToZone->GetPlayer()->GetLife() >= Life(30));
}

//____________________________________________________________________________
//
CCutTheEarthlyBondCard::CCutTheEarthlyBondCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cut the Earthly Bond"), CardType::Instant | CardType::Arcane, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new EnchantedCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others)
{
}

//____________________________________________________________________________
//
CIdeasUnboundCard::CIdeasUnboundCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ideas Unbound"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLUE_MANA_TEXT, 3));
	ATLASSERT(cpSpell);

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::None);
	pModifier->AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(3), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::None, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CScheduledPlayerModifier* pSModifier = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep,
		CScheduledPlayerModifier::Operation::ApplyToLater);
	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(pSModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFreedFromTheRealCard::CFreedFromTheRealCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Freed from the Real"), CardType::EnchantCreature, nID,
		_T("2") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				BLUE_MANA_TEXT));

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(true));

		cpAbility->SetAbilityText(_T("Tap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				BLUE_MANA_TEXT));

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

		cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBounteousKirinCard::CBounteousKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bounteous Kirin"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kirin, Spirit), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast >  TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBounteousKirinCard::SetTriggerContext));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CBounteousKirinCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(pCard->GetConvertedManaCost()));
	return true;
}

//____________________________________________________________________________
//
CCelestialKirinCard::CCelestialKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Celestial Kirin"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kirin, Spirit), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCelestialKirinCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCelestialKirinCard::BeforeResolveSelection));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());	
}

bool CCelestialKirinCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CCelestialKirinCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	int nCMC = triggerContext.m_pCard->GetConvertedManaCost();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier->ApplyTo(GetController());
	pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CKagemaroFirstToSufferCard::CKagemaroFirstToSufferCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kagemaro, First to Suffer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKagemaroFirstToSufferCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKagemaroFirstToSufferCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pHand = pAction->GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nHandCount = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	if (nHandCount > 0)
		{				
			CZone* controller = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
			CZone* opponent = m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(-nHandCount), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(-nHandCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			for (int j = 0; j < opponent->GetSize(); ++j)
				if (opponent->GetAt(j)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)opponent->GetAt(j));
					pModifier2.ApplyTo((CCreatureCard*)opponent->GetAt(j));
					}

			return true;
		}

	return true;
}
//____________________________________________________________________________
//
CKiyomaroFirstToStandCard::CKiyomaroFirstToStandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiyomaro, First to Stand"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Hand);
		cpAbility->SetConditionValue(4);
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKiyomaroFirstToStandCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKiyomaroFirstToStandCard::BeforeResolution));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKiyomaroFirstToStandCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() >= 7;
}
bool CKiyomaroFirstToStandCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() >= 7;
}
//____________________________________________________________________________
//
CCloudhoofKirinCard::CCloudhoofKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudhoof Kirin"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kirin, Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloudhoofKirinCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloudhoofKirinCard::BeforeResolveSelection));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());	
}

bool CCloudhoofKirinCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard)
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CCloudhoofKirinCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	int nCMC = triggerContext.m_pCard->GetConvertedManaCost();

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, nCMC , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
	pModifier->AddSelection(MinimumValue(nCMC), MaximumValue(nCMC), // select nCMC cards
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier->ApplyTo(pAction->GetAssociatedPlayer());

	return true;
}

//____________________________________________________________________________
//
CInfernalKirinCard::CInfernalKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Infernal Kirin"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kirin, Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInfernalKirinCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CInfernalKirinCard::BeforeResolveSelection));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());	
}

bool CInfernalKirinCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard)
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CInfernalKirinCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	int nCMC = triggerContext.m_pCard->GetConvertedManaCost();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1->ApplyTo(pTarget);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CSkyfireKirinCard::CSkyfireKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyfire Kirin"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kirin, Spirit), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkyfireKirinCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkyfireKirinCard::BeforeResolveSelection));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	m_pTriggeredAbility = cpAbility.GetPointer(); 

	AddAbility(cpAbility.GetPointer());	
}

bool CSkyfireKirinCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard)
{
	int nCMC = pCard->GetConvertedManaCost();

	m_pTriggeredAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));
	return true;
}

bool CSkyfireKirinCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1->LinkCardModifier(pModifier2);
	pModifier1->ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CChoiceOfDamnationsCard::CChoiceOfDamnationsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Choice of Damnations"), CardType::Sorcery | CardType::Arcane, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChoiceOfDamnationsCard::OnNumberSelected))
	, m_DamnationSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChoiceOfDamnationsCard::OnDamnationSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT, FALSE_CARD_COMPARER, TRUE));
	
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChoiceOfDamnationsCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CChoiceOfDamnationsCard::BeforeResolution (CAbilityAction* pAction)
{
	SelectionFunction(0, pAction->GetAssociatedPlayer());
	return true;
}

void CChoiceOfDamnationsCard::SelectionFunction (int Base, CPlayer* pTarget)
{
	std::vector<SelectionEntry> entries;
	for (int i = Base; i < Base + 10; i++)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i - Base + 1;
		selectionEntry.strText.Format(_T("Select %d"), i);

		entries.push_back(selectionEntry);
	}
	if (!pTarget->IsComputer() || Base < (int)pTarget->GetLife() + 20)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 11;
		selectionEntry.strText.Format(_T("More numbers"));

		entries.push_back(selectionEntry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)Base, (DWORD)GetController());
}

void CChoiceOfDamnationsCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			
			if (n == 10)
				SelectionFunction((int)dwContext1 + 10, pSelectionPlayer);
			else
			{
				int Number = (int)dwContext1 + n;
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Make %s lose %d life"), pSelectionPlayer->GetPlayerName(), Number);

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("Make %s sacrifice all but %d permanents"), pSelectionPlayer->GetPlayerName(), Number);

					entries.push_back(selectionEntry);
				}
				m_DamnationSelection.AddSelectionRequest(entries, 1, 1, NULL, (CPlayer*)dwContext2, (DWORD)pSelectionPlayer, (DWORD)Number);
			}
		}
}

void CChoiceOfDamnationsCard::OnDamnationSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				int Number = (int)dwContext2;
				
				if (Number > 0)
				{
					CLifeModifier pModifier = CLifeModifier(Life(-Number), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
					pModifier.ApplyTo(pTarget);
				}

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;
				int Number = (int)dwContext2;
				
				CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
				int nCount = CCardFilter::GetFilter(_T("cards"))->CountIncluded(pBattlefield->GetCardContainer());

				int pSacrifice = nCount - Number;

				if (pSacrifice > 0)
				{
					CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
						CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier.AddSelection(MinimumValue(pSacrifice), MaximumValue(pSacrifice), // select cards to reorder
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::PrimaryPlayer, // reveal to
						CCardFilter::GetFilter(_T("cards")), // what cards
						ZoneId::Graveyard, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on 
						MoveType::Sacrifice, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

					pModifier.ApplyTo(pTarget);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CBarrelDownSokenzanCard::CBarrelDownSokenzanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Barrel Down Sokenzan"), CardType::Instant | CardType::Arcane, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBarrelDownSokenzanCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBarrelDownSokenzanCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CBarrelDownSokenzanCard::BeforeResolution(CAbilityAction* pAction)
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
			selectionEntry.strText.Format(_T("Don't return anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nMountains; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 1)
				entry.strText.Format(_T("Return %d Mountain to its owner's hand"),
					i);
			else
				entry.strText.Format(_T("Return %d Mountains to their owner's hand"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedCard());
	}
	return true;
}

void CBarrelDownSokenzanCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't return anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s returns %d Mountain to its owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s returns %d Mountains to their owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
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
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CLifeModifier pModifier2 = CLifeModifier(Life(-2*nValue), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo((CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CChargeAcrossTheArabaCard::CChargeAcrossTheArabaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Charge Across the Araba"), CardType::Instant | CardType::Arcane, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChargeAcrossTheArabaCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("4") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChargeAcrossTheArabaCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CChargeAcrossTheArabaCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Plains, false));

	int nPlains = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nPlains > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't return anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nPlains; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
									
			if (i == 1)
				entry.strText.Format(_T("Return %d Plains to its owner's hand"),
					i);
			else
				entry.strText.Format(_T("Return %d Plains to their owner's hand"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CChargeAcrossTheArabaCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't return anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s returns %d Plains to its owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s returns %d Plains to their owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::Plains, false));
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.AddComparer(new AnyCreatureComparer);

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
					std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(nValue))));
				CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
					std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)));

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);
				pModifier3.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CPlowThroughReitoCard::CPlowThroughReitoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plow Through Reito"), CardType::Instant | CardType::Arcane, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPlowThroughReitoCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlowThroughReitoCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CPlowThroughReitoCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Plains, false));

	int nPlains = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nPlains > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't return anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nPlains; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 1)
				entry.strText.Format(_T("Return %d Plains to its owner's hand"),
					i);
			else
				entry.strText.Format(_T("Return %d Plains to their owner's hand"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedCard());
	}
	return true;
}

void CPlowThroughReitoCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't return anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s returns %d Plains to its owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s returns %d Plains to their owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::Plains, false));

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CPowerModifier pModifier2 = CPowerModifier(Power(nValue));
				CLifeModifier pModifier3 = CLifeModifier(Life(nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);

				CCreatureCard* pTarget = (CCreatureCard*)dwContext1;
				pModifier2.ApplyTo(pTarget);
				pModifier3.ApplyTo(pTarget);
		
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSinkIntoTakenumaCard::CSinkIntoTakenumaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sink into Takenuma"), CardType::Sorcery | CardType::Arcane, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSinkIntoTakenumaCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSinkIntoTakenumaCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSinkIntoTakenumaCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));

	int nSwamps = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nSwamps > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't return anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nSwamps; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 1)
				entry.strText.Format(_T("Return %d Swamp to its owner's hand"),
					i);
			else
				entry.strText.Format(_T("Return %d Swamps to their owner's hand"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedPlayer());
	}
	return true;
}

void CSinkIntoTakenumaCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't return anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s returns %d Swamp to its owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s returns %d Swamps to their owner's hand"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo((CPlayer*)dwContext1);
								
				return;
			}
		}
}

//____________________________________________________________________________
//
CRallyTheHordeCard::CRallyTheHordeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rally the Horde"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRallyTheHordeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRallyTheHordeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int nExiledNonLand = 0;
	bool bEnd = false;

	while (!bEnd)
	{
		if (pLibrary->GetSize() > 0)
		{
			CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);

			pModifier.ApplyTo(pNextDraw);
			if (pNextDraw->GetCardType().IsLand())
				bEnd = true;
			else
			{
				bEnd = false;
				nExiledNonLand++;
			}
		}
		if (pLibrary->GetSize() > 0)
		{
			CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);

			pModifier.ApplyTo(pNextDraw);
			if (pNextDraw->GetCardType().IsLand())
				bEnd = true;
			else
			{
				bEnd = false;
				nExiledNonLand++;
			}
		}
		if (pLibrary->GetSize() > 0)
		{
			CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);

			pModifier.ApplyTo(pNextDraw);
			if (pNextDraw->GetCardType().IsLand())
				bEnd = true;
			else
			{
				bEnd = false;
				nExiledNonLand++;
			}
		}
		if (pLibrary->GetSize() == 0)
			bEnd = true;
	}

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Warrior B"), 2980, nExiledNonLand);
	pModifier.ApplyTo(pController);

	return true;
}


//____________________________________________________________________________
//
CBloodClockCard::CBloodClockCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blood Clock"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBloodClockCard::OnPaymentSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodClockCard::BeforeResolveSelection));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CBloodClockCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	std::vector<SelectionEntry> entries;
	if ((pPlayer->GetLife() > Life(1)) && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Pay 2 life"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Return a permanent you control to its owner's hand"));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);

	return true;
}

void CBloodClockCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s pays 2 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s returns a permanent he controls to its owner's hand"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
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

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}
//____________________________________________________________________________
//
CBurningEyeZuberaCard::CBurningEyeZuberaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burning-Eye Zubera"), CardType::Creature, CREATURE_TYPE2(Zubera, Spirit), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBurningEyeZuberaCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CBurningEyeZuberaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	return GetDamageTakenThisTurn() > 3;
}

//____________________________________________________________________________
//
CRushingTideZuberaCard::CRushingTideZuberaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rushing-Tide Zubera"), CardType::Creature, CREATURE_TYPE2(Zubera, Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetDrawCount(3);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRushingTideZuberaCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CRushingTideZuberaCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	return GetDamageTakenThisTurn() > 3;
}

//____________________________________________________________________________
//
CAshesOfTheFallenCard::CAshesOfTheFallenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ashes of the Fallen"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAshesOfTheFallenCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CAshesOfTheFallenCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0)));

	cpAbility->GetOtherCardModifiers().Add((CCardModifier*)(new CCreatureTypeModifier(SelectedType)));

	cpAbility->SetAffectCardsInTheseZones(ZoneId::Graveyard);
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Ashes of the Fallen add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CAshesOfTheFallenCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

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
				&CAshesOfTheFallenCard::CreateAdditionAbility));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier.RemoveFrom(this);
	}
}

void CAshesOfTheFallenCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CAshesOfTheFallenCard::CreateAdditionAbility));

			pModifier.ApplyTo(this);

			for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
			{
				CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
				if (!pEnchantSpell) 
					continue;

				pEnchantSpell->StartEnchantment();
			}

			break;
		}
}

//____________________________________________________________________________
//
CDescendantOfSoramaroCard::CDescendantOfSoramaroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Descendant of Soramaro"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLUE_MANA_TEXT));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDescendantOfSoramaroCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDescendantOfSoramaroCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nSize = pController->GetZoneById(ZoneId::Hand)->GetSize();

	if (nSize > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nSize,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.SetReorderInformation(true, ZoneId::Library);
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
COppressiveWillCard::COppressiveWillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Oppressive Will"), CardType::Instant, nID)
{
	{
		counted_ptr<COppressiveWillAbility> cpSpell(
		::CreateObject<COppressiveWillAbility>(this, _T("2") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}

COppressiveWillCard::COppressiveWillAbility::COppressiveWillAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost COppressiveWillCard::COppressiveWillAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	int nHandSize = GetCard()->GetController()->GetZoneById(ZoneId::Hand)->GetSize();
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, nHandSize);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CSekkiSeasonsGuideCard::CSekkiSeasonsGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sekki, Seasons' Guide"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_CardFilter(_T("a Spirit"), _T("Spirits"), new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 8, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSekkiSeasonsGuideCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSekkiSeasonsGuideCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetCost().AddSacrificeCardCost(8, &m_CardFilter);
		cpAbility->SetGraveyardOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSekkiSeasonsGuideCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	triggerContext.nValue1 = GET_INTEGER(damage.m_nLifeDelta);

	return (effect_index==1);
}

bool CSekkiSeasonsGuideCard::BeforeResolution(CSekkiSeasonsGuideCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nValue = pAction->GetTriggerContext().nValue1;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), nValue, false);
	pModifier1.ApplyTo(this);

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Spirit A"), 2800, -nValue);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
