#include "stdafx.h"
#include "CardJourneyIntoNyx.h"

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
		DEFINE_CARD(CAegisOfTheGodsCard);
		DEFINE_CARD(CAerialFormationCard);
		DEFINE_CARD(CAgentOfErebosCard);
		DEFINE_CARD(CAjanisPresenceCard);
		DEFINE_CARD(CAkroanLineBreakerCard);
		DEFINE_CARD(CAkroanMastiffCard);
		DEFINE_CARD(CArmamentOfNyxCard);
		DEFINE_CARD(CArmoryOfIroasCard);
		DEFINE_CARD(CAspectOfGorgonCard);
		DEFINE_CARD(CBanishingLightCard);
		DEFINE_CARD(CBassaraTowerArcherCard);
//		DEFINE_CARD(CBlindingFlareCard);	see code for strive fault description
		DEFINE_CARD(CBrainMaggotCard);
		DEFINE_CARD(CCastIntoDarknessCard);
		DEFINE_CARD(CChariotOfVictoryCard);
		DEFINE_CARD(CCruelFeedingCard);
		DEFINE_CARD(CCyclopsOfEternalFuryCard);
		DEFINE_CARD(CCloakedSirenCard);
		DEFINE_CARD(CColossalHeroicsCard);
		DEFINE_CARD(CConsignToDustCard);
		DEFINE_CARD(CCountermandCard);
		DEFINE_CARD(CDawnbringerCharioteersCard);
		DEFINE_CARD(CDesecrationPlagueCard);
//		DEFINE_CARD(CDesperateStandCard);	see code for strive fault description
		DEFINE_CARD(CDictateOfErebosCard);
		DEFINE_CARD(CDictateOfHeliodCard);
		DEFINE_CARD(CDictateOfKarametraCard);
		DEFINE_CARD(CDictateOfKruphixCard);
		DEFINE_CARD(CDiscipleOfDeceitCard);
		DEFINE_CARD(CDoomwakeGiantCard);
		DEFINE_CARD(CDreadbringerLampadsCard);
		DEFINE_CARD(CEagleOfTheWatchCard);
		DEFINE_CARD(CEidolonOfBlossomsCard);
		DEFINE_CARD(CEidolonOfRhetoricCard);
		DEFINE_CARD(CEidolonOfTheGreatRevelCard);
		DEFINE_CARD(CExtinguishAllHopeCard);
		DEFINE_CARD(CFeastOfDreamsCard);
		DEFINE_CARD(CFelhidePetrifierCard);
		DEFINE_CARD(CFlamespeakersWillCard);
		DEFINE_CARD(CFleetfeatherCockatriceCard);
		DEFINE_CARD(CFlurryOfHornsCard);
		DEFINE_CARD(CFontOfFertilityCard);
		DEFINE_CARD(CFontOfFortunesCard);
		DEFINE_CARD(CFontOfIreCard);
		DEFINE_CARD(CFontOfVigorCard);
		DEFINE_CARD(CForgebornOreadsCard);
		DEFINE_CARD(CGluttonousCyclopsCard);
		DEFINE_CARD(CGodhunterOctopusCard);
		DEFINE_CARD(CGoldenHindCard);
		DEFINE_CARD(CGoldForgedSentinelCard);
		DEFINE_CARD(CGrimGuardianCard);
		DEFINE_CARD(CHallOfTriumphCard);
		DEFINE_CARD(CHarnessByForceCard);
		DEFINE_CARD(CHeroesBaneCard);
		DEFINE_CARD(CHourOfNeedCard);
		DEFINE_CARD(CHubrisCard);
		DEFINE_CARD(CHumblerOfMortalsCard);
		DEFINE_CARD(CHydraBroodmasterCard);
//		DEFINE_CARD(CKiorasDismissalCard);	see code for strive fault description
		DEFINE_CARD(CKruphixsInsightCard);
		DEFINE_CARD(CLagonnaBandTrailblazerCard);
		DEFINE_CARD(CLeoninIconoclastCard);
		DEFINE_CARD(CLightningDiademCard);
		DEFINE_CARD(CManaConfluenceCard);
//		DEFINE_CARD(CMarketFestivalCard);
		DEFINE_CARD(CMasterOfTheFeastCard);
		DEFINE_CARD(CMortalObstinacyCard);
		DEFINE_CARD(CNaturesPanoplyCard);
		DEFINE_CARD(CNessianGameWardenCard);
		DEFINE_CARD(CNightmarishEndCard);
		DEFINE_CARD(CNyxFleeceRamCard);
		DEFINE_CARD(CNyxInfusionCard);
		DEFINE_CARD(CNyxWeaverCard);
		DEFINE_CARD(COakheartDryadsCard);
		DEFINE_CARD(CPensiveMinotaurCard);
		DEFINE_CARD(CPhalanxFormationCard);
		DEFINE_CARD(CPharikasChosenCard);
		DEFINE_CARD(CPheresBandThunderhoofCard);
		DEFINE_CARD(CPheresBandWarchiefCard);
		DEFINE_CARD(CPinToTheEarthCard);
		DEFINE_CARD(CRavenousLeucrocotaCard);
		DEFINE_CARD(CRenownedWeaverCard);
		DEFINE_CARD(CReturnedRevelerCard);
		DEFINE_CARD(CRevelOfTheFallenGodCard);
		DEFINE_CARD(CRevivingMelodyCard);
		DEFINE_CARD(CRiptideChimeraCard);
		DEFINE_CARD(CRiseOfEaglesCard);
		DEFINE_CARD(CRollickOfAbandonCard);
		DEFINE_CARD(CRottedHulkCard);
		DEFINE_CARD(CSatyrGrovedancerCard);
		DEFINE_CARD(CSatyrHopliteCard);
		DEFINE_CARD(CSigiledSkinkCard);
		DEFINE_CARD(CSigiledStarfishCard);
		DEFINE_CARD(CSkybindCard);
		DEFINE_CARD(CSkyspearCavalryCard);
		DEFINE_CARD(CSolidarityOfHeroesCard);
		DEFINE_CARD(CSpawnOfThraxesCard);
//		DEFINE_CARD(CSpitefulBlowCard);
		DEFINE_CARD(CSpiteOfMogisCard);
		DEFINE_CARD(CSquelchingLeechesCard);
		DEFINE_CARD(CStarfallCard);
		DEFINE_CARD(CStrengthFromTheFallenCard);
		DEFINE_CARD(CSupplyLineCranesCard);
		DEFINE_CARD(CTempleOfEpiphanyCard);
		DEFINE_CARD(CTempleOfMaladyCard);
		DEFINE_CARD(CTethmosHighPriestCard);
		DEFINE_CARD(CThassasDevourerCard);
		DEFINE_CARD(CThassasIreCard);
		DEFINE_CARD(CThoughtrenderLamiaCard);
		DEFINE_CARD(CTritonShorestalkerCard);
		DEFINE_CARD(CUnderworldCoinsmithCard);
		DEFINE_CARD(CWhitewaterNaiadsCard);
		DEFINE_CARD(CWildfireCerberusCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CTempleOfEpiphanyCard::CTempleOfEpiphanyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Epiphany"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry start----------------------
		int SCRY_NUMBER = 1;
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer,								// select by 
			CZoneModifier::RoleType::PrimaryPlayer,								// reveal to
			NULL,																// any cards
			ZoneId::Library,													// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,								// select by this player
			CardPlacement::Bottom,												// put selected cards on top
			MoveType::Others,													// move type
			CZoneModifier::RoleType::PrimaryPlayer);							// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(true, 
										 ZoneId::Library,	
										 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
										 CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTempleOfMaladyCard::CTempleOfMaladyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Malady"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry start----------------------
		int SCRY_NUMBER = 1;
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer,								// select by 
			CZoneModifier::RoleType::PrimaryPlayer,								// reveal to
			NULL,																// any cards
			ZoneId::Library,													// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,								// select by this player
			CardPlacement::Bottom,												// put selected cards on top
			MoveType::Others,													// move type
			CZoneModifier::RoleType::PrimaryPlayer);							// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(true, 
										 ZoneId::Library,	
										 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
										 CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoldForgedSentinelCard::CGoldForgedSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gold-Forged Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("6"), Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CAkroanMastiffCard::CAkroanMastiffCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Mastiff"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CEagleOfTheWatchCard::CEagleOfTheWatchCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Eagle of the Watch"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CAegisOfTheGodsCard::CAegisOfTheGodsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aegis of the Gods"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	// You have hexproof.
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargetedByOpponentsSpells));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFontOfVigorCard::CFontOfVigorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Font of Vigor"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			Life(+7), PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);	
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDictateOfHeliodCard::CDictateOfHeliodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dictate of Heliod"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+2), Life(+2)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//

CEidolonOfRhetoricCard::CEidolonOfRhetoricCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eidolon of Rhetoric"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	// Each player can't cast more than one spell each turn.
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::SpellCastLimit, 1, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//

CManaConfluenceCard::CManaConfluenceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mana Confluence"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChariotOfVictoryCard::CChariotOfVictoryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chariot of Victory"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier1->GetModifier().SetOneTurnOnly(FALSE);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier3->GetModifier().SetOneTurnOnly(FALSE);
	
	cpAbility->AddCreatureModifier(pModifier1);
	cpAbility->AddCreatureModifier(pModifier2);
	cpAbility->AddCreatureModifier(pModifier3);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNyxFleeceRamCard::CNyxFleeceRamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nyx-Fleece Ram"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Sheep), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyspearCavalryCard::CSkyspearCavalryCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyspear Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CSupplyLineCranesCard::CSupplyLineCranesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Supply-Line Cranes"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBassaraTowerArcherCard::CBassaraTowerArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bassara Tower Archer"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CDesecrationPlagueCard::CDesecrationPlagueCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Desecration Plague"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CGodhunterOctopusCard::CGodhunterOctopusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godhunter Octopus"), CardType::Creature, CREATURE_TYPE(Octopus), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(5))
{
	// can't attack unless defending player controls an enchantment or an enchanted permanent
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this, &CGodhunterOctopusCard::CanAttack)));
	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CGodhunterOctopusCard::CanAttack(BOOL bIncludeTricks)
{
	// will need to be updated to support multiplayer.
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());				// 'defending player' is hard coded to next player
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (((pInplay->GetAt(i)->GetCardType() & CardType::_Enchantment).Any()) || 
			(pInplay->GetAt(i)->IsEnchanted() == TRUE))
			return TRUE;														// can attack if 'defending player' controls
																				// an enchantment card or an enchanted permanent
	return FALSE;
}

//____________________________________________________________________________
//
CCyclopsOfEternalFuryCard::CCyclopsOfEternalFuryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cyclops of Eternal Fury"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Cyclops), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDictateOfKarametraCard::CDictateOfKarametraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dictate of Karametra"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	GetCardKeyword()->AddFlash(FALSE);
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDictateOfKarametraCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}
	
bool CDictateOfKarametraCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Colorless))
	{
		m_pTriggeredAbility->SetProduceColorless(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceColorless(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red))
	{
		m_pTriggeredAbility->SetProduceRed(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green))
	{
		m_pTriggeredAbility->SetProduceGreen(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue))
	{
		m_pTriggeredAbility->SetProduceBlue(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black))
	{
		m_pTriggeredAbility->SetProduceBlack(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White))
	{
		m_pTriggeredAbility->SetProduceWhite(TRUE); 
		activate = true;
	}
	else 
		m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}

bool CDictateOfKarametraCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												 const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();
	return TRUE;
}

//____________________________________________________________________________
//
CDictateOfKruphixCard::CDictateOfKruphixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dictate of Kruphix"), CardType::GlobalEnchantment, nID,
		_T("1")	BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCardKeyword()->AddFlash(FALSE);
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
CCloakedSirenCard::CCloakedSirenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloaked Siren"), CardType::Creature, CREATURE_TYPE(Siren), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CFontOfFortunesCard::CFontOfFortunesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Font of Fortunes"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT, 2));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHubrisCard::CHubrisCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hubris"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHubrisCard::BeforeResolution));
}

bool CHubrisCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EnchantedOnComparer(pCard));
	cfilter.AddComparer(new CardTypeComparer(CardType::_Aura, false));

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
CPinToTheEarthCard::CPinToTheEarthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Pin to the Earth"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(-6), Life(+0))
{
}

//____________________________________________________________________________
//
CRiptideChimeraCard::CRiptideChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Riptide Chimera"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Chimera), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(4))
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
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiseOfEaglesCard::CRiseOfEaglesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rise of Eagles"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRiseOfEaglesCard::OnResolutionCompleted))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Bird J"), 62071,
			2));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());				
		
	AddSpell(cpSpell.GetPointer());
}

void CRiseOfEaglesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
	//Scry end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CSigiledStarfishCard::CSigiledStarfishCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigiled Starfish"), CardType::Creature, CREATURE_TYPE(Starfish), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSigiledStarfishCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSigiledStarfishCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
	//Scry end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CThassasIreCard::CThassasIreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thassa's Ire"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT,
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);
	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTritonShorestalkerCard::CTritonShorestalkerCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Triton Shorestalker"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CAspectOfGorgonCard::CAspectOfGorgonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Aspect of Gorgon"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+1), Life(+3))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
}

//____________________________________________________________________________
//
CBrainMaggotCard::CBrainMaggotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brain Maggot"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBrainMaggotCard::OnResolutionCompleted1))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().SetIncludeNonControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier
																				 // when a card is moved, the card will be flagged also
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrainMaggotCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBrainMaggotCard::BeforeResolveSelection));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{	
		typedef 
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2);							   // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);			   // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());							   // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer);							   // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);										   // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);											   // to owner's Hand
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBrainMaggotCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const
{
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());	
	return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));
}

bool CBrainMaggotCard::BeforeResolveSelection(CBrainMaggotCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());
	return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));
}

void CBrainMaggotCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());
	CZoneModifier pmodifier_opp = CZoneModifier(GetGame(), 
												ZoneId::Hand, 
												SpecialNumber::All, 
												CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top, 
												CZoneModifier::RoleType::AllPlayers);
	pmodifier_opp.ApplyTo(opponent);
}

//____________________________________________________________________________
//
CCastIntoDarknessCard::CCastIntoDarknessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cast into Darkness"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-2), Life(-0),
		CreatureKeyword::CantBlock)
{
}

//____________________________________________________________________________
//
/*CButcherofMalakirCard::CButcherofMalakirCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Butcher of Malakir"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}*/

//____________________________________________________________________________
//
CDictateOfErebosCard::CDictateOfErebosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dictate of Erebos"), CardType::GlobalEnchantment, nID,
		_T("3")	BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	GetCardKeyword()->AddFlash(FALSE);
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFelhidePetrifierCard::CFelhidePetrifierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Felhide Petrifier"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMasterOfTheFeastCard::CMasterOfTheFeastCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Master of the Feast"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Demon), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);									// your (controller's) upkeep
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);			// each (of controller's) opponents draw a card.
	cpAbility->SetDrawCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNightmarishEndCard::CNightmarishEndCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nightmarish End"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CNightmarishEndCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CNightmarishEndCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nCardsInHandCnt = m_CardFilter_temp.CountIncluded(pHand->GetCardContainer());

	CPowerModifier pModifier1 = CPowerModifier(Power(-nCardsInHandCnt));
	CLifeModifier  pModifier2 = CLifeModifier(Life(-nCardsInHandCnt), this, 
											  PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);
	if (bResult)
	{
		pModifier1.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
		pModifier2.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CNyxInfusionCard::CNyxInfusionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nyx Infusion"), CardType::EnchantCreature, nID)	
{
	counted_ptr<CDoubleChgPwrTghAttrExclusiveEnchant> cpSpell(
		::CreateObject<CDoubleChgPwrTghAttrExclusiveEnchant>(this, 
			_T("2") BLACK_MANA_TEXT,
			Power(+2), Life(+2), CreatureKeyword::Null, CardType::GlobalEnchantment,// Option 1 applies to enchantment creatures
			Power(-2), Life(-2), CreatureKeyword::Null, CardType::Creature));		// Option 2 applies to non enchantment creatures
																					// CDoubleChgPwrTghAttrExclusiveEnchant code
																					// The code only checks Option 2 if enchanted
																					// creature does not satisfy Option 1.
																					// This is how enchantment creatures are excluded from Option 2. 									
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPharikasChosenCard::CPharikasChosenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pharika's Chosen"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CReturnedRevelerCard::CReturnedRevelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Returned Reveler"), CardType::Creature, CREATURE_TYPE2(Zombie, Satyr), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetRevealCount(3);
	cpAbility->SetReorder(true, ZoneId::Graveyard);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRottedHulkCard::CRottedHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotted Hulk"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(5))
{
}

//____________________________________________________________________________
//
/*
	CDoubleSpell has outstanding fault use alternative implementation

CSpitefulBlowCard::CSpitefulBlowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spiteful Blow"), CardType::Sorcery, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land,    false), false,
			new CardTypeComparer(CardType::Creature, false), false,
			_T("")));

	cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpitefulBlowCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSpitefulBlowCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}
*/
//____________________________________________________________________________
//
CArmamentOfNyxCard::CArmamentOfNyxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Armament of Nyx"), CardType::EnchantCreature, nID)	
{
	counted_ptr<CDoubleChgPwrTghAttrExclusiveEnchant> cpSpell(
		::CreateObject<CDoubleChgPwrTghAttrExclusiveEnchant>(this, 
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike, CardType::GlobalEnchantment,// Option 1 applies to enchantment creatures
			Power(+0), Life(+0), CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage, CardType::Creature));
																							// Option 2 applies to non enchantment creatures
																							// CDoubleChgPwrTghAttrExclusiveEnchant code
																							// The code only checks Option 2 if enchanted
																							// creature does not satisfy Option 1.
																							// This is how enchantment creatures are excluded from Option 2. 									
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEidolonOfBlossomsCard::CEidolonOfBlossomsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eidolon of Blossoms"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAgentOfErebosCard::CAgentOfErebosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agent of Erebos"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CAgentOfErebosCard::OnResolutionCompleted))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		
		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

void CAgentOfErebosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CDoomwakeGiantCard::CDoomwakeGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doomwake Giant"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Giant), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(6))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CDreadbringerLampadsCard::CDreadbringerLampadsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreadbringer Lampads"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Nymph), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CForgebornOreadsCard::CForgebornOreadsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forgeborn Oreads"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Nymph), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(2))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end------
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end------
	}
}

//____________________________________________________________________________
//
CGrimGuardianCard::CGrimGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grim Guardian"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(4))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);		// life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end------
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);		// life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end------
	}
}

//____________________________________________________________________________
//
CHumblerOfMortalsCard::CHumblerOfMortalsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Humbler of Mortals"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
COakheartDryadsCard::COakheartDryadsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oakheart Dryads"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE2(Nymph, Dryad), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CSkybindCard::CSkybindCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skybind"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSkybindCard::OnResolutionCompleted))
{
		{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Enchantment, false))); // non-enchantment permanents
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Enchantment, false))); // non-enchantment permanents
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

void CSkybindCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}
//____________________________________________________________________________
//
CStrengthFromTheFallenCard::CStrengthFromTheFallenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Strength from the Fallen"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				  &CStrengthFromTheFallenCard::OnResolutionCompleted))
{
		{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility<CTriggeredAbility<>, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

void CStrengthFromTheFallenCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer());

	CPowerModifier pModifier1 = CPowerModifier(Power(+nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CThassasDevourerCard::CThassasDevourerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thassa's Devourer"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(6))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetRevealCount(2);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetRevealCount(2);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CThoughtrenderLamiaCard::CThoughtrenderLamiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thoughtrender Lamia"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Lamia), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CSquelchingLeechesCard::CSquelchingLeechesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squelching Leeches"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnderworldCoinsmithCard::CUnderworldCoinsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Underworld Coinsmith"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// {WB}, Pay 1 life: Each opponent loses 1 life.
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnderworldCoinsmithCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUnderworldCoinsmithCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
			pModifier1.ApplyTo(pPlayer);
	}
	return true;
}
//____________________________________________________________________________
//
CWhitewaterNaiadsCard::CWhitewaterNaiadsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whitewater Naiads"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Nymph), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	{	// Constellation - Whenever this card enters the battlefield under your control
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// triggered effect code start-----
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
	{	// Constellation - Whenever another enchantment enters the battlefield under your control (does not include this card)
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
// triggered effect code start-----	
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
// triggered effect code end-----
	}
}

//____________________________________________________________________________
//
CAkroanLineBreakerCard::CAkroanLineBreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Line Breaker"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkroanLineBreakerCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CAkroanLineBreakerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											   CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CExtinguishAllHopeCard::CExtinguishAllHopeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Extinguish All Hope"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::GlobalEnchantment, false))); // non enchantment creatures

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFeastOfDreamsCard::CFeastOfDreamsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Feast of Dreams"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddChildFilter(new CCardFilter(new EnchantedCardComparer));
}

//____________________________________________________________________________
//
CEidolonOfTheGreatRevelCard::CEidolonOfTheGreatRevelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eidolon of the Great Revel"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlurryOfHornsCard::CFlurryOfHornsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flurry of Horns"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT,
			_T("Minotaur A"), 62079,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFontOfIreCard::CFontOfIreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Font of Ire"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-5), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleetfeatherCockatriceCard::CFleetfeatherCockatriceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fleetfeather Cockatrice"), CardType::Creature, CREATURE_TYPE(Cockatrice), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	GetCardKeyword()->AddFlash(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFleetfeatherCockatriceCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFleetfeatherCockatriceCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) 
		return true;
	
	CCardCounterModifier	 pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CGluttonousCyclopsCard::CGluttonousCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gluttonous Cyclops"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Monstrosity 3:"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGluttonousCyclopsCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGluttonousCyclopsCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) 
		return true;

	CCardCounterModifier	 pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CRavenousLeucrocotaCard::CRavenousLeucrocotaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravenous Leucrocota"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("6") GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRavenousLeucrocotaCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRavenousLeucrocotaCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) 
		return true;

	CCardCounterModifier     pModifier1	= CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier   pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CWildfireCerberusCard::CWildfireCerberusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wildfire Cerberus"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 1:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWildfireCerberusCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWildfireCerberusCard::BeforeResolution2));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWildfireCerberusCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) 
		return true;

	CCardCounterModifier     pModifier1	= CCardCounterModifier(_T("+1/+1"), +1);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier   pModifier3	= CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CWildfireCerberusCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier.ApplyTo(pPlayer);								// 2 damage to each opponent
			{
				CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pBattlefield->GetSize(); ++i)
				{
					CCard* pCard = pBattlefield->GetAt(i);
					if (pCard->GetCardType().IsCreature())
						pModifier.ApplyTo((CCreatureCard*) pCard);	// 2 damage to each opponent's creatures
				}
			}
		}
	}
	return true;
}

//____________________________________________________________________________
//
CHydraBroodmasterCard::CHydraBroodmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hydra Broodmaster"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity X:"));
		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHydraBroodmasterCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHydraBroodmasterCard::BeforeResolution2));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHydraBroodmasterCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) 
		return true;

	n = pAction->GetCostConfigEntry().GetExtraValue();
	
	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +n);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CHydraBroodmasterCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nTokenCount = n;
	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	
	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Hydra A"), 55002));		
		if (!m_pGame->IsThinking())
		{ 
			((CTokenCreature*)cpToken.GetPointer())->SetUID(55002); 
			((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Hydra A")); 
		}
		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());	
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(n));
		pCreature->SetPrintedToughness(Life(n));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}
	return true;
}

//____________________________________________________________________________
//
CLightningDiademCard::CLightningDiademCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lightning Diadem"), nID,
		_T("5") RED_MANA_TEXT,
		Power(+2), Life(+2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//_______________________________________________________________________________________
//
CPensiveMinotaurCard::CPensiveMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pensive Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
}
//____________________________________________________________________________________
//
CRollickOfAbandonCard::CRollickOfAbandonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rollick of Abandon"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2),
			Life(-2)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSatyrHopliteCard::CSatyrHopliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Hoplite"), CardType::Creature, CREATURE_TYPE2(Satyr, Soldier), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSatyrHopliteCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CSatyrHopliteCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CSigiledSkinkCard::CSigiledSkinkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigiled Skink"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			     		   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSigiledSkinkCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSigiledSkinkCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
//Scry end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSpawnOfThraxesCard::CSpawnOfThraxesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spawn of Thraxes"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
	, m_CardFilter(_T("a Mountain"), _T("Mountains"), new CardTypeComparer(CardType::Mountain, false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CSpawnOfThraxesCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSpawnOfThraxesCard::BeforeResolution(CSpawnOfThraxesCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(
		-m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSpiteOfMogisCard::CSpiteOfMogisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spite of Mogis"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Graveyard, TRUE,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false), PreventableType::Preventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpiteOfMogisCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSpiteOfMogisCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
//Scry end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CStarfallCard::CStarfallCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Starfall"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStarfallCard::BeforeResolution));
}

bool CStarfallCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pController = pTarget->GetController();
	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	
	if (pTarget->GetZone()->GetZoneId() != ZoneId::Battlefield) 
		return false;
	//If that creature is an enchantment, Starfall deals 3 damage to that creature's controller
	if (pTarget->GetCardType().IsEnchantment() && pTarget->GetCardType().IsCreature())
		pModifier.ApplyTo(pController); 

	return true;
}

//____________________________________________________________________________
//
CFontOfFertilityCard::CFontOfFertilityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Font of Fertility"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(_T("land card with a basic land type"), _T("land cards with a basic land type"), new CardTypeComparer(CardType::Mountain | CardType::Plains | CardType::Forest | CardType::Swamp | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") GREEN_MANA_TEXT, 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, FALSE, TRUE));

	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoldenHindCard::CGoldenHindCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Golden Hind"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CHeroesBaneCard::CHeroesBaneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heroes' Bane"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeroesBaneCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHeroesBaneCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValue = Power(this->GetLastKnownPower());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nValue);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
/*
Code is identical to Dawn's Reflection which requires a fix
Outstanding issue is
When enchanted land is tapped, the option to choose which two additional mana does not appear.
The player in the "Actions" Window is asked to select "* Resolves effect of Dawn's Reflection" and after this is clicked
no further options appear.

Market Festival\n{3G}\nEnchantment - Aura\nJOU,C\nEnchant land\rWhenever enchanted land is tapped for mana, its controller adds two mana in any combination of colors to his or her mana pool.

CMarketFestivalCard::CMarketFestivalCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Market Festival"), CardType::EnchantLand, nID,
		_T("3") GREEN_MANA_TEXT,
		new CardTypeComparer(CardType::_Land, false))
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CMarketFestivalCard::OnSelectionDone))
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

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarketFestivalCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::Mana);
	
	AddAbility(cpAbility.GetPointer());
}

bool CMarketFestivalCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) 
		return false;
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

void CMarketFestivalCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CManaPoolModifier modifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool((CManaPool::Color::Enum)it->dwContext, 1));
			modifier.ApplyTo(pSelectionPlayer);
		}
}
*/
//____________________________________________________________________________
//
CNessianGameWardenCard::CNessianGameWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nessian Game Warden"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNessianGameWardenCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CNessianGameWardenCard::BeforeResolution(CAbilityAction* pAction)
{
	int nSize = CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nSize > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), 
												ZoneId::Library,
												nSize,
												CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top,
												CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(0), MaximumValue(1),					 // select cards to reorder
							   CZoneModifier::RoleType::PrimaryPlayer,				 // select by 
							   CZoneModifier::RoleType::PrimaryPlayer,				 // reveal to
							   CCardFilter::GetFilter(_T("creatures")),				 // what cards
							   ZoneId::Hand,										 // if selected, move cards to
							   CZoneModifier::RoleType::PrimaryPlayer,				 // select by this player
							   CardPlacement::Top,									 // put selected cards on 
							   MoveType::Others,									 // move type
							   CZoneModifier::RoleType::PrimaryPlayer);				 // order selected cards by this player
		pModifier.SetReorderInformation(true, 
										ZoneId::Library,
										CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
										CardPlacement::Bottom);
		pModifier.ApplyTo(pAction->GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CPheresBandThunderhoofCard::CPheresBandThunderhoofCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pheres-Band Thunderhoof"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPheresBandThunderhoofCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CPheresBandThunderhoofCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CPheresBandWarchiefCard::CPheresBandWarchiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pheres-Band Warchief"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1), CreatureKeyword::Trample));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Centaur), false));
	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // exclude this card
	cpAbility->SetAffectControllerCardsOnly();
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRenownedWeaverCard::CRenownedWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Renowned Weaver"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			_T("Spider D"), 55001,
			1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRevivingMelodyCard::CRevivingMelodyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reviving Melody"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false), false,
				new CardTypeComparer(CardType::_Enchantment, false), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->GetTargeting2()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRevivingMelodyCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));
	
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));
	
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}
	
bool CRevivingMelodyCard::BeforeResolution(CAbilityAction* pAction) const
{	
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);	

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others);	
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CSatyrGrovedancerCard::CSatyrGrovedancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Grovedancer"), CardType::Creature, CREATURE_TYPE2(Satyr, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRevelOfTheFallenGodCard::CRevelOfTheFallenGodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Revel of the Fallen God"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			_T("Satyr"), 62065,
			4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CArmoryOfIroasCard::CArmoryOfIroasCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Armory of Iroas"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CArmoryOfIroasCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CArmoryOfIroasCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBanishingLightCard::CBanishingLightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Banishing Light"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBanishingLightCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBanishingLightCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanishingLightCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBanishingLightCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanishingLightCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBanishingLightCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBanishingLightCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0)  
		return false;
	if (pCard != pExiled.GetAt(0)) 
		return false;
	return true;
}

bool CBanishingLightCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CBanishingLightCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CBanishingLightCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) 
		triggerContext.nValue1 = 0;
	else 
		triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CBanishingLightCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;
		
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);
	}
	return true;
}

void CBanishingLightCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) 
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
		pExiled.RemoveAll();
}

//___________________________________________________________________________________
//
CDawnbringerCharioteersCard::CDawnbringerCharioteersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dawnbringer Charioteers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddLifelink(FALSE);
	{
		// Heroic start
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDawnbringerCharioteersCard::SetTriggerContext));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// Heroic end
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

// entire SetTriggerContext function is for implementation of Heroic
bool CDawnbringerCharioteersCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
												    CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CLagonnaBandTrailblazerCard::CLagonnaBandTrailblazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lagonna-Band Trailblazer"), CardType::Creature, CREATURE_TYPE2(Centaur, Scout), nID,
		WHITE_MANA_TEXT, Power(0), Life(4))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLagonnaBandTrailblazerCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CLagonnaBandTrailblazerCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
												    CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CLeoninIconoclastCard::CLeoninIconoclastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Iconoclast"), CardType::Creature, CREATURE_TYPE2(Cat, Monk), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	// Heroic start
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLeoninIconoclastCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));  // target enchantment creature card
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CLeoninIconoclastCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CMortalObstinacyCard::CMortalObstinacyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mortal Obstinacy"), nID,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1))
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMortalObstinacyCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CMortalObstinacyCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								 CWhenSelfDamageDealt::PlayerEventCallback, 
								 &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlamespeakersWillCard::CFlamespeakersWillCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Flamespeaker's Will"), nID,
		RED_MANA_TEXT,
		Power(+1), Life(+1))
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFlamespeakersWillCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CFlamespeakersWillCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								 CWhenSelfDamageDealt::PlayerEventCallback, 
								 &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTethmosHighPriestCard::CTethmosHighPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tethmos High Priest"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
	// Heroic start
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTethmosHighPriestCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3)); // converted mana cost 2 or less
	
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CTethmosHighPriestCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CCountermandCard::CCountermandCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Countermand"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				        &CCountermandCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CCountermandCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CPlayer* pPlayer = pAbilityAction->GetAssociatedCard()->GetController();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
											CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);	
	pModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CConsignToDustCard::CConsignToDustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consign to Dust"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("2") GREEN_MANA_TEXT)
{	
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));
	
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNaturesPanoplyCard::CNaturesPanoplyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nature's Panoply"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("2") GREEN_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), 
				 CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSolidarityOfHeroesCard::CSolidarityOfHeroesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Solidarity of Heroes"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("1") GREEN_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSolidarityOfHeroesCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CSolidarityOfHeroesCard::BeforeResolution(CAbilityAction* pAction)
{	
	CCountedCardContainer pTargets;
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	pTargetAction->GetTargetGroup().GetCardSubjects(pTargets);
	// iterate through targets
	for (int i = 0; i < pTargets.GetSize(); ++i)
	{
		int nCounterCount = pTargets.GetAt(i)->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
		CCardCounterModifier modifier(_T("+1/+1"), nCounterCount);
		modifier.ApplyTo(pTargets.GetAt(i));
	}
	return true;
}
//____________________________________________________________________________
//
CAerialFormationCard::CAerialFormationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aerial Formation"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("2") BLUE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+1), Life(+1), 
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
	
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAjanisPresenceCard::CAjanisPresenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ajani's Presence"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("2") WHITE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+1), Life(+1), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhalanxFormationCard::CPhalanxFormationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phalanx Formation"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("1") WHITE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
//Blinding Flare\n{R}\nSorcery\nJOU,U\nStrive - Blinding Flare costs {R} more to cast for each target beyond the first.\rAny number of target creatures can't block this turn.
/*!!!Unresolved FAULT  When resolved uncomment code and it should work.
		When implementing the strive ability it was discovered that strive cards with identical casting and repeatable additional 
		casting costs that contain no colourless mana, when mana is tapped to cast these spells cause Botarena to stop 
		responding and after 20 seconds the software crashes.
		Example
			Blinding Flare's casting cost {R} and additional target cost {R} are identical and contain no colourless mana, 
			so this card has the endless loop issue
				
		Cards affected are Blinding Flare, Desperate Stand and Kiora’s Dismissal.

		nExtraOpt variable (cost.h) keeps incrementing until game crashes.
		The debugger revealed that there is a difference in the path of execution between strive cards that are working 
		and cards that are entering this endless loop. 

CBlindingFlareCard::CBlindingFlareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blinding Flare"), CardType::Sorcery, nID)
	, m_StriveAdditionalTargetCost(RED_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}*/

//____________________________________________________________________________
//
//Kiora's Dismissal\n{U}\nInstant\nJOU,U\nStrive - Kiora's Dismissal costs {U} more to cast for each target beyond the first.\rReturn any number of target enchantments to their owners' hands.
/*!!!Unresolved FAULT  When resolved uncomment code and it should work.
		When implementing the strive ability it was discovered that strive cards with identical casting and repeatable additional 
		casting costs that contain no colourless mana, when mana is tapped to cast these spells cause Botarena to stop 
		responding and after 20 seconds the software crashes.
		Example
			Kiora’s Dismissal's casting cost {U} and additional target cost {U} are identical and contain no colourless mana, 
			so this card has the endless loop issue
				
		Cards affected are Blinding Flare, Desperate Stand and Kiora’s Dismissal.

		nExtraOpt variable (cost.h) keeps incrementing until game crashes.
		The debugger revealed that there is a difference in the path of execution between strive cards that are working 
		and cards that are entering this endless loop.

CKiorasDismissalCard::CKiorasDismissalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kiora's Dismissal"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(BLUE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive

		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}*/

//____________________________________________________________________________
//
CColossalHeroicsCard::CColossalHeroicsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Colossal Heroics"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("1") GREEN_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+2), Life(+2), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE)); // untap target creature
		
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCruelFeedingCard::CCruelFeedingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cruel Feeding"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("2") BLACK_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				Power(+1), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
//Desperate Stand\n{RW}\nSorcery\nJOU,U\nStrive - Desperate Stand costs {RW} more to cast for each target beyond the first.\rAny number of target creatures each get +2/+0 and gain first strike and vigilance until end of turn.
/*!!!Unresolved FAULT  When resolved uncomment code and it should work.
		When implementing the strive ability it was discovered that strive cards with identical casting and repeatable additional 
		casting costs that contain no colourless mana, when mana is tapped to cast these spells cause Botarena to stop 
		responding and after 20 seconds the software crashes.
		Example
			Desperate Stand’s casting cost {RW} and additional target cost {RW} are identical and contain no colourless mana, 
			so this card has the endless loop issue
				
		Cards affected are Blinding Flare, Desperate Stand and Kiora’s Dismissal.

		nExtraOpt variable (cost.h) keeps incrementing until game crashes.
		The debugger revealed that there is a difference in the path of execution between strive cards that are working 
		and cards that are entering this endless loop. 

CDesperateStandCard::CDesperateStandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Desperate Stand"), CardType::Sorcery, nID)
	, m_StriveAdditionalTargetCost(RED_MANA_TEXT WHITE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+0), 
				CreatureKeyword::FirstStrike, CreatureKeyword::Vigilance,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT WHITE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}

}*/

//____________________________________________________________________________
//
CHarnessByForceCard::CHarnessByForceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harness by Force"), CardType::Sorcery, nID)
	, m_StriveAdditionalTargetCost(_T("2") RED_MANA_TEXT)
{	
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1); 
		
		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHourOfNeedCard::CHourOfNeedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hour of Need"), CardType::Instant, nID)
	, m_StriveAdditionalTargetCost(_T("1") BLUE_MANA_TEXT)
{	
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));
		
		cpSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Sphinx A"), 55000, 1));

		cpSpell->GetCost().AddOptionalManaCost(m_StriveAdditionalTargetCost, true); // true->can pay additional cost multiple times
		cpSpell->AdjustTargetCountWithExtraCostValueAddOne();						// strive
		AddSpell(cpSpell.GetPointer());
	}
	{	// it is a legal option to cast a Strive spell with no targets
		// choose no targets just consume mana
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT));
		cpSpell->SetAbilityText(_T("Choose no targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHallOfTriumphCard::CHallOfTriumphCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hall of Triumph"), CardType::_LegendaryArtifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CHallOfTriumphCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CHallOfTriumphCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CardTypeComparer(SelectedColor, false));

	cpAbility->SetAffectControllerCardsOnly();
		
	cpAbility->SetAbilityName(_T("Hall of Triumph boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CHallOfTriumphCard::Move(CZone* pToZone,
							  const CPlayer* pByPlayer,
							  MoveType moveType,
							  CardPlacement cardPlacement, 
							  BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedColor = CardType::Null;

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
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHallOfTriumphCard::CreateAdditionAbility));

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

void CHallOfTriumphCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedColor = CardType::White;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CHallOfTriumphCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
			if (nSelectedIndex == 2)
			{
				SelectedColor = CardType::Blue;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CHallOfTriumphCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
			if (nSelectedIndex == 3)
			{
				SelectedColor = CardType::Black;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CHallOfTriumphCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
			if (nSelectedIndex == 4)
			{
				SelectedColor = CardType::Red;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CHallOfTriumphCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
			if (nSelectedIndex == 5)
			{
				SelectedColor = CardType::Green;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CHallOfTriumphCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
		}
}

//____________________________________________________________________________
//
CNyxWeaverCard::CNyxWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nyx Weaver"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Spider), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetRevealCount(2);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddExileCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDiscipleOfDeceitCard::CDiscipleOfDeceitCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Deceit"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDiscipleOfDeceitCard::OnCardSelected))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscipleOfDeceitCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CDiscipleOfDeceitCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			if (!(pCard->GetCardType() & CardType::_Land).Any()) // only list nonland cards
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Discard %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CDiscipleOfDeceitCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't discard anything"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s discards %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
				int iConvertedManaCost = pCard->GetConvertedManaCost();
				pModifier1.ApplyTo(pCard);
				
				CCardFilter	m_CardFilter;
				m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(iConvertedManaCost));// converted mana cost the same as discarded card			
				CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(pSelectionPlayer,
																	     MinimumValue(0), MaximumValue(1),
																		 pSelectionPlayer, ZoneId::Library,
																		 &m_CardFilter,
																	     ZoneId::Hand, TRUE, 
																		 CardPlacement::Top, FALSE, TRUE);	
				pModifier2.ApplyTo(pSelectionPlayer);	
				return;
			}
		}
}

//____________________________________________________________________________
//
CKruphixsInsightCard::CKruphixsInsightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kruphix's Insight"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT, 6));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);
	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(3), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("enchantments")));
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//