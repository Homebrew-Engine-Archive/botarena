#include "stdafx.h"
#include "CardSix.h"

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

		DEFINE_CARD(CAbductionCard);
		DEFINE_CARD(CAbyssalHunterCard);
		DEFINE_CARD(CAEtherFlashCard);
		DEFINE_CARD(CAgonizingMemoriesCard);
		DEFINE_CARD(CAnabaBodyguardCard);
		DEFINE_CARD(CAnabaShamanCard);
		DEFINE_CARD(CAncestralMemoriesCard);
		DEFINE_CARD(CArchangelCard);
		DEFINE_CARD(CArdentMilitiaCard);
		DEFINE_CARD(CArmoredPegasusCard);
		DEFINE_CARD(CAshenPowderCard);
		DEFINE_CARD(CBalduvianBarbariansCard);
		DEFINE_CARD(CBalduvianHordeCard);
		DEFINE_CARD(CBlazeCard);
		DEFINE_CARD(CBlightedShamanCard);
		DEFINE_CARD(CBloodPetCard);
		DEFINE_CARD(CBoilCard);
		DEFINE_CARD(CBrowseCard);
		DEFINE_CARD(CCallOfTheWildCard);
		DEFINE_CARD(CCharcoalDiamondCard);
		DEFINE_CARD(CChillCard);
		DEFINE_CARD(CCoercionCard);
		DEFINE_CARD(CCreepingMoldCard);
		DEFINE_CARD(CCrimsonHellkiteCard);
		DEFINE_CARD(CCrystalVeinCard);
		DEFINE_CARD(CCursedTotemCard);
		DEFINE_CARD(CDarajaGriffinCard);
		DEFINE_CARD(CDaringApprenticeCard);
		DEFINE_CARD(CDenseFoliageCard);
		DEFINE_CARD(CDesertionCard);
		DEFINE_CARD(CDiminishingReturnsCard);
		DEFINE_CARD(CDoomsdayCard);
		DEFINE_CARD(CDragonMaskCard);
		DEFINE_CARD(CDreadOfNightCard);
		DEFINE_CARD(CDreamCacheCard);
		DEFINE_CARD(CDrySpellCard);
		DEFINE_CARD(CEarlyHarvestCard);
		DEFINE_CARD(CEkunduGriffinCard);
		DEFINE_CARD(CElvenCacheCard);
		DEFINE_CARD(CEnfeeblementCard);
		DEFINE_CARD(CEnlightenedTutorCard);
		DEFINE_CARD(CEtherealChampionCard);
		DEFINE_CARD(CExileCard);
		DEFINE_CARD(CFallowEarthCard);
		DEFINE_CARD(CFamiliarGroundCard);
		DEFINE_CARD(CFatalBlowCard);
		DEFINE_CARD(CFeastOfTheUnicornCard);
		DEFINE_CARD(CFemerefArchersCard);
		DEFINE_CARD(CFeralShadowCard);
		DEFINE_CARD(CFervorCard);
		DEFINE_CARD(CFinalFortuneCard);
		DEFINE_CARD(CFireDiamondCard);
		DEFINE_CARD(CFitOfRageCard);
		DEFINE_CARD(CFlashCard);
		DEFINE_CARD(CFogElementalCard);
		DEFINE_CARD(CFyndhornBrownieCard);
		DEFINE_CARD(CGoblinEliteInfantryCard);
		DEFINE_CARD(CGoblinRecruiterCard);
		DEFINE_CARD(CGorillaChieftainCard);
		DEFINE_CARD(CGravebaneZombieCard);
		DEFINE_CARD(CGravediggerCard);
		DEFINE_CARD(CHammerOfBogardanCard);
		DEFINE_CARD(CHarmattanEfreetCard);
		DEFINE_CARD(CHeavyBallistaCard);
		DEFINE_CARD(CHerosResolveCard);
		DEFINE_CARD(CHiddenHorrorCard);
		DEFINE_CARD(CHornedTurtleCard);
		DEFINE_CARD(CHulkingCyclopsCard);
		DEFINE_CARD(CInfantryVeteranCard);
		DEFINE_CARD(CInfernalContractCard);
		DEFINE_CARD(CInsightCard);
		DEFINE_CARD(CInspirationCard);
		DEFINE_CARD(CLeadGolemCard);
		DEFINE_CARD(CLightningBlastCard);
		DEFINE_CARD(CLightOfDayCard);
		DEFINE_CARD(CLongbowArcherCard);
		DEFINE_CARD(CManaPrismCard);
		DEFINE_CARD(CMarbleDiamondCard);
		DEFINE_CARD(CMaroCard);
		DEFINE_CARD(CMischievousPoltergeistCard);
		DEFINE_CARD(CMossDiamondCard);
		DEFINE_CARD(CMysticalTutorCard);
		DEFINE_CARD(CMysticCompassCard);
		DEFINE_CARD(CNaturesResurgenceCard);
		DEFINE_CARD(CNecrosavantCard);
		DEFINE_CARD(CPacifismCard);
		DEFINE_CARD(CPainfulMemoriesCard);
		DEFINE_CARD(CPantherWarriorsCard);
		DEFINE_CARD(CPatagiaGolemCard);
		DEFINE_CARD(CPearlDragonCard);
		DEFINE_CARD(CPerishCard);
		DEFINE_CARD(CPhantomWarriorCard);
		DEFINE_CARD(CPhyrexianVaultCard);
		DEFINE_CARD(CPillageCard);
		DEFINE_CARD(CPolymorphCard);
		DEFINE_CARD(CProsperityCard);
		DEFINE_CARD(CPsychicTransferCard);
		DEFINE_CARD(CPythonCard);
		DEFINE_CARD(CRagingGoblinCard);
		DEFINE_CARD(CRampantGrowthCard);
		DEFINE_CARD(CRazortoothRatsCard);
		DEFINE_CARD(CRecklessEmbermageCard);
		DEFINE_CARD(CRedwoodTreefolkCard);
		DEFINE_CARD(CRegalUnicornCard);
		DEFINE_CARD(CRelearnCard);
		DEFINE_CARD(CRelentlessAssaultCard);
		DEFINE_CARD(CRemedyCard);
		DEFINE_CARD(CReprisalCard);
		DEFINE_CARD(CResistanceFighterCard);
		DEFINE_CARD(CRiverBoaCard);
		DEFINE_CARD(CRowenCard);
		DEFINE_CARD(CSageOwlCard);
		DEFINE_CARD(CSeaMonsterCard);
		DEFINE_CARD(CSerenityCard);
		DEFINE_CARD(CSerrasBlessingCard);
		DEFINE_CARD(CShockCard);
		DEFINE_CARD(CSkyDiamondCard);
		DEFINE_CARD(CSnakeBasketCard);
		DEFINE_CARD(CSoldeviSageCard);
		DEFINE_CARD(CSpittingDrakeCard);
		DEFINE_CARD(CSpittingEarthCard);
		DEFINE_CARD(CStalkingTigerCard);
		DEFINE_CARD(CStandingTroopsCard);
		DEFINE_CARD(CStaunchDefendersCard);
		DEFINE_CARD(CStormCauldronCard);
		DEFINE_CARD(CStormCrowCard);
		DEFINE_CARD(CStrandsOfNightCard);
		DEFINE_CARD(CStuporCard);
		DEFINE_CARD(CSummerBloomCard);
		DEFINE_CARD(CSunwebCard);
		DEFINE_CARD(CSyphonSoulCard);
		DEFINE_CARD(CTalruumMinotaurCard);
		DEFINE_CARD(CTariffCard);
		DEFINE_CARD(CTeferisPuzzleBoxCard);
		DEFINE_CARD(CTidalSurgeCard);
		DEFINE_CARD(CTrainedArmodonCard);
		DEFINE_CARD(CTranquilGroveCard);
		DEFINE_CARD(CTremorCard);
		DEFINE_CARD(CUktabiOrangutanCard);
		DEFINE_CARD(CUktabiWildcatsCard);
		DEFINE_CARD(CUnseenWalkerCard);
		DEFINE_CARD(CUnyaroGriffinCard);
		DEFINE_CARD(CVampiricTutorCard);
		DEFINE_CARD(CVenerableMonkCard);
		DEFINE_CARD(CVertigoCard);
		DEFINE_CARD(CViashinoWarriorCard);
		DEFINE_CARD(CVitalizeCard);
		DEFINE_CARD(CVolcanicDragonCard);
		DEFINE_CARD(CVolcanicGeyserCard);
		DEFINE_CARD(CWaitingInTheWeedsCard);
		DEFINE_CARD(CWandOfDenialCard);
		DEFINE_CARD(CWarmthCard);
		DEFINE_CARD(CWarriorsHonorCard);
		DEFINE_CARD(CWarthogCard);
		DEFINE_CARD(CWindDrakeCard);
		DEFINE_CARD(CWorldlyTutorCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CLightningBlastCard::CLightningBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lightning Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CStormCrowCard::CStormCrowCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Storm Crow"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CAnabaBodyguardCard::CAnabaBodyguardCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Anaba Bodyguard"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CWindDrakeCard::CWindDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wind Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CPhantomWarriorCard::CPhantomWarriorCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Phantom Warrior"), CardType::Creature, CREATURE_TYPE2(Illusion, Warrior), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CVenerableMonkCard::CVenerableMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venerable Monk"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornedTurtleCard::CHornedTurtleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horned Turtle"), CardType::Creature, CREATURE_TYPE(Turtle), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CPantherWarriorsCard::CPantherWarriorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Panther Warriors"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(6), Life(3))
{
}

//____________________________________________________________________________
//
CTrainedArmodonCard::CTrainedArmodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Armodon"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CManaPrismCard::CManaPrismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Prism"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());

	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlazeCard::CBlazeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Blaze"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CCreepingMoldCard::CCreepingMoldCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Creeping Mold"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CTremorCard::CTremorCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Tremor"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		Life(-1),	// life delta
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CWarriorsHonorCard::CWarriorsHonorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Warrior's Honor"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCallOfTheWildCard::CCallOfTheWildCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Call of the Wild"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE, FALSE);
	cpAbility->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Battlefield, CardPlacement::NotApplicable, 
		CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);
	//cpAbility->SetRevealedCardsTo(new AnyCreatureComparer,
		//ZoneId::Battlefield, MoveType::Others, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArdentMilitiaCard::CArdentMilitiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ardent Militia"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBloodPetCard::CBloodPetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Pet"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			BLACK_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRampantGrowthCard::CRampantGrowthCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Rampant Growth"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CHiddenHorrorCard::CHiddenHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hidden Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFitOfRageCard::CFitOfRageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fit of Rage"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			Power(+3), Life(+3), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMischievousPoltergeistCard::CMischievousPoltergeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mischievous Poltergeist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("")));

	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravebaneZombieCard::CGravebaneZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravebane Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
}

void CGravebaneZombieCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Library);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CHerosResolveCard::CHerosResolveCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Hero's Resolve"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+5))
{
}

//____________________________________________________________________________
//
CEnfeeblementCard::CEnfeeblementCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Enfeeblement"), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(-2), Life(-2))
{
}

//____________________________________________________________________________
//
CArmoredPegasusCard::CArmoredPegasusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Armored Pegasus"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CGorillaChieftainCard::CGorillaChieftainCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Gorilla Chieftain"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		_T("1") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CAnabaShamanCard::CAnabaShamanCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Anaba Shaman"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(-1),		// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CStandingTroopsCard::CStandingTroopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Standing Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CRedwoodTreefolkCard::CRedwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Redwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(6))
{
}

//____________________________________________________________________________
//
CRegalUnicornCard::CRegalUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Regal Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CFeralShadowCard::CFeralShadowCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Feral Shadow"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CPythonCard::CPythonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Python"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CEkunduGriffinCard::CEkunduGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ekundu Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CViashinoWarriorCard::CViashinoWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Warrior"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CStaunchDefendersCard::CStaunchDefendersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Staunch Defenders"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarthogCard::CWarthogCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Warthog"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CRiverBoaCard::CRiverBoaCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("River Boa"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Islandwalk, FALSE);
}

//____________________________________________________________________________
//
CBalduvianBarbariansCard::CBalduvianBarbariansCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Barbarians"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CTalruumMinotaurCard::CTalruumMinotaurCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Talruum Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Berserker), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CRagingGoblinCard::CRagingGoblinCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Raging Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMossDiamondCard::CMossDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moss Diamond"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarbleDiamondCard::CMarbleDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Marble Diamond"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyDiamondCard::CSkyDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sky Diamond"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCharcoalDiamondCard::CCharcoalDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Charcoal Diamond"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoilCard::CBoilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boil"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPerishCard::CPerishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Perish"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Green | CardType::Creature, true),
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVitalizeCard::CVitalizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vitalize"), CardType::Instant, nID)
{
	counted_ptr<CGlobalUntapSpell> cpSpell(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTranquilGroveCard::CTranquilGroveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tranquil Grove"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpAbility);

	cpAbility->SetExceptParent();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrystalVeinCard::CCrystalVeinCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Crystal Vein"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, _T("2")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLongbowArcherCard::CLongbowArcherCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Longbow Archer"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CUnseenWalkerCard::CUnseenWalkerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Unseen Walker"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Forestwalk)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Forestwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInfantryVeteranCard::CInfantryVeteranCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infantry Veteran"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHarmattanEfreetCard::CHarmattanEfreetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Harmattan Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFeastOfTheUnicornCard::CFeastOfTheUnicornCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Feast of the Unicorn"), nID,
		_T("3") BLACK_MANA_TEXT,
		Power(+4), Life(+0))
{
}

//____________________________________________________________________________
//
CPatagiaGolemCard::CPatagiaGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Patagia Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(2), Life(3),
		_T("3"), Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CFemerefArchersCard::CFemerefArchersCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Femeref Archers"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		_T(""),
		new AttackingCreatureComparer,
		FALSE,
		Life(-4), PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CDrySpellCard::CDrySpellCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Dry Spell"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT,
		Life(-1),	// life delta
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CShockCard::CShockCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shock"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CVolcanicGeyserCard::CVolcanicGeyserCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Volcanic Geyser"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(0), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CRemedyCard::CRemedyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Remedy"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(5), SourceColor::Null));

	cpSpell->GetTargeting()->SetDistributeValues();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSerrasBlessingCard::CSerrasBlessingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serra's Blessing"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Vigilance));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHulkingCyclopsCard::CHulkingCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hulking Cyclops"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CPacifismCard::CPacifismCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Pacifism"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
}

//____________________________________________________________________________
//
CProsperityCard::CProsperityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Prosperity"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery, BLUE_MANA_TEXT, 0, 0));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetExtraActionValueVector(ContextValue(1, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInspirationCard::CInspirationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inspiration"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFervorCard::CFervorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fervor"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
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
CRelearnCard::CRelearnCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Relearn"), CardType::Sorcery, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Sorcery | CardType::Instant, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CElvenCacheCard::CElvenCacheCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Elven Cache"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CAEtherFlashCard::CAEtherFlashCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Æther Flash"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEtherFlashCard::SetTriggerContext));
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CAEtherFlashCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

//____________________________________________________________________________
//
CCoercionCard::CCoercionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coercion"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPainfulMemoriesCard::CPainfulMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Painful Memories"), CardType::Sorcery, nID)
{
#if 1
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Others, ZoneId::Library, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
#else
	/*
	AddSpell(new CTargetPlayerRevealHandSpell(this, AbilityType::Sorcery, _T("1") BLACK_MANA_TEXT, NULL));

	((CTargetPlayerRevealHandSpell*)m_pSpell)->SetTargetOpponentPlayerOnly();
	((CTargetPlayerRevealHandSpell*)m_pSpell)->SetDiscard(1, ZoneId::Library, FALSE, TRUE);
	*/
#endif
}

//____________________________________________________________________________
//
CAgonizingMemoriesCard::CAgonizingMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Agonizing Memories"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			2, MoveType::Others, ZoneId::Library, TRUE,
			FALSE, // targeted player chooses? no
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetDiscarderOrder(FALSE); // caster order cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDarajaGriffinCard::CDarajaGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Daraja Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightOfDayCard::CLightOfDayCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Light of Day"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Black | CardType::Creature, true),
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnyaroGriffinCard::CUnyaroGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Unyaro Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCounterspellCardFilter().AddComparer(
		new CardTypeComparer(CardType::Red, false));	// Exclude all these color cards
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeaMonsterCard::CSeaMonsterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sea Monster"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CSeaMonsterCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CSeaMonsterCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CSummerBloomCard::CSummerBloomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Summer Bloom"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayExtraLandSpell> cpSpell(
		::CreateObject<CPlayExtraLandSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT, 3, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHeavyBallistaCard::CHeavyBallistaCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Heavy Ballista"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-2),
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CPearlDragonCard::CPearlDragonCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pearl Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4),	// Power, Toughness
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+1))	// Life delta, power delta
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CVolcanicDragonCard::CVolcanicDragonCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Volcanic Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CFireDiamondCard::CFireDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fire Diamond"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFyndhornBrownieCard::CFyndhornBrownieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fyndhorn Brownie"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			FALSE, TRUE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CInfernalContractCard::CInfernalContractCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Infernal Contract"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, 4));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(
		new CLifeModifier(
			Life(SpecialNumber::DivideBy2RoundUp), this,
			PreventableType::NotPreventable,
			DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFallowEarthCard::CFallowEarthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Fallow Earth"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CEarlyHarvestCard::CEarlyHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Early Harvest"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
			ZoneId::Battlefield, CCardFilter::GetFilter(_T("basic lands"))));

	cpSpell->AddCardModifier(new CCardOrientationModifier(FALSE));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRazortoothRatsCard::CRazortoothRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razortooth Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CPsychicTransferCard::CPsychicTransferCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Transfer"), CardType::Sorcery, nID)
{
	counted_ptr<CExchangeLifeSpell> cpSpell(
		::CreateObject<CExchangeLifeSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT,
			5));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWorldlyTutorCard::CWorldlyTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Worldly Tutor"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("creatures")), 
		ZoneId::Library, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CEnlightenedTutorCard::CEnlightenedTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Enlightened Tutor"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("artifacts or enchantments")),
		ZoneId::Library, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CMysticalTutorCard::CMysticalTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Mystical Tutor"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("instant cards or sorcery cards")),
		ZoneId::Library, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CVampiricTutorCard::CVampiricTutorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vampiric Tutor"), CardType::Instant, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Library, TRUE, TRUE, FALSE));

	cpSpell->SetRevealCards(FALSE);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAshenPowderCard::CAshenPowderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ashen Powder"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPillageCard::CPillageCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Pillage"), CardType::Sorcery, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CDaringApprenticeCard::CDaringApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daring Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunwebCard::CSunwebCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sunweb"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(5), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("creatures with power greater than 2")));
}

//____________________________________________________________________________
//
CMaroCard::CMaroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maro"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrimsonHellkiteCard::CCrimsonHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crimson Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::Colors( CManaCost::Color::Red ));
	cpAbility->SetExtraActionValueVector(ContextValue(-1));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArchangelCard::CArchangelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archangel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CUktabiWildcatsCard::CUktabiWildcatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uktabi Wildcats"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStrandsOfNightCard::CStrandsOfNightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Strands of Night"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddPayLifeDeltaCost(Life(-2));
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlightedShamanCard::CBlightedShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blighted Shaman"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

		AddAbility(cpAbility.GetPointer());
	}
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
}

//____________________________________________________________________________
//
CPhyrexianVaultCard::CPhyrexianVaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Vault"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoldeviSageCard::CSoldeviSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soldevi Sage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 3));

	cpAbility->SetDiscard(1, TRUE, MoveType::Discard);
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSageOwlCard::CSageOwlCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sage Owl"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncestralMemoriesCard::CAncestralMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancestral Memories"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			7));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFamiliarGroundCard::CFamiliarGroundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Familiar Ground"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0), CreatureKeyword::CantBeBlockedByMultiple));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReprisalCard::CReprisalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reprisal"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreaturePowerComparer<std::greater<int>>(3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStalkingTigerCard::CStalkingTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stalking Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CRecklessEmbermageCard::CRecklessEmbermageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reckless Embermage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVertigoCard::CVertigoCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Vertigo"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(-2),
		CreatureKeyword::Null, CreatureKeyword::Flying,
		TRUE, PreventableType::Preventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CSpittingEarthCard::CSpittingEarthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spitting Earth"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Mountain, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUktabiOrangutanCard::CUktabiOrangutanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uktabi Orangutan"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CGravediggerCard::CGravediggerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravedigger"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinRecruiterCard::CGoblinRecruiterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Recruiter"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));
	cpAbility->SetToZone(ZoneId::Library);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreadOfNightCard::CDreadOfNightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dread of Night"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(-1), Life(-1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinEliteInfantryCard::CGoblinEliteInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Elite Infantry"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

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
CRelentlessAssaultCard::CRelentlessAssaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Relentless Assault"), CardType::Sorcery, nID)
{
	counted_ptr<CExtraCombatSpell> cpSpell(
		::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			TRUE,
			1, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFinalFortuneCard::CFinalFortuneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Final Fortune"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT RED_MANA_TEXT,
			PlayerEffectType::TimeWalk, false, 1));

	cpSpell->SetAffectControllerOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CScheduledPlayerModifier(GetGame(),
			new CPlayerLostModifier,
			TurnNumberDelta(+1), NodeId::EndStep, 
			CScheduledPlayerModifier::Operation::ApplyToLater));
			//,CScheduledPlayerModifier::DeltaOption::ActivePlayerTurn));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStormCauldronCard::CStormCauldronCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Storm Cauldron"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
			::CreateObject<CPlayExtraLandEnchantment>(this, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStormCauldronCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStormCauldronCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											const CManaProductionAbilityAction* pAction) const
{
	triggerContext.m_pCard = pAction->GetAbility()->GetCard();
	return true;
}

//____________________________________________________________________________
//
CNaturesResurgenceCard::CNaturesResurgenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nature's Resurgence"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardBySurveySpell> cpSpell(
		::CreateObject<CGlobalDrawCardBySurveySpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			ZoneId::Graveyard, FALSE,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRowenCard::CRowenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rowen"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_ActivatedLastTurn(-1)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetRevealCards(TRUE);
	cpAbility->GetTrigger().SetFirstDrawOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRowenCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

// Limits the trigger activation to once per turn
bool CRowenCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
	CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer)
{
	if (m_ActivatedLastTurn == GetGame()->GetGameTurnNumber()) return false;
	m_ActivatedLastTurn = GetGame()->GetGameTurnNumber();
	return true;
}

//____________________________________________________________________________
//
CSnakeBasketCard::CSnakeBasketCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Snake Basket"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Snake D"), 2927,
			0));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChillCard::CChillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chill"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CConsExtraManaEnchantment> cpSpell(
		::CreateObject<CConsExtraManaEnchantment>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Red, false),
			_T("2")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpittingDrakeCard::CSpittingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spitting Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEtherealChampionCard::CEtherealChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ethereal Champion"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T(""),
			Life(1),
			SourceColor::Null, FALSE));

	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbyssalHunterCard::CAbyssalHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abyssal Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFatalBlowCard::CFatalBlowCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Fatal Blow"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
}

//____________________________________________________________________________
//
CFogElementalCard::CFogElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fog Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFogElementalCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CFogElementalCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Sacrifice Effect"), 61106, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CLeadGolemCard::CLeadGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lead Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonMaskCard::CDragonMaskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon Mask"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDragonMaskCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDragonMaskCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CNecrosavantCard::CNecrosavantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necrosavant"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetGraveyardOnly();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStuporCard::CStuporCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stupor"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetAtRandom();
	cpSpell->SetSecondaryAction(1, MoveType::Discard, ZoneId::Graveyard, TRUE, TRUE, new TrueCardComparer, FALSE, FALSE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CResistanceFighterCard::CResistanceFighterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Resistance Fighter"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInsightCard::CInsightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Insight"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarmthCard::CWarmthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Warmth"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHammerOfBogardanCard::CHammerOfBogardanCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hammer of Bogardan"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
		ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalduvianHordeCard::CBalduvianHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Horde"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDesertionCard::CDesertionCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Desertion"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToAlternateZone(new CardTypeComparer(CardType::Artifact | CardType::Creature, false), ZoneId::Battlefield, FALSE);
}

//____________________________________________________________________________
//
CSyphonSoulCard::CSyphonSoulCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Syphon Soul"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		Life(-2),
		FALSE_CARD_COMPARER, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetTargetOpponentPlayerOnly();
	m_pGlobalChgLifeSpell->SetReverseLifeDeltaToController(TRUE);
}

//____________________________________________________________________________
//
CWaitingInTheWeedsCard::CWaitingInTheWeedsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Waiting in the Weeds"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CGlobalTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			_T("Cat B"), 2708));

	cpSpell->GetSurveyCardFilter().AddComparer(new UntappedComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAbductionCard::CAbductionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abduction"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->SetUntapTargetOnEnchant(TRUE);
	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSerenityCard::CSerenityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serenity"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifacts or enchantments")));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTidalSurgeCard::CTidalSurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tidal Surge"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CExileCard::CExileCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exile"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell3> cpSpell(
		::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT, 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others,
			FALSE,
			TRUE));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::White, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrowseCard::CBrowseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Browse"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			5));

	cpAbility->SetReorder(TRUE, ZoneId::Exile);
	cpAbility->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMysticCompassCard::CMysticCompassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mystic Compass"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("1"),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Plains"));
	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Swamp"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreamCacheCard::CDreamCacheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream Cache"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 3));

	cpSpell->SetDiscard(2, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::TopOrBottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPolymorphCard::CPolymorphCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Polymorph"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPolymorphCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPolymorphCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pAction->GetController());
	pModifier1.ApplyTo(pTarget);

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

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

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier2.ApplyTo(pPlayer);
	pLibrary->Shuffle();

	return false;
}

//____________________________________________________________________________
//
CCursedTotemCard::CCursedTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cursed Totem"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlayActivatedAbilities,
			(int)CCardFilter::GetFilter(_T("creature permanents"))));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDoomsdayCard::CDoomsdayCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Doomsday"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")), 
		ZoneId::Library, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetFromZoneId(ZoneId::Library | ZoneId::Graveyard);
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(5), MaximumValue(5));
	m_pSearchLibrarySpell->SetRemoveRemainingCardsFromGame(TRUE);
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
	m_pSearchLibrarySpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(SpecialNumber::DivideBy2RoundUp), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CDiminishingReturnsCard::CDiminishingReturnsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diminishing Returns"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			0, 7));

	cpSpell->SetMergeGraveyard(TRUE);
	cpSpell->SetMergeHand(TRUE);
	cpSpell->SetRemoveTopLibraryCardsBeforeDraw(10);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDenseFoliageCard::CDenseFoliageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dense Foliage"), CardType::GlobalEnchantment, nID)
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Aura | CardType::Instant | CardType::Sorcery, false)))
{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false)));

	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Shroud);
	// XXX cards cannot be a target of spells or abilities *except* if the card is not in the list of card types listed above.
	// This is assuming all card types not in the above list are not capable of targeting in the process of spell casting.
	cpSpell->GetCardKeywordMod()->GetModifier().SetAdditionData((DWORD)&m_CardFilter);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlashCard::CFlashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flash"), CardType::Instant, nID)
{
	counted_ptr<CDiscardCardSpell2> cpSpell(
		::CreateObject<CDiscardCardSpell2>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, MoveType::Others, 
			CCardFilter::GetFilter(_T("creatures")), 2, 
			true)); // TRUE: up to; FALSE: exact

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTariffCard::CTariffCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tariff"), CardType::Sorcery, nID)
{
	counted_ptr<CRepayManaCostSpell> cpSpell(
		::CreateObject<CRepayManaCostSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTeferisPuzzleBoxCard::CTeferisPuzzleBoxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Teferi's Puzzle Box"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility2, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDiscardCount(SpecialNumber::All);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetToZone(ZoneId::Library);
	cpAbility->SetPlacement(CardPlacement::Bottom);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWandOfDenialCard::CWandOfDenialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wand of Denial"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CWandOfDenialCard::OnResolutionCompleted))
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWandOfDenialCard::OnPaymentSelected))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""),
			1));

	cpAbility->AddTapCost();
	cpAbility->SetReorder(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddAbility(cpAbility.GetPointer());
}

void CWandOfDenialCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CPlayer* pTarget = pAbilityAction->GetAssociatedPlayer();
	CPlayer* pController = pAbilityAction->GetController();
	CCard* pNextDraw = pTarget->GetZoneById(ZoneId::Library)->GetTopCard();

	if (pNextDraw && !pNextDraw->GetCardType().IsLand() && (pController->GetLife() > Life(1)) && !pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Pay 2 life and put %s to the graveyard"), pNextDraw->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't pay life"));

			entries.push_back(selectionEntry);
		}
	
		m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController(), (DWORD)pNextDraw);
	}
	return;
}

void CWandOfDenialCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext1;

				CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pCard);

				return;
			}
		return;
		}
}

//____________________________________________________________________________
//
