#include "stdafx.h"
#include "CardEventide.h"

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
		DEFINE_CARD(CAerieOuphesCard);
		DEFINE_CARD(CAltarGolemCard);
		DEFINE_CARD(CAntlerSkulkinCard);
		DEFINE_CARD(CAshlingTheExtinguisherCard);
		DEFINE_CARD(CBalefireLiegeCard);
		DEFINE_CARD(CBallynockTrapperCard);
		DEFINE_CARD(CBanishingKnackCard);
		DEFINE_CARD(CBattlegateMimicCard);
		DEFINE_CARD(CBatwingBrumeCard);
		DEFINE_CARD(CBeckonApparitionCard);
		DEFINE_CARD(CBelligerentHatchlingCard);
		DEFINE_CARD(CBloodiedGhostCard);
		DEFINE_CARD(CBloomTenderCard);
		DEFINE_CARD(CCacheRaidersCard);
		DEFINE_CARD(CCalltheSkybreakerCard);
		DEFINE_CARD(CCankerousThirstCard);
		DEFINE_CARD(CCascadeBluffsCard);
		DEFINE_CARD(CCauldronHazeCard);
		DEFINE_CARD(CCennsEnlistmentCard);
		DEFINE_CARD(CChaoticBacklashCard);
		DEFINE_CARD(CCinderPyromancerCard);
		DEFINE_CARD(CCloutoftheDominusCard);
		DEFINE_CARD(CColdEyedSelkieCard);	
		DEFINE_CARD(CCrackleburrCard);
		DEFINE_CARD(CCragPucaCard);
		DEFINE_CARD(CCreakwoodGhoulCard);
		DEFINE_CARD(CCreakwoodLiegeCard);
		DEFINE_CARD(CCrumblingAshesCard);
		DEFINE_CARD(CDeathbringerLiegeCard);
		DEFINE_CARD(CDivinityofPrideCard);
		DEFINE_CARD(CDoubleCleaveCard);
		DEFINE_CARD(CDuergarCaveGuardCard);
		DEFINE_CARD(CDuergarMineCaptainCard);
		DEFINE_CARD(CDominusofFealtyCard);
		DEFINE_CARD(CDoomgapeCard);
		DEFINE_CARD(CDrainTheWellCard);
		DEFINE_CARD(CDreamFractureCard);
		DEFINE_CARD(CDeityofScarsCard);
		DEFINE_CARD(CDesecratorHagCard);
		DEFINE_CARD(CDuergarAssailantCard);
		DEFINE_CARD(CDuergarHedgeMageCard);
		DEFINE_CARD(CEdgeoftheDivinityCard);
		DEFINE_CARD(CEndlessHorizonsCard);
		DEFINE_CARD(CEndureCard);
		DEFINE_CARD(CFableOfWolfAndOwlCard);
		DEFINE_CARD(CFangSkulkinCard);
		DEFINE_CARD(CFavoroftheOverbeingCard);
		DEFINE_CARD(CFetidHeathCard);
		DEFINE_CARD(CFieryBombardmentCard);
		DEFINE_CARD(CFigureofDestinyCard);
		DEFINE_CARD(CFireAtWillCard);
		DEFINE_CARD(CFlameJabCard);
		DEFINE_CARD(CFlickerwispCard);
		DEFINE_CARD(CFloodedGroveCard);
		DEFINE_CARD(CGiftoftheDeityCard);
		DEFINE_CARD(CGilderBairnCard);
		DEFINE_CARD(CGlenElendraArchmageCard);
		DEFINE_CARD(CGrazingKelpieCard);
		DEFINE_CARD(CGroundlingPouncerCard);
		DEFINE_CARD(CGwyllionHedgeMageCard);
		DEFINE_CARD(CHagHedgeMageCard);
		DEFINE_CARD(CHallowedBurialCard);
		DEFINE_CARD(CHarvestGwyllionCard);
		DEFINE_CARD(CHatchetBullyCard);
		DEFINE_CARD(CHateflayerCard);
		DEFINE_CARD(CHearthfireHobgoblinCard);
		DEFINE_CARD(CHeartlashCinderCard);
		DEFINE_CARD(CHelixPinnacleCard);
		DEFINE_CARD(CHobgoblinDragoonCard);
		DEFINE_CARD(CHoofSkulkinCard);
		DEFINE_CARD(CIdleThoughtsCard);
		DEFINE_CARD(CIndigoFaerieCard);
		DEFINE_CARD(CInsideOutCard);
		DEFINE_CARD(CInundateCard);
		DEFINE_CARD(CInverttheSkiesCard);
		DEFINE_CARD(CJawboneSkulkinCard);
		DEFINE_CARD(CKithkinSpelldusterCard);
		DEFINE_CARD(CKithkinZealotCard);
		DEFINE_CARD(CLeeringEmblemCard);
		DEFINE_CARD(CLightfromWithinCard);
		DEFINE_CARD(CLingeringTormentorCard);
		DEFINE_CARD(CLoyalGyrfalconCard);
		DEFINE_CARD(CMarshdrinkerGiantCard);
		DEFINE_CARD(CMerrowBonegnawerCard);
		DEFINE_CARD(CMindwrackLiegeCard);
		DEFINE_CARD(CMirrorSheenCard);
		DEFINE_CARD(CMurkfiendLiegeCard);
		DEFINE_CARD(CMerrowLevitatorCard);
		DEFINE_CARD(CMonstrifyCard);
		DEFINE_CARD(CNecroskitterCard);
		DEFINE_CARD(CNeedleSpecterCard);
		DEFINE_CARD(CNettleSentinelCard);
		DEFINE_CARD(CNightskyMimicCard)
		DEFINE_CARD(CNipGwyllionCard);
		DEFINE_CARD(CNobilisOfWarCard);
		DEFINE_CARD(CNoggleBanditCard);
		DEFINE_CARD(CNoggleBridgebreakerCard);
		DEFINE_CARD(CNoggleHedgeMageCard);
		DEFINE_CARD(CNoggleRansackerCard);
		DEFINE_CARD(CNoxiousHatchlingCard);
		DEFINE_CARD(CNucklaveeCard);
		DEFINE_CARD(COdiousTrowCard);
		DEFINE_CARD(COonasGraceCard);
		DEFINE_CARD(COutrageShamanCard);
		DEFINE_CARD(COverbeingOfMythCard);
		DEFINE_CARD(CPatrolSignalerCard);
		DEFINE_CARD(CPrimalcruxCard);
		DEFINE_CARD(CPunctureBlastCard);
//		DEFINE_CARD(CPyrrhicRevivalCard);
		DEFINE_CARD(CQuillspikeCard);
		DEFINE_CARD(CRavensCrimeCard);
		DEFINE_CARD(CRazorfinAbolisherCard);
		DEFINE_CARD(CRecumbentBlissCard);
		DEFINE_CARD(CRegalForceCard);
		DEFINE_CARD(CRekindledFlameCard);
		DEFINE_CARD(CRendclawTrowCard);
		DEFINE_CARD(CRestlessApparitionCard);
		DEFINE_CARD(CRiseoftheHobgoblinsCard);
		DEFINE_CARD(CRiverfallMimicCard);
		DEFINE_CARD(CRuggedPrairieCard);
		DEFINE_CARD(CSanityGrindingCard);
		DEFINE_CARD(CSaplingOfColfenorCard);
		DEFINE_CARD(CSavageConceptionCard);
		DEFINE_CARD(CScarecroneCard);
		DEFINE_CARD(CScourgeoftheNobilisCard);
		DEFINE_CARD(CSelkieHedgeMageCard);
		DEFINE_CARD(CShellSkulkinCard);
		DEFINE_CARD(CShorecrasherMimicCard);
		DEFINE_CARD(CShrewdHatchlingCard);
		DEFINE_CARD(CSlipperyBogleCard);
		DEFINE_CARD(CSootImpCard);
		DEFINE_CARD(CSoulReapCard);
		DEFINE_CARD(CSoulSnuffersCard);
		DEFINE_CARD(CSpiritOfTheHearthCard);
		DEFINE_CARD(CSpitemareCard);
		DEFINE_CARD(CSpittingImageCard);
		DEFINE_CARD(CSpringjackPastureCard);
		DEFINE_CARD(CSpringjackShepherdCard);
		DEFINE_CARD(CStalkerHagCard);
		DEFINE_CARD(CStigmaLasherCard);
		DEFINE_CARD(CStillmoonCavalierCard);
		DEFINE_CARD(CSturdyHatchlingCard);
		DEFINE_CARD(CStreamHopperCard);
		DEFINE_CARD(CSutureSpiritCard);
		DEFINE_CARD(CSmolderingButcherCard);
		DEFINE_CARD(CSwirlingSprigganCard);
		DEFINE_CARD(CSyphonLifeCard);
		DEFINE_CARD(CTalarasBattalionCard);
		DEFINE_CARD(CTalonrendCard);
		DEFINE_CARD(CThunderblustCard);
		DEFINE_CARD(CTillingTreefolkCard);
		DEFINE_CARD(CTrapjawKelpieCard);
		DEFINE_CARD(CTwilightMireCard);
		DEFINE_CARD(CTwinbladeSlasherCard);
		DEFINE_CARD(CUmbraStalkerCard);
		DEFINE_CARD(CUnmakeCard);
		DEFINE_CARD(CUnnervingAssaultCard);
		DEFINE_CARD(CUnwillingRecruitCard);
		DEFINE_CARD(CVoraciousHatchlingCard);
		DEFINE_CARD(CWakeThrasherCard);
		DEFINE_CARD(CWavesofAggressionCard);
		DEFINE_CARD(CWickerboughElderCard);
		DEFINE_CARD(CWildernessHypnotistCard);
		DEFINE_CARD(CWistfulSelkieCard);
		DEFINE_CARD(CWoodlurkerMimicCard);
		DEFINE_CARD(CWormHarvestCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CHoofSkulkinCard::CHoofSkulkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hoof Skulkin"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CJawboneSkulkinCard::CJawboneSkulkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jawbone Skulkin"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("1"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CNettleSentinelCard::CNettleSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nettle Sentinel"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNettleSentinelCard::BeforeResolution));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNettleSentinelCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CAltarGolemCard::CAltarGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Altar Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new AnyCreatureComparer));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapCardCost(5, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBallynockTrapperCard::CBallynockTrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ballynock Trapper"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBallynockTrapperCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBallynockTrapperCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CCacheRaidersCard::CCacheRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cache Raiders"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
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
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCascadeBluffsCard::CCascadeBluffsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cascade Bluffs"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CCinderPyromancerCard::CCinderPyromancerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Cinder Pyromancer"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(1),
		_T(""),
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCinderPyromancerCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCinderPyromancerCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CCreakwoodGhoulCard::CCreakwoodGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Creakwood Ghoul"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrainTheWellCard::CDrainTheWellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Drain the Well"), CardType::Sorcery, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFetidHeathCard::CFetidHeathCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Fetid Heath"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CFireAtWillCard::CFireAtWillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fire at Will"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFloodedGroveCard::CFloodedGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Flooded Grove"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CIndigoFaerieCard::CIndigoFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Indigo Faerie"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::Null, TRUE, _T("blue permanent"));	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeeringEmblemCard::CLeeringEmblemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leering Emblem"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CLoyalGyrfalconCard::CLoyalGyrfalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Loyal Gyrfalcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarshdrinkerGiantCard::CMarshdrinkerGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marshdrinker Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Island | CardType::Swamp, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerrowLevitatorCard::CMerrowLevitatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merrow Levitator"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMerrowLevitatorCard::BeforeResolution));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMerrowLevitatorCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CRecumbentBlissCard::CRecumbentBlissCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Recumbent Bliss"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRuggedPrairieCard::CRuggedPrairieCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rugged Prairie"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CScarecroneCard::CScarecroneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarecrone"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(1), Life(2))

	, m_CardFilter(_T("a Scarecrow"), _T("Scarecrows"), new CreatureTypeComparer(CREATURE_TYPE(Scarecrow), false))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("4"),
				new CardTypeComparer(CardType::_ArtifactCreature, true),
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShellSkulkinCard::CShellSkulkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shell Skulkin"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("4"), Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSootImpCard::CSootImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soot Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-black cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSutureSpiritCard::CSutureSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Suture Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalonrendCard::CTalonrendCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Talonrend"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT, Power(0), Life(5))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLUE_MANA_TEXT, Power(+1), Life(-1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+1), Life(-1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTillingTreefolkCard::CTillingTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tilling Treefolk"), CardType::Creature, CREATURE_TYPE2(Treefolk, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetSubjectCount(0, 2);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwilightMireCard::CTwilightMireCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Twilight Mire"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CUnmakeCard::CUnmakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unmake"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWakeThrasherCard::CWakeThrasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wake Thrasher"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Tap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Untap);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildernessHypnotistCard::CWildernessHypnotistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wilderness Hypnotist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-2), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDoubleCleaveCard::CDoubleCleaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Double Cleave"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlipperyBogleCard::CSlipperyBogleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slippery Bogle"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CAerieOuphesCard::CAerieOuphesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aerie Ouphes"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
	, CPersistKeyword(this)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			_T(""),
			new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalefireLiegeCard::CBalefireLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balefire Liege"), CardType::Creature, CREATURE_TYPE2(Spirit, Horror), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCreakwoodLiegeCard::CCreakwoodLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Creakwood Liege"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetCreateTokenOption(TRUE, _T("Worm"), TOKEN_ID_BY_NAME, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDuergarAssailantCard::CDuergarAssailantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duergar Assailant"), CardType::Creature, CREATURE_TYPE2(Dwarf, Soldier), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlenElendraArchmageCard::CGlenElendraArchmageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glen Elendra Archmage"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new NegateCardComparer(new AnyCreatureComparer)));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrazingKelpieCard::CGrazingKelpieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grazing Kelpie"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
	, CPersistKeyword(this)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHearthfireHobgoblinCard::CHearthfireHobgoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hearthfire Hobgoblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Soldier), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHobgoblinDragoonCard::CHobgoblinDragoonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hobgoblin Dragoon"), CardType::Creature, CREATURE_TYPE2(Goblin, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	//hybrid mana cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKithkinSpelldusterCard::CKithkinSpelldusterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kithkin Spellduster"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
	, CPersistKeyword(this)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
		_T("1") WHITE_MANA_TEXT,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLingeringTormentorCard::CLingeringTormentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lingering Tormentor"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CMindwrackLiegeCard::CMindwrackLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindwrack Liege"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a blue or red creature"), _T("blue or red creatures"));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		m_CardFilter.AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a blue or red creature"), _T("blue or red creatures"));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		m_CardFilter.AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a blue or red creature"), _T("blue or red creatures"));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		m_CardFilter.AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a blue or red creature"), _T("blue or red creatures"));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		m_CardFilter.AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a blue or red creature"), _T("blue or red creatures"));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		m_CardFilter.AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Creature | CardType::Red, true)));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMurkfiendLiegeCard::CMurkfiendLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Murkfiend Liege"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UntapStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Blue, false));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNipGwyllionCard::CNipGwyllionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nip Gwyllion"), CardType::Creature, CREATURE_TYPE(Hag), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNobilisOfWarCard::CNobilisOfWarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nobilis of War"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetToAttackingOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNoggleBanditCard::CNoggleBanditCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noggle Bandit"), CardType::Creature, CREATURE_TYPE2(Noggle, Rogue), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, false));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNoggleBridgebreakerCard::CNoggleBridgebreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noggle Bridgebreaker"), CardType::Creature, CREATURE_TYPE2(Noggle, Rogue), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNucklaveeCard::CNucklaveeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nucklavee"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Sorcery, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Instant, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COdiousTrowCard::COdiousTrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Odious Trow"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("1") BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COverbeingOfMythCard::COverbeingOfMythCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Overbeing of Myth"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::DrawStep2));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRestlessApparitionCard::CRestlessApparitionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Restless Apparition"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+3), Life(+3)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
				Power(+3), Life(+3)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+3), Life(+3)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+3), Life(+3)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulSnuffersCard::CSoulSnuffersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul Snuffers"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter
	/*cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
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
CSpitemareCard::CSpitemareCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spitemare"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpitemareCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpitemareCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CStalkerHagCard::CStalkerHagCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Stalker Hag"), CardType::Creature, CREATURE_TYPE(Hag), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2),
		CreatureKeyword::Swampwalk | CreatureKeyword::Forestwalk)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CStillmoonCavalierCard::CStillmoonCavalierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stillmoon Cavalier"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStreamHopperCard::CStreamHopperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stream Hopper"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTrapjawKelpieCard::CTrapjawKelpieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trapjaw Kelpie"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, CPersistKeyword(this)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWistfulSelkieCard::CWistfulSelkieCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Wistful Selkie"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
        GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFableOfWolfAndOwlCard::CFableOfWolfAndOwlCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fable of Wolf and Owl"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

		cpAbility->SetCreateTokenOption(TRUE, _T("Bird B"), 2814, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBeckonApparitionCard::CBeckonApparitionCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Beckon Apparition"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Spirit C"), 2815, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Spirit C"), 2815, 1));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CInundateCard::CInundateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inundate"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Blue, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSavageConceptionCard::CSavageConceptionCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Savage Conception"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast C"), 2768,
				1));

		AddSpell(cpSpell.GetPointer());
	}
    {
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast C"), 2768,
				1));

        cpSpell->SetGraveyardOnly();     
        cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CCalltheSkybreakerCard::CCalltheSkybreakerCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Call the Skybreaker"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT BLUE_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

		AddSpell(cpSpell.GetPointer());
	}
    {
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

        cpSpell->SetGraveyardOnly();     
        cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

        AddSpell(cpSpell.GetPointer());
    }
	{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT BLUE_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

        cpSpell->SetGraveyardOnly();     
        cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

        AddSpell(cpSpell.GetPointer());
    }
	{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Elemental I"), 2766,
				1));

        cpSpell->SetGraveyardOnly();     
        cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CCennsEnlistmentCard::CCennsEnlistmentCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Cenn's Enlistment"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT,
				_T("Kithkin Soldier"), TOKEN_ID_BY_NAME,
				2));

		AddSpell(cpSpell.GetPointer());
	}
    {
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT,
				_T("Kithkin Soldier"), TOKEN_ID_BY_NAME,
				2));

        cpSpell->SetGraveyardOnly();     
        cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CFlameJabCard::CFlameJabCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Flame Jab"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
					RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
    {
		//Retrace cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
					RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(-1), PreventableType::Preventable));

        cpSpell->SetGraveyardOnly();     
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
COonasGraceCard::COonasGraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Oona's Grace"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT, 1));

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));        

		cpSpell->SetAbilityText(_T("Retrace - Casts"));      

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSyphonLifeCard::CSyphonLifeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Syphon Life"), CardType::Sorcery, nID)
{
	{
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::NotPreventable));	// Preventable?

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::NotPreventable));	// Preventable?;

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));        

		cpSpell->SetAbilityText(_T("Retrace - Casts"));    

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRavensCrimeCard::CRavensCrimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Raven's Crime"), CardType::Sorcery, nID)
	{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMonstrifyCard::CMonstrifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Monstrify"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetGraveyardOnly();     
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));        

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWavesofAggressionCard::CWavesofAggressionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Waves of Aggression"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				TRUE,
				1, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT WHITE_MANA_TEXT,
				TRUE,
				1, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				TRUE,
				1, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				TRUE,
				1, TRUE));

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT WHITE_MANA_TEXT,
				TRUE,
				1, TRUE));

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				TRUE,
				1, TRUE));

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDuergarHedgeMageCard::CDuergarHedgeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duergar Hedge-Mage"), CardType::Creature, CREATURE_TYPE2(Dwarf, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	    cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDuergarHedgeMageCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuergarHedgeMageCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	    cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDuergarHedgeMageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuergarHedgeMageCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDuergarHedgeMageCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CDuergarHedgeMageCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CDuergarHedgeMageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CDuergarHedgeMageCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CHagHedgeMageCard::CHagHedgeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hag Hedge-Mage"), CardType::Creature, CREATURE_TYPE2(Hag, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CHagHedgeMageCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CHagHedgeMageCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Optional);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CHagHedgeMageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CHagHedgeMageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHagHedgeMageCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
		                                      
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CHagHedgeMageCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CHagHedgeMageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CHagHedgeMageCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CRekindledFlameCard::CRekindledFlameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rekindled Flame"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRekindledFlameCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRekindledFlameCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CRekindledFlameCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() == 0));
}

bool CRekindledFlameCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return ((GetZone()->GetZoneId() == ZoneId::Graveyard) && (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() == 0));
}

//____________________________________________________________________________
//
CSelkieHedgeMageCard::CSelkieHedgeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selkie Hedge-Mage"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSelkieHedgeMageCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSelkieHedgeMageCard::SetTriggerContext1));
		
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Optional);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
			new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
			new TappedComparer);
	   
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSelkieHedgeMageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSelkieHedgeMageCard::SetTriggerContext2));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSelkieHedgeMageCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
		                                      
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSelkieHedgeMageCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSelkieHedgeMageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSelkieHedgeMageCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CGwyllionHedgeMageCard::CGwyllionHedgeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gwyllion Hedge-Mage"), CardType::Creature, CREATURE_TYPE2(Hag, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);
		cpAbility->SetCreateTokenOption(TRUE, _T("Kithkin Soldier"), TOKEN_ID_BY_NAME, 1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CGwyllionHedgeMageCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CGwyllionHedgeMageCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Optional);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CGwyllionHedgeMageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CGwyllionHedgeMageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGwyllionHedgeMageCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CGwyllionHedgeMageCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CGwyllionHedgeMageCard::SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CGwyllionHedgeMageCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CNoggleHedgeMageCard::CNoggleHedgeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noggle Hedge-Mage"), CardType::Creature, CREATURE_TYPE2(Noggle, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetSubjectCount(2, 2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CNoggleHedgeMageCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CNoggleHedgeMageCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CNoggleHedgeMageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CNoggleHedgeMageCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNoggleHedgeMageCard::SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CNoggleHedgeMageCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CNoggleHedgeMageCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CNoggleHedgeMageCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CGroundlingPouncerCard::CGroundlingPouncerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Groundling Pouncer"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+1), Life(+3),
				CreatureKeyword::Flying));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CGroundlingPouncerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility1 = cpAbility.GetPointer();
		AddAbility(m_pAbility1);
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+1), Life(+3),
				CreatureKeyword::Flying));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CGroundlingPouncerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility2 = cpAbility.GetPointer();
		AddAbility(m_pAbility2);
	}
}

BOOL CGroundlingPouncerCard::CanPlay(BOOL bIncludeTricks)
{
	if (m_pAbility1->GetTurnUsageCount() + m_pAbility2->GetTurnUsageCount() > 0) return FALSE;

    CZone* pOppInplay = GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	return CCardFilter::GetFilter(_T("flying creatures"))->CountIncluded(pOppInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CBattlegateMimicCard::CBattlegateMimicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battlegate Mimic"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a red and white spell"), _T("red and white spells"), new CardTypeComparer(CardType::Red | CardType::White , true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(true);
		cpAbility->GetPowerModifier().SetReplacement(true);
		cpAbility->GetPowerModifier().SetOneTurnOnly(false);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetToBase(true);
		cpAbility->GetLifeModifier().SetReplacement(true);
		cpAbility->GetLifeModifier().SetOneTurnOnly(false);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);

		CPowerModifier* pModifier1 = new CPowerModifier(Power(+2), false, true);
		pModifier1->SetReplacement(true);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		pModifier2->SetReplacement(true);

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier1,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier2,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNightskyMimicCard::CNightskyMimicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightsky Mimic"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a black and white spell"), _T("black and white spells"), new CardTypeComparer(CardType::Black | CardType::White , true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(true);
		cpAbility->GetPowerModifier().SetReplacement(true);
		cpAbility->GetPowerModifier().SetOneTurnOnly(false);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetToBase(true);
		cpAbility->GetLifeModifier().SetReplacement(true);
		cpAbility->GetLifeModifier().SetOneTurnOnly(false);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);

		CPowerModifier* pModifier1 = new CPowerModifier(Power(+2), false, true);
		pModifier1->SetReplacement(true);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		pModifier2->SetReplacement(true);

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier1,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier2,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiverfallMimicCard::CRiverfallMimicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riverfall Mimic"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a red and blue spell"), _T("red and blue spells"), new CardTypeComparer(CardType::Red | CardType::Blue , true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(true);
		cpAbility->GetPowerModifier().SetReplacement(true);
		cpAbility->GetPowerModifier().SetOneTurnOnly(false);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetToBase(true);
		cpAbility->GetLifeModifier().SetReplacement(true);
		cpAbility->GetLifeModifier().SetOneTurnOnly(false);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);

		CPowerModifier* pModifier1 = new CPowerModifier(Power(+2), false, true);
		pModifier1->SetReplacement(true);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		pModifier2->SetReplacement(true);

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier1,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier2,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShorecrasherMimicCard::CShorecrasherMimicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shorecrasher Mimic"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a blue and green spell"), _T("blue and green spells"), new CardTypeComparer(CardType::Blue | CardType::Green , true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(5));
		cpAbility->GetPowerModifier().SetToBase(true);
		cpAbility->GetPowerModifier().SetReplacement(true);
		cpAbility->GetPowerModifier().SetOneTurnOnly(false);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetToBase(true);
		cpAbility->GetLifeModifier().SetReplacement(true);
		cpAbility->GetLifeModifier().SetOneTurnOnly(false);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);

		CPowerModifier* pModifier1 = new CPowerModifier(Power(+2), false, true);
		pModifier1->SetReplacement(true);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		pModifier2->SetReplacement(true);

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier1,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier2,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathbringerLiegeCard::CDeathbringerLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathbringer Liege"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer());
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathbringerLiegeCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeathbringerLiegeCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	bool tapped = pAction->GetAssociatedCard()->GetOrientation()->IsTapped() ? true : false;
	return tapped;
}

//____________________________________________________________________________
//
CDivinityofPrideCard::CDivinityofPrideCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Divinity of Pride"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+4), Life(+4)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckLife();
		cpAbility->SetConditionValue(25);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCankerousThirstCard::CCankerousThirstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cankerous Thirst"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT, 
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->FlagTargets(TRUE, TRUE);

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

	AddSpell(cpSpell.GetPointer());

	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT, 
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		cpSpell->FlagTargets(TRUE, TRUE);

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
			TTriggeredSubjectAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAbilityFlagComparer(cpSpell.GetPointer()));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCankerousThirstCard::SetTriggerContext1));
		
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCankerousThirstCard::SetTriggerContext2));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCankerousThirstCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Black);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

bool CCankerousThirstCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CColdEyedSelkieCard::CColdEyedSelkieCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Cold-Eyed Selkie"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Islandwalk)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColdEyedSelkieCard::SetTriggerContextL));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CColdEyedSelkieCard::SetTriggerContextL(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CBelligerentHatchlingCard::CBelligerentHatchlingCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Belligerent Hatchling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(6), Life(6))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelligerentHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelligerentHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

/*bool CBelligerentHatchlingCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	return (nCounterCount>0);
}*/

//____________________________________________________________________________
//
CRiseoftheHobgoblinsCard::CRiseoftheHobgoblinsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rise of the Hobgoblins"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Goblin Soldier A"), 2785,
				0));
		
		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector();

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRiseoftheHobgoblinsCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpAbility->SetToActivatedAbility();
		cpAbility->GetEnchantmentCardFilter().AddComparer(
						new CardTypeComparer(CardType::Red | CardType::White, false));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpAbility->SetToActivatedAbility();
		cpAbility->GetEnchantmentCardFilter().AddComparer(
						new CardTypeComparer(CardType::Red | CardType::White, false));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRiseoftheHobgoblinsCard::CanPlay(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CSturdyHatchlingCard::CSturdyHatchlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sturdy Hatchling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSturdyHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSturdyHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

/*bool CSturdyHatchlingCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	return (nCounterCount>0);
}*/

//____________________________________________________________________________
//
CVoraciousHatchlingCard::CVoraciousHatchlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voracious Hatchling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCardKeyword()->AddLifelink(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoraciousHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoraciousHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

/*bool CVoraciousHatchlingCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	return (nCounterCount > 0);
}*/

//____________________________________________________________________________
//
CBloodiedGhostCard::CBloodiedGhostCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bloodied Ghost"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	 GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeityofScarsCard::CDeityofScarsCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Deity of Scars"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7),
		BLACK_MANA_TEXT)
{
	m_pRegenerationAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrumblingAshesCard::CCrumblingAshesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crumbling Ashes"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		 
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("-1/-1"), 1));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCrumblingAshesCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CCrumblingAshesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) 
{
	CCard* target = pAction->GetAssociatedCard();
	int nCounterCount = target->GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	return nCounterCount>0;
}

//____________________________________________________________________________
//
CWickerboughElderCard::CWickerboughElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wickerbough Elder"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWormHarvestCard::CWormHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Worm Harvest"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
		{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Worm"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

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
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWormHarvestCard::BeforeResolution1));

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetCreateTokenOption(TRUE, _T("Worm"), TOKEN_ID_BY_NAME, 0); 

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWormHarvestCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) 
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	int nCount = 0;

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pContGraveyard->GetAt(i);
		if (pCard->GetCardType().IsLand()) 
		++nCount;
	}
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);
	return (nCount>0);
}

//____________________________________________________________________________
//
CSpringjackShepherdCard::CSpringjackShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Springjack Shepherd"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goat A"), 2847, 0);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpringjackShepherdCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpringjackShepherdCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) 
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;

	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		max = 0;
		CCard* pCard = pBattle->GetAt(i);
		if (!pCard->GetCardType().IsLand()) {
		converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		for (int j = 0; j < pBattle->GetAt(i)->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::White);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::White);
				}
		}
		p = p + max;
		}
	}

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Reaper King")));

	p = p + m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = p;
	pAction->SetTriggerContext(triggerContext);

	return p>0;
}

//____________________________________________________________________________
//
CUmbraStalkerCard::CUmbraStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Umbra Stalker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CUmbraStalkerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));
		
		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CUmbraStalkerCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));
		
		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CUmbraStalkerCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CUmbraStalkerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
		int p = 0;
		int max= 0;
		int converted = 0;
		int temp = 0;

		for (int i = 0; i < pGrave->GetSize(); ++i)
		{
			max = 0;
			CCard* pCard = pGrave->GetAt(i);
			if (!pCard->GetCardType().IsLand()) {
			converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

			for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
			{
				if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
					{
					temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black);
					if (temp>max) 
						max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black);
					}
			}
			p = p + max;
			}
		}

		CCardFilter m_CardFilter_temp1;
		m_CardFilter_temp1.SetComparer(new CardNameComparer(_T("Reaper King")));
		CCardFilter m_CardFilter_temp2;
		m_CardFilter_temp2.SetComparer(new CardNameComparer(_T("Beseech the Queen")));
		CCardFilter m_CardFilter_temp3;
		m_CardFilter_temp3.SetComparer(new CardNameComparer(_T("Life // Death")));
		CCardFilter m_CardFilter_temp4;
		m_CardFilter_temp4.SetComparer(new CardNameComparer(_T("Crime // Punishment")));
		CCardFilter m_CardFilter_temp5;
		m_CardFilter_temp5.SetComparer(new CardNameComparer(_T("Who/What/When/Where/Why")));

		p = p + m_CardFilter_temp1.CountIncluded(pGrave->GetCardContainer()) + (m_CardFilter_temp2.CountIncluded(pGrave->GetCardContainer()) * 3) +
				m_CardFilter_temp3.CountIncluded(pGrave->GetCardContainer()) + m_CardFilter_temp4.CountIncluded(pGrave->GetCardContainer()) +
				m_CardFilter_temp5.CountIncluded(pGrave->GetCardContainer());

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(p));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(p));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

bool CUmbraStalkerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;

	for (int i = 0; i < pGrave->GetSize(); ++i)
	{
		max = 0;
		CCard* pCard = pGrave->GetAt(i);
		if (!pCard->GetCardType().IsLand()) {
		converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black);
				}
		}
		p = p + max;
		}
	}
	
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(p)-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(p)-(startpermanentlife-startlife));
	SetPermanentPower(Power(p), true);
	SetPermanentLife(Life(p), true);

	return true;
}

//____________________________________________________________________________
//
CDuergarCaveGuardCard::CDuergarCaveGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duergar Cave-Guard"), CardType::Creature, CREATURE_TYPE2(Dwarf, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(3))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHarvestGwyllionCard::CHarvestGwyllionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harvest Gwyllion"), CardType::Creature, CREATURE_TYPE(Hag), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNoxiousHatchlingCard::CNoxiousHatchlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noxious Hatchling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	GetCardKeyword()->AddWither(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNoxiousHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNoxiousHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

/*bool CNoxiousHatchlingCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	return (nCounterCount>0);
}*/

//____________________________________________________________________________
//
CRendclawTrowCard::CRendclawTrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rendclaw Trow"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	GetCardKeyword()->AddWither(FALSE);

	//hybrid mana cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("2") GREEN_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSmolderingButcherCard::CSmolderingButcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Smoldering Butcher"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(2))
{
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CTwinbladeSlasherCard::CTwinbladeSlasherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Twinblade Slasher"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		_T("1") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);

	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CPunctureBlastCard::CPunctureBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Puncture Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CFigureofDestinyCard::CFigureofDestinyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Figure of Destiny"), CardType::Creature, CREATURE_TYPE(Kithkin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution1));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 2/2 Kithkin Spirit. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution1));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 2/2 Kithkin Spirit. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution2));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 4/4 Kithkin Spirit Warrior. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution2));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 4/4 Kithkin Spirit Warrior. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution2));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 4/4 Kithkin Spirit Warrior. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution2));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes a 4/4 Kithkin Spirit Warrior. Activates"));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFigureofDestinyCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Figure of Destiny becomes an 8/8 Kithkin Spirit Warrior Avatar with flying and first strike. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFigureofDestinyCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPowerModifier modifier1(Power(+2), false, true);
	modifier1.SetReplacement(true);
	CLifeModifier modifier2(Life(+2), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
	modifier2.SetReplacement(true);
	CReplaceCreatureTypeModifier modifier3(CREATURE_TYPE2(Kithkin, Spirit));

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);
	modifier3.ApplyTo(this);

	return true;
}

bool CFigureofDestinyCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (GetCreatureType().HasType(SingleCreatureType::Spirit) || GetCardKeyword()->HasChangeling())
	{
		CPowerModifier modifier1(Power(+4), false, true);
		modifier1.SetReplacement(true);
		CLifeModifier modifier2(Life(+4), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		modifier2.SetReplacement(true);
		CReplaceCreatureTypeModifier modifier3(CREATURE_TYPE3(Kithkin, Spirit, Warrior));

		modifier1.ApplyTo(this);
		modifier2.ApplyTo(this);
		modifier3.ApplyTo(this);

		return true;
	}
	
	return false;
}

bool CFigureofDestinyCard::BeforeResolution3(CAbilityAction* pAction)
{
	if (GetCreatureType().HasType(SingleCreatureType::Warrior) || GetCardKeyword()->HasChangeling())
	{
		CPowerModifier modifier1(Power(+8), false, true);
		modifier1.SetReplacement(true);
		CLifeModifier modifier2(Life(+8), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		modifier2.SetReplacement(true);
		CReplaceCreatureTypeModifier modifier3(CREATURE_TYPE4(Kithkin, Spirit, Warrior, Avatar));
		CCreatureKeywordModifier modifier4(CreatureKeyword::Flying | CreatureKeyword::FirstStrike, true, false);

		modifier1.ApplyTo(this);
		modifier2.ApplyTo(this);
		modifier3.ApplyTo(this);
		modifier4.ApplyTo(this);

		return true;
	}
	
	return false;
}

//____________________________________________________________________________
//
CPrimalcruxCard::CPrimalcruxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primalcrux"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPrimalcruxCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));
		
		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPrimalcruxCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPrimalcruxCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CPrimalcruxCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
		int p = 0;
		int max= 0;
		int converted = 0;
		int temp = 0;

		for (int i = 0; i < pGrave->GetSize(); ++i)
		{
			max = 0;
			CCard* pCard = pGrave->GetAt(i);
			if (!pCard->GetCardType().IsLand()) {
			//converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		/*	for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
			{
				if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
					{
					temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
					if (temp>max) */
					max = pCard->GetManaCost(CManaCost::Color::Green);
				//max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
					//}
			}
			p = p + max;
		}
	

		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Reaper King")));

		p = p + m_CardFilter_temp.CountIncluded(pGrave->GetCardContainer());

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(p));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(p));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);
		pLifeModifier->SetReplacement(TRUE);
		pLifeModifier->SetPreventable(PreventableType::NotPreventable);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

bool CPrimalcruxCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;

	for (int i = 0; i < pGrave->GetSize(); ++i)
	{
		max = 0;
		CCard* pCard = pGrave->GetAt(i);
		if (!pCard->GetCardType().IsLand()) {
		//converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		//for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
		//{
			//if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				//{
			//	temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
				//if (temp>max) 
					//max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
			max = pCard->GetManaCost(CManaCost::Color::Green);
				//}
		
		p = p + max;
		}
	}

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Reaper King")));

	p = p + m_CardFilter_temp.CountIncluded(pGrave->GetCardContainer());

	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(p)-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(p)-(startpermanentlife-startlife));
	SetPermanentPower(Power(p), true);
	SetPermanentLife(Life(p), true);

	return true;
}

//____________________________________________________________________________
//
CHeartlashCinderCard::CHeartlashCinderCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Heartlash Cinder"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHeartlashCinderCard::BeforeResolution1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CHeartlashCinderCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) 
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;

	for (int i = 0; i < pGrave->GetSize(); ++i)
	{
		max = 0;
		CCard* pCard = pGrave->GetAt(i);
		if (!pCard->GetCardType().IsLand()) {
		converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				}
		}
		p = p + max;
		}
	}

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Reaper King")));

	p = p + m_CardFilter_temp.CountIncluded(pGrave->GetCardContainer());

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_PowerModifier.SetPowerDelta(Power(+p));

	pAction->SetTriggerContext(triggerContext);

	return p>0;
}

//____________________________________________________________________________
//
COutrageShamanCard::COutrageShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Outrage Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COutrageShamanCard::BeforeResolution1));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool COutrageShamanCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) 
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;

	for (int i = 0; i < pGrave->GetSize(); ++i)
	{
		max = 0;
		CCard* pCard = pGrave->GetAt(i);
		if (!pCard->GetCardType().IsLand()) {
		converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		for (int j = 0; j < pGrave->GetAt(i)->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				}
		}
		p = p + max;
		}
	}

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Reaper King")));

	p = p + m_CardFilter_temp.CountIncluded(pGrave->GetCardContainer());

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(p));

	pAction->SetTriggerContext(triggerContext);

	return p>0;
}

//____________________________________________________________________________
//
CFieryBombardmentCard::CFieryBombardmentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fiery Bombardment"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFieryBombardmentCard::OnResolutionCompleted1))
   	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFieryBombardmentCard::OnResolutionCompleted2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable));
		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				FALSE_CARD_COMPARER, TRUE,
				Life(-0), PreventableType::Preventable));
		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CFieryBombardmentCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	CCard* target = pAbilityAction->GetAssociatedCard();

	int max= 0;
	int converted = 0;
	int temp = 0;

	if (pCard->GetCardType().IsCreature() && bResult) 
	{
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	for (int j = 0; j < pCard->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				}
		}

		if (pCard->GetPrintedCardName() == _T("Reaper King")) max = 1;
		
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(-max), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::Preventable // preventable or not prevantable
		, DamageType::AbilityDamage | DamageType::NonCombatDamage, // Damage Type
		TRUE , FALSE);

		if (target->GetCardType().IsCreature()) 
		{ CCreatureCard* pTargetCreature = (CCreatureCard*)target;
		  pmodifier1.ApplyTo(pTargetCreature);
		}
		//pmodifier1.ApplyTo(target);
	}
}

void CFieryBombardmentCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	int max= 0;
	int converted = 0;
	int temp = 0;

	if (pCard->GetCardType().IsCreature() && bResult) 
	{
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	for (int j = 0; j < pCard->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red);
				}
		}

		if (pCard->GetPrintedCardName() == _T("Reaper King")) max = 1;
		
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(-max), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::Preventable // preventable or not prevantable
		, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
		);
		pmodifier1.ApplyTo(target);
	}
}

//____________________________________________________________________________
//
CSanityGrindingCard::CSanityGrindingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sanity Grinding"), CardType::Sorcery, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CSanityGrindingCard::OnResolutionCompleted1))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			0));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSanityGrindingCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opponent = pAbilityAction->GetAssociatedPlayer();
	CZone* lib_cont = GetController()->GetZoneById(ZoneId::Library);
	CZone* lib_opp = opponent->GetZoneById(ZoneId::Library);
	int lib_cont_size = lib_cont->GetSize();
	int lib_opp_size = lib_opp->GetSize();
	int p = 0;
	int max= 0;
	int converted = 0;
	int temp = 0;
	int size = 0;	

	if (lib_cont_size>10) lib_cont_size = 10;

	for (int i = 0; i < lib_cont_size; ++i)
	{
		max = 0;
		size = lib_cont->GetSize()-1-i;		
		CCard* pCard = lib_cont->GetAt(size);
		if (!pCard->GetCardType().IsLand()) {
		//if (i<lib_cont->GetSize()) {
	//	CCard* pCard = lib_cont->GetAt(lib_cont->GetSize()-i);
		converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		for (int j = 0; j < pCard->GetSpells().GetSize(); ++j)
		{
			if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
				{
				temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Blue);
				if (temp>max) 
					max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Blue);
				}
		}
		p = p + max;

		if (pCard->GetPrintedCardName() == _T("Advice from the Fae")) p = p + 3;
		if (pCard->GetPrintedCardName() == _T("Reaper King")) p = p + 1;
		if (pCard->GetPrintedCardName() == _T("Stand // Deliver")) p = p + 1;
		if (pCard->GetPrintedCardName() == _T("Supply // Demand")) p = p + 1;
		if (pCard->GetPrintedCardName() == _T("Research // Development")) p = p + 1;
		if (pCard->GetPrintedCardName() == _T("Who/What/When/Where/Why")) p = p + 1;
		}  
	}

	if (lib_opp_size<p) p = lib_opp_size;

		CZoneModifier pmodifier_cont = CZoneModifier(GetGame(), ZoneId::Library, lib_cont_size, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier_cont.AddSelection(MinimumValue(lib_cont_size), MaximumValue(lib_cont_size), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	if (bResult) pmodifier_cont.ApplyTo(GetController());

	if (p>0) {

		CZoneModifier pmodifier_opp= CZoneModifier(GetGame(), ZoneId::Library, p , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier_opp.AddSelection(MinimumValue(p), MaximumValue(p), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		if (bResult) pmodifier_opp.ApplyTo(opponent);
	}
}

//____________________________________________________________________________
//
CDreamFractureCard::CDreamFractureCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dream Fracture"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDreamFractureCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CDreamFractureCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* spell_controller=pAbilityAction->GetAssociatedCard()->GetController();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (bResult)
	{
		pModifier.ApplyTo(spell_controller);
		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CHallowedBurialCard::CHallowedBurialCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hallowed Burial"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHallowedBurialCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CHallowedBurialCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
		int pInplay = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(pInplay), MaximumValue(pInplay), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
/*CPyrrhicRevivalCard::CPyrrhicRevivalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pyrrhic Revival"), CardType::Sorcery, nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPyrrhicRevivalCard::OnResolutionCompleted1))
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard ));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		CCardCounterModifier* pmodifier2 = new CCardCounterModifier(_T("-1/-1"),+1);
		cpSpell->GetSubjectModifier().CCardModifiers::push_back(pmodifier2);

		AddSpell(cpSpell.GetPointer());
	}
/*	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetAbilityName(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		cpSpell->SetAbilityText(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetAbilityName(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		cpSpell->SetAbilityText(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetAbilityName(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		cpSpell->SetAbilityText(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetAbilityName(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		cpSpell->SetAbilityText(_T("Each player returns each creature card in his or her graveyard to the battlefield with an additional -1/-1 counter on it. Casts"));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CPyrrhicRevivalCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	/*CZone* pConInplay = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);
	CMoveCardModifier pmodifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others);
	CCardCounterModifier pmodifier2 = CCardCounterModifier(_T("-1/-1"),+1);

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pCard = pOppInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{ pmodifier1.ApplyTo(pCard); pmodifier2.ApplyTo(pCard); }
	}

	for (int i = 0; i < pConInplay->GetSize(); ++i)
	{
		CCard* pCard = pConInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{ pmodifier1.ApplyTo(pCard); pmodifier2.ApplyTo(pCard); }
	}
*/
//____________________________________________________________________________
//
CUnnervingAssaultCard::CUnnervingAssaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unnerving Assault"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CUnnervingAssaultCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage)); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CUnnervingAssaultCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int RedColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Red);
	int BlueColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);
	CZone* pConInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CPowerModifier pmodifierDown = CPowerModifier(
	Power (-1) //amount of power
	, true // one turn only
	, false // to base power
	);
	CPowerModifier pmodifierUp = CPowerModifier( 
	Power (+1) //amount of power
	, true // one turn only
	, false // to base power
	);

	if (RedColorCount>0) 
		{
			for (int i = 0; i < pConInplay->GetSize(); ++i)
				{
					CCard* pCard = pConInplay->GetAt(i);
					if (pCard->GetCardType().IsCreature())
					{ CCreatureCard* pCreature = (CCreatureCard*)pCard;
					 pmodifierUp.ApplyTo(pCreature);
					}
				}
		}
	if (BlueColorCount>0) 
		{
			for (int i = 0; i < pOppInplay->GetSize(); ++i)
				{
					CCard* pCard = pOppInplay->GetAt(i);
					if (pCard->GetCardType().IsCreature())
					{ CCreatureCard* pCreature = (CCreatureCard*)pCard;
					 pmodifierDown.ApplyTo(pCreature);
					}
				}			
		}
}

//____________________________________________________________________________
//
CInverttheSkiesCard::CInverttheSkiesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Invert the Skies"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CInverttheSkiesCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage)); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
			
		AddSpell(cpSpell.GetPointer());
	}
}

void CInverttheSkiesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int GreenColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);
	int BlueColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);
	CZone* pConInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCreatureKeywordModifier* pmodifierDown = new CCreatureKeywordModifier;
	pmodifierDown->GetModifier().SetToRemove(CreatureKeyword::Flying);
	pmodifierDown->GetModifier().SetOneTurnOnly(TRUE);

	CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
	pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pmodifierUp->GetModifier().SetOneTurnOnly(TRUE);


	if (BlueColorCount>0) 
		{
			for (int i = 0; i < pConInplay->GetSize(); ++i)
				{
					CCard* pCard = pConInplay->GetAt(i);
					if (pCard->GetCardType().IsCreature())
					{ CCreatureCard* pCreature = (CCreatureCard*)pCard;
					 pmodifierUp->ApplyTo(pCreature);
					}
				}
		}
	if (GreenColorCount>0) 
		{
			for (int i = 0; i < pOppInplay->GetSize(); ++i)
				{
					CCard* pCard = pOppInplay->GetAt(i);
					if (pCard->GetCardType().IsCreature())
					{ CCreatureCard* pCreature = (CCreatureCard*)pCard;
					 pmodifierDown->ApplyTo(pCreature);
					}
				}			
		}
}

//____________________________________________________________________________
//
CChaoticBacklashCard::CChaoticBacklashCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Chaotic Backlash"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CChaoticBacklashCard::OnResolutionCompleted))
{	
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CChaoticBacklashCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();
	CZone* targetBattle = target->GetZoneById(ZoneId::Battlefield);
    int count=0;

	for (int i = 0; i < targetBattle->GetSize(); ++i)
	{
	CCard* pCard = targetBattle->GetAt(i);
	if ((pCard->GetCardType() & CardType::White).Any()) count=count+1; else if ((pCard->GetCardType() & CardType::Blue).Any()) count=count+1;
	}
	count=count*2;

	CLifeModifier pmodifier1 = CLifeModifier(
		Life(-count), // number on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::SpellDamage | DamageType::NonCombatDamage // Damage Type
	);

	if (bResult) pmodifier1.ApplyTo(target);
}

//____________________________________________________________________________
//
CNoggleRansackerCard::CNoggleRansackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noggle Ransacker"), CardType::Creature, CREATURE_TYPE2(Noggle, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetPickerIsTriggeredPlayer(FALSE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNoggleRansackerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNoggleRansackerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
	pModifier.ApplyTo(pAction->GetTriggeredPlayer()); 

	return true;
}

//____________________________________________________________________________
//
CRegalForceCard::CRegalForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Regal Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRegalForceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRegalForceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Green, true));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CDoomgapeCard::CDoomgapeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doomgape"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(10), Life(10))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDoomgapeCard::BeforeResolveSelection));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDoomgapeCard::BeforeResolveSelection(CDoomgapeCard::TriggeredAbility::TriggeredActionType* pAction)
{
	const CCard* Sacrificed = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetFirstCardSubject();
	Life n(0);

	if (Sacrificed->GetCardType().IsCreature()) 
	{CCreatureCard* pCreature = (CCreatureCard*)Sacrificed;
	  n=pCreature->GetLastKnownToughness();
	}
	CLifeModifier pmodifier1 = CLifeModifier(
			n, // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::Preventable // preventable or not prevantable
		, DamageType::NotDealingDamage // Damage Type
		);
	pmodifier1.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CNeedleSpecterCard::CNeedleSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Needle Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddWither(FALSE);
	
	{
		typedef
			TTriggeredAbility<CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetPickerIsTriggeredPlayer(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNeedleSpecterCard::SetTriggerContextL));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CNeedleSpecterCard::SetTriggerContextL(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.m_nDiscardCount = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CBloomTenderCard::CBloomTenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloom Tender"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("For each color among permanents you control, add one mana of that color to your mana pool. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloomTenderCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloomTenderCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nRedCheck = 0;
	int nBlueCheck = 0;
	int nWhiteCheck = 0;
	int nGreenCheck = 0;
	int nBlackCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Blue).Any())
			nBlueCheck = 1;
		if ((pCard->GetCardType() & CardType::White).Any())
			nWhiteCheck = 1;
		if ((pCard->GetCardType() & CardType::Green).Any())
			nGreenCheck = 1;
		if ((pCard->GetCardType() & CardType::Red).Any())
			nRedCheck = 1;
		if ((pCard->GetCardType() & CardType::Black).Any())
			nBlackCheck = 1;
	}
	
	if (nRedCheck) 
	{
		CManaPoolModifier pModifier =  CManaPoolModifier( CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT)); // mana color
		pModifier.ApplyTo(GetController());
	}

	if (nWhiteCheck) 
	{
		CManaPoolModifier pModifier =  CManaPoolModifier( CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT)); // mana color
		pModifier.ApplyTo(GetController());
	}

	if (nBlueCheck) 
	{
		CManaPoolModifier pModifier =  CManaPoolModifier( CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT)); // mana color
		pModifier.ApplyTo(GetController());
	}

	if (nGreenCheck) 
	{
		CManaPoolModifier pModifier =  CManaPoolModifier( CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)); // mana color
		pModifier.ApplyTo(GetController());
	}

	if (nBlackCheck) 
	{
		CManaPoolModifier pModifier =  CManaPoolModifier( CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT)); // mana color
		pModifier.ApplyTo(GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CPatrolSignalerCard::CPatrolSignalerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Patrol Signaler"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			_T("Kithkin Soldier"), TOKEN_ID_BY_NAME,
			1));

	cpAbility->AddUntapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDuergarMineCaptainCard::CDuergarMineCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duergar Mine-Captain"), CardType::Creature, CREATURE_TYPE2(Dwarf, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			new AttackingCreatureComparer));
		
		cpAbility->SetToActivatedAbility();
		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			WHITE_MANA_TEXT,
			Power(+1), Life(+0),
			new AttackingCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHateflayerCard::CHateflayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hateflayer"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStigmaLasherCard::CStigmaLasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stigma Lasher"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantGainLife, FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBatwingBrumeCard::CBatwingBrumeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Batwing Brume"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CBatwingBrumeCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,	// Cost
				Life(0),		// life delta
				new NegateCardComparer(new AnyCreatureComparer),	// Affects creatures without flying
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::NonCombatDamage)); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
			
		AddSpell(cpSpell.GetPointer());
	}
}

void CBatwingBrumeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int WhiteColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::White);
	int BlackColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Black);
	CZone* pConInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::PreventAllCombatDamage);
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AttackingCreatureComparer);

	CLifeModifier pOppmodifier = CLifeModifier(Life(-m_CardFilter_temp.CountIncluded(pOppInplay->GetCardContainer())),(const CCard *)0, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier pConmodifier = CLifeModifier(Life(-m_CardFilter_temp.CountIncluded(pConInplay->GetCardContainer())),(const CCard *)0, PreventableType::NotPreventable, DamageType::NotDealingDamage);


	if (WhiteColorCount>0) 
		{
			pmodifier->ApplyTo(GetController());
			pmodifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
			pModifier2->ApplyTo(GetController());
			pModifier2->ApplyTo(m_pGame->GetNextPlayer(GetController()));
		}
	if (BlackColorCount>0) 
		{
			pOppmodifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
			pConmodifier.ApplyTo(GetController());
		}
}

//____________________________________________________________________________
//
CFlickerwispCard::CFlickerwispCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flickerwisp"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(1))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFlickerwispCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CFlickerwispCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame() , pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);

	pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CSwirlingSprigganCard::CSwirlingSprigganCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Swirling Spriggan"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, TRUE, _T("white and blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, TRUE, _T("white and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, TRUE, _T("white and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, TRUE, _T("white and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("white, blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, TRUE, _T("all colors creature"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, TRUE, _T("white and blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, TRUE, _T("white and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, TRUE, _T("white and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, TRUE, _T("white and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("white, blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, TRUE, _T("all colors creature"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, TRUE, _T("white and blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, TRUE, _T("white and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, TRUE, _T("white and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, TRUE, _T("white and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("white, blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, TRUE, _T("all colors creature"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQuillspikeCard::CQuillspikeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quillspike"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+3), Life(+3)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddAnyCardCounterCost(_T("-1/-1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT, Power(+3), Life(+3)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddAnyCardCounterCost(_T("-1/-1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CHatchetBullyCard::CHatchetBullyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Hatchet Bully"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3),
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2),	// life delta
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetCost().AddAnyCardCounterCost(_T("-1/-1"), +1, 1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CTalarasBattalionCard::CTalarasBattalionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talara's Battalion"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(4), Life(3))	
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CTalarasBattalionCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
}

BOOL CTalarasBattalionCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainTypeCastedCount(CardType::Green) > 0);
}

//____________________________________________________________________________
//
CEndureCard::CEndureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Endure"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	CPlayerEffectModifier* pmodifier1 = new CPlayerEffectModifier(PlayerEffectType::PreventAllPlayerDamage);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier1, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	CPlayerEffectModifier* pmodifier3 = new CPlayerEffectModifier(PlayerEffectType::PreventAllDamageToCreatures);	

	CScheduledPlayerModifier* pModifier4 = new CScheduledPlayerModifier(
		GetGame(), pmodifier3, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	CPlayerEffectModifier* pmodifier5 = new CPlayerEffectModifier(PlayerEffectType::PreventAllDamageToPWalkers);	// Error may be somewhere here if planasewalker modifier isn't removed

	CScheduledPlayerModifier* pModifier6 = new CScheduledPlayerModifier(
		GetGame(), pmodifier5, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pmodifier5->LinkPlayerModifier(pModifier6);
	pModifier4->LinkPlayerModifier(pmodifier5);
	pmodifier3->LinkPlayerModifier(pModifier4);
	pModifier2->LinkPlayerModifier(pmodifier3);
	pmodifier1->LinkPlayerModifier(pModifier2);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier1);		

	cpSpell->SetAbilityName(_T("Prevent all damage that would be dealt to you and permanents you control this turn. Casts"));
	cpSpell->SetAbilityText(_T("Prevent all damage that would be dealt to you and permanents you control this turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSoulReapCard::CSoulReapCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Soul Reap"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSoulReapCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Green, false)); // Exclude green cards
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CSoulReapCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();

	if (((this->GetCardType() & CardType::Black).Any() && (GetController()->GetCertainTypeCastedCount(CardType::Black)>1))
		|| (!(this->GetCardType() & CardType::Black).Any() && (GetController()->GetCertainTypeCastedCount(CardType::Black)>0)))
	{
	CLifeModifier pModifier = CLifeModifier(
			Life(-3), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pModifier.ApplyTo(target->GetController());
	}
}

//____________________________________________________________________________
//
CKithkinZealotCard::CKithkinZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Zealot"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKithkinZealotCard::BeforeResolution1));		

	AddAbility(cpAbility.GetPointer());
}

bool CKithkinZealotCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));

	int n= m_CardFilter_temp.CountIncluded(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(+n), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pmodifier1.ApplyTo(GetController());

	return (n > 0);
}

//____________________________________________________________________________
//
CEdgeoftheDivinityCard::CEdgeoftheDivinityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Edge of the Divinity"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				WHITE_MANA_TEXT,
				Power(+1), Life(+2), CreatureKeyword::Null, CardType::White, 
				Power(+2), Life(+1), CreatureKeyword::Null, CardType::Black
				));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(0), PreventableType::NotPreventable));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CScourgeoftheNobilisCard::CScourgeoftheNobilisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scourge of the Nobilis"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("2") RED_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Red,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::White
				));

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CScourgeoftheNobilisCard::CreateAdditionalAbility1));

		CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CScourgeoftheNobilisCard::CreateAdditionalAbility2));

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::Lifelink);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		pModifier->LinkCardModifier(pModifier1);

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);

		cpSpell->GetCardKeywordMod1().LinkCardModifier(pModifier2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(0), PreventableType::NotPreventable));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CScourgeoftheNobilisCard::CreateAdditionalAbility1(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(0), CreatureKeyword::Null));
	ATLASSERT(cpAbility);	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CScourgeoftheNobilisCard::CreateAdditionalAbility2(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			WHITE_MANA_TEXT,
			Power(+1), Life(0), CreatureKeyword::Null));
	ATLASSERT(cpAbility);	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloutoftheDominusCard::CCloutoftheDominusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Clout of the Dominus"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				BLUE_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Blue, 
				Power(+1), Life(+1), CreatureKeyword::Haste, CardType::Red
				));
	
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(0), PreventableType::NotPreventable));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFavoroftheOverbeingCard::CFavoroftheOverbeingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Favor of the Overbeing"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("1") BLUE_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Vigilance, CardType::Green, 
				Power(+1), Life(+1), CreatureKeyword::Flying, CardType::Blue
				));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(0), PreventableType::NotPreventable));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGiftoftheDeityCard::CGiftoftheDeityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gift of the Deity"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("4") BLACK_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Black, 
				Power(+1), Life(+1), CreatureKeyword::Lure, CardType::Green
				));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Deathtouch);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(0), PreventableType::NotPreventable));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDesecratorHagCard::CDesecratorHagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Desecrator Hag"), CardType::Creature, CREATURE_TYPE(Hag), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController); // trigger to previous zone controller
	
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerrowBonegnawerCard::CMerrowBonegnawerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merrow Bonegnawer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));
	
		CZoneModifier* pmodifier = new CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);

		pmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pmodifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMerrowBonegnawerCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMerrowBonegnawerCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CWoodlurkerMimicCard::CWoodlurkerMimicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodlurker Mimic"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a black and green spell"), _T("black and green spells"), new CardTypeComparer(CardType::Black | CardType::Green , true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(true);
		cpAbility->GetPowerModifier().SetReplacement(true);
		cpAbility->GetPowerModifier().SetOneTurnOnly(false);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(5));
		cpAbility->GetLifeModifier().SetToBase(true);
		cpAbility->GetLifeModifier().SetReplacement(true);
		cpAbility->GetLifeModifier().SetOneTurnOnly(false);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);

		CPowerModifier* pModifier1 = new CPowerModifier(Power(+2), false, true);
		pModifier1->SetReplacement(true);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::Preventable, DamageType::NotDealingDamage, false, true);
		pModifier2->SetReplacement(true);

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier1,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(
			new CScheduledCreatureModifier(GetGame(), pModifier2,
				TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCreatureModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRazorfinAbolisherCard::CRazorfinAbolisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razorfin Abolisher"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
	
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer());

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnwillingRecruitCard::CUnwillingRecruitCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Unwilling Recruit"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));

	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	
	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier();
	pModifier3->GetModifier().SetOneTurnOnly(TRUE);
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);

	CCardOrientationModifier* pModifier4 = new CCardOrientationModifier(0);

	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(pModifier1);	
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(pModifier2);
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier3);
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(pModifier4);
}

//____________________________________________________________________________
//
CFangSkulkinCard::CFangSkulkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fang Skulkin"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("2"), Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CCragPucaCard::CCragPucaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crag Puca"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(4))
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::SwitchedPT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::SwitchedPT));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInsideOutCard::CInsideOutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inside Out"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpiritOfTheHearthCard::CSpiritOfTheHearthCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spirit of the Hearth"), CardType::Creature, CREATURE_TYPE2(Cat, Spirit), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(5))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargetedByOpponentsSpells));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBanishingKnackCard::CBanishingKnackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Banishing Knack"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBanishingKnackCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBanishingKnackCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(pCard,
			_T(""),
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSaplingOfColfenorCard::CSaplingOfColfenorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sapling of Colfenor"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(5))
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSaplingOfColfenorCard::BeforeResolution));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CSaplingOfColfenorCard::BeforeResolution(CSaplingOfColfenorCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	CCreatureCard* pCreature = (CCreatureCard*)pNextDraw;
	int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());
	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

	CLifeModifier pModifier1 = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (pNextDraw->GetCardType().IsCreature()) pModifier1.ApplyTo(GetController());
	if (pNextDraw->GetCardType().IsCreature()) pModifier2.ApplyTo(GetController());

	if (pNextDraw->GetCardType().IsCreature())
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Hand);
	}
	else
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Library);
	}

	return true;
}

//____________________________________________________________________________
//
CGilderBairnCard::CGilderBairnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gilder Bairn"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				new TrueCardComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCounterMultiplyModifier(2));

		cpAbility->AddUntapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") BLUE_MANA_TEXT,
				new TrueCardComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCounterMultiplyModifier(2));

		cpAbility->AddUntapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpittingImageCard::CSpittingImageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Spitting Image"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSpittingImageCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost 4UU
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost 4UG
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost 4GG
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetGraveyardOnly();
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Retrace - Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CSpittingImageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetAssociatedCard());
}

//____________________________________________________________________________
//
CThunderblustCard::CThunderblustCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Thunderblust"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(2))
	, CPersistKeyword(this)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("-1/-1"), 1));
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecroskitterCard::CNecroskitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necroskitter"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(4))
{
	GetCardKeyword()->AddWither(false);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecroskitterCard::SetTriggerContext));
	cpAbility->GetTrigger().SetFromOpponentsOnly(true);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(false);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CNecroskitterCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pCard->GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount() == 0)
		return false;

	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController());

	return true;
}

//____________________________________________________________________________
//
CCrackleburrCard::CCrackleburrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crackleburr"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
		, m_CardFilter1(_T("an untapped red creature"), _T("untapped red creatures"), new AnyCreatureComparer)
		, m_CardFilter2(_T("an tapped blue creature"), _T("tapped blue creatures"), new AnyCreatureComparer)
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Red, false));
	m_CardFilter1.AddNegateComparer(new TappedComparer);
	m_CardFilter1.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Blue, false));
	m_CardFilter2.AddComparer(new TappedComparer);
	m_CardFilter2.AddNegateComparer(new SpecificCardComparer(this));

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddUntapCost();
		cpAbility->GetCost().AddUntapCardCost(2, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddUntapCost();
		cpAbility->GetCost().AddUntapCardCost(2, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddUntapCost();
		cpAbility->GetCost().AddUntapCardCost(2, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CIdleThoughtsCard::CIdleThoughtsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Idle Thoughts"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CIdleThoughtsCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->SetAbilityText(_T("Draw a card if you have no cards in hand."));	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}
void CIdleThoughtsCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (bResult && pAbilityAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() == 0) pModifier.ApplyTo(pAbilityAction->GetController());
}
//____________________________________________________________________________
//
CLightfromWithinCard::CLightfromWithinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Light from Within"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::White, false));

		cpAbility->GetOtherCardModifiers().Add(new CLightfromWithinModifier());

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CCauldronHazeCard::CCauldronHazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cauldron Haze"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

		cpSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
					&CCauldronHazeCard::CreateAdditionalAbility));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(
			new CScheduledCardModifier(GetGame(),
				pModifier,
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

		cpSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
					&CCauldronHazeCard::CreateAdditionalAbility));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(
			new CScheduledCardModifier(GetGame(),
				pModifier,
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CCauldronHazeCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCauldronHazeCard::SetTriggerContextP1));
	cpAbility->SetAbilityName(_T("Persist ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CCauldronHazeCard::SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownm11Counters() == 0;
}

//____________________________________________________________________________
//
CAntlerSkulkinCard::CAntlerSkulkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Antler Skulkin"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::White | CardType::Creature, true)));

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CAntlerSkulkinCard::CreateAdditionalAbility));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CAntlerSkulkinCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAntlerSkulkinCard::SetTriggerContextP1));
	cpAbility->SetAbilityName(_T("Persist ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CAntlerSkulkinCard::SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownm11Counters() == 0;
}

//____________________________________________________________________________
//
CHelixPinnacleCard::CHelixPinnacleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helix Pinnacle"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	GetCardKeyword()->AddShroud(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().SetExtraManaCost();
		
		cpAbility->SetAbilityText(_T("Put X tower counters on. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelixPinnacleCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHelixPinnacleCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHelixPinnacleCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHelixPinnacleCard::BeforeResolution1(CAbilityAction* pAction)
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();
	CCardCounterModifier modifier = CCardCounterModifier(TOWER_COUNTER, nExtra);
	modifier.ApplyTo(this);

	return true;
}

bool CHelixPinnacleCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return GetCounterContainer()->GetCounter(TOWER_COUNTER)->GetCount() >= 100;
}

bool CHelixPinnacleCard::BeforeResolution2(CHelixPinnacleCard::TriggeredAbility::TriggeredActionType* pAction)
{
	return GetCounterContainer()->GetCounter(TOWER_COUNTER)->GetCount() >= 100;
}

//____________________________________________________________________________
//
CAshlingTheExtinguisherCard::CAshlingTheExtinguisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashling, the Extinguisher"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAshlingTheExtinguisherCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAshlingTheExtinguisherCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));
	CPlayer* Affected = m_pGame->GetNextPlayer(pAction->GetController());
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));

	pModifier->ApplyTo(Affected);
	return false;
}
//____________________________________________________________________________
//
CDominusofFealtyCard::CDominusofFealtyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dominus of Fealty"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CDominusofFealtyCard::OnResolutionCompleted))
{
		{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
			{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
				{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
					{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
						{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility,  CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);	

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
}

void CDominusofFealtyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier;
	pModifier.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier.GetModifier().SetOneTurnOnly(TRUE);

	if (target->GetCardType().IsCreature()) pModifier.ApplyTo((CCreatureCard*)target);

	CCardKeywordModifier pModifier1;
	pModifier1.GetModifier().SetToAdd(CardKeyword::CardHaste);
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);

	pModifier1.ApplyTo(target);

	CCardOrientationModifier pModifier3 = CCardOrientationModifier(0);

	pModifier3.ApplyTo(target);

}
//____________________________________________________________________________
//
CShrewdHatchlingCard::CShrewdHatchlingCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Shrewd Hatchling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(6), Life(6), &m_CardFilter)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CShrewdHatchlingCard::OnResolutionCompleted))
	//, m_CardFilter(_T("card that can't block this hatchling"), _T("cards which can't block this hatchling"), new  ContainedinComparer(&m_AffectedCards))
	,m_WhenNodeChanged(this, NodeId::CleanupStep1, FALSE)
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CShrewdHatchlingCard::OnNodeChanged));
	m_CardFilter.AddNegateComparer(new  ContainedinComparer(&m_AffectedCards));

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelligerentHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelligerentHatchlingCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
		{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
		}
		// to make this ability copiiable different implementation should be made , some pair container with storage cards which can't can't be blocked by wich creatures
		{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
		}
}
void CShrewdHatchlingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	m_AffectedCards.AddCard(pAbilityAction->GetAssociatedCard(),CardPlacement::Top);
}
void CShrewdHatchlingCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
}
//____________________________________________________________________________
//
CMirrorSheenCard::CMirrorSheenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirror Sheen"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(FALSE_CARD_COMPARER);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));


		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter, this, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("1") RED_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));


		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter, this, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));


		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter, this, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEndlessHorizonsCard::CEndlessHorizonsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Endless Horizons"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEndlessHorizonsCard::OnZoneChanged))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEndlessHorizonsCard::OnCardSelected))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndlessHorizonsCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Hand));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndlessHorizonsCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CEndlessHorizonsCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CEndlessHorizonsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CEndlessHorizonsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CEndlessHorizonsCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CEndlessHorizonsCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(SpecialNumber::Any),
		pController, ZoneId::Library, CCardFilter::GetFilter(_T("Plains")), ZoneId::Exile, TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &pExiled);
	pModifier1.ApplyTo(pController);

	return true;
}

bool CEndlessHorizonsCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't put a card into your hand"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pExiled.GetSize(); ++i)
	{
		CCard* pCard = pExiled.GetAt(i);

		if (pCard->GetOwner() == pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Put %s into your hand"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	
	return true;
}

void CEndlessHorizonsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

void CEndlessHorizonsCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put a card in his hand"), pSelectionPlayer->GetPlayerName());
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
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s in his hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSpringjackPastureCard::CSpringjackPastureCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Springjack Pasture"), nID)
	, m_CardFilter(_T("a Goat"), _T("Goats"), new CreatureTypeComparer(CREATURE_TYPE(Goat), false))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("4"),
				_T("Goat A"), 2847,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		
		cpAbility->SetAbilityText(_T("Get no mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::AnyPositive, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpringjackPastureCard::BeforeResolution1));

		cpAbility->SetAbilityText(_T("Get white mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::AnyPositive, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpringjackPastureCard::BeforeResolution2));

		cpAbility->SetAbilityText(_T("Get blue mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::AnyPositive, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpringjackPastureCard::BeforeResolution3));

		cpAbility->SetAbilityText(_T("Get black mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::AnyPositive, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpringjackPastureCard::BeforeResolution4));

		cpAbility->SetAbilityText(_T("Get red mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::AnyPositive, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpringjackPastureCard::BeforeResolution5));

		cpAbility->SetAbilityText(_T("Get green mana. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpringjackPastureCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CPlayer* pController = pAction->GetController();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

	for (int i = 0; i < nValue; i++) pModifier1.ApplyTo(pController);

	CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::Preventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

bool CSpringjackPastureCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CPlayer* pController = pAction->GetController();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

	for (int i = 0; i < nValue; i++) pModifier1.ApplyTo(pController);

	CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::Preventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

bool CSpringjackPastureCard::BeforeResolution3(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CPlayer* pController = pAction->GetController();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

	for (int i = 0; i < nValue; i++) pModifier1.ApplyTo(pController);

	CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::Preventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

bool CSpringjackPastureCard::BeforeResolution4(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CPlayer* pController = pAction->GetController();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

	for (int i = 0; i < nValue; i++) pModifier1.ApplyTo(pController);

	CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::Preventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

bool CSpringjackPastureCard::BeforeResolution5(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CPlayer* pController = pAction->GetController();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

	for (int i = 0; i < nValue; i++) pModifier1.ApplyTo(pController);

	CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::Preventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//