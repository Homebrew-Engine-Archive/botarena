#include "stdafx.h"
#include "CardFutureSight.h"

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

		DEFINE_CARD(CArcBladeCard);
		DEFINE_CARD(CAugurIlVecCard);
		DEFINE_CARD(CAugurOfSkullsCard);
		DEFINE_CARD(CAvenAugurCard);
		DEFINE_CARD(CBarrenGloryCard);
		DEFINE_CARD(CBaruFistOfKrosaCard);
		DEFINE_CARD(CBitterOrdealCard);
		DEFINE_CARD(CBladeOfTheSixthPrideCard);
		DEFINE_CARD(CBlindPhantasmCard);
		DEFINE_CARD(CBloodshotTraineeCard);
		DEFINE_CARD(CBogardanLancerCard);
		DEFINE_CARD(CBoldwyrIntimidatorCard);
		DEFINE_CARD(CBondedFetchCard);
		DEFINE_CARD(CBoundInSilenceCard);
		DEFINE_CARD(CBridgeFromBelowCard);
		//DEFINE_CARD(CCentaurOmenreaderCard);
		DEFINE_CARD(CCoalitionRelicCard);
		DEFINE_CARD(CCharRumblerCard);
		DEFINE_CARD(CCloudKeyCard);
		DEFINE_CARD(CCloudseederCard);
		DEFINE_CARD(CCrypticAnnelidCard);
		DEFINE_CARD(CCutthroatIlDalCard);
		DEFINE_CARD(CCyclicalEvolutionCard);
		DEFINE_CARD(CDakmorSalvageCard);
		DEFINE_CARD(CDaybreakCoronetCard);
		DEFINE_CARD(CDeathRattleCard);
		DEFINE_CARD(CDustOfMomentsCard);
		DEFINE_CARD(CDryadArborCard);
		DEFINE_CARD(CEdgeOfAutumnCard);
		DEFINE_CARD(CEmberwildeAugurCard);
		DEFINE_CARD(CEmblemOfTheWarmindCard);
		DEFINE_CARD(CEpochrasiteCard);
		DEFINE_CARD(CEvenTheOddsCard);
		DEFINE_CARD(CFesteringMarchCard);
		DEFINE_CARD(CFleshwritherCard);
		DEFINE_CARD(CFlowstoneEmbraceCard);
		DEFINE_CARD(CFomoriNomadCard);
		DEFINE_CARD(CForceOfSavageryCard);
		//DEFINE_CARD(CFrenzySliverCard);
		DEFINE_CARD(CGhostfireCard);
		DEFINE_CARD(CGiftOfGraniteCard);
		DEFINE_CARD(CGlitteringWishCard);
		DEFINE_CARD(CGoldmeadowLookoutCard);
		DEFINE_CARD(CGravenCairnsCard);
		DEFINE_CARD(CGraveScrabblerCard);
		DEFINE_CARD(CGrinningIgnusCard);
		DEFINE_CARD(CGroveoftheBurnwillowsCard);
		DEFINE_CARD(CHazeOfRageCard);
		DEFINE_CARD(CHeartwoodStorytellerCard);
		DEFINE_CARD(CHenchfiendOfUkorCard);
		DEFINE_CARD(CHomingSliverCard);
		DEFINE_CARD(CHorizonCanopyCard);
		DEFINE_CARD(CImperialMaskCard);
		DEFINE_CARD(CInfiltratorIlKorCard);
		DEFINE_CARD(CInterventionPactCard);
		DEFINE_CARD(CJudgeUnworthyCard);
		DEFINE_CARD(CKeldonMegalithsCard);
		DEFINE_CARD(CKnightOfSursiCard);
		DEFINE_CARD(CKorlashHeirToBlackbladeCard);
		DEFINE_CARD(CLeadenFistsCard);
		DEFINE_CARD(CLinessaZephyrMageCard);
		DEFINE_CARD(CLlanowarAugurCard);
		DEFINE_CARD(CLlanowarEmpathCard);
		DEFINE_CARD(CLlanowarMentorCard);
		DEFINE_CARD(CLlanowarRebornCard);
		DEFINE_CARD(CLostAuramancersCard);
		DEFINE_CARD(CLucentLiminidCard);
		DEFINE_CARD(CLymphSliverCard);
		DEFINE_CARD(CMagusOfTheAbyssCard);
		DEFINE_CARD(CMagusOfTheFutureCard);
		DEFINE_CARD(CMagusOfTheMoatCard);
		DEFINE_CARD(CMagusOfTheMoonCard);
		DEFINE_CARD(CMagusOfTheVineyardCard);
		DEFINE_CARD(CMarshalingCryCard);
		DEFINE_CARD(CMinionsMurmursCard);
		DEFINE_CARD(CMistmeadowSkulkCard);
		//DEFINE_CARD(CMoltenDisasterCard);
		DEFINE_CARD(CMysticSpeculationCard);
		DEFINE_CARD(CNarcomoebaCard);
		DEFINE_CARD(CNessianCourserCard);
		DEFINE_CARD(CNewBenaliaCard);
		DEFINE_CARD(CNihilithCard);
		DEFINE_CARD(CNimbusMazeCard);
		DEFINE_CARD(CNixCard);
		DEFINE_CARD(COblivionCrownCard);
		DEFINE_CARD(COrissSamiteGuardianCard);
		DEFINE_CARD(CPactofNegationCard);
		DEFINE_CARD(CPactOfTheTitanCard);
		DEFINE_CARD(CPatriciansScornCard);
		DEFINE_CARD(CPhosphorescentFeastCard);
		DEFINE_CARD(CPetrifiedPlatingCard);
		DEFINE_CARD(CPutridCyclopsCard);
		DEFINE_CARD(CPyromancersSwathCard);
		DEFINE_CARD(CQuagnothCard);
		DEFINE_CARD(CQuietDisrepairCard);
		DEFINE_CARD(CRamosianRevivalistCard);
		DEFINE_CARD(CRavagingRiftwurmCard);
		DEFINE_CARD(CRealityStrobeCard);
		DEFINE_CARD(CRiddleOfLightningCard);
		//DEFINE_CARD(CRiftElementalCard);
		DEFINE_CARD(CRiftsweeperCard);
		DEFINE_CARD(CRiverofTearsCard);
		DEFINE_CARD(CSaltskitterCard);
		DEFINE_CARD(CSarcomiteMyrCard);
		DEFINE_CARD(CScourgeOfKherRidgesCard);
		DEFINE_CARD(CScoutsWarningCard);
		DEFINE_CARD(CSecondWindCard);
		DEFINE_CARD(CSehtsTigerCard);
		DEFINE_CARD(CSkirkRidgeExhumerCard);
		DEFINE_CARD(CSlaughterPactCard);
		DEFINE_CARD(CSliverLegionCard);
		DEFINE_CARD(CSliversmithCard);
		DEFINE_CARD(CSnakeCultInitiationCard);
		DEFINE_CARD(CSoultetherGolemCard);
		DEFINE_CARD(CSparkspitterCard);
		DEFINE_CARD(CSpiritenDalCard);
		DEFINE_CARD(CSporolothAncientCard);
		DEFINE_CARD(CSteamfloggerBossCard);
		DEFINE_CARD(CStormEntityCard);
		DEFINE_CARD(CStreetWraithCard);
		DEFINE_CARD(CStrongholdRatsCard);
		DEFINE_CARD(CSummonersPactCard);
		DEFINE_CARD(CSwordoftheMeekCard);
		DEFINE_CARD(CTakePossessionCard);
		DEFINE_CARD(CTarmogoyfCard);
		DEFINE_CARD(CTaroxBladewingCard);
		DEFINE_CARD(CThornwealdArcherCard);
		DEFINE_CARD(CTolariaWestCard);
		DEFINE_CARD(CTombstalkerCard);
		DEFINE_CARD(CUtopiaMyconCard);
		DEFINE_CARD(CVedalkenAEthermageCard);
		DEFINE_CARD(CVeilstoneAmuletCard);
		DEFINE_CARD(CVenserShaperSavantCard);
		DEFINE_CARD(CVirulentSliverCard);
		DEFINE_CARD(CWhipSpineDrakeCard);
		DEFINE_CARD(CWitchsMistCard);
		DEFINE_CARD(CWrapInVigorCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CKorlashHeirToBlackbladeCard::CKorlashHeirToBlackbladeCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Korlash, Heir to Blackblade"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0),
		_T("1") BLACK_MANA_TEXT)

	, m_CardFilter(_T("a card named Korlash, Heir to Blackblade"), _T("cards named Korlash, Heir to Blackblade"), new CardNameComparer(_T("Korlash, Heir to Blackblade")))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("Swamps")), 
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		cpAbility->SetRevealCards(TRUE);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLymphSliverCard::CLymphSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lymph Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PreventDamage, 1,
			reinterpret_cast<int>(&m_CardFilter)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSliverLegionCard::CSliverLegionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliver Legion"), CardType::_LegendaryCreature, CREATURE_TYPE(Sliver), nID,
		ALL_MANA_TEXT, Power(7), Life(7))
{
	counted_ptr<CPwrTghAttrEnchantment2> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment2>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSliversmithCard::CSliversmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliversmith"), CardType::_ArtifactCreature, CREATURE_TYPE(Spellshaper), nID,
		_T("2"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1"),
			_T("Metallic Sliver"), 2729, 1));

	cpAbility->AddTapCost(); // tap this card
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards"))); // discard a card in addition to tap

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTarmogoyfCard::CTarmogoyfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tarmogoyf"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(1))
{
	{
		//Sorcerys pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Sorcery, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Instant pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Instant, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Enchantments pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::_Enchantment, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Creature pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Creature, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Artifacts pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Lands pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Planeswalker pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Planeswalker, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Tribal pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::Tribal, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGravenCairnsCard::CGravenCairnsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Graven Cairns"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
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
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT BLACK_MANA_TEXT));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT, RED_MANA_TEXT));
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
CAugurOfSkullsCard::CAugurOfSkullsCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Augur of Skulls"), CardType::Creature, CREATURE_TYPE2(Skeleton, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddSacrificeCost();

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenAugurCard::CAvenAugurCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Augur"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetSubjectCount(0, 2);
	cpAbility->AddSacrificeCost();

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarrenGloryCard::CBarrenGloryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barren Glory"), CardType::GlobalEnchantment, nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBarrenGloryCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBarrenGloryCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBarrenGloryCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (pHand->GetSize() > 0)
		return false;
	if (pBattlefield->GetSize() > 1)
		return false;
	return true;
}

bool CBarrenGloryCard::BeforeResolution(CBarrenGloryCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (pHand->GetSize() > 0)
		return false;
	if (pBattlefield->GetSize() > 1)
		return false;
	return true;
}

//____________________________________________________________________________
//
CBladeOfTheSixthPrideCard::CBladeOfTheSixthPrideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blade of the Sixth Pride"), CardType::Creature, CREATURE_TYPE2(Cat, Rebel), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CBlindPhantasmCard::CBlindPhantasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blind Phantasm"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CBloodshotTraineeCard::CBloodshotTraineeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodshot Trainee"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-4), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CBloodshotTraineeCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

BOOL CBloodshotTraineeCard::CanPlay(BOOL bIncludeTricks)
{
	return this->GetLastKnownPower() > Power(3);
}

//____________________________________________________________________________
//
CBondedFetchCard::CBondedFetchCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Bonded Fetch"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudseederCard::CCloudseederCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudseeder"), CardType::Creature, CREATURE_TYPE2(Faerie, Spellshaper), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			BLUE_MANA_TEXT,
			_T("Cloud Sprite"), 2761, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEdgeOfAutumnCard::CEdgeOfAutumnCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Edge of Autumn"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")),
		ZoneId::Battlefield, FALSE, FALSE, TRUE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CEdgeOfAutumnCard::CanPlay)));

	m_pSearchLibrarySpell->Add(cpTrait.GetPointer());

	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CEdgeOfAutumnCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) < 5)
		return true;

	return false;
}

//____________________________________________________________________________
//
CEmberwildeAugurCard::CEmberwildeAugurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Emberwilde Augur"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-3), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmblemOfTheWarmindCard::CEmblemOfTheWarmindCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Emblem of the Warmind"), CardType::EnchantCreature, nID,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleshwritherCard::CFleshwritherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleshwrither"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(4));
	m_CardFilter.SetFilterName(_T("a creature with converted mana cost 4"), _T("creatures with converted mana cost 4"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			&m_CardFilter,		
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityText(_T("Transfigure -"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneEmbraceCard::CFlowstoneEmbraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flowstone Embrace"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CFlowstoneEmbraceCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFlowstoneEmbraceCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			_T(""),
			Power(+2), Life(-2), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFomoriNomadCard::CFomoriNomadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fomori Nomad"), CardType::Creature, CREATURE_TYPE2(Nomad, Giant), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CForceOfSavageryCard::CForceOfSavageryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Force of Savagery"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT, Power(8), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CGhostfireCard::CGhostfireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Ghostfire"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddCardType(CardType::Null, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGiftOfGraniteCard::CGiftOfGraniteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Gift of Granite"), nID,
		WHITE_MANA_TEXT,
		Power(0), Life(+2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CGoldmeadowLookoutCard::CGoldmeadowLookoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goldmeadow Lookout"), CardType::Creature, CREATURE_TYPE2(Kithkin, Spellshaper), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			WHITE_MANA_TEXT,
			_T("Goldmeadow Harrier"), 2762, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHorizonCanopyCard::CHorizonCanopyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Horizon Canopy"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKeldonMegalithsCard::CKeldonMegalithsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Keldon Megaliths"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKeldonMegalithsCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CKeldonMegalithsCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CLeadenFistsCard::CLeadenFistsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Leaden Fists"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+3), Life(+3))
{
	GetCardKeyword()->AddFlash(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
}

//____________________________________________________________________________
//
CLlanowarAugurCard::CLlanowarAugurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Augur"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+3), Life(+3),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->AddSacrificeCost();

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLlanowarMentorCard::CLlanowarMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Mentor"), CardType::Creature, CREATURE_TYPE2(Elf, Spellshaper), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			GREEN_MANA_TEXT,
			_T("Llanowar Elves"), 2763, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLucentLiminidCard::CLucentLiminidCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lucent Liminid"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Illusion), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CMagusOfTheMoatCard::CMagusOfTheMoatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Moat"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
		::CreateObject<CCanBeAttackedByEnchantment>(this,
			CCardFilter::GetFilter(_T("flying creatures"))));

	cpAbility->SetAffectPlayers();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagusOfTheMoonCard::CMagusOfTheMoonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Moon"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	cpAbility->SetHasExcludingTypes();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNarcomoebaCard::CNarcomoebaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Narcomoeba"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Library, ZoneId::Graveyard));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNessianCourserCard::CNessianCourserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nessian Courser"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CNimbusMazeCard::CNimbusMazeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nimbus Maze"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNimbusMazeCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNimbusMazeCard::CanPlay2)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CNimbusMazeCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CNimbusMazeCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CNixCard::CNixCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Nix"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNixCard::BeforeResolution));
}

bool CNixCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();

	return (target->GetLastCastingManaCost().GetTotal() < 1);
}

//____________________________________________________________________________
//
CQuagnothCard::CQuagnothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quagnoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(5))
{
	GetCardKeyword()->AddShroud(FALSE);
	GetCardKeyword()->AddSplitSecond(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Hand, ZoneId::_AllZones));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuagnothCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CQuagnothCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CQuagnothCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
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

bool CQuagnothCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (pAction->GetTriggerContext().nValue1 == 1)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		return true;
	}

	return true;
}

//____________________________________________________________________________
//
CRamosianRevivalistCard::CRamosianRevivalistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramosian Revivalist"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("6"),
			new CreatureTypeComparer(CREATURE_TYPE(Rebel), false),
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(6));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSarcomiteMyrCard::CSarcomiteMyrCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sarcomite Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1),
		_T("2"), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScourgeOfKherRidgesCard::CScourgeOfKherRidgesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scourge of Kher Ridges"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("5") RED_MANA_TEXT,
				Life(-6),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				FALSE,PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkirkRidgeExhumerCard::CSkirkRidgeExhumerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirk Ridge Exhumer"), CardType::Creature, CREATURE_TYPE2(Zombie, Spellshaper), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			BLACK_MANA_TEXT,
			_T("Festering Goblin"), 2764, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSparkspitterCard::CSparkspitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sparkspitter"), CardType::Creature, CREATURE_TYPE2(Elemental, Spellshaper), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			RED_MANA_TEXT,
			_T("Spark Elemental"), 2765, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteamfloggerBossCard::CSteamfloggerBossCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steamflogger Boss"), CardType::Creature, CREATURE_TYPE2(Goblin, Rigger), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(0), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Rigger), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStreetWraithCard::CStreetWraithCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Street Wraith"), CardType::Creature, CREATURE_TYPE(Wraith), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(4),
		CreatureKeyword::Swampwalk)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();
	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTakePossessionCard::CTakePossessionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Take Possession"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());

	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CThornwealdArcherCard::CThornwealdArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornweald Archer"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CTolariaWestCard::CTolariaWestCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tolaria West"), nID)
	, m_CardFilter(_T("a card with converted mana cost 0"), _T("cards with converted mana cost 0"), new ConvertedManaCostComparer<std::equal_to<int>>(0))
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Transmute for a card with converted mana cost of 0
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute -"));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVedalkenAEthermageCard::CVedalkenAEthermageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Æthermage"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Wizardcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("3"),
				&m_CardFilter));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWitchsMistCard::CWitchsMistCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Witch's Mist"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new CreatureFlagComparer(CreatureFlag::_TakenDamage, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCharRumblerCard::CCharRumblerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Char-Rumbler"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(-1), Life(3),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CMarshalingCryCard::CMarshalingCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Marshaling Cry"), CardType::Instant, nID)
{
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Regular mana cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::Vigilance));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::Vigilance));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPyromancersSwathCard::CPyromancersSwathCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyromancer's Swath"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback,
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyromancersSwathCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenDamageDealt, 
								CWhenDamageDealt::CreatureEventCallback,
								&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyromancersSwathCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPyromancersSwathCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{
	if ((damage.m_DamageType & DamageType::_NonLoopDamage).Any()) return false;

	triggerContext.m_LifeModifier.SetSourceCard(pFromCard);
	triggerContext.m_LifeModifier.SetDamageType(damage.m_DamageType | DamageType::_NonLoopDamage);

	return true;
}

bool CPyromancersSwathCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const
{
	if ((damage.m_DamageType & DamageType::_NonLoopDamage).Any()) return false;

	triggerContext.m_pCreature = pToCreature;
	triggerContext.m_LifeModifier.SetSourceCard(pFromCard);
	triggerContext.m_LifeModifier.SetDamageType(damage.m_DamageType | DamageType::_NonLoopDamage);

	return true;
}

//____________________________________________________________________________
//
CGrinningIgnusCard::CGrinningIgnusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grinning Ignus"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, _T("2") RED_MANA_TEXT, RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddReturnThisCardCost(this);

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHenchfiendOfUkorCard::CHenchfiendOfUkorCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Henchfiend of Ukor"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

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
			&CHenchfiendOfUkorCard::CreateTemporaryAbility),
			_T("1") BLACK_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CHenchfiendOfUkorCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHenchfiendOfUkorCard::SetTriggerContextE));
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

bool CHenchfiendOfUkorCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CHenchfiendOfUkorCard::CreateTemporaryAbility()
{
	return this;
}

void CHenchfiendOfUkorCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CMagusOfTheVineyardCard::CMagusOfTheVineyardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Vineyard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagusOfTheVineyardCard::SetTriggerContext));

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CMagusOfTheVineyardCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return m_pGame->IsFirstMainPhase();
}

//____________________________________________________________________________
//
CUtopiaMyconCard::CUtopiaMyconCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Utopia Mycon"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		GREEN_MANA_TEXT, Power(0), Life(2))
	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoultetherGolemCard::CSoultetherGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soultether Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("2"), Power(3), Life(3))
	, CVanishingKeyword(this, 1)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(true);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(TIME_COUNTER, +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavagingRiftwurmCard::CRavagingRiftwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravaging Riftwurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
		, m_KickerCost(_T("4"))
	, CVanishingKeyword(this, 2)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, +3));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavagingRiftwurmCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRavagingRiftwurmCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CLostAuramancersCard::CLostAuramancersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lost Auramancers"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
	, CVanishingKeyword(this, 3)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CLostAuramancersCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLostAuramancersCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

void CLostAuramancersCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_nCounterCount = 3;

		int nMultiplier = 0;
		
		if (GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
			for (int i = 0; i < nMultiplier; ++i)
				m_nCounterCount = m_nCounterCount * 2;

		if ((CCard*)this->GetCardKeyword()->HasCantGetCounters()) m_nCounterCount = 0;
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CLostAuramancersCard::SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCounterContainer()->GetCount(TIME_COUNTER) == 0;
}

void CLostAuramancersCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != TIME_COUNTER)) return;
	m_nCounterCount = n_value;
}


//____________________________________________________________________________
//
//
//"Frenzy Sliver\n{1B}\nCreature - Sliver\nFUT,C\nAll Sliver creatures have frenzy 1.\n1/1"
//(Whenever a Sliver attacks and isn't blocked, it gets +1/+0 until end of turn.)
//It triggeres when Frenzy Sliver attacks and isn't blocked, and not if another sliver does so.
//
//CFrenzySliverCard::CFrenzySliverCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Frenzy Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
//		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
//{
//	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
//		::CreateObject<CPwrTghAttrEnchantment>(this,
//			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
//			Power(+0), Life(+0), CreatureKeyword::Null));
//
//	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
//
//	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
//		CCardAbilityModifier::CreateAbilityCallback(this,
//			&CFrenzySliverCard::CreateAbility)));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//counted_ptr<CAbility> CFrenzySliverCard::CreateAbility(CCard* pCard)
//{
//	typedef
//		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(
//		::CreateObject<TriggeredAbility>(pCard, NodeId::DeclareBlockersStep2));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
//	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
//
//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrenzySliverCard::SetTriggerContext));
//
//	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//	
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//bool CFrenzySliverCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//												 CNode* pToNode) const
//{
//	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
//}
//
////____________________________________________________________________________
////
COblivionCrownCard::COblivionCrownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Oblivion Crown"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&COblivionCrownCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> COblivionCrownCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantedCard,
			_T(""),
			Power(+1), Life(+1)));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSporolothAncientCard::CSporolothAncientCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sporoloth Ancient"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSporolothAncientCard::CreateAbility)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CSporolothAncientCard::CreateAbility(CCard* pCard)
{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pCard,
				_T(""),
				_T("Saproling H"), 2923,
				1));

	CCardFilter* m_CardFilter = new CCardFilter(new SpecificCardComparer(pCard));

	cpAbility->GetCost().AddAnyCardCounterCost(SPORE_COUNTER, -2, 1, m_CardFilter);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrypticAnnelidCard::CCrypticAnnelidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cryptic Annelid"), CardType::Creature, CREATURE_TYPE2(Worm, Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	//Scry 1.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
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

	//Scry 2.
	CZoneModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier2->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier2->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier2->GetSelection(0).moveType = MoveType::Others;
	pModifier2->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier2->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

	//Scry 3.
	CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
	pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier3->GetSelection(0).moveType = MoveType::Others;
	pModifier3->AddSelection(MinimumValue(0), MaximumValue(3), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier3->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNewBenaliaCard::CNewBenaliaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("New Benalia"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1.
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
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
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMysticSpeculationCard::CMysticSpeculationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mystic Speculation"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("2"))
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			3)); // Get 3 cards

	cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(3), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpSpell->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
		
	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CMysticSpeculationCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CLlanowarEmpathCard::CLlanowarEmpathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Empath"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	//Scry 2.
	CZoneModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier2->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier2->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier2->GetSelection(0).moveType = MoveType::Others;
	pModifier2->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier2->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

	//Reveal the top card of your library. If it's a creature card, put it into your hand.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->GetSelection(0).revealTo = CZoneModifier::RoleType::AllPlayers;
	pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // any cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBaruFistOfKrosaCard::CBaruFistOfKrosaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Baru, Fist of Krosa"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a card named Baru, Fist of Krosa"), _T("cards named Baru, Fist of Krosa"), new CardNameComparer(_T("Baru, Fist of Krosa")))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBaruFistOfKrosaCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBaruFistOfKrosaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Wurm C"), 2845));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2845); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Wurm C")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nLands));
		pCreature->SetPrintedToughness(Life(nLands));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CLlanowarRebornCard::CLlanowarRebornCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Llanowar Reborn"), nID)

	, m_GraftKeyword(this, 1)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagusOfTheAbyssCard::CMagusOfTheAbyssCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Abyss"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAugurIlVecCard::CAugurIlVecCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Augur il-Vec"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+4), PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCutthroatIlDalCard::CCutthroatIlDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cutthroat il-Dal"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Hand);
	cpAbility->SetConditionValue(0);
	cpAbility->SetConditionIsMaximum();

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Shadow);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CStrongholdRatsCard::CStrongholdRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stronghold Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBoundInSilenceCard::CBoundInSilenceCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Bound in Silence"), CardType::EnchantCreature, nID, CREATURE_TYPE(Rebel))
{
	counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
		::CreateObject<CChgPwrTghAttrEnchant>(this, 
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMistmeadowSkulkCard::CMistmeadowSkulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mistmeadow Skulk"), CardType::Creature, CREATURE_TYPE2(Kithkin, Rogue), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("card with converted mana cost 3 or greater"), _T("cards with converted mana cost 3 or greater"), 
		new ConvertedManaCostComparer<std::greater<int>>(2))
{
	GetCardKeyword()->AddLifelink(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CTaroxBladewingCard::CTaroxBladewingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tarox Bladewing"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))

	, m_CardFilter(_T("a card named Tarox Bladewing"), _T("cards named Tarox Bladewing"), new CardNameComparer(_T("Tarox Bladewing")))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::Null));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTaroxBladewingCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTaroxBladewingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPowerModifier pModifier1 = CPowerModifier(Power(this->GetLastKnownPower()));
	CLifeModifier pModifier2 = CLifeModifier(Life(GET_INTEGER(this->GetLastKnownPower())));
	pModifier1.ApplyTo((CCreatureCard*)this);
	pModifier2.ApplyTo((CCreatureCard*)this);
	
	/*ContextValue Context(pAction->GetValue());

	Context.nValue1 = this->GetLastKnownPower();
	Context.nValue2 = this->GetLastKnownPower();

	pAction->SetValue(Context);	*/
	
	return true;
}

//____________________________________________________________________________
//
CSaltskitterCard::CSaltskitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saltskitter"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSaltskitterCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CSaltskitterCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBogardanLancerCard::CBogardanLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bogardan Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBogardanLancerCard::OnZoneChanged))
{
	GetCreatureKeyword()->AddFlanking(FALSE);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBogardanLancerCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

void CBogardanLancerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	int nDamage = GET_INTEGER(GetGame()->GetNextPlayer(GetController())->GetDamageTakenThisTurn());

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nDamage > 0)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

bool CBogardanLancerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CRiverofTearsCard::CRiverofTearsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("River of Tears"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRiverofTearsCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRiverofTearsCard::CanPlay2)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//this CanPlay is not correct. Current code just checks if a land is played or not in the Main phase. So during the other phases the land produces black mana.
//We need a way to check during all turn if a land is played or not. (Franavalon 23-Oct-2012)
BOOL CRiverofTearsCard::CanPlay(BOOL bIncludeTricks)
{
	CMainNode* pMainNode = (CMainNode*)(GetController()->GetGraph()->GetCurrentNode());   // for correct work GetNode::Main should be used

	return  (!(m_pGame->GetActivePlayer() == GetController()) || (pMainNode->GetLandCount() == 0));
}

BOOL CRiverofTearsCard::CanPlay2(BOOL bIncludeTricks)
{
	CMainNode* pMainNode = (CMainNode*)(GetController()->GetGraph()->GetCurrentNode());

	return  ((m_pGame->GetActivePlayer() == GetController()) && (pMainNode->GetLandCount() > 0));
}

//____________________________________________________________________________
//
CSpiritenDalCard::CSpiritenDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spirit en-Dal"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("Spirit en-Dal"), _T("Spirits en-Dal"), new SpecificCardComparer(this))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Shadow, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CGroveoftheBurnwillowsCard::CGroveoftheBurnwillowsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grove of the Burnwillows"), nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), CardTapForManaEventSource::Listener::EventCallback(this,
			&CGroveoftheBurnwillowsCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();	
		cpNonbasicLandManaAbility->GetTapForManaEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();		
		cpNonbasicLandManaAbility->GetTapForManaEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

void CGroveoftheBurnwillowsCard::OnResolutionCompleted(const CManaProductionAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CDakmorSalvageCard::CDakmorSalvageCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dakmor Salvage"), nID)
{
	GetCardKeyword()->AddDredge(FALSE, 2);
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSwordoftheMeekCard::CSwordoftheMeekCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of the Meek"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));
		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureToughnessComparer<std::equal_to<int>>(1));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::equal_to<int>>(1));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSwordoftheMeekCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSwordoftheMeekCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSwordoftheMeekCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (GetZone()->GetZoneId() != ZoneId::Graveyard)
		return false;

	triggerContext.nValue1 = (int)pCard;

	return true;
}

bool CSwordoftheMeekCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Graveyard)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>((CCard*)triggerContext.nValue1);
	if (!pCreature) return false;

	CMoveCardModifier modifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
	modifier.ApplyTo(this);

	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CBridgeFromBelowCard::CBridgeFromBelowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bridge from Below"), CardType::GlobalEnchantment, nID, 
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie"), 2724, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBridgeFromBelowCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBridgeFromBelowCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBridgeFromBelowCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBridgeFromBelowCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CBridgeFromBelowCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CBridgeFromBelowCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CImperialMaskCard::CImperialMaskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Imperial Mask"), CardType::GlobalEnchantment, nID,
		_T("4") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//Fake triggered ability:
		//"When Imperial Mask enters the battlefield, if it's not a token, each of your teammates puts a token that's a copy of Imperial Mask onto the battlefield."
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantBeTargetedByOpponentsSpells));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//_____________________________________________________________________________
//
CWrapInVigorCard::CWrapInVigorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wrap in Vigor"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(
		new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CRegenerateModifier())));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVenserShaperSavantCard::CVenserShaperSavantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venser, Shaper Savant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVenserShaperSavantCard::OnTargetZoneSelected))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));                                 // This Trigger will activate the choice box

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVenserShaperSavantCard::BeforeResolution));		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Stack);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Stack);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVenserShaperSavantCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Stack, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(2);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVenserShaperSavantCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVenserShaperSavantCard::BeforeResolution(CVenserShaperSavantCard::TriggeredAbility::TriggeredActionType* pAction)
{
	std::vector<SelectionEntry> entries;

	if (GetController()->GetZoneById(ZoneId::Stack)->GetSize()>0 || m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Stack)->GetSize()>0)
	{
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Target a spell"));

		entries.push_back(selectionEntry);
		}
	}
	if (GetController()->GetZoneById(ZoneId::Battlefield)->GetSize()>0 || m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetSize()>0)
	{
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Target a permanent"));

		entries.push_back(selectionEntry);
		}
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	return false;
}

void CVenserShaperSavantCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);        // With this modifier we activate SpecialTrigger for certain card (this) with certain index (1)
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 2);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

bool CVenserShaperSavantCard::BeforeResolution1(CVenserShaperSavantCard::TriggeredAbility1::TriggeredActionType* pAction)
{
	if (pAction->GetAssociatedCard()->GetZoneId() == ZoneId::Stack)
	{
		CStack& stack = m_pGame->GetStack();

		for (int l = 0; l < stack.GetStackSize(); ++l)
			{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pAction->GetAssociatedCard()))
			{
				stack.RemoveActionAt(l);
				break;
			}
			}
	}
	return true;
}

//____________________________________________________________________________
//
CSlaughterPactCard::CSlaughterPactCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Slaughter Pact"), CardType::Instant, nID,
		_T(""), AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));	// Exclude artifact OR black cards

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slaughter Pact Effect"), 61005, 1, FALSE, ZoneId::Battlefield));

	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CPactofNegationCard::CPactofNegationCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Pact of Negation"), CardType::Instant, nID,
		_T(""), AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Pact of Negation Effect"), 61003, 1, FALSE, ZoneId::Battlefield));

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

//_____________________________________________________________________________
//
CInterventionPactCard::CInterventionPactCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Intervention Pact"), CardType::Instant, nID)
{
	counted_ptr<CDamagePreventionSpell> cpSpell(
		::CreateObject<CDamagePreventionSpell>(this, AbilityType::Instant, 
			_T(""), 
			Life(PreventionType::ReverseNextDamage),
			SourceColor::_AllSources,
			TRUE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Intervention Pact Effect"), 61002, 1, FALSE, ZoneId::Battlefield));

	AddSpell(cpSpell.GetPointer());

	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CPactOfTheTitanCard::CPactOfTheTitanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pact of the Titan"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T(""),
			_T("Giant"), 2884,
			1));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Pact of the Titan Effect"), 61004, 1, FALSE, ZoneId::Battlefield));

	AddSpell(cpSpell.GetPointer());

	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSummonersPactCard::CSummonersPactCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Summoner's Pact"), CardType::Instant, nID,
		_T(""), AbilityType::Instant,
		CCardFilter::GetFilter(_T("green creatures")), 
		ZoneId::Hand, TRUE, FALSE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	m_pSearchLibrarySpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Summoner's Pact Effect"), 61006, 1, FALSE, ZoneId::Battlefield));

	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CVirulentSliverCard::CVirulentSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Virulent Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CVirulentSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CVirulentSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetPoisonCount(1);
	cpAbility->SetReplacePoisonCount(FALSE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeartwoodStorytellerCard::CHeartwoodStorytellerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heartwood Storyteller"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	{
		//you cast
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//opponent casts
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPutridCyclopsCard::CPutridCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Putrid Cyclops"), CardType::Creature, CREATURE_TYPE2(Zombie, Cyclops), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CPutridCyclopsCard::OnResolutionCompleted))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPutridCyclopsCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CPutridCyclopsCard::BeforeResolution(CPutridCyclopsCard::TriggeredAbility::TriggeredActionType* pAction)
{
	//Scry 1.
	CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
	pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier.GetSelection(0).moveType = MoveType::Others;
	pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier.SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	
	pModifier.ApplyTo(GetController());
	return true;
}

void CPutridCyclopsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* lib=GetController()->GetZoneById(ZoneId::Library);
	if (lib->GetSize()>0)
	{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
	pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier.GetSelection(0).moveType = MoveType::Others;
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(GetController());

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	CPowerModifier pModifier1 = CPowerModifier(Power(-nCost), TRUE);
	CLifeModifier pModifier2 = CLifeModifier(Life(-nCost), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVeilstoneAmuletCard::CVeilstoneAmuletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Veilstone Amulet"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)

	, m_CardFilter(_T("this card's controller"), _T("this card's controllers"), new CardControllerComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpAbility->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSnakeCultInitiationCard::CSnakeCultInitiationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Snake Cult Initiation"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSnakeCultInitiationCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSnakeCultInitiationCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetPoisonCount(3);
	cpAbility->SetReplacePoisonCount(FALSE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvenTheOddsCard::CEvenTheOddsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Even the Odds"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			_T("Soldier A"), 2713,
			3));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CEvenTheOddsCard::CanPlay)));
	cpSpell->Add(cpTrait1.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

BOOL CEvenTheOddsCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CJudgeUnworthyCard::CJudgeUnworthyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Judge Unworthy"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CJudgeUnworthyCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingBlockingCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CJudgeUnworthyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		//Scry 3.
		CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier.GetSelection(0).moveType = MoveType::Others;
		pModifier.AddSelection(MinimumValue(0), MaximumValue(3), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier.SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		
		pModifier.ApplyTo(GetController());

		CZone* lib=GetController()->GetZoneById(ZoneId::Library);
		if (lib->GetSize()>0)
		{
			CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

			CZoneModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
			pModifier1.GetSelection(0).nMinSelectionCount = MinimumValue(0);
			pModifier1.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
			pModifier1.GetSelection(0).moveType = MoveType::Others;
			pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				NULL, // any cards
				ZoneId::Library, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier1.ApplyTo(GetController());

			int nCost = 0;

			if (!pNextDraw->GetCardType().IsLand())
			{
				nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
			}

			CCard* target = pAbilityAction->GetAssociatedCard();
			CCreatureCard* pCreature = (CCreatureCard*)target;

			CLifeModifier pModifier2 = CLifeModifier(Life(-nCost), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage, TRUE);

			pModifier2.ApplyTo(pCreature);
		}
	}
}

//____________________________________________________________________________
//
CPatriciansScornCard::CPatriciansScornCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Patrician's Scorn"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T(""),
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CPatriciansScornCard::CanPlay)));
		cpSpell->Add(cpTrait1.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CPatriciansScornCard::CanPlay(BOOL bIncludeTricks)
{
    return (GetController()->GetCertainTypeCastedCount(CardType::White) > 0);
}

//____________________________________________________________________________
//
CRiddleOfLightningCard::CRiddleOfLightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Riddle of Lightning"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CRiddleOfLightningCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-0), PreventableType::Preventable));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CRiddleOfLightningCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		//Scry 3.
		CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier.GetSelection(0).moveType = MoveType::Others;
		pModifier.AddSelection(MinimumValue(0), MaximumValue(3), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier.SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		
		pModifier.ApplyTo(GetController());

		CZone* lib=GetController()->GetZoneById(ZoneId::Library);
		if (lib->GetSize()>0 && bResult)
		{
			CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

			CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
			pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
			pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
			pModifier.GetSelection(0).moveType = MoveType::Others;
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				NULL, // any cards
				ZoneId::Library, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier.ApplyTo(GetController());

			int nCost = 0;

			if (!pNextDraw->GetCardType().IsLand())
			{
				nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
			}

			CLifeModifier pModifier1 = CLifeModifier(Life(-nCost), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage, TRUE);

			if (pAbilityAction->GetAssociatedCard())
			{
				CCard* target = pAbilityAction->GetAssociatedCard();
				CCreatureCard* pCreature = (CCreatureCard*)target;

				pModifier1.ApplyTo(pCreature);
			}

			if (pAbilityAction->GetAssociatedPlayer())
			{
				CPlayer* target = pAbilityAction->GetAssociatedPlayer();

				pModifier1.ApplyTo(target);
			}
		}
	}
}

//____________________________________________________________________________
//
CMinionsMurmursCard::CMinionsMurmursCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Minions' Murmurs"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMinionsMurmursCard::OnResolutionCompleted))
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMinionsMurmursCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(nDomainCount), MaximumValue(nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(-nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
//"Molten Disaster\n{XRR}\nSorcery\nFUT,R\nKicker {R}\rIf Molten Disaster was kicked, it has split second.\rMolten Disaster deals X damage to each creature without flying and each player."
//It doesn't work this way.
//CMoltenDisasterCard::CMoltenDisasterCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Molten Disaster"), CardType::Sorcery, nID)
//{
//	{
//		//Regular mana cost
//		counted_ptr<CGlobalChgLifeSpell> cpSpell(
//			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
//				RED_MANA_TEXT RED_MANA_TEXT,
//				Life(0),
//				new AnyCreatureComparer, TRUE,
//				PreventableType::Preventable));
//
//		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
//
//		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
//		cpSpell->SetExtraActionValueVector(ContextValue(-1));
//
//		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
//
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		//Kicker cost
//		counted_ptr<CGlobalChgLifeSpell> cpSpell(
//			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
//				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
//				Life(0),
//				new AnyCreatureComparer, TRUE,
//				PreventableType::Preventable));
//
//		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
//
//		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
//		cpSpell->SetExtraActionValueVector(ContextValue(-1));
//
//		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
//
//		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoltenDisasterCard::BeforeResolution));
//		cpSpell->SetAbilityText(_T("Casts kicked"));
//
//		AddSpell(cpSpell.GetPointer());
//	}
//}
//
//bool CMoltenDisasterCard::BeforeResolution(CAbilityAction* pAction) const
//{
//	CCard* pCard = (CCard*)this;
//
//	CCardKeywordModifier pModifier = CCardKeywordModifier();
//	pModifier.GetModifier().SetToAdd(CardKeyword::SplitSecond);
//	pModifier.GetModifier().SetOneTurnOnly(FALSE);
//
//	pModifier.ApplyTo(pCard);
//	return true;
//}
//
//____________________________________________________________________________
//
CHomingSliverCard::CHomingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Homing Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Sliver"), _T("Slivers"), new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHomingSliverCard::CreateAbility)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Slivercycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("3"),
				&m_CardFilter));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CHomingSliverCard::CreateAbility(CCard* pCard)
{
	//Slivercycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(pCard,
			_T("3"),
			&m_CardFilter));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDryadArborCard::CDryadArborCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dryad Arbor"), CardType::Creature | CardType::Forest | CardType::NonbasicLand, CREATURE_TYPE(Dryad), nID,
		_T(""), Power(1), Life(1))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CDryadArborCard::OnCardTypeChanged))
{
	GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());
	AddCardType(CardType::Green, CardType::_ColorMask);
	
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CDryadArborCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());

	{
	counted_ptr<CLandAbility> cpLandAbility(::CreateObject<CLandAbility>(this));
	
	cpLandAbility->SetAbilityName(_T("Land Ability"));

	AddAbility(cpLandAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T("Tap"), AbilityType::Activated, _T("")));

		cpBasicLandManaAbility->SetEnabled(FALSE);

		cpBasicLandManaAbility->AddTapCost();

		cpBasicLandManaAbility->SetAbilityName(_T("Basic Mana"));

		AddAbility(cpBasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		cpNonbasicLandManaAbility->SetAbilityName(_T("NonBasic Mana"));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CDryadArborCard::CanPlay(BOOL bIncludeTricks)
{
	return false;
}

void CDryadArborCard::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType) 
{
	if ((pCard == this) && (toCardType & CardType::BasicLand).Any()) AddCardType(CardType::Creature, CardType::Null, CardTypeEntry::Temporary);
}

//____________________________________________________________________________
//
CMagusOfTheFutureCard::CMagusOfTheFutureCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Future"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMagusOfTheFutureCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());


	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromLibraryTop,
			(int)CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void CMagusOfTheFutureCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			GetController()->GetPlayerName(),
			GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}

//____________________________________________________________________________
//
CHazeOfRageCard::CHazeOfRageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Haze of Rage"), CardType::Sorcery, nID)	
		, m_BuybackCost(_T("2"))
{
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Power(+1), Life(+0),
				new AnyCreatureComparer));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHazeOfRageCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHazeOfRageCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

void CHazeOfRageCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}
bool CHazeOfRageCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CHazeOfRageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHazeOfRageCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CHazeOfRageCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CSuspendCard::CSuspendCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,									
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCard(pGame, strCardName, cardType, uID)
{	
	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
	}
	
		{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

bool CSuspendCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}


//____________________________________________________________________________
//
CArcBladeCard::CArcBladeCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Arc Blade"), CardType::Sorcery, nID, _T("2") RED_MANA_TEXT, 3)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CArcBladeCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

void CArcBladeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, +3, TRUE);
	pModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CScoutsWarningCard::CScoutsWarningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scout's Warning"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Scout's Warning Effect"), 61030, 1, FALSE, ZoneId::_Effects));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSuspendCreatureCard::CSuspendCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);	

	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
	}
	
	{ // Removes 'cast off suspend' flag when leaving the stack.
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
	{ // Gains haste if cast off suspend.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Removes haste on leaving the battlefield or changing control.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetCardFlag()->HasAbilityFlag(0) && moveType == MoveType::Cast);
}

bool CSuspendCreatureCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCreatureCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCreatureCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCreatureCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	else m_CardFlagModifier1.ApplyTo(this);
	return true;
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CCyclicalEvolutionCard::CCyclicalEvolutionCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Cyclical Evolution"), CardType::Sorcery, nID, _T("2") GREEN_MANA_TEXT, 3)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCyclicalEvolutionCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+3), Life(+3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCyclicalEvolutionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier modifier(TIME_COUNTER, +3, TRUE);
	modifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CDustOfMomentsCard::CDustOfMomentsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dust of Moments"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));		

		cpSpell->SetAbilityText(_T("Remove two time counters from each permanent and each suspended card. Casts"));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDustOfMomentsCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));		

		cpSpell->SetAbilityText(_T("Put two time counters on each permanent with a time counter on it and each suspended card. Casts"));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDustOfMomentsCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CDustOfMomentsCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp1;
	m_CardFilter_temp1.SetComparer(new TrueCardComparer);

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp1,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(TIME_COUNTER, -1)));

	pModifier1.ApplyTo(GetController()); pModifier1.ApplyTo(GetController());
	pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController())); pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	CCardFilter m_CardFilter_temp2;
	m_CardFilter_temp2.SetComparer(new CardZoneComparer(ZoneId::Exile));
	m_CardFilter_temp2.AddComparer(new CardCounterComparer<std::greater_equal<int>>(TIME_COUNTER, 1));

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp2,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(TIME_COUNTER, -1)));

	pModifier2.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());
	pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController())); pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

bool CDustOfMomentsCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp1;
	m_CardFilter_temp1.SetComparer(new CardCounterComparer<std::greater_equal<int>>(TIME_COUNTER, 1));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp1,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(TIME_COUNTER, +2)));

	pModifier1.ApplyTo(GetController());
	pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	CCardFilter m_CardFilter_temp2;
	m_CardFilter_temp2.SetComparer(new CardZoneComparer(ZoneId::Exile));
	m_CardFilter_temp2.AddComparer(new CardCounterComparer<std::greater_equal<int>>(TIME_COUNTER, 1));

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp2,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(TIME_COUNTER, +2)));

	pModifier2.ApplyTo(GetController());
	pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CEpochrasiteCard::CEpochrasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Epochrasite"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(1), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CEpochrasiteCard::OnResolutionCompleted))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEpochrasiteCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier3.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier3.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier3.GetModifier().SetRemovalData((m_CardFlagModifier2.GetModifier().GetAdditionData()));

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEpochrasiteCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Hand, ZoneId::Stack));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Removes 'cast off suspend' flag when leaving the stack.
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier3));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Gains haste if cast off suspend.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEpochrasiteCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Removes haste on leaving the battlefield or changing control.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CEpochrasiteCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CEpochrasiteCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CEpochrasiteCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CEpochrasiteCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}	
}

void CEpochrasiteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
		(GetCardFlag()->GetData(CardFlag::AbilityFlag) != m_CardFlagModifier2.GetModifier().GetAdditionData()))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +3, true);
		pModifier.ApplyTo(this);
	}
}

bool CEpochrasiteCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetCardFlag()->HasAbilityFlag(0) && moveType == MoveType::Cast);
}

bool CEpochrasiteCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CEpochrasiteCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CEpochrasiteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

void CEpochrasiteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier counter = CCardCounterModifier(TIME_COUNTER, +3);
	counter.ApplyTo(this);
}

bool CEpochrasiteCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CEpochrasiteCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	else m_CardFlagModifier1.ApplyTo(this);
	return true;
}

bool CEpochrasiteCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CFesteringMarchCard::CFesteringMarchCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Festering March"), CardType::Sorcery, nID, _T("2") BLACK_MANA_TEXT, 3)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFesteringMarchCard::OnResolutionCompleted))
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpSpell->SetAffectOpponentCardsOnly();

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CFesteringMarchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, +3, TRUE);
	pModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CInfiltratorIlKorCard::CInfiltratorIlKorCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Infiltrator il-Kor"), CardType::Creature, CREATURE_TYPE2(Kor, Rogue), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(1), _T("1") BLUE_MANA_TEXT, 2)
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CKnightOfSursiCard::CKnightOfSursiCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Knight of Sursi"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2), WHITE_MANA_TEXT, 3)
{
	GetCreatureKeyword()->AddFlying(FALSE);
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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightOfSursiCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKnightOfSursiCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CNihilithCard::CNihilithCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Nihilith"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4), _T("1") BLACK_MANA_TEXT, 7)
{
	GetCreatureKeyword()->AddFear(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNihilithCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNihilithCard::SetTriggerContext));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNihilithCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CNihilithCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

//____________________________________________________________________________
//
CStormEntityCard::CStormEntityCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Storm Entity"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))

		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CStormEntityCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CStormEntityCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		int p = GetGame()->GetTurnCastedSpellCount();

		if (moveType == MoveType::Cast) p--;

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +p, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CPetrifiedPlatingCard::CPetrifiedPlatingCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Petrified Plating"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+2), Life(+2))
{
	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, GREEN_MANA_TEXT, 2));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CPetrifiedPlatingCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CPetrifiedPlatingCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CPetrifiedPlatingCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CPetrifiedPlatingCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPetrifiedPlatingCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CPetrifiedPlatingCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CPetrifiedPlatingCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CPetrifiedPlatingCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

//____________________________________________________________________________
//
CRealityStrobeCard::CRealityStrobeCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Reality Strobe"), CardType::Sorcery, nID, _T("2") BLUE_MANA_TEXT, 3)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CRealityStrobeCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CRealityStrobeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, +3, TRUE);
	pModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
// "Rift Elemental\n{R}\nCreature - Elemental\nFUT,C\n{1R}, Remove a time counter from a permanent you control or suspended card you own: Rift Elemental gets +2/+0 until end of turn.\n1/1"
// Can't remove counters from exiled cards as a cost.
//
/* CRiftElementalCard::CRiftElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rift Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		RED_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a suspended card"), _T("suspended cards"), new CardCounterComparer<std::greater_equal<int>>(TIME_COUNTER, 1))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Exile));

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") RED_MANA_TEXT,
				Power(+2), Life(+0)));

		cpAbility->GetCost().AddAnyCardCounterCost(TIME_COUNTER, -1, 1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") RED_MANA_TEXT,
				Power(+2), Life(+0)));

		cpAbility->GetCost().AddAnyCardCounterCost(TIME_COUNTER, -1, 1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}
 */
//____________________________________________________________________________
//
COrissSamiteGuardianCard::COrissSamiteGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oriss, Samite Guardian"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("a card named Oriss, Samite Guardian"), _T("cards named Oriss, Samite Guardian"), new CardNameComparer(_T("Oriss, Samite Guardian")))
	, m_CardFilter1(FALSE_CARD_COMPARER)
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(PreventionType::PreventAllDamage), SourceColor::Null));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE));
		
		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CPlayerEffectModifier(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("cards"))));
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CCanAttackWithModifier(GetGame(), &m_CardFilter1)));


		cpAbility->SetAbilityText(_T("Target player can't cast spells this turn, and creatures that player controls can't attack this turn."));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLinessaZephyrMageCard::CLinessaZephyrMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Linessa, Zephyr Mage"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a card named Linessa, Zephyr Mage"), _T("cards named Linessa, Zephyr Mage"), new CardNameComparer(_T("Linessa, Zephyr Mage")))
{
	{
		counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));		

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE));
		
		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);

		CZoneModifier* pModifier1 =new CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier1->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("creatures")), // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneModifier* pModifier2 =new CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("artifact cards")), // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneModifier* pModifier3 =new CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier3->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("enchantments")), // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneModifier* pModifier4 =new CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier4->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("lands")), // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier1);		
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier2);		
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier3);		
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier4);		

		cpAbility->SetAbilityText(_T("Target player returns a creature he or she controls to its owner's hand, then repeats this process for an artifact, an enchantment, and a land."));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiftsweeperCard::CRiftsweeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riftsweeper"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRiftsweeperCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Exile);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardZoneComparer(ZoneId::Exile));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}
void CRiftsweeperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	if (bResult) pLibrary->Shuffle();
}

//____________________________________________________________________________
//Tombstalker
CTombstalkerCard::CTombstalkerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tombstalker"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}

	for (int i = 1; i < 15; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetCost().AddExileGraveyardCardCost(6+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic,i);

		AddSpell(cpSpell.GetPointer());
	}

}

//____________________________________________________________________________
//
CDeathRattleCard::CDeathRattleCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death Rattle"), CardType::Instant, nID,
		_T("5") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Green, false));

	{ //Delve
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //Delve
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //Delve
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //Delve
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //Delve
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	
	for (int i = 1; i < 15; ++i)
	{
		//Delve mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Green, false));

		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic,i);

	    cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlitteringWishCard::CGlitteringWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glittering Wish"), CardType::Sorcery, nID)
	, m_CardFilter(new CardMulticoloredComparer)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT WHITE_MANA_TEXT));
		
	CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&m_CardFilter, // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCoalitionRelicCard::CCoalitionRelicCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Coalition Relic"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->SetAbilityText(_T("Put a charge counter on. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

        cpAbility->AddTapCost();

        AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

        cpAbility->AddTapCost();

        AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

        cpAbility->AddTapCost();

        AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

        cpAbility->AddTapCost();

        AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

        cpAbility->AddTapCost();

        AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredProdManaAbilityX, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoalitionRelicCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCoalitionRelicCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCoalitionRelicCard::SetTriggerContext(CTriggeredProdManaAbilityX::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->IsFirstMainPhase();
}

bool CCoalitionRelicCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounters = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue2 = nCounters;
	pAction->SetTriggerContext(triggerContext);

	CCardCounterModifier modifier = CCardCounterModifier(CHARGE_COUNTER, 0, true);
	modifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CBoldwyrIntimidatorCard::CBoldwyrIntimidatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boldwyr Intimidator"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Coward), false),	
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, false));

		CScheduledCreatureModifier* pModifier = new CScheduledCreatureModifier(GetGame(), new CCreatureTypeModifier(SingleCreatureType::Coward, true),
			TurnNumberDelta(-1), NodeId::EndStep, false,
			CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);

		cpAbility->GetTargetModifier().CCreatureModifiers::Add(pModifier);
		cpAbility->SetAbilityText(_T("Target becomes a Coward. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, false));

		CScheduledCreatureModifier* pModifier = new CScheduledCreatureModifier(GetGame(), new CCreatureTypeModifier(SingleCreatureType::Warrior, true),
			TurnNumberDelta(-1), NodeId::EndStep, false,
			CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater);

		cpAbility->GetTargetModifier().CCreatureModifiers::Add(pModifier);
		cpAbility->SetAbilityText(_T("Target becomes a Warrior. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaybreakCoronetCard::CDaybreakCoronetCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Daybreak Coronet"), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::FirstStrike | CreatureKeyword::Vigilance)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddComparer(new EnchantedByOtherComparer(this));
}

//____________________________________________________________________________
//
CWhipSpineDrakeCard::CWhipSpineDrakeCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Whip-Spine Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3), _T("2") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Drake);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSecondWindCard::CSecondWindCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Second Wind"), CardType::EnchantCreature, nID,
		_T("2") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(true));

		cpAbility->SetAbilityText(_T("Tap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				_T("")));

		cpAbility->AddTapCost();
		
		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

		cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGraveScrabblerCard::CGraveScrabblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grave Scrabbler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				_T("1" BLACK_MANA_TEXT),
				TRUE));

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGraveScrabblerCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		CCardFlagModifier* pModifier1 = new CCardFlagModifier;
		pModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		pModifier1->GetModifier().SetOneTurnOnly(true);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraveScrabblerCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CGraveScrabblerCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

bool CGraveScrabblerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
				 										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	return GetCardFlag()->HasAbilityFlag(0) == TRUE;
}

//____________________________________________________________________________
//
CCloudKeyCard::CCloudKeyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cloud Key"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CCloudKeyCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CCloudKeyCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(SelectedType, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();
		
	cpAbility->SetAbilityName(_T("Cloud Key cheap"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CCloudKeyCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = CardType::Null;

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("artifact"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("creature"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("enchantment"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("instant"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("sorcery"));
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CCloudKeyCard::CreateAdditionAbility));

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

void CCloudKeyCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedType = CardType::Artifact;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCloudKeyCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 2)
			{
				SelectedType = CardType::Creature;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCloudKeyCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 3)
			{
				SelectedType = CardType::_Enchantment;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCloudKeyCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 4)
			{
				SelectedType = CardType::Instant;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCloudKeyCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 5)
			{
				SelectedType = CardType::Sorcery;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCloudKeyCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
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
CPhosphorescentFeastCard::CPhosphorescentFeastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phosphorescent Feast"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPhosphorescentFeastCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhosphorescentFeastCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CPhosphorescentFeastCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CPhosphorescentFeastCard::RevealCards(CPlayer* pController)
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

		if (!pRevealedCards.HasCard(pCard))
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

void CPhosphorescentFeastCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

void CPhosphorescentFeastCard::Finale(CPlayer* pController)
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

		int p = 0;
		int max;
		int converted;
		int temp;

		for (int i = 0; i < pRevealedCards.GetSize(); ++i)
		{		
			max = 0;
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!pCard->GetCardType().IsLand())
			{
				converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

				for (int j = 0; j < pCard->GetSpells().GetSize(); ++j)
				{
					if (pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetTotal() == converted) 
						{
							temp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
							if (temp>max) 
								max=pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green);
						}
				}
				p = p + max;

				if (pCard->GetPrintedCardName() == _T("Tower Above")) p = p + 3;
				if (pCard->GetPrintedCardName() == _T("Reaper King")) p = p + 1;
				if (pCard->GetPrintedCardName() == _T("Assault // Battery")) p = p + 1;
				if (pCard->GetPrintedCardName() == _T("Illusion // Reality")) p = p + 1;
				if (pCard->GetPrintedCardName() == _T("Pure // Simple")) p = p + 1;
				if (pCard->GetPrintedCardName() == _T("Bound // Determined")) p = p + 1;
				if (pCard->GetPrintedCardName() == _T("Who/What/When/Where/Why")) p = p + 1;
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(2*p), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
/*
CCentaurOmenreaderCard::CCentaurOmenreaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Omenreader"), CardType::Snow | CardType::Creature, CREATURE_TYPE2(Centaur, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new AnyCreatureComparer,
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetDisableWhenUntapped();

	AddAbility(cpAbility.GetPointer());
}
*/
//____________________________________________________________________________
//
CQuietDisrepairCard::CQuietDisrepairCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Quiet Disrepair"), CardType::EnchantPermanent, nID,
		_T("1") GREEN_MANA_TEXT,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CQuietDisrepairCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuietDisrepairCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuietDisrepairCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CQuietDisrepairCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Mode 1 - destroy enchanted permanent"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetAbilityName(_T("Mode 2 - gain 2 life"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CQuietDisrepairCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CNode* pNode)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: Destroy enchanted permanent"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: You gain 2 life"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return false;
}

void CQuietDisrepairCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CQuietDisrepairCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, int nValue) const
{
	CCard* pEnchantedCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pEnchantedCard) return false;

	triggerContext.nValue1 = (DWORD)m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

bool CQuietDisrepairCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
	pModifier.ApplyTo(pCard);
	return true;
}


//____________________________________________________________________________
//
CBitterOrdealCard::CBitterOrdealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bitter Ordeal"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
			::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				MinimumValue(1), MaximumValue(1),
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBitterOrdealCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBitterOrdealCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBitterOrdealCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CBitterOrdealCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBitterOrdealCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	int nValue = GetGame()->GetCertainTypeDiedCount(CardType::_Permanent);

	for (int i = 0; i < nValue ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CBitterOrdealCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSehtsTigerCard::CSehtsTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seht's Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CSehtsTigerCard::OnColorSelected))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSehtsTigerCard::BeforeResolution));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

bool CSehtsTigerCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"));

		entries.push_back(selectionEntry);
	}
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CSehtsTigerCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
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
				
				CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Protection, (DWORD)CCardFilter::GetFilter(_T("white cards")));
				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

				pModifier1->ApplyTo(pSelectionPlayer);
				pModifier2->ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects blue"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Protection, (DWORD)CCardFilter::GetFilter(_T("blue cards")));
				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

				pModifier1->ApplyTo(pSelectionPlayer);
				pModifier2->ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects black"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Protection, (DWORD)CCardFilter::GetFilter(_T("black cards")));
				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

				pModifier1->ApplyTo(pSelectionPlayer);
				pModifier2->ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects red"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Protection, (DWORD)CCardFilter::GetFilter(_T("red cards")));
				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

				pModifier1->ApplyTo(pSelectionPlayer);
				pModifier2->ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
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
				
				CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Protection, (DWORD)CCardFilter::GetFilter(_T("green cards")));
				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

				pModifier1->ApplyTo(pSelectionPlayer);
				pModifier2->ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//