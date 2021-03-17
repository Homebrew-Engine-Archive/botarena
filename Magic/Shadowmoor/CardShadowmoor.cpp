#include "stdafx.h"
#include "CardShadowmoor.h"

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
		DEFINE_CARD(CAEthertowCard);
		DEFINE_CARD(CAphoticWispsCard);
		DEFINE_CARD(CAdviceFromTheFaeCard);
		DEFINE_CARD(CApothecaryInitiateCard);
		DEFINE_CARD(CAshenmoorCohortCard);
		DEFINE_CARD(CAshenmoorGougerCard);
		DEFINE_CARD(CAshenmoorLiegeCard);
		DEFINE_CARD(CAuguryAdeptCard);
		DEFINE_CARD(CBallynockCohortCard);
		DEFINE_CARD(CBarkshellBlessingCard);
		DEFINE_CARD(CBarrentonCragtreadsCard);
		DEFINE_CARD(CBarrentonMedicCard);
		DEFINE_CARD(CBeseechtheQueenCard);
		DEFINE_CARD(CBitingTetherCard);
		DEFINE_CARD(CBlazethornScarecrowCard);
		DEFINE_CARD(CBlightSickleCard);
		DEFINE_CARD(CBlisteringDieflynCard);
		DEFINE_CARD(CBloodmarkMentorCard);
		DEFINE_CARD(CBloodshedFeverCard);
		DEFINE_CARD(CBlowflyInfestationCard);
		DEFINE_CARD(CBoartuskLiegeCard);
		DEFINE_CARD(CBoggartArsonistsCard);
		DEFINE_CARD(CBoggartRamGangCard);
		DEFINE_CARD(CBoonReflectionCard);
		DEFINE_CARD(CBriarberryCohortCard);
		DEFINE_CARD(CBurnTrailCard);
		DEFINE_CARD(CCauldronOfSoulsCard);
		DEFINE_CARD(CCeruleanWispsCard);
		DEFINE_CARD(CChainbreakerCard);
		DEFINE_CARD(CCinderbonesCard);
		DEFINE_CARD(CCinderhazeWretchCard);
		DEFINE_CARD(CCorrosiveMentorCard);
		DEFINE_CARD(CCounterboreCard);
		DEFINE_CARD(CCrabappleCohortCard);
		DEFINE_CARD(CCrimsonWispsCard);
		DEFINE_CARD(CCrowdOfCindersCard);
		DEFINE_CARD(CCultbrandCinderCard);
		DEFINE_CARD(CCursecatcherCard);
		DEFINE_CARD(CCurseOfChainsCard);
		DEFINE_CARD(CDeepchannelMentorCard);
		DEFINE_CARD(CDeepSlumberTitanCard);
		DEFINE_CARD(CDemigodOfRevengeCard);
		DEFINE_CARD(CDeusofCalamityCard);
		DEFINE_CARD(CDevotedDruidCard);
		DEFINE_CARD(CDinoftheFireherdCard);
		DEFINE_CARD(CDireUndercurrentsCard);
		DEFINE_CARD(CDisturbingPlotCard);
		DEFINE_CARD(CDramaticEntranceCard);
		DEFINE_CARD(CDreamSalvageCard);
		DEFINE_CARD(CDroveOfElvesCard);
		DEFINE_CARD(CDrownerInitiateCard);
		DEFINE_CARD(CDuskUrchinsCard);
		DEFINE_CARD(CElementalMasteryCard);
		DEFINE_CARD(CElvishHexhunterCard);
		DEFINE_CARD(CEmberGaleCard);
		DEFINE_CARD(CEmberstrikeDuoCard);
		DEFINE_CARD(CEnchantedEveningCard);
		DEFINE_CARD(CEverlastingTormentCard);
		DEFINE_CARD(CFaerieMacabreCard);
		DEFINE_CARD(CFaerieSwarmCard);
		DEFINE_CARD(CFarhavenElfCard);
		DEFINE_CARD(CFateTransferCard);
		DEFINE_CARD(CFireLitThicketCard);
		DEFINE_CARD(CFirespoutCard);
		DEFINE_CARD(CFistsoftheDemigodCard);
		DEFINE_CARD(CFlameJavelinCard);
		DEFINE_CARD(CFlourishingDefensesCard);
		DEFINE_CARD(CFossilFindCard);
		DEFINE_CARD(CFoxfireOakCard);
		DEFINE_CARD(CFracturingGustCard);
		DEFINE_CARD(CFulminatorMageCard);
		DEFINE_CARD(CFurystokeGiantCard);
		DEFINE_CARD(CGhastlordofFugueCard);
		DEFINE_CARD(CGhastlyDiscoveryCard);
		DEFINE_CARD(CGiantbaitingCard);
		DEFINE_CARD(CGleefulSabotageCard);
		DEFINE_CARD(CGlenElendraLiegeCard);
		DEFINE_CARD(CGloomlanceCard);
		DEFINE_CARD(CGloomwidowCard);
		DEFINE_CARD(CGloomwidowsFeastCard);
		DEFINE_CARD(CGnarledEffigyCard);
		DEFINE_CARD(CGodheadOfAweCard);
		DEFINE_CARD(CGravelgillAxesharkCard);
		DEFINE_CARD(CGravelgillDuoCard);
		DEFINE_CARD(CGriefTyrantCard);
		DEFINE_CARD(CGrimPoppetCard);
		DEFINE_CARD(CGutturalResponseCard);
		DEFINE_CARD(CHeapDollCard);
		DEFINE_CARD(CHeartmenderCard);
		DEFINE_CARD(CHelmoftheGhastlordCard);
		DEFINE_CARD(CHollowbornBarghestCard);
		DEFINE_CARD(CHollowsageCard);
		DEFINE_CARD(CHordeOfBoggartsCard);
		DEFINE_CARD(CHungrySprigganCard);
		DEFINE_CARD(CImpromptuRaidCard);
		DEFINE_CARD(CInkfathomInfiltratorCard);
		DEFINE_CARD(CInquisitorsSnareCard);
		DEFINE_CARD(CIntimidatorInitiateCard);
		DEFINE_CARD(CIslebackSpawnCard);
		DEFINE_CARD(CJuvenileGloomwidowCard);
		DEFINE_CARD(CKinscaerHarpoonistCard);
		DEFINE_CARD(CKitchenFinksCard);
		DEFINE_CARD(CKithkinRabbleCard);
		DEFINE_CARD(CKithkinShielddareCard);
		DEFINE_CARD(CKnollspineDragonCard);
		DEFINE_CARD(CKnollspineInvocationCard);
		DEFINE_CARD(CKulrathKnightCard);
		DEFINE_CARD(CLeechriddenSwampCard);
		DEFINE_CARD(CLoamdraggerGiantCard);
		DEFINE_CARD(CLochKorriganCard);
		DEFINE_CARD(CLockjawSnapperCard);
		DEFINE_CARD(CMadblindMountainCard);
		DEFINE_CARD(CManaforgeCinderCard);
		DEFINE_CARD(CManamorphoseCard);
		DEFINE_CARD(CMassCalcifyCard);
		DEFINE_CARD(CMedicineRunnerCard);
		DEFINE_CARD(CMemoryPlunderCard);
		DEFINE_CARD(CMemorySluiceCard);
		DEFINE_CARD(CMercyKillingCard);
		DEFINE_CARD(CMerrowGrimeblotterCard);
		DEFINE_CARD(CMerrowWavebreakersCard);
		DEFINE_CARD(CMidnightBansheeCard);
		DEFINE_CARD(CMineExcavationCard);
		DEFINE_CARD(CMistmeadowWitchCard);
		DEFINE_CARD(CMistveilPlainsCard);
		DEFINE_CARD(CMoonringIslandCard);
		DEFINE_CARD(CMorselhoarderCard);
		DEFINE_CARD(CMudbrawlerCohortCard);
		DEFINE_CARD(CMudbrawlerRaidersCard);
		DEFINE_CARD(CMurderousRedcapCard);
		DEFINE_CARD(CMysticGateCard);
		DEFINE_CARD(CNiveousWispsCard);
		DEFINE_CARD(CNurturerInitiateCard);
		DEFINE_CARD(COldGhastbarkCard);
		DEFINE_CARD(COonasGatewardenCard);
		DEFINE_CARD(COonaQueenoftheFaeCard);
		DEFINE_CARD(COracleOfNectarsCard);
		DEFINE_CARD(COrderOfWhiteclayCard);
		DEFINE_CARD(COversoulOfDuskCard);
		DEFINE_CARD(CPaintersServantCard);
		DEFINE_CARD(CPaleWayfarerCard);
		DEFINE_CARD(CParapetWatchersCard);
		DEFINE_CARD(CPiliPalaCard);
		DEFINE_CARD(CPlagueOfVerminCard);
		DEFINE_CARD(CPlumeveilCard);
		DEFINE_CARD(CPollutedBondsCard);
		DEFINE_CARD(CPoisonTheWellCard);
		DEFINE_CARD(CPowerOfFireCard);
		DEFINE_CARD(CPresenceOfGondCard);
		DEFINE_CARD(CPrismaticOmenCard);
		DEFINE_CARD(CPunctureBoltCard);
		DEFINE_CARD(CPuppeteerCliqueCard);
		DEFINE_CARD(CPuresightMerrowCard);
		DEFINE_CARD(CPyreChargerCard);
		DEFINE_CARD(CRageReflectionCard);
		DEFINE_CARD(CRakingCanopyCard);
		DEFINE_CARD(CRattleblazeScarecrowCard);
		DEFINE_CARD(CRavensRunDragoonCard);
		DEFINE_CARD(CReaperKingCard);
		DEFINE_CARD(CReknitCard);
		DEFINE_CARD(CResplendentMentorCard);
		DEFINE_CARD(CRevelsongHornCard);
		DEFINE_CARD(CRhystheRedeemedCard);
		DEFINE_CARD(CRiteofConsumptionCard);
		DEFINE_CARD(CRiverKelpieCard);
		DEFINE_CARD(CRoughshodMentorCard);
		DEFINE_CARD(CRuneCervinRiderCard);
		DEFINE_CARD(CRunedHaloCard);
		DEFINE_CARD(CRunesoftheDeusCard);
		DEFINE_CARD(CRustrazorButcherCard);
		DEFINE_CARD(CSafeholdDuoCard);
		DEFINE_CARD(CSafeholdEliteCard);
		DEFINE_CARD(CSafeholdSentryCard);
		DEFINE_CARD(CSafewrightQuestCard);
		DEFINE_CARD(CSapseepForestCard);
		DEFINE_CARD(CScarCard);
		DEFINE_CARD(CScarscaleRitualCard);
		DEFINE_CARD(CScuzzbackMaraudersCard);
		DEFINE_CARD(CScuzzbackScrapperCard);
		DEFINE_CARD(CScrapbasketCard);
		DEFINE_CARD(CScuttlemuttCard);
		DEFINE_CARD(CSeedcradleWitchCard);
		DEFINE_CARD(CShieldoftheOversoulCard);
		DEFINE_CARD(CSickleRipperCard);
		DEFINE_CARD(CSilkbindFaerieCard);
		DEFINE_CARD(CSinkingFeelingCard);
		DEFINE_CARD(CSlinkingGiantCard);
		DEFINE_CARD(CSmashToSmithereensCard);
		DEFINE_CARD(CSmolderInitiateCard);
		DEFINE_CARD(CSomnomancerCard);
		DEFINE_CARD(CSootstokeKindlerCard);
		DEFINE_CARD(CSootwalkersCard);
		DEFINE_CARD(CSpawnwritheCard);
		DEFINE_CARD(CSpectralProcessionCard);
		DEFINE_CARD(CSpellSyphonCard);
		DEFINE_CARD(CSpiteflameWitchCard);
		DEFINE_CARD(CSpitefulVisionsCard);
		DEFINE_CARD(CSplittingHeadacheCard);
		DEFINE_CARD(CSteeloftheGodheadCard);
		DEFINE_CARD(CStripBareCard);
		DEFINE_CARD(CSunkenRuinsCard);
		DEFINE_CARD(CSwansofBrynArgollCard);
		DEFINE_CARD(CSyggRiverCutthroatCard);
		DEFINE_CARD(CTatterkiteCard);
		DEFINE_CARD(CTattermungeDuoCard);
		DEFINE_CARD(CTattermungeManiacCard);
		DEFINE_CARD(CTattermungeWitchCard);
		DEFINE_CARD(CThistledownDuoCard);
		DEFINE_CARD(CThistledownLiegeCard);
		DEFINE_CARD(CThornwatchScarecrowCard);
		DEFINE_CARD(CThoughtweftGambitCard);
		DEFINE_CARD(CToilToRenownCard);
		DEFINE_CARD(CTorrentofSoulsCard);
		DEFINE_CARD(CTraitorsRoarCard);
		DEFINE_CARD(CTripNooseCard);
		DEFINE_CARD(CTurnToMistCard);
		DEFINE_CARD(CTwilightShepherdCard);
		DEFINE_CARD(CTyrannizeCard);
		DEFINE_CARD(CUmbralMantleCard);
		DEFINE_CARD(CVexingShusherCard);
		DEFINE_CARD(CViridescentWispsCard);
		DEFINE_CARD(CWanderbrineRootcuttersCard);
		DEFINE_CARD(CWaspLancerCard);
		DEFINE_CARD(CWatchwingScarecrowCard);
		DEFINE_CARD(CWhimwaderCard);
		DEFINE_CARD(CWickerWarcrawlerCard);
		DEFINE_CARD(CWildslayerElvesCard);
		DEFINE_CARD(CWildSwingCard);
		DEFINE_CARD(CWiltLeafCavaliersCard);
		DEFINE_CARD(CWiltLeafLiegeCard);
		DEFINE_CARD(CWindbriskRaptorCard);
		DEFINE_CARD(CWingrattleScarecrowCard);
		DEFINE_CARD(CWoeleecherCard);
		DEFINE_CARD(CWoodedBastionCard);
		DEFINE_CARD(CWoodfallPrimusCard);
		DEFINE_CARD(CWoundReflectionCard);
		DEFINE_CARD(CZealousGuardianCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CWiltLeafLiegeCard::CWiltLeafLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wilt-Leaf Liege"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
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
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
	void CWiltLeafLiegeCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Hand) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) && (moveType == MoveType::Discard ) && (pByPlayer == m_pGame->GetNextPlayer(GetController())))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Battlefield);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CBloodmarkMentorCard::CBloodmarkMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodmark Mentor"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Red, true),
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeapDollCard::CHeapDollCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heap Doll"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("1"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMassCalcifyCard::CMassCalcifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mass Calcify"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::White, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSmashToSmithereensCard::CSmashToSmithereensCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Smash to Smithereens"), CardType::Instant, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																  DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CApothecaryInitiateCard::CApothecaryInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apothecary Initiate"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
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

//____________________________________________________________________________
//
CBlisteringDieflynCard::CBlisteringDieflynCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blistering Dieflyn"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodshedFeverCard::CBloodshedFeverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Bloodshed Fever"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::MustAttack)
{
}

//____________________________________________________________________________
//
CBoggartArsonistsCard::CBoggartArsonistsCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Boggart Arsonists"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Plainswalk)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Scarecrow), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Plains, false)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCeruleanWispsCard::CCeruleanWispsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cerulean Wisps"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAphoticWispsCard::CAphoticWispsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aphotic Wisps"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Fear);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCrimsonWispsCard::CCrimsonWispsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crimson Wisps"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCrowdOfCindersCard::CCrowdOfCindersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crowd of Cinders"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddFear(FALSE);
	
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Black, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCursecatcherCard::CCursecatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cursecatcher"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepchannelMentorCard::CDeepchannelMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepchannel Mentor"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("5") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Blue, true),
			Power(+0), Life(+0), CreatureKeyword::Unblockable));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepSlumberTitanCard::CDeepSlumberTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deep-Slumber Titan"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();
	SetIntoPlayTapped();

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::CreatureEventCallback, 
							&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDramaticEntranceCard::CDramaticEntranceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dramatic Entrance"), CardType::Instant, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("green creatures")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpSpell->SetFromZoneId(ZoneId::Hand);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDroveOfElvesCard::CDroveOfElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drove of Elves"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCardKeyword()->AddHexproof(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Green, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaerieMacabreCard::CFaerieMacabreCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Macabre"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetSubjectCount(0, 2);
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaerieSwarmCard::CFaerieSwarmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Swarm"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("3") BLUE_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Blue, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFarhavenElfCard::CFarhavenElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Farhaven Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireLitThicketCard::CFireLitThicketCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Fire-Lit Thicket"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
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
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
		{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT));
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
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
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
CFoxfireOakCard::CFoxfireOakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foxfire Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(6))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(+3), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(+3), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(+3), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(+3), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGloomwidowCard::CGloomwidowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gloomwidow"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("flying creatures")));
}

//____________________________________________________________________________
//
CGutturalResponseCard::CGutturalResponseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Guttural Response"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new CardTypeComparer(CardType::Blue | CardType::Instant, true)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Blue | CardType::Instant, true)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHollowbornBarghestCard::CHollowbornBarghestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hollowborn Barghest"), CardType::Creature, CREATURE_TYPE2(Demon, Hound), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(6))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHollowbornBarghestCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHollowbornBarghestCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHollowbornBarghestCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHollowbornBarghestCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHollowbornBarghestCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

bool CHollowbornBarghestCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

bool CHollowbornBarghestCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() == 0;
}

bool CHollowbornBarghestCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CHollowsageCard::CHollowsageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hollowsage"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHordeOfBoggartsCard::CHordeOfBoggartsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horde of Boggarts"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Red, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHungrySprigganCard::CHungrySprigganCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hungry Spriggan"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIntimidatorInitiateCard::CIntimidatorInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Intimidator Initiate"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKinscaerHarpoonistCard::CKinscaerHarpoonistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kinscaer Harpoonist"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKithkinRabbleCard::CKithkinRabbleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Rabble"), CardType::Creature, CREATURE_TYPE(Kithkin), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::White, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKithkinShielddareCard::CKithkinShielddareCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Shielddare"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnollspineInvocationCard::CKnollspineInvocationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Knollspine Invocation"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
	// REVIEW!
	, m_CardFilter0(new ConvertedManaCostComparer<std::equal_to<int>>(0))
	, m_CardFilter1(new ConvertedManaCostComparer<std::equal_to<int>>(1))
	, m_CardFilter2(new ConvertedManaCostComparer<std::equal_to<int>>(2))
	, m_CardFilter3(new ConvertedManaCostComparer<std::equal_to<int>>(3))
	, m_CardFilter4(new ConvertedManaCostComparer<std::equal_to<int>>(4))
	, m_CardFilter5(new ConvertedManaCostComparer<std::equal_to<int>>(5))
	, m_CardFilter6(new ConvertedManaCostComparer<std::equal_to<int>>(6))
	, m_CardFilter7(new ConvertedManaCostComparer<std::equal_to<int>>(7))
	, m_CardFilter8(new ConvertedManaCostComparer<std::equal_to<int>>(8))
	, m_CardFilter9(new ConvertedManaCostComparer<std::equal_to<int>>(9))
	, m_CardFilter10(new ConvertedManaCostComparer<std::equal_to<int>>(10))
	, m_CardFilter11(new ConvertedManaCostComparer<std::equal_to<int>>(11))
	, m_CardFilter12(new ConvertedManaCostComparer<std::equal_to<int>>(12))
	, m_CardFilter14(new ConvertedManaCostComparer<std::equal_to<int>>(14))
	, m_CardFilter15(new ConvertedManaCostComparer<std::equal_to<int>>(15))
	, m_CardFilter16(new ConvertedManaCostComparer<std::equal_to<int>>(16))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""), 
				new AnyCreatureComparer, TRUE,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter0);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1"), 
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"), 
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter2);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("3"), 
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter3);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("4"), 
				new AnyCreatureComparer, TRUE,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter4);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("5"), 
				new AnyCreatureComparer, TRUE,
				Life(-5), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter5);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("6"), 
				new AnyCreatureComparer, TRUE,
				Life(-6), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter6);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("7"), 
				new AnyCreatureComparer, TRUE,
				Life(-7), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter7);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("8"), 
				new AnyCreatureComparer, TRUE,
				Life(-8), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter8);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("9"), 
				new AnyCreatureComparer, TRUE,
				Life(-9), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter9);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("10"), 
				new AnyCreatureComparer, TRUE,
				Life(-10), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter10);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("11"), 
				new AnyCreatureComparer, TRUE,
				Life(-11), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter11);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("12"), 
				new AnyCreatureComparer, TRUE,
				Life(-12), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter12);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("14"), 
				new AnyCreatureComparer, TRUE,
				Life(-14), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter14);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("15"), 
				new AnyCreatureComparer, TRUE,
				Life(-15), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter15);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("16"), 
				new AnyCreatureComparer, TRUE,
				Life(-16), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter16);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeechriddenSwampCard::CLeechriddenSwampCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Leechridden Swamp"), nID, CardType::NonbasicLand | CardType::Swamp)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				BLACK_MANA_TEXT, Life(-1),
				FALSE_CARD_COMPARER, TRUE,
				PreventableType::NotPreventable,
				DamageType::NotDealingDamage)); // life lost

		cpAbility->SetTargetOpponentPlayerOnly();
		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLeechriddenSwampCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CLeechriddenSwampCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 1)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLochKorriganCard::CLochKorriganCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loch Korrigan"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLUE_MANA_TEXT, Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CManamorphoseCard::CManamorphoseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Manamorphose"), CardType::Instant, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CManamorphoseCard::OnSelectionDone))
{
	{
		//hybrid mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				1));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManamorphoseCard::BeforeResolution));
		cpSpell->AddAbilityTag(AbilityTag::Mana);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				1));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManamorphoseCard::BeforeResolution));
		cpSpell->AddAbilityTag(AbilityTag::Mana);

		AddSpell(cpSpell.GetPointer());
	}
}

bool CManamorphoseCard::BeforeResolution(CAbilityAction* pAction)
{
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

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, this, pAction->GetController());
	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, this, pAction->GetController());

	return true;
}

void CManamorphoseCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CMistveilPlainsCard::CMistveilPlainsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mistveil Plains"), nID, CardType::NonbasicLand | CardType::Plains)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->SetCardPlacement(CardPlacement::Bottom);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMistveilPlainsCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CMistveilPlainsCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer()) > 1)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMoonringIslandCard::CMoonringIslandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Moonring Island"), nID, CardType::NonbasicLand | CardType::Island)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this, BLUE_MANA_TEXT, 1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMoonringIslandCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CMoonringIslandCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer()) > 1)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMysticGateCard::CMysticGateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mystic Gate"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT));
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, BLUE_MANA_TEXT));
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
CNiveousWispsCard::CNiveousWispsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Niveous Wisps"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNurturerInitiateCard::CNurturerInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nurturer Initiate"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CParapetWatchersCard::CParapetWatchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Parapet Watchers"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, WHITE_MANA_TEXT, Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLUE_MANA_TEXT, Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPollutedBondsCard::CPollutedBondsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Polluted Bonds"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyreChargerCard::CPyreChargerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pyre Charger"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(0))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CRakingCanopyCard::CRakingCanopyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Raking Canopy"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRakingCanopyCard::SetTriggerContext));

//	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CRakingCanopyCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
		if (CCardFilter::GetFilter(_T("flying creatures"))->IsCardIncluded(pCreature))
	return (pCreature->GetAttackedPlayer() == GetController()); //Does the creature attack defending player (and not a planeswalker)?

	return false;
}

//____________________________________________________________________________
//
CRevelsongHornCard::CRevelsongHornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Revelsong Horn"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRoughshodMentorCard::CRoughshodMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roughshod Mentor"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRuneCervinRiderCard::CRuneCervinRiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rune-Cervin Rider"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSafewrightQuestCard::CSafewrightQuestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Safewright Quest"), CardType::Sorcery, nID)

	, m_CardFilter(_T("a Forest or a Plains"), _T("Forests or Plains"), new CardTypeComparer(CardType::Forest | CardType::Plains, false))
{
	{
		//hybrid mana cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSapseepForestCard::CSapseepForestCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sapseep Forest"), nID, CardType::NonbasicLand | CardType::Forest)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				GREEN_MANA_TEXT,
				Life(+1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSapseepForestCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CSapseepForestCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer()) > 1)
		return true;

	return false;
}

//____________________________________________________________________________
//
CSmolderInitiateCard::CSmolderInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Smolder Initiate"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpawnwritheCard::CSpawnwritheCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spawnwrithe"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpawnwritheCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpawnwritheCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	return true;
}
//____________________________________________________________________________
//

CSunkenRuinsCard::CSunkenRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sunken Ruins"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));
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
		cpAbility->GetCost().AddManaCost(BLACK_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLUE_MANA_TEXT));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, BLACK_MANA_TEXT));
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
CToilToRenownCard::CToilToRenownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Toil to Renown"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));
	m_CardFilter.AddComparer(new TappedComparer);

	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT));

	cpSpell->SetCardsMultiplier(1, &m_CardFilter, ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTripNooseCard::CTripNooseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trip Noose"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2"),
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViridescentWispsCard::CViridescentWispsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Viridescent Wisps"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1)));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWhimwaderCard::CWhimwaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whimwader"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT, Power(6), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CWhimwaderCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CWhimwaderCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Blue).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CWoodedBastionCard::CWoodedBastionCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wooded Bastion"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(GREEN_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));
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
		cpAbility->GetCost().AddManaCost(WHITE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, WHITE_MANA_TEXT));
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
CDrownerInitiateCard::CDrownerInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drowner Initiate"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(2);

	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAshenmoorCohortCard::CAshenmoorCohortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashenmoor Cohort"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBallynockCohortCard::CBallynockCohortCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ballynock Cohort"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::White | CardType::Creature, true)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBriarberryCohortCard::CBriarberryCohortCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Briarberry Cohort"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrabappleCohortCard::CCrabappleCohortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crabapple Cohort"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMudbrawlerCohortCard::CMudbrawlerCohortCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Mudbrawler Cohort"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRageReflectionCard::CRageReflectionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rage Reflection"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTattermungeManiacCard::CTattermungeManiacCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tattermunge Maniac"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CTwilightShepherdCard::CTwilightShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Twilight Shepherd"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
	, m_PersistKeyword(this)
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardPresentinHistoryComparer(ZoneId::Graveyard, ZoneId::Battlefield));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAshenmoorGougerCard::CAshenmoorGougerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashenmoor Gouger"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarrentonCragtreadsCard::CBarrentonCragtreadsCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Barrenton Cragtreads"), CardType::Creature, CREATURE_TYPE2(Kithkin, Scout), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("non-red cards"))) //can't be blocked except by "this"
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBoartuskLiegeCard::CBoartuskLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boartusk Liege"), CardType::Creature, CREATURE_TYPE2(Goblin, Knight), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

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
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
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
}

//____________________________________________________________________________
//
CCultbrandCinderCard::CCultbrandCinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cultbrand Cinder"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElvishHexhunterCard::CElvishHexhunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Hexhunter"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmberstrikeDuoCard::CEmberstrikeDuoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Emberstrike Duo"), CardType::Creature, CREATURE_TYPE3(Elemental, Warrior, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
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
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFulminatorMageCard::CFulminatorMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fulminator Mage"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT));

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
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::NonbasicLand, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlenElendraLiegeCard::CGlenElendraLiegeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glen Elendra Liege"), CardType::Creature, CREATURE_TYPE2(Faerie, Knight), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

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
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGravelgillAxesharkCard::CGravelgillAxesharkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravelgill Axeshark"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
	, CPersistKeyword(this)
{
	//hybrid mana cost
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("4") BLACK_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGravelgillDuoCard::CGravelgillDuoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravelgill Duo"), CardType::Creature, CREATURE_TYPE3(Merfolk, Rogue, Warrior), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
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
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInkfathomInfiltratorCard::CInkfathomInfiltratorCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Inkfathom Infiltrator"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CLoamdraggerGiantCard::CLoamdraggerGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loamdragger Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(6))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CManaforgeCinderCard::CManaforgeCinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Manaforge Cinder"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
		//The following need to be fixed when hybrid mana is supported
	{
		//checks if it has CantBeCountered and SplitSecond, if not you can activate it
		//checks if it has Flash, if not you can activate it - adds DefenderMayAttack
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier);

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1)));
		cpAbility->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1A)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//checks if it has CantBeCountered and SplitSecond, if not you can activate it
		//checks if it has DefenderMayAttack, if not you can activate it - adds Flash
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1)));
		cpAbility->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1B)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//checks if it has DefenderMayAttack or Flash, if yes you can activate it
		//checks if it has SplitSecond, if not you can activate it - adds CantBeCountered
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
			pModifier2->GetModifier().SetToRemove(CreatureKeyword::DefenderMayAttack);
			pModifier2->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToRemove(CardKeyword::Flash);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier3);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay2A)));
		cpAbility->Add(cpTrait1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//checks if it has DefenderMayAttack or Flash, if yes you can activate it
		//checks if it has CantBeCountered, if not you can activate it - adds SplitSecond
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::SplitSecond);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
			pModifier2->GetModifier().SetToRemove(CreatureKeyword::DefenderMayAttack);
			pModifier2->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToRemove(CardKeyword::Flash);
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier3);

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay2)));
		cpAbility->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay2B)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//checks if it has CantBeCountered or SplitSecond, if yes you can activate it
		//checks if it has Flash, if not you can activate it - adds DefenderMayAttack
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1A)));
		cpAbility->Add(cpTrait.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay3)));
		cpAbility->Add(cpTrait1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//checks if it has CantBeCountered or SplitSecond, if yes you can activate it
		//checks if it has DefenderMayAttack, if not you can activate it - adds Flash
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));

		cpAbility->SetMaxTurnUsageCount(1);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay1B)));
		cpAbility->Add(cpTrait.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CManaforgeCinderCard::CanPlay3)));
		cpAbility->Add(cpTrait1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CManaforgeCinderCard::CanPlay1(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->CantBeCountered() == FALSE && GetCardKeyword()->HasSplitSecond() == FALSE);
}

BOOL CManaforgeCinderCard::CanPlay1A(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFlash() == FALSE);
}

BOOL CManaforgeCinderCard::CanPlay1B(BOOL bIncludeTricks)
{
	return (GetCreatureKeyword()->CanDefenderAttack() == FALSE);
}

BOOL CManaforgeCinderCard::CanPlay2(BOOL bIncludeTricks)
{
	return (GetCreatureKeyword()->CanDefenderAttack() == TRUE || GetCardKeyword()->HasFlash() == TRUE);
}

BOOL CManaforgeCinderCard::CanPlay2A(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasSplitSecond() == FALSE);
}

BOOL CManaforgeCinderCard::CanPlay2B(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->CantBeCountered() == FALSE);
}

BOOL CManaforgeCinderCard::CanPlay3(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->CantBeCountered() == TRUE || GetCardKeyword()->HasSplitSecond() == TRUE);
}

//____________________________________________________________________________
//
CMudbrawlerRaidersCard::CMudbrawlerRaidersCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Mudbrawler Raiders"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("non-blue cards"))) //can't be blocked except by "this"
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT GREEN_MANA_TEXT));

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
}

//____________________________________________________________________________
//
COldGhastbarkCard::COldGhastbarkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Old Ghastbark"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(6))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
COracleOfNectarsCard::COracleOfNectarsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oracle of Nectars"), CardType::Creature, CREATURE_TYPE2(Elf, Cleric), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
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
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(+1));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COversoulOfDuskCard::COversoulOfDuskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oversoul of Dusk"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CPlumeveilCard::CPlumeveilCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Plumeveil"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature ,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRavensRunDragoonCard::CRavensRunDragoonCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Raven's Run Dragoon"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("non-black cards"))) //can't be blocked except by "this"
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CResplendentMentorCard::CResplendentMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Resplendent Mentor"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::White | CardType::Creature, true),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CResplendentMentorCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CResplendentMentorCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pCard,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSafeholdDuoCard::CSafeholdDuoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Safehold Duo"), CardType::Creature, CREATURE_TYPE3(Elf, Warrior, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
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
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSafeholdEliteCard::CSafeholdEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Safehold Elite"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	//hybrid mana cost
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("1") WHITE_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CScuzzbackMaraudersCard::CScuzzbackMaraudersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scuzzback Marauders"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(5), Life(2))
	, CPersistKeyword(this)
{
	GetCreatureKeyword()->AddTrample(FALSE);

	//hybrid mana cost
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("4") GREEN_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSeedcradleWitchCard::CSeedcradleWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seedcradle Witch"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				Power(+3), Life(+3),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CSomnomancerCard::CSomnomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Somnomancer"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
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
CSootstokeKindlerCard::CSootstokeKindlerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Sootstoke Kindler"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
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
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable, 
				new CardTypeComparer(CardType::Black | CardType::Creature, true)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
			new CCardFilter(new CardTypeComparer(CardType::Red | CardType::Creature, true)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSootwalkersCard::CSootwalkersCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Sootwalkers"), CardType::Creature, CREATURE_TYPE2(Elemental, Rogue), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("non-white cards"))) //can't be blocked except by "this"
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CSpiteflameWitchCard::CSpiteflameWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiteflame Witch"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
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
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				Life(-1),	// life delta
				FALSE_CARD_COMPARER, TRUE, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->SetAbilityText(_T("Each player loses 1 life. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTattermungeDuoCard::CTattermungeDuoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tattermunge Duo"), CardType::Creature, CREATURE_TYPE3(Goblin, Warrior, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
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
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Forestwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThistledownDuoCard::CThistledownDuoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thistledown Duo"), CardType::Creature, CREATURE_TYPE3(Kithkin, Soldier, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
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
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThistledownLiegeCard::CThistledownLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thistledown Liege"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost with Flash
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
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
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWanderbrineRootcuttersCard::CWanderbrineRootcuttersCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Wanderbrine Rootcutters"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("non-green cards"))) //can't be blocked except by "this"
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT));

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
CWaspLancerCard::CWaspLancerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wasp Lancer"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CWiltLeafCavaliersCard::CWiltLeafCavaliersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wilt-Leaf Cavaliers"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

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
CWoodfallPrimusCard::CWoodfallPrimusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodfall Primus"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
	, CPersistKeyword(this)
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZealousGuardianCard::CZealousGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zealous Guardian"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	//hybrid mana cost with Flash
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature, //Flash
			BLUE_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CScrapbasketCard::CScrapbasketCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scrapbasket"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("4"), Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("1"),
			new SpecificCardComparer(this)));

	cpAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, TRUE, _T("all colors permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGnarledEffigyCard::CGnarledEffigyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gnarled Effigy"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("4"),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPowerOfFireCard::CPowerOfFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Power of Fire"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPowerOfFireCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPowerOfFireCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CPresenceOfGondCard::CPresenceOfGondCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Presence of Gond"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPresenceOfGondCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPresenceOfGondCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pEnchantedCard,
			_T(""),
			_T("Elf Warrior A"), 2756,
			1));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpitefulVisionsCard::CSpitefulVisionsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spiteful Visions"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));
        
        AddSpell(cpSpell.GetPointer());
    }
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReknitCard::CReknitCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reknit"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetRegenerationSpell> cpSpell(
			::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				new TrueCardComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetRegenerationSpell> cpSpell(
			::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new TrueCardComparer));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CScarCard::CScarCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Scar"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	{
		//hybrid mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThoughtweftGambitCard::CThoughtweftGambitCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughtweft Gambit"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAffectOpponentCardsOnly();

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
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPoisonTheWellCard::CPoisonTheWellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Poison the Well"), CardType::Sorcery, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
													   DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
													   DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
													   DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpectralProcessionCard::CSpectralProcessionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spectral Procession"), CardType::Sorcery, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("6"),
				_T("Spirit D"), 2752,
				3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT,
				_T("Spirit D"), 2752,
				3));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Spirit D"), 2752,
				3));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Spirit D"), 2752,
				3));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSplittingHeadacheCard::CSplittingHeadacheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Splitting Headache"), CardType::Sorcery, nID)
{
	{
		//Target player discards two cards.
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target player reveals his or her hand, you choose a card from it, then that player discards that card.
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlameJavelinCard::CFlameJavelinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flame Javelin"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("6"),
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CReaperKingCard::CReaperKingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reaper King"), CardType::_LegendaryCreature | CardType::Artifact, CREATURE_TYPE(Scarecrow), nID,
		_T("10"), Power(6), Life(6))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("8") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("8") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("8") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("8") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("8") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				ALL_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Scarecrow), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Scarecrow), false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDemigodOfRevengeCard::CDemigodOfRevengeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Demigod of Revenge"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Demigod of Revenge")));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMurderousRedcapCard::CMurderousRedcapCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Murderous Redcap"), CardType::Creature, CREATURE_TYPE2(Goblin, Assassin), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT));

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
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	    cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMurderousRedcapCard::BeforeResolution));
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMurderousRedcapCard::BeforeResolution(CMurderousRedcapCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nPower = GET_INTEGER(GetLastKnownPower());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nPower));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAuguryAdeptCard::CAuguryAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Augury Adept"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT));

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
		 counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAuguryAdeptCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAuguryAdeptCard::BeforeResolution));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAuguryAdeptCard::SetTriggerContext1));
		
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAuguryAdeptCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0;
}

bool CAuguryAdeptCard::SetTriggerContext1(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

bool CAuguryAdeptCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											 CPlayer* pByPlayer, Damage damage) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(+nCost));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);

	return true;
}
//  Other implementation of Augury Adept
/*	{
		typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	    counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	    cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Hand);
//		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAuguryAdeptCard::BeforeResolution));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CAuguryAdeptCard::BeforeResolution(CAuguryAdeptCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	m_pTriggeredAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+nCost), this, PreventableType::NotPreventable));

	return true;
}*/
//____________________________________________________________________________
//
CGhastlordofFugueCard::CGhastlordofFugueCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Ghastlord of Fugue"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))   
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
		BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

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
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGhastlordofFugueCard::SetTriggerContext));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetDiscardCount(1);
		cpAbility->SetDiscardMoveType(MoveType::Others);
		cpAbility->SetToZone(ZoneId::Exile);
		cpAbility->SetPickerIsTriggeredPlayer(false);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGhastlordofFugueCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const
{
	triggerContext.m_pPicker = GetController();
	return true;
}

//____________________________________________________________________________
//
CTattermungeWitchCard::CTattermungeWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tattermunge Witch"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
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
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				new BlockedCreatureComparer,
				Power(+1), Life(+0), CreatureKeyword::Trample));

		cpAbility->SetToActivatedAbility();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
//
CDireUndercurrentsCard::CDireUndercurrentsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dire Undercurrents"), CardType::GlobalEnchantment, nID, 
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetDrawCount(1);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetDiscardCount(1);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

/*//____________________________________________________________________________
//
CDeusofCalamityCard::CDeusofCalamityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deus of Calamity"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
				CWhenSelfDamageDealt::PlayerEventCallback, 
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeusofCalamityCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeusofCalamityCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																		Damage damage) const
{
	return ( (GET_INTEGER(-damage.m_nLifeDelta))>=6);
}
*/
//____________________________________________________________________________
//
CBarrentonMedicCard::CBarrentonMedicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barrenton Medic"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

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
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), +1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChainbreakerCard::CChainbreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chainbreaker"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("2"), Power(3), Life(3))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3"),
				new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), -1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrimPoppetCard::CGrimPoppetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grim Poppet"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("7"), Power(4), Life(4))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));
		
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorselhoarderCard::CMorselhoarderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Morselhoarder"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCinderhazeWretchCard::CCinderhazeWretchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cinderhaze Wretch"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T(""),
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->AddTapCost();
		cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), +1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDevotedDruidCard::CDevotedDruidCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Devoted Druid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(2),
		GREEN_MANA_TEXT)
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), +1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPunctureBoltCard::CPunctureBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Puncture Bolt"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer, FALSE,	
		Life(-1), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));
}

//____________________________________________________________________________
//
CWoeleecherCard::CWoeleecherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woeleecher"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), -1));
	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWoeleecherCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWoeleecherCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();

	int nCounterCount = target->GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();

	CLifeModifier pModifier = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (nCounterCount > 0) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CDeusofCalamityCard::CDeusofCalamityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deus of Calamity"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

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
	{
		typedef 
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								 CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeusofCalamityCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeusofCalamityCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																		Damage damage) const
{
return (damage.m_nLifeDelta<=Life(-6));
}

//____________________________________________________________________________
//
CBoggartRamGangCard::CBoggartRamGangCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Boggart Ram-Gang"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))

	//, m_cpEventListener(VAR_NAME(m_cpListener), DamageDealEventSource::Listener::EventCallback(this,
		//		&CBoggartRamGangCard::DamageDealEventSource))
{
	//GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	//Wither
	//this->GetDealDamageEventSource()->AddListener(m_cpEventListener.GetPointer());
	GetCardKeyword()->AddWither(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

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

/*void CBoggartRamGangCard::DamageDealEventSource(CCard* pCard, CPlayer* pPlayer, CCreatureCard* pCreature, CPlaneswalkerCard* pWalker, Damage damage)
{
	int counter = -GET_INTEGER(damage.m_nLifeDelta);	
	Damage Antidamage;

	if (!pCreature==NULL)
	{
		Antidamage.m_nLifeDelta=-damage.m_nLifeDelta;
		CCardCounterModifier pModifier = CCardCounterModifier(_T("-1/-1"), +counter);
		pModifier.SetDoubling(false);
		pModifier.ApplyTo(pCreature);

		pCreature->ChangeLife(Antidamage, false);
	}
}
*/
//____________________________________________________________________________
//
CCinderbonesCard::CCinderbonesCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Cinderbones"), CardType::Creature, CREATURE_TYPE2(Elemental, Skeleton), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CJuvenileGloomwidowCard::CJuvenileGloomwidowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juvenile Gloomwidow"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CMidnightBansheeCard::CMidnightBansheeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Midnight Banshee"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COonasGatewardenCard::COonasGatewardenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oona's Gatewarden"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddWither(FALSE);

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
CRustrazorButcherCard::CRustrazorButcherCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Rustrazor Butcher"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CScuzzbackScrapperCard::CScuzzbackScrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scuzzback Scrapper"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSickleRipperCard::CSickleRipperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sickle Ripper"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CSlinkingGiantCard::CSlinkingGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slinking Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Rogue), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWildslayerElvesCard::CWildslayerElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wildslayer Elves"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddWither(FALSE);
}

//____________________________________________________________________________
//
CCounterboreCard::CCounterboreCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Counterbore"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCounterboreCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CCounterboreCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CLockjawSnapperCard::CLockjawSnapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lockjaw Snapper"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("4"), Power(2), Life(2))
{
	GetCardKeyword()->AddWither(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("-1/-1"), 1));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPuppeteerCliqueCard::CPuppeteerCliqueCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Puppeteer Clique"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
	, CPersistKeyword(this)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPuppeteerCliqueCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

void CPuppeteerCliqueCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target= pAbilityAction->GetAssociatedCard();
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	pOppInplay->RemoveCard(target); pInplay->AddCard(target);
	
	CScheduledCardModifier pModifier1 = CScheduledCardModifier(GetGame(), new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
		TurnNumberDelta(-1),
		NodeId::EndStep,
		true, // in-play only
		CScheduledCardModifier::Operation::ApplyToLater,
		CScheduledCardModifier::DeltaOption::CustomPlayerTurn,
		GetController());
	
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	
	pModifier1.ApplyTo(target);
	if (target->GetCardType().IsCreature()) 
	{	CCreatureCard* pCreature = (CCreatureCard*)target;
		pModifier2->ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CKnollspineDragonCard::CKnollspineDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Knollspine Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(5))	
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKnollspineDragonCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(FALSE_CARD_COMPARER);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();			

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
		
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetAbilityName(_T("discard your hand and draw cards equal to the damage dealt to target opponent this turn"));
	cpAbility->SetAbilityText(_T("discard your hand and draw cards equal to the damage dealt to target opponent this turn"));
		
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CKnollspineDragonCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nDamage = GET_INTEGER(pAbilityAction->GetAssociatedPlayer()->GetDamageTakenThisTurn());

	CZoneCardModifier modifier1(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
	CDrawCardModifier modifier2(GetGame(), MinimumValue(nDamage), MaximumValue(nDamage));
	
	modifier1.ApplyTo(pAbilityAction->GetController());
	modifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CHeartmenderCard::CHeartmenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heartmender"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
	, CPersistKeyword(this)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);		
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), -1, false)); // add one counter

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT));

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
}

//____________________________________________________________________________
//
CFirespoutCard::CFirespoutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Firespout"), CardType::Sorcery, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFirespoutCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT)); 

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFirespoutCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CFirespoutCard::BeforeResolution(CAbilityAction* pAction) const
{
	bool bRed = GetLastCastingManaCost().GetMana(CManaPool::Color::Red) > 0;
	bool bGreen = GetLastCastingManaCost().GetMana(CManaPool::Color::Green) > 0;

	CLifeModifier modifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
				if (pCreature)
				{
					if (bRed && !pCreature->GetCreatureKeyword()->Flying()) modifier.ApplyTo(pCreature);
					if (bGreen && pCreature->GetCreatureKeyword()->Flying()) modifier.ApplyTo(pCreature);
				}
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//
CMistmeadowWitchCard::CMistmeadowWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mistmeadow Witch"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
    , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMistmeadowWitchCard::OnResolutionCompleted))
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
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	/*	CScheduledCardModifier* pModifier1 = new CScheduledCardModifier(GetGame(), new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others),
			TurnNumberDelta(0),
			NodeId::EndStep,
			false, // in-play only
			CScheduledCardModifier::Operation::ApplyToLater);*/

		//cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());

		m_CardFlagModifier.GetModifier().SetOneTurnOnly(true);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
	}
}

void CMistmeadowWitchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier.GetModifier().GetAdditionData());
	
	m_CardFilter.AddComparer(pComparer);

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others)));

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame() , pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);

	pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CFossilFindCard::CFossilFindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fossil Find"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CReorderZoneSpell> cpSpell(
			::CreateObject<CReorderZoneSpell>(this, AbilityType:: Sorcery,
				RED_MANA_TEXT,
				ZoneId::Graveyard));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFossilFindCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CReorderZoneSpell> cpSpell(
			::CreateObject<CReorderZoneSpell>(this, AbilityType:: Sorcery,
				GREEN_MANA_TEXT,
				ZoneId::Graveyard));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFossilFindCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CFossilFindCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (!pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize()) return false;

	CCountedCardContainer cards = pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer();
	cards.Shuffle(pAction->GetController());

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true);
	modifier.ApplyTo(cards.GetAt(0));

	return true;
}

//____________________________________________________________________________
//
CImpromptuRaidCard::CImpromptuRaidCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Impromptu Raid"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2") RED_MANA_TEXT,
				0));
		ATLASSERT(cpAbility);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImpromptuRaidCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				0));
		ATLASSERT(cpAbility);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImpromptuRaidCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CImpromptuRaidCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetController()->GetZoneById(ZoneId::Library)->GetSize()>0)

	{
		CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();	
		CZoneModifier pmodifier_con =CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pmodifier_con.ApplyTo(GetController());

		if (pNextDraw->GetCardType().IsCreature())

		{
			CScheduledCardModifier sacrifice = CScheduledCardModifier(GetGame(),
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater);

			CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
			pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pmodifierUp->GetModifier().SetOneTurnOnly(TRUE);
				
			CZoneModifier pmodifier_con1 = CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pmodifier_con1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // what cards
				ZoneId::Battlefield, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Bottom, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
			pmodifier_con1.ApplyTo(GetController());

			sacrifice.ApplyTo(pNextDraw);
			pmodifierUp->ApplyTo((CCreatureCard*) pNextDraw);
		}

		else {
			CZoneModifier pmodifier_con1 = CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pmodifier_con1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // what cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
			pmodifier_con1.ApplyTo(GetController());
		}
	}

	return true;
}

//____________________________________________________________________________
//
CSyggRiverCutthroatCard::CSyggRiverCutthroatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sygg, River Cutthroat"), CardType::_LegendaryCreature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSyggRiverCutthroatCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSyggRiverCutthroatCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->GetNextPlayer(GetController())->GetTotalLifeLossTakenThisTurn() >= Life(3);
}

//____________________________________________________________________________
//
CWoundReflectionCard::CWoundReflectionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wound Reflection"), CardType::GlobalEnchantment, nID,
		_T("5") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredAbility<  CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);		
	
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWoundReflectionCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CWoundReflectionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-pAction->GetTriggeredPlayer()->GetTotalLifeLossTakenThisTurn());
	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CVexingShusherCard::CVexingShusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vexing Shusher"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new TrueCardComparer, FALSE));		

		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);
		
		CCardKeywordModifier* pmodifier = new CCardKeywordModifier;
		pmodifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		pmodifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pmodifier);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				GREEN_MANA_TEXT,
				new TrueCardComparer, FALSE));		

		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);
		
		CCardKeywordModifier* pmodifier = new CCardKeywordModifier;
		pmodifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		pmodifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(pmodifier);		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRunedHaloCard::CRunedHaloCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Runed Halo"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetPlayerEffect(PlayerEffectType::Protection, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerrowGrimeblotterCard::CMerrowGrimeblotterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merrow Grimeblotter"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				Power(-2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				Power(-2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerrowWavebreakersCard::CMerrowWavebreakersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Merrow Wavebreakers"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->AddUntapCost();
}

//____________________________________________________________________________
//
COrderOfWhiteclayCard::COrderOfWhiteclayCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of Whiteclay"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddUntapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPuresightMerrowCard::CPuresightMerrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Puresight Merrow"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				WHITE_MANA_TEXT,
				1));

		cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Exile, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);
		cpAbility->SetRevealCardsToOthers(
			TRUE,	// reveal cards to others
			TRUE);	// reveal only selected cards

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				BLUE_MANA_TEXT,
				1));

		cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Exile, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);
		cpAbility->SetRevealCardsToOthers(
			TRUE,	// reveal cards to others
			TRUE);	// reveal only selected cards

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSafeholdSentryCard::CSafeholdSentryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Safehold Sentry"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2),
		_T("2") WHITE_MANA_TEXT, Power(+0), Life(+2), CreatureKeyword::Null)
{
	m_pPumpAbility->AddUntapCost();
}

//____________________________________________________________________________
//
CSilkbindFaerieCard::CSilkbindFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silkbind Faerie"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
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
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPiliPalaCard::CPiliPalaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pili-Pala"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("2"), Power(1), Life(1))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddUntapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUmbralMantleCard::CUmbralMantleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Umbral Mantle"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("0")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CUmbralMantleCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CUmbralMantleCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpEquipAbility(
		::CreateObject<CPumpAbility>(pCard,
			_T("3"),
			Power(+2), Life(+2), CreatureKeyword::Null));

	cpEquipAbility->AddUntapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
COonaQueenoftheFaeCard::COonaQueenoftheFaeCard(CGame* pGame, UINT nID)
: CFlyingCreatureCard(pGame, _T("Oona, Queen of the Fae"), CardType::_LegendaryCreature, CREATURE_TYPE2(Faerie, Wizard), nID,
	_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<COonaQueenoftheFaeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<COonaQueenoftheFaeSpell>>(this,
			BLUE_MANA_TEXT, 0));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		
		cpAbility->SetReorder(TRUE, ZoneId::Exile);	

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(+1));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<COonaQueenoftheFaeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<COonaQueenoftheFaeSpell>>(this,
			BLACK_MANA_TEXT, 0));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		
		cpAbility->SetReorder(TRUE, ZoneId::Exile);	

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(+1));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());	
	}
}
//____________________________________________________________________________
//
CRiverKelpieCard::CRiverKelpieCard(CGame* pGame, UINT nID)
: CCreatureCard(pGame, _T("River Kelpie"), CardType::Creature, CREATURE_TYPE(Beast), nID,
	_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
	, m_PersistKeyword(this)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Stack));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTurnToMistCard::CTurnToMistCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Turn to Mist"), CardType::Instant, nID)
    , m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTurnToMistCard::OnResolutionCompleted1))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CTurnToMistCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	//CCardFilter m_CardFilter_temp;
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
CBeseechtheQueenCard::CBeseechtheQueenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beseech the Queen"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a card with converted mana cost less than or equal to the number of lands you control"), _T("cards with converted mana cost less than or equal to the number of lands you control"), new TrueCardComparer)
{
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("6"),
				&m_CardFilter, ZoneId::Hand, TRUE, TRUE, FALSE));
		
		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeseechtheQueenCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter, ZoneId::Hand, TRUE, TRUE, FALSE));
		
		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeseechtheQueenCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				&m_CardFilter, ZoneId::Hand, TRUE, TRUE, FALSE));
		
		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeseechtheQueenCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter, ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeseechtheQueenCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CBeseechtheQueenCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	int nLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer());
	m_CardFilter.SetComparer(new ConvertedManaCostComparer<std::less_equal<int>>(nLands));

	return true;
}

//____________________________________________________________________________
//
CScuttlemuttCard::CScuttlemuttCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scuttlemutt"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(2), Life(2))
{
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
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T(""),
				new AnyCreatureComparer));
		
		cpAbility->AddTapCost();

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
CRiteofConsumptionCard::CRiteofConsumptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rite of Consumption"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CRiteofConsumptionCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CRiteofConsumptionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer = pAbilityAction->GetAssociatedPlayer();
	Life previousLife = pPlayer->GetLife();

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetSacrificeCards()->GetAt(0));
	if (!pCreature) return;
	Life sac_power = Life(GET_INTEGER(pCreature->GetLastKnownPower()));

	CLifeModifier modifier1 = CLifeModifier(-sac_power, this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	modifier1.ApplyTo(pPlayer);
		
	Life life_delta = previousLife - pPlayer->GetLife();
	if (life_delta < Life(0)) return;
		
	CLifeModifier modifier2 = CLifeModifier(life_delta, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CScarscaleRitualCard::CScarscaleRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scarscale Ritual"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT, 2));

		cpSpell->GetCost().AddAnyCardCounterCost(_T("-1/-1"), +1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT, 2));

		cpSpell->GetCost().AddAnyCardCounterCost(_T("-1/-1"), +1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWickerWarcrawlerCard::CWickerWarcrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wicker Warcrawler"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("5"), Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(
		new CScheduledCardModifier(pGame, new CCardCounterModifier(_T("-1/-1"), +1),
		TurnNumberDelta(-1),
		NodeId::EndOfCombatStep, 
		true, // in-play only
		CScheduledCardModifier::Operation::ApplyToLater));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGodheadOfAweCard::CGodheadOfAweCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Godhead of Awe"), CardType::Creature, CREATURE_TYPE2(Spirit, Avatar), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

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
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDreamSalvageCard::CDreamSalvageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream Salvage"), CardType::Instant, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT, 0));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDreamSalvageCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT, 0));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDreamSalvageCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CDreamSalvageCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = m_pGame->GetNextPlayer(GetController())->GetTurnDiscardCount();

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = n;

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CHelmoftheGhastlordCard::CHelmoftheGhastlordCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Helm of the Ghastlord"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("3") BLUE_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Blue, 
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Black
				));

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CHelmoftheGhastlordCard::CreateAdditionalAbility1));


		CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CHelmoftheGhastlordCard::CreateAdditionalAbility3));
		

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);

		cpSpell->GetCardKeywordMod1().LinkCardModifier(pModifier2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CHelmoftheGhastlordCard::CreateAdditionalAbility1(CCard* pCard)
{	
		typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CHelmoftheGhastlordCard::CreateAdditionalAbility3(CCard* pCard)
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
CRunesoftheDeusCard::CRunesoftheDeusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Runes of the Deus"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("4") RED_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::DoubleStrike, CardType::Red, 
				Power(+1), Life(+1), CreatureKeyword::Trample, CardType::Green
				));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
	counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CShieldoftheOversoulCard::CShieldoftheOversoulCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shield of the Oversoul"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("2") GREEN_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Green, 
				Power(+1), Life(+1), CreatureKeyword::Flying, CardType::White
				));
	
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CSteeloftheGodheadCard::CSteeloftheGodheadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Steel of the Godhead"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("2") BLUE_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Unblockable, CardType::Blue,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::White
				));
		
		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::Lifelink);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpSpell->GetCardKeywordMod1().LinkCardModifier(pModifier2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE));				

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWindbriskRaptorCard::CWindbriskRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windbrisk Raptor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(7))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AttackingCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMercyKillingCard::CMercyKillingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mercy Killing"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,					
				_T("2") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				false));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercyKillingCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,					
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				false));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercyKillingCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CMercyKillingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	CPlayer* controller = target->GetController();

	target->Move(controller->GetZoneById(ZoneId::Graveyard), controller, MoveType::Sacrifice);

	if (target->GetCardType().IsCreature())
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(target);
		if (pCreature)
		{
			int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

			CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elf Warrior B"), 2870, nPower);
			pModifier.ApplyTo(controller);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CSwansofBrynArgollCard::CSwansofBrynArgollCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Swans of Bryn Argoll"), CardType::Creature, CREATURE_TYPE2(Bird, Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddReplacedDamage(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT WHITE_MANA_TEXT));

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
			TTriggeredAbility< CTriggeredDrawCardAbility, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSwansofBrynArgollCard::SetTriggerContext));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CSwansofBrynArgollCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);

	if (damage.m_pSourceCard->GetController() == GetController()) 
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	else
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return (effect_index==0);
}
//____________________________________________________________________________
//
CMadblindMountainCard::CMadblindMountainCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Madblind Mountain"), nID, CardType::NonbasicLand | CardType::Mountain)
{
	SetIntoPlayTapped();
	
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				RED_MANA_TEXT,
				Life(+0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Shuffle your library. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMadblindMountainCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMadblindMountainCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMadblindMountainCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer()) > 1)
		return true;

	return false;
}

bool CMadblindMountainCard::BeforeResolution(CAbilityAction* pAction) const
{
	GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CAshenmoorLiegeCard::CAshenmoorLiegeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashenmoor Liege"), CardType::Creature, CREATURE_TYPE2(Elemental, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

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
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshenmoorLiegeCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAshenmoorLiegeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	return (byPlayer == m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CEverlastingTormentCard::CEverlastingTormentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Everlasting Torment"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("2") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::WitherDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPreventDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantGainLife));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFistsoftheDemigodCard::CFistsoftheDemigodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fists of the Demigod"), CardType::EnchantCreature, nID)	
{	
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("1") BLACK_MANA_TEXT,
				Power(+1), Life(+1), CreatureKeyword::Null, CardType::Black, 
				Power(+1), Life(+1), CreatureKeyword::FirstStrike, CardType::Red
				));
	
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE));			

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCorrosiveMentorCard::CCorrosiveMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corrosive Mentor"), CardType::Creature, CREATURE_TYPE2(Elemental, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlazethornScarecrowCard::CBlazethornScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blazethorn Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("5"), Power(3), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true));
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
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThornwatchScarecrowCard::CThornwatchScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornwatch Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("6"), Power(4), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Wither);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlightSickleCard::CBlightSickleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blight Sickle"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Wither);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWatchwingScarecrowCard::CWatchwingScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Watchwing Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("4"), Power(2), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
		{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDuskUrchinsCard::CDuskUrchinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dusk Urchins"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("2") BLACK_MANA_TEXT, Power(4), Life(3))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::EventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{ 
		typedef 
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required); 
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuskUrchinsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDuskUrchinsCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	int nCount = GetLastKnownm11Counters();

	triggerContext.nValue1 = nCount; 

	return true;
}

//____________________________________________________________________________
//
CPrismaticOmenCard::CPrismaticOmenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prismatic Omen"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				CardType::Plains | CardType::Island | CardType::Swamp | CardType::Mountain | CardType::Forest, CardType::Null));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPrismaticOmenCard::CreateAbility1)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPrismaticOmenCard::CreateAbility2)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPrismaticOmenCard::CreateAbility3)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPrismaticOmenCard::CreateAbility4)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPrismaticOmenCard::CreateAbility5)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPrismaticOmenCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, WHITE_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CPrismaticOmenCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLUE_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CPrismaticOmenCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLACK_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CPrismaticOmenCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, RED_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CPrismaticOmenCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, GREEN_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CPaintersServantCard::CPaintersServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Painter's Servant"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("2"), Power(1), Life(3))
	, m_Choice(CardType::Null)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CPaintersServantCard::OnSelectionDone))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPaintersServantCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPaintersServantCard::BeforeResolveSelection));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}	
}

counted_ptr<CAbility> CPaintersServantCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment2> cpAbility(
		::CreateObject<CCardTypeEnchantment2>(pCard,
			new TrueCardComparer,
			m_Choice, CardType::Null));
		
	cpAbility->SetAbilityName(_T("Painter's Servant Addition"));	
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Battlefield | ZoneId::Exile | ZoneId::Library | ZoneId::Hand | ZoneId::Graveyard | ZoneId::Stack | ZoneId::_Effects | ZoneId::_ExileFaceDown);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CPaintersServantCard::BeforeResolveSelection(CPaintersServantCard::TriggeredAbility::TriggeredActionType* pAction)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry entry;
		entry.dwContext = 1;
		entry.strText.Format(_T("choose %s"), _T("blue"));
		entries.push_back(entry);
	}
	{
		SelectionEntry entry;
		entry.dwContext = 2;
		entry.strText.Format(_T("choose %s"), _T("black"));
		entries.push_back(entry);
	}
	{
		SelectionEntry entry;
		entry.dwContext = 3;
		entry.strText.Format(_T("choose %s"), _T("red"));
		entries.push_back(entry);
	}
	{
		SelectionEntry entry;
		entry.dwContext = 4;
		entry.strText.Format(_T("choose %s"), _T("green"));
		entries.push_back(entry);
	}
	{
		SelectionEntry entry;
		entry.dwContext = 5;
		entry.strText.Format(_T("choose %s"), _T("white"));
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, NULL, GetController());

	return true;
}

void CPaintersServantCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CCard* pCard = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1) m_Choice = CardType::Blue; else
			 if (nSelectedIndex == 2) m_Choice = CardType::Black; else
			  if (nSelectedIndex == 3) m_Choice = CardType::Red; else
			   if (nSelectedIndex == 4) m_Choice = CardType::Green; else
			    m_Choice = CardType::White;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CPaintersServantCard::CreateAdditionAbility));

			pModifier.ApplyTo(this);

			for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
			{
				CCardTypeEnchantment2* pEnchantSpell = dynamic_cast<CCardTypeEnchantment2*>(GetAbilities().GetAt(i).GetPointer());
				if (!pEnchantSpell) 
					continue;

				pEnchantSpell->StartEnchantment();
			}

			break;
		}
}

void CPaintersServantCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{	

	CCardAbilityModifier pModifier = CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPaintersServantCard::CreateAdditionAbility));

	for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
	{
		CCardTypeEnchantment2* pEnchantSpell = dynamic_cast<CCardTypeEnchantment2*>(GetAbilities().GetAt(i).GetPointer());
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->EndEnchantment();
		}
	}

	pModifier.RemoveFrom(this);
	//m_Choice = CardType::Null;
	}		
}

//____________________________________________________________________________
//
CRhystheRedeemedCard::CRhystheRedeemedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhys the Redeemed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf,Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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
			counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			_T("Elf Warrior (B)"), 2870,
			1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			_T("Elf Warrior (B)"), 2870,
			1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRhystheRedeemedAbility> cpAbility(
			::CreateObject<CRhystheRedeemedAbility>(this, _T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();	

		AddAbility(cpAbility.GetPointer());
	}	
	{
		counted_ptr<CRhystheRedeemedAbility> cpAbility(
			::CreateObject<CRhystheRedeemedAbility>(this, _T("4") WHITE_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRhystheRedeemedAbility> cpAbility(
			::CreateObject<CRhystheRedeemedAbility>(this, _T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();	

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAdviceFromTheFaeCard::CAdviceFromTheFaeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Advice from the Fae"), CardType::Sorcery, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("6"),
				5));

		cpSpell->SetReorder(true, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAdviceFromTheFaeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				5));

		cpSpell->SetReorder(true, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAdviceFromTheFaeCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				5));

		cpSpell->SetReorder(true, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAdviceFromTheFaeCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				5));

		cpSpell->SetReorder(true, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAdviceFromTheFaeCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CAdviceFromTheFaeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nToSelect = 1;

	int nCreatures, maxCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) == pAction->GetController()) continue;
		nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
		if (nCreatures > maxCreatures) maxCreatures = nCreatures;
	}

	nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	if (nCreatures > maxCreatures) nToSelect = 2;

	CRevealLibraryCardSpell* pSpell = static_cast<CRevealLibraryCardSpell*>(pAction->GetAbility());
	pSpell->SetSelectionOptions(MinimumValue(nToSelect), MaximumValue(nToSelect),
		ZoneId::Hand, CardPlacement::Top, NULL);

	return true;
}

//____________________________________________________________________________
//
CKitchenFinksCard::CKitchenFinksCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitchen Finks"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
	, CPersistKeyword(this)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEnchantedEveningCard::CEnchantedEveningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Enchanted Evening"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
        
        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new TrueCardComparer,
				Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetOtherCardModifiers().Add(new CCardTypeModifier(CardType::GlobalEnchantment, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBurnTrailCard::CBurnTrailCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burn Trail"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBurnTrailCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBurnTrailCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBurnTrailCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true; // <== crashes are here
	return false;
}

bool CBurnTrailCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CBurnTrailCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CBurnTrailCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStripBareCard::CStripBareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strip Bare"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			false));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStripBareCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CStripBareCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EnchantedOnComparer(pCard));
	cfilter.AddChildFilter(new CCardFilter(new EquippedOnComparer(pCard)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CAEthertowCard::CAEthertowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Æthertow"), CardType::Instant, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAEthertowCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEthertowCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAEthertowCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CAEthertowCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CAEthertowCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CAEthertowCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarkshellBlessingCard::CBarkshellBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Barkshell Blessing"), CardType::Instant, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBarkshellBlessingCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBarkshellBlessingCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBarkshellBlessingCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CBarkshellBlessingCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CBarkshellBlessingCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CBarkshellBlessingCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDisturbingPlotCard::CDisturbingPlotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disturbing Plot"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard,
				ZoneId::Hand,
				true, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard,
				ZoneId::Hand,
				true, MoveType::Others));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDisturbingPlotCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDisturbingPlotCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDisturbingPlotCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CDisturbingPlotCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CDisturbingPlotCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CDisturbingPlotCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhastlyDiscoveryCard::CGhastlyDiscoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghastly Discovery"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGhastlyDiscoveryCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGhastlyDiscoveryCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGhastlyDiscoveryCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CGhastlyDiscoveryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CGhastlyDiscoveryCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CGhastlyDiscoveryCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGleefulSabotageCard::CGleefulSabotageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gleeful Sabotage"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Conspire cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGleefulSabotageCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGleefulSabotageCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGleefulSabotageCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CGleefulSabotageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CGleefulSabotageCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CGleefulSabotageCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMemorySluiceCard::CMemorySluiceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Memory Sluice"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
		{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMemorySluiceCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMemorySluiceCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMemorySluiceCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CMemorySluiceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CMemorySluiceCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CMemorySluiceCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMineExcavationCard::CMineExcavationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mine Excavation"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Graveyard,
				ZoneId::Hand,
				true, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Graveyard,
				ZoneId::Hand,
				true, MoveType::Others));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMineExcavationCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMineExcavationCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMineExcavationCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CMineExcavationCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CMineExcavationCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CMineExcavationCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTraitorsRoarCard::CTraitorsRoarCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Traitor's Roar"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTraitorsRoarCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTraitorsRoarCard::BeforeResolution1));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
		{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTraitorsRoarCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTraitorsRoarCard::BeforeResolution1));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTraitorsRoarCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTraitorsRoarCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTraitorsRoarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CTraitorsRoarCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CTraitorsRoarCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CTraitorsRoarCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CTraitorsRoarCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetAssociatedCard());
	if (!pCreature) return false;

	CLifeModifier* pModifier = new CLifeModifier(Life(-GET_INTEGER(pCreature->GetPower())), pCreature, PreventableType::Preventable, DamageType::NonCombatDamage);
	pModifier->ApplyTo(pCreature->GetController());

	return true;
}

//____________________________________________________________________________
//
CGiantbaitingCard::CGiantbaitingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Giantbaiting"), CardType::Sorcery, nID)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(this));

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantbaitingCard::BeforeResolutionMain));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantbaitingCard::BeforeResolutionMain));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantbaitingCard::BeforeResolutionMain));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddTapCardCost(2, &m_CardFilter);
		cpSpell->SetAbilityName(_T("Conspire"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantbaitingCard::BeforeResolutionMain));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGiantbaitingCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiantbaitingCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGiantbaitingCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	if (m_pGame->GetStack().GetTopAction()->GetAbility()->GetAbilityName() == _T("Conspire") ) return true;
	return false;
}

bool CGiantbaitingCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CGiantbaitingCard::CreateAbility)); 

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo((CCard*)this);

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CGiantbaitingCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetTriggerIndex(1); // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CGiantbaitingCard::BeforeResolutionMain(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Giant Warrior A"), 2940, 1, false, ZoneId::Battlefield, &pTokens);
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
CFracturingGustCard::CFracturingGustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fracturing Gust"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFracturingGustCard::OnResolutionCompleted))
	, m_CardFilter(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false))
{
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false)),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturingGustCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false)),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturingGustCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false)),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturingGustCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false)),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturingGustCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

bool CFracturingGustCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;
	m_nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CFracturingGustCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pInplay;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	}

	CLifeModifier* pModifier = new CLifeModifier(Life(2 * m_nCards), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBitingTetherCard::CBitingTetherCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Biting Tether"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("4") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifySingleCard);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBitingTetherCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("-1/-1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBitingTetherCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

//____________________________________________________________________________
//
CBlowflyInfestationCard::CBlowflyInfestationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blowfly Infestation"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlowflyInfestationCard::SetTriggerContext));
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CBlowflyInfestationCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return pCard->GetLastKnownm11Counters() > 0;
}

//____________________________________________________________________________
//
CWildSwingCard::CWildSwingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wild Swing"), CardType::Sorcery, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Sorcery,
		new NegateCardComparer(new CardTypeComparer(CardType::_Enchantment, false)),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(3, 3);
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWildSwingCard::BeforeResolution));
}

bool CWildSwingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	BOOL bTrick;
	CCountedCardContainer cards;
	pTargetAction->GetTargetGroup().GetCardSubjects(cards);

	// Remove invalid targets
	for (int ic = cards.GetSize() - 1; ic >= 0; --ic)
		if (!m_pTargetMoveCardSpell->GetTargeting()->TargetAllowed(cards.GetAt(ic), true, bTrick))
			cards.RemoveAt(ic);

	if (!cards.GetSize()) return false;

	CCard* pCard = cards.GetAt(pAction->GetController()->GetRand() % cards.GetSize());

	ContextValue context(pTargetAction->GetTargetGroup().GetValue(pCard));
	pTargetAction->GetTargetGroup().RemoveAll();
	pTargetAction->GetTargetGroup().AddSubject(pCard, context);

	return true;
}

//____________________________________________________________________________
//
CCauldronOfSoulsCard::CCauldronOfSoulsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cauldron of Souls"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

	cpAbility->AddTapCost();

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CCauldronOfSoulsCard::CreateAdditionalAbility));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CCauldronOfSoulsCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCauldronOfSoulsCard::SetTriggerContextP1));
	cpAbility->SetAbilityName(_T("Persist ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CCauldronOfSoulsCard::SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownm11Counters() == 0;
}

//____________________________________________________________________________
//
CRattleblazeScarecrowCard::CRattleblazeScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rattleblaze Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("6"), Power(5), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRattleblazeScarecrowCard::SetTriggerContextP1));

		cpAbility->SetAbilityName(_T("Persist ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRattleblazeScarecrowCard::SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("black creatures"))->CountIncluded(pInplay->GetCardContainer()) > 0 && GetLastKnownm11Counters()==0);
}

//____________________________________________________________________________
//
CWingrattleScarecrowCard::CWingrattleScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wingrattle Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWingrattleScarecrowCard::SetTriggerContextP1));

		cpAbility->SetAbilityName(_T("Persist ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWingrattleScarecrowCard::SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("black creatures"))->CountIncluded(pInplay->GetCardContainer()) > 0 && GetLastKnownm11Counters()==0);
}

//____________________________________________________________________________
//
CKulrathKnightCard::CKulrathKnightCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kulrath Knight"), CardType::Creature, CREATURE_TYPE2(Elemental, Knight), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{

	GetCardKeyword()->AddWither(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardAnyCountersComparer(),	
			Power(+0), Life(+0), CreatureKeyword::CantAttack));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardAnyCountersComparer(),	
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDinoftheFireherdCard::CDinoftheFireherdCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Din of the Fireherd"), CardType::Sorcery, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDinoftheFireherdCard::OnResolutionCompleted))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
			
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elemental L"), 2949, 1));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
			
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elemental L"), 2949, 1));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT));
			
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elemental L"), 2949, 1));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
			
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elemental L"), 2949, 1));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddSpell(cpSpell.GetPointer());
	}
}
void CDinoftheFireherdCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		int black_creatures = CCardFilter::GetFilter(_T("black creatures"))->CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
		int red_creatures = CCardFilter::GetFilter(_T("red creatures"))->CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	
		CPlayer* target =  pAbilityAction->GetAssociatedPlayer();
		CZone* Battle = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);

		CZoneModifier pModifier2 = CZoneModifier(GetGame(),
			ZoneId::Battlefield, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.AddSelection(MinimumValue(black_creatures), MaximumValue(black_creatures), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("creatures")), // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Sacrifice, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));
				
		if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(Battle->GetCardContainer()) > black_creatures)  pModifier2.ApplyTo(target);
		else pModifier3.ApplyTo(target);

		CZoneModifier pModifier2r = CZoneModifier(GetGame(),
			ZoneId::Battlefield, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.AddSelection(MinimumValue(red_creatures), MaximumValue(red_creatures), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("lands")), // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Sacrifice, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneCardModifier pModifier3r = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));
				
		if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(Battle->GetCardContainer()) > red_creatures)  pModifier2r.ApplyTo(target);
		else pModifier3r.ApplyTo(target);

	}

}
//____________________________________________________________________________
//
CTorrentofSoulsCard::CTorrentofSoulsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Torrent of Souls"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTorrentofSoulsCard::OnResolutionCompleted))
{
	{
	counted_ptr<CTorrentofSoulsSpell> cpSpell(
		::CreateObject <CTorrentofSoulsSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}

	{
	counted_ptr<CTorrentofSoulsSpell> cpSpell(
		::CreateObject <CTorrentofSoulsSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
	{
		
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT));
			
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	

		AddSpell(cpSpell.GetPointer());
	}
	{
		
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT));
			
	
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	

		AddSpell(cpSpell.GetPointer());
	}
/*	{
		
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT));
			
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);			
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		CZoneCreatureModifier* pModifier3r = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+2), FALSE)));
		CZoneCreatureModifier* pModifier4r = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier));


		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier3r);
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier4r);
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	

		AddSpell(cpSpell.GetPointer());
	}*/
}

CTorrentofSoulsCard::CTorrentofSoulsSpell::CTorrentofSoulsSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		FALSE_CARD_COMPARER, true,
		_T(""))
{
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);

}

void CTorrentofSoulsCard::CTorrentofSoulsSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	int RedColorCount = m_pCard->GetLastCastingManaCost().GetMana(CManaPool::Color::Red);
	int BlackColorCount = m_pCard->GetLastCastingManaCost().GetMana(CManaPool::Color::Black);

	if (pContainer1.GetSize() && BlackColorCount)
	{
		CCard* pCard1 = dynamic_cast<CCard*>(pContainer1.GetAt(0));

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, m_pCard->GetController());
		pModifier1.ApplyTo(pCard1);
	}

	if (pPContainer2.GetSize() && RedColorCount)
	{
		CPlayer* pPlayer1 = dynamic_cast<CPlayer*>(pPContainer2.GetAt(0));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);			
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		CZoneCreatureModifier pModifier3r = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+2), TRUE)));
		CZoneCreatureModifier pModifier4r = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier));

		pModifier3r.ApplyTo(pPlayer1);
		pModifier4r.ApplyTo(pPlayer1);
	}
}
void CTorrentofSoulsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult && GetLastCastingManaCost().GetMana(CManaPool::Color::Red))
	{
	
		CPlayer* target =  pAbilityAction->GetAssociatedPlayer();
		
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);			
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		CZoneCreatureModifier pModifier3r = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+2), TRUE)));
		CZoneCreatureModifier pModifier4r = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier));

		pModifier3r.ApplyTo(target);
		pModifier4r.ApplyTo(target);

	}

}
//____________________________________________________________________________
//
CEmberGaleCard::CEmberGaleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ember Gale"), CardType::Sorcery, nID)
	, m_CardFilter(new CardTypeComparer(CardType::Blue | CardType::White, false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer());

	{
		
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT));
			
		
		CZoneCreatureModifier* pModifier4r = new CZoneCreatureModifier(ZoneId::Battlefield,& m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::UnblockableCreatures);	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

		pmodifier->LinkPlayerModifier(pModifier2);

		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),pmodifier));
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier4r);
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CGloomwidowsFeastCard::CGloomwidowsFeastCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Gloomwidow's Feast"), CardType::Instant, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGloomwidowsFeastCard::OnResolutionCompleted))
		, m_pLife(0)
{	
		m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGloomwidowsFeastCard::BeforeResolution));
		m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying,false));
}
bool CGloomwidowsFeastCard::BeforeResolution(CAbilityAction* pAction)
{
	m_pLife = 0;

	if (pAction->GetAssociatedCard() && pAction->GetAssociatedCard()->GetCardType().IsCreature())
	{
		CCreatureCard* pCard = (CCreatureCard*)pAction->GetAssociatedCard();
		if ((pCard->GetCardType() & CardType::Black).Any() || (pCard->GetCardType() & CardType::Blue).Any())
			m_pLife = 1;

		return true;
	}

	else

	return false;
}
void CGloomwidowsFeastCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult && m_pLife)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spider B"), 2931, 1);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}
//____________________________________________________________________________
//
CFateTransferCard::CFateTransferCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fate Transfer"), CardType::Instant, nID)
{
	{
	counted_ptr<CFateTransferSpell> cpSpell(
		::CreateObject <CFateTransferSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CFateTransferSpell> cpSpell(
		::CreateObject <CFateTransferSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CFateTransferCard::CFateTransferSpell::CFateTransferSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
}

void CFateTransferCard::CFateTransferSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CAllCounterMoveModifier modifier = CAllCounterMoveModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
	
}

//____________________________________________________________________________
//
CGloomlanceCard::CGloomlanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gloomlance"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGloomlanceCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGloomlanceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	bool pDiscard = pTarget->IsColor(CManaPoolBase::Color::Green) || pTarget->IsColor(CManaPoolBase::Color::White);

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, GetController());
	pModifier1.ApplyTo(pTarget);

	if (pDiscard)
	{
		CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	
		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Discard, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier2.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CBoonReflectionCard::CBoonReflectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boon Reflection"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("4") WHITE_MANA_TEXT,
			PlayerEffectType::MultiplyLifeGain, 1));

	cpEnchantment->SetMultipleEffectType(TRUE);
	cpEnchantment->SetAffectControllerOnly();

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CIslebackSpawnCard::CIslebackSpawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Isleback Spawn"), CardType::Creature, CREATURE_TYPE(Kraken), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(8))
{
	GetCardKeyword()->AddShroud(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+4), Life(+8)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Library);
	cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckEachPlayer);
	cpAbility->SetConditionValue(20);
	cpAbility->SetConditionIsMaximum();
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMemoryPlunderCard::CMemoryPlunderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Memory Plunder"), CardType::Instant, nID)
{
	{
	counted_ptr<CTargetFreeCastSpell> cpSpell(
		::CreateObject<CTargetFreeCastSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Graveyard));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CTargetFreeCastSpell> cpSpell(
		::CreateObject<CTargetFreeCastSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Graveyard));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CTargetFreeCastSpell> cpSpell(
		::CreateObject<CTargetFreeCastSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Graveyard));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CTargetFreeCastSpell> cpSpell(
		::CreateObject<CTargetFreeCastSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Graveyard));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CTargetFreeCastSpell> cpSpell(
		::CreateObject<CTargetFreeCastSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Graveyard));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPaleWayfarerCard::CPaleWayfarerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pale Wayfarer"), CardType::Creature, CREATURE_TYPE2(Spirit, Giant), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CPaleWayfarerCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->AddUntapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPaleWayfarerCard::BeforeResolution));	
	AddAbility(cpAbility.GetPointer());
}

bool CPaleWayfarerCard::BeforeResolution(CAbilityAction* pAction)
{
	int i = 0;
	CPlayer* pSelector = pAction->GetAssociatedCard()->GetController();

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
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelector,(DWORD)pAction->GetAssociatedCard(), i);
	return true;
}

void CPaleWayfarerCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	CCard* pTarget = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier(CardKeyword::ProtectionFromWhite, true, true);
				pModifier->ApplyTo(pTarget);
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier(CardKeyword::ProtectionFromBlue, true, true);
				pModifier->ApplyTo(pTarget);
				return;
			}
			
			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier(CardKeyword::ProtectionFromBlack, true, true);
				pModifier->ApplyTo(pTarget);
				return;
			}
			
			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier(CardKeyword::ProtectionFromRed, true, true);
				pModifier->ApplyTo(pTarget);
				return;
			}
			
			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier(CardKeyword::ProtectionFromGreen, true, true);
				pModifier->ApplyTo(pTarget);
				return;
			}
		}
	
}
//____________________________________________________________________________
//
CTatterkiteCard::CTatterkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tatterkite"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(2), Life(1))
{
	GetCardKeyword()->AddCantGetCounters(FALSE);
}

//____________________________________________________________________________
//
CInquisitorsSnareCard::CInquisitorsSnareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inquisitor's Snare"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CInquisitorsSnareCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AttackingBlockingCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CInquisitorsSnareCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	
	bool pDestroy = pTarget->IsColor(CManaPoolBase::Color::Black) || pTarget->IsColor(CManaPoolBase::Color::Red);

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage, true, true);
	pModifier1.ApplyTo(pTarget);

	if (pDestroy)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, GetController());
		pModifier2.ApplyTo(pTarget);
	}
}

//____________________________________________________________________________
//
CTyrannizeCard::CTyrannizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tyrannize"), CardType::Sorcery, nID)
		, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTyrannizeCard::OnPunisherSelected))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));
			
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTyrannizeCard::BeforeResolution));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT));
			
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTyrannizeCard::BeforeResolution));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT));
			
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTyrannizeCard::BeforeResolution));
		
		AddSpell(cpSpell.GetPointer());
	}
}

bool CTyrannizeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pPlayer = pAction->GetAssociatedPlayer();
	
	if (pPlayer->GetLife() >= 7 && !pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't pay life"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Pay 7 life"));

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
	}
	else
	{
		int nSize = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.AddSelection(MinimumValue(nSize), MaximumValue(nSize), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("cards")), // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Discard, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		pModifier.ApplyTo(pPlayer);
	}
	return true;
}

void CTyrannizeCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				int nSize = pSelectionPlayer->GetZoneById(ZoneId::Hand)->GetSize();

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(nSize), MaximumValue(nSize), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					CCardFilter::GetFilter(_T("cards")), // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays 7 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-7), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CFurystokeGiantCard::CFurystokeGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Furystoke Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
	, CPersistKeyword(this)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFurystokeGiantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CFurystokeGiantCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE, 
			Life(-2),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CFurystokeGiantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CFurystokeGiantCard::CreateAbility));
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(GetGame(),
			pModifier1,
			TurnNumberDelta(-1),
			NodeId::CleanupStep2,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater);


	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature() && pCard != this)
			pModifier2->ApplyTo(pCard);
	}

	return true;
}

//____________________________________________________________________________
//
CGriefTyrantCard::CGriefTyrantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grief Tyrant"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("5") BLACK_MANA_TEXT, Power(8), Life(8))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGriefTyrantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGriefTyrantCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounters = GetLastKnownm11Counters();

	CCardCounterModifier pModifier = CCardCounterModifier(_T("-1/-1"), +nCounters);
	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CMedicineRunnerCard::CMedicineRunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Medicine Runner"), CardType::Creature, CREATURE_TYPE2(Elf, Cleric), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
	, m_CounterSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMedicineRunnerCard::OnCounterSelected))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
	typedef
		TTriggeredTargetAbility< CTriggeredGainKeywordAbility , CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMedicineRunnerCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMedicineRunnerCard::BeforeResolution(CAbilityAction* pAction)
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

void CMedicineRunnerCard::OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CPlagueOfVerminCard::CPlagueOfVerminCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plague of Vermin"), CardType::Sorcery, nID)
	, m_ControllerSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPlagueOfVerminCard::OnControllerSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPlagueOfVerminCard::OnOpponentSelected))
	, PassNumber(0)
	, ControllerPaid(0)
	, OpponentPaid(0)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("6") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlagueOfVerminCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPlagueOfVerminCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pOpponent = GetGame()->GetNextPlayer(pController);

	PassNumber = 0;
	ControllerPaid = 0;
	OpponentPaid = 0;

	ProcessController(pController, pOpponent);

	return true;
}

void CPlagueOfVerminCard::ProcessController(CPlayer* pController, CPlayer* pOpponent)
{
	if (PassNumber >= 2)
		Finale(pController, pOpponent);
	else
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Pay 0 life"));

			entries.push_back(selectionEntry);
		}
		if ((pController->GetLife() > 0) && !pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			int n = GET_INTEGER(pController->GetLife());

			for (int i = 1; i <= n; ++i)
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = i;
				selectionEntry.strText.Format(_T("Pay %d life"), i);

				entries.push_back(selectionEntry);
			}
		}
		m_ControllerSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pOpponent);
	}
}

void CPlagueOfVerminCard::ProcessOpponent(CPlayer* pController, CPlayer* pOpponent)
{
	if (PassNumber >= 2)
		Finale(pController, pOpponent);
	else
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Pay 0 life"));

			entries.push_back(selectionEntry);
		}
		if ((pOpponent->GetLife() > 0) && !pOpponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			int n = GET_INTEGER(pController->GetLife());

			for (int i = 1; i <= n; ++i)
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = i;
				selectionEntry.strText.Format(_T("Pay %d life"), i);

				entries.push_back(selectionEntry);
			}
		}
		m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pOpponent, (DWORD)pController);
	}
}

void CPlagueOfVerminCard::Finale(CPlayer* pController, CPlayer* pOpponent)
{
	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Rat A"), 2745, ControllerPaid);
	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Rat A"), 2745, OpponentPaid);

	pModifier1.ApplyTo(pController);
	pModifier2.ApplyTo(pOpponent);
}

void CPlagueOfVerminCard::OnControllerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nValue = it->dwContext;
			CPlayer* pTarget = (CPlayer*)dwContext1;

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
			if (nValue == 0)
			{
				PassNumber += 1;
			}
			else
			{
				PassNumber = 0;
				CLifeModifier pModifier1 = CLifeModifier(Life(-nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier1.ApplyTo(pSelectionPlayer);
				ControllerPaid += nValue;
			}

			ProcessOpponent(pSelectionPlayer, (CPlayer*)dwContext1);

			return;
		}
}

void CPlagueOfVerminCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nValue = it->dwContext;
			CPlayer* pTarget = (CPlayer*)dwContext1;

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
			if (nValue == 0)
			{
				PassNumber += 1;
			}
			else
			{
				PassNumber = 0;
				CLifeModifier pModifier1 = CLifeModifier(Life(-nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier1.ApplyTo(pSelectionPlayer);
				OpponentPaid += nValue;
			}

			ProcessController((CPlayer*)dwContext1, pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CElementalMasteryCard::CElementalMasteryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elemental Mastery"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CElementalMasteryCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CElementalMasteryCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pEnchantedCard,
			_T("")));

	cpEnchantAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElementalMasteryCard::BeforeResolution));
	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

bool CElementalMasteryCard::BeforeResolution(CAbilityAction* pAction)
{
	int nValue = GET_INTEGER(((CCreatureCard*)GetEnchantedOn())->GetLastKnownPower());

	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental P"), 2919, nValue, false, ZoneId::Battlefield, &pTokens);
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
CCurseOfChainsCard::CCurseOfChainsCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Curse of Chains"), CardType::EnchantCreature, nID,
	_T("1") WHITE_MANA_TEXT, new AnyCreatureComparer)
{
	{
		//hybrid mana cost
		counted_ptr<CEnchant> cpSpell(
			::CreateObject<CEnchant>(this,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		pEnchantSpell2 = cpSpell.GetPointer();

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCurseOfChainsCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCurseOfChainsCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();

	if (!pCard) 
		pCard = pEnchantSpell2->GetEnchantedOnCard();

	if (!pCard) return false;

	triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CSinkingFeelingCard::CSinkingFeelingCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sinking Feeling"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Null)
{
	m_CardFilter.AddComparer(new EnchantedByComparer(this));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSinkingFeelingCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSinkingFeelingCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(pCard,
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddAnyCardCounterCost(_T("-1/-1"), +1, 1, &m_CardFilter);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpellSyphonCard::CSpellSyphonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spell Syphon"), CardType::Instant, nID)
{
	{
		counted_ptr<CSpellSyphonAbility> cpSpell(
		::CreateObject<CSpellSyphonAbility>(this, _T("1") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}

CSpellSyphonCard::CSpellSyphonAbility::CSpellSyphonAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CSpellSyphonCard::CSpellSyphonAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	CZone* pBattlefield = GetCard()->GetController()->GetZoneById(ZoneId::Battlefield);
	int nBlue = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pBattlefield->GetCardContainer());
		
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, nBlue);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CFlourishingDefensesCard::CFlourishingDefensesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flourishing Defenses"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlourishingDefensesCard::SetTriggerContextAux1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlourishingDefensesCard::SetTriggerContextAux2));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(COUNTER_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetCreateTokenOption(TRUE, _T("Elf Warrior A"), 2756, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CFlourishingDefensesCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	if (!pCard->GetCardType().IsCreature()) return false;

	int nValue = pCard->GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
	if (nValue > 0)
	{
		CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, COUNTER_TRIGGER_ID);

		for (int i = 1; i <= nValue; ++i)
			pModifier.ApplyTo(this);
	}

	return false;
}

bool CFlourishingDefensesCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (!pFromCard->GetCardType().IsCreature()) return false;
	if (!pFromCard->IsInplay()) return false;
	if ((CString)name != _T("-1/-1")) return false;
	if (n_value <= old) return false;

	CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, COUNTER_TRIGGER_ID);

	for (int i = 1; i <= n_value - old; ++i)
		pModifier.ApplyTo(this);
	
	return false;
}

//____________________________________________________________________________
//