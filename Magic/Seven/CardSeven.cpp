#include "stdafx.h"
#include "CardSeven.h"

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

		DEFINE_CARD(CAbyssalHorrorCard);
		DEFINE_CARD(CAnacondaCard);
		DEFINE_CARD(CAncientSilverbackCard);
		DEFINE_CARD(CAngelicPageCard);
		DEFINE_CARD(CArcaneLaboratoryCard);
		DEFINE_CARD(CArchivistCard);
		DEFINE_CARD(CBalefulStareCard);
		DEFINE_CARD(CBeastOfBurdenCard);
		DEFINE_CARD(CBedlamCard);
		DEFINE_CARD(CBefoulCard);
		DEFINE_CARD(CBellowingFiendCard);
		DEFINE_CARD(CBenthicBehemothCard);
		DEFINE_CARD(CBereavementCard);
		DEFINE_CARD(CBlanchwoodArmorCard);
		DEFINE_CARD(CBlessedReversalCard);
		DEFINE_CARD(CBloodshotCyclopsCard);
		DEFINE_CARD(CBreathOfLifeCard);
		DEFINE_CARD(CBullHippoCard);
		DEFINE_CARD(CCaltropsCard);
		DEFINE_CARD(CCanopySpiderCard);
		DEFINE_CARD(CCloudchaserEagleCard);
		DEFINE_CARD(CCoatOfArmsCard);
		DEFINE_CARD(CCompostCard);
		DEFINE_CARD(CConfiscateCard);
		DEFINE_CARD(CCoralMerfolkCard);
		DEFINE_CARD(CCorruptCard);
		DEFINE_CARD(CCrossbowInfantryCard);
		DEFINE_CARD(CCryptRatsCard);
		DEFINE_CARD(CDakmorLancerCard);
		DEFINE_CARD(CDarkBanishingCard);
		DEFINE_CARD(CDarkestHourCard);
		DEFINE_CARD(CDelusionsOfMediocrityCard);
		DEFINE_CARD(CDisorderCard);
		DEFINE_CARD(CDregsOfSorrowCard);
		DEFINE_CARD(CDuressCard);
		DEFINE_CARD(CEagerCadetCard);
		DEFINE_CARD(CEasternPaladinCard);
		DEFINE_CARD(CEliteArchersCard);
		DEFINE_CARD(CElvishChampionCard);
		DEFINE_CARD(CElvishLyristCard);
		DEFINE_CARD(CElvishPiperCard);
		DEFINE_CARD(CEngineeredPlagueCard);
		DEFINE_CARD(CEnsnaringBridgeCard);
		DEFINE_CARD(CEquilibriumCard);
		DEFINE_CARD(CEvacuationCard);
		DEFINE_CARD(CFightingDrakeCard);
		DEFINE_CARD(CFleetingImageCard);
		DEFINE_CARD(CFoulImpCard);
		DEFINE_CARD(CFugueCard);
		DEFINE_CARD(CGangOfElkCard);
		DEFINE_CARD(CGerrardsWisdomCard);
		DEFINE_CARD(CGhituFireEaterCard);
		DEFINE_CARD(CGiantCockroachCard);
		DEFINE_CARD(CGiantOctopusCard);
		DEFINE_CARD(CGloriousAnthemCard);
		DEFINE_CARD(CGoblinChariotCard);
		DEFINE_CARD(CGoblinGardenerCard);
		DEFINE_CARD(CGoblinGliderCard);
		DEFINE_CARD(CGoblinMatronCard);
		DEFINE_CARD(CGoblinRaiderCard);
		DEFINE_CARD(CGoblinSpelunkersCard);
		DEFINE_CARD(CGraftedSkullcapCard);
		DEFINE_CARD(CGraniteGripCard);
		DEFINE_CARD(CHibernationCard);
		DEFINE_CARD(CHollowDogsCard);
		DEFINE_CARD(CHonorGuardCard);
		DEFINE_CARD(CImpatienceCard);
		DEFINE_CARD(CIntrepidHeroCard);
		DEFINE_CARD(CKnightErrantCard);
		DEFINE_CARD(CKnighthoodCard);
		DEFINE_CARD(CLavaAxeCard);
		DEFINE_CARD(CLevitationCard);
		DEFINE_CARD(CLightningElementalCard);
		DEFINE_CARD(CLoneWolfCard);
		DEFINE_CARD(CLoomingShadeCard);
		DEFINE_CARD(CManaBreachCard);
		DEFINE_CARD(CMasterHealerCard);
		DEFINE_CARD(CMawcorCard);
		DEFINE_CARD(CMegrimCard);
		DEFINE_CARD(CMerfolkLooterCard);
		DEFINE_CARD(CMightOfOaksCard);
		DEFINE_CARD(CMindRotCard);
		DEFINE_CARD(CMonstrousGrowthCard);
		DEFINE_CARD(CNaturesRevoltCard);
		DEFINE_CARD(CNauseaCard);
		DEFINE_CARD(CNecrologiaCard);
		DEFINE_CARD(CNocturnalRaidCard);
		DEFINE_CARD(COgreTaskmasterCard);
		DEFINE_CARD(COkkCard);
		DEFINE_CARD(COpportunityCard);
		DEFINE_CARD(COppositionCard);
		DEFINE_CARD(COppressionCard);
		DEFINE_CARD(COstracizeCard);
		DEFINE_CARD(CPariahCard);
		DEFINE_CARD(CPersecuteCard);
		DEFINE_CARD(CPhyrexianColossusCard);
		DEFINE_CARD(CPhyrexianHulkCard);
		DEFINE_CARD(CPitTrapCard);
		DEFINE_CARD(CPlagueBeetleCard);
		DEFINE_CARD(CPrideOfLionsCard);
		DEFINE_CARD(CPurifyCard);
		DEFINE_CARD(CPygmyPyrosaurCard);
		DEFINE_CARD(CPyroclasmCard);
		DEFINE_CARD(CRazorfootGriffinCard);
		DEFINE_CARD(CReclaimCard);
		DEFINE_CARD(CReflexesCard);
		DEFINE_CARD(CReprocessCard);
		DEFINE_CARD(CRevenantCard);
		DEFINE_CARD(CRollingStonesCard);
		DEFINE_CARD(CSacredGroundCard);
		DEFINE_CARD(CSacredNectarCard);
		DEFINE_CARD(CSanctimonyCard);
		DEFINE_CARD(CSeasonedMarshalCard);
		DEFINE_CARD(CSeekerOfSkybreakCard);
		DEFINE_CARD(CSeismicAssaultCard);
		DEFINE_CARD(CSerpentWarriorCard);
		DEFINE_CARD(CSerraAdvocateCard);
		DEFINE_CARD(CSerrasEmbraceCard);
		DEFINE_CARD(CSisaysRingCard);
		DEFINE_CARD(CSkyshroudFalconCard);
		DEFINE_CARD(CSleightOfHandCard);
		DEFINE_CARD(CSoulFeastCard);
		DEFINE_CARD(CSouthernPaladinCard);
		DEFINE_CARD(CSpellbookCard);
		DEFINE_CARD(CSpinedWurmCard);
		DEFINE_CARD(CSpinelessThugCard);
		DEFINE_CARD(CSquallCard);
		DEFINE_CARD(CStarlightCard);
		DEFINE_CARD(CStaticOrbCard);
		DEFINE_CARD(CStormShamanCard);
		DEFINE_CARD(CStrongholdAssassinCard);
		DEFINE_CARD(CSuddenImpactCard);
		DEFINE_CARD(CSustainerOfTheRealmCard);
		DEFINE_CARD(CTaintedAEtherCard);
		DEFINE_CARD(CTelepathicSpiesCard);
		DEFINE_CARD(CTelepathyCard);
		DEFINE_CARD(CTemporalAdeptCard);
		DEFINE_CARD(CThievingMagpieCard);
		DEFINE_CARD(CThornElementalCard);
		DEFINE_CARD(CThoughtleechCard);
		DEFINE_CARD(CTolarianWindsCard);
		DEFINE_CARD(CTrainedOrggCard);
		DEFINE_CARD(CTreasureTroveCard);
		DEFINE_CARD(CTreefolkSeedlingsCard);
		DEFINE_CARD(CVengeanceCard);
		DEFINE_CARD(CVernalBloomCard);
		DEFINE_CARD(CVigilantDrakeCard);
		DEFINE_CARD(CVizzerdrixCard);
		DEFINE_CARD(CVolcanicHammerCard);
		DEFINE_CARD(CWallOfWonderCard);
		DEFINE_CARD(CWesternPaladinCard);
		DEFINE_CARD(CWildfireCard);
		DEFINE_CARD(CWindDancerCard);
		DEFINE_CARD(CWingSnareCard);
		DEFINE_CARD(CWoodElvesCard);
		DEFINE_CARD(CWorshipCard);
		DEFINE_CARD(CYavimayaEnchantressCard);
		DEFINE_CARD(CYawgmothsEdictCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CCoralMerfolkCard::CCoralMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coral Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CCanopySpiderCard::CCanopySpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Canopy Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CSkyshroudFalconCard::CSkyshroudFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyshroud Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CMerfolkLooterCard::CMerfolkLooterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Looter"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightErrantCard::CKnightErrantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight Errant"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CAngelicPageCard::CAngelicPageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Page"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingBlockingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CEagerCadetCard::CEagerCadetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eager Cadet"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CRazorfootGriffinCard::CRazorfootGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Razorfoot Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSerraAdvocateCard::CSerraAdvocateCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serra Advocate"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingBlockingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMasterHealerCard::CMasterHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(4), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CCrossbowInfantryCard::CCrossbowInfantryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Crossbow Infantry"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CSerrasEmbraceCard::CSerrasEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Serra's Embrace"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Flying | CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CGloriousAnthemCard::CGloriousAnthemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glorious Anthem"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinChariotCard::CGoblinChariotCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Chariot"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGoblinRaiderCard::CGoblinRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Raider"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CGoblinGliderCard::CGoblinGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goblin Glider"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CTrainedOrggCard::CTrainedOrggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Orgg"), CardType::Creature, CREATURE_TYPE(Orgg), nID,
		_T("6") RED_MANA_TEXT, Power(6), Life(6))
{
}

//____________________________________________________________________________
//
CFoulImpCard::CFoulImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Foul Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerpentWarriorCard::CSerpentWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serpent Warrior"), CardType::Creature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoomingShadeCard::CLoomingShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Looming Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CSpinedWurmCard::CSpinedWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spined Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CAncientSilverbackCard::CAncientSilverbackCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Ancient Silverback"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CFightingDrakeCard::CFightingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fighting Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CPhyrexianHulkCard::CPhyrexianHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Hulk"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CDarkBanishingCard::CDarkBanishingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dark Banishing"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CBefoulCard::CBefoulCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Befoul"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CDuressCard::CDuressCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Duress"), CardType::Sorcery, nID)

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false)))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	// Exclude creature OR land cards

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThievingMagpieCard::CThievingMagpieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thieving Magpie"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConfiscateCard::CConfiscateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Confiscate"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMightOfOaksCard::CMightOfOaksCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Might of Oaks"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT,
		Power(+7), Life(+7),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTreasureTroveCard::CTreasureTroveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Treasure Trove"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishLyristCard::CElvishLyristCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Lyrist"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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

//____________________________________________________________________________
//
CTreefolkSeedlingsCard::CTreefolkSeedlingsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treefolk Seedlings"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetChangeToughnessOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COpportunityCard::COpportunityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Opportunity"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, 4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWingSnareCard::CWingSnareCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wing Snare"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CYavimayaEnchantressCard::CYavimayaEnchantressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Enchantress"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Enchantment, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHibernationCard::CHibernationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hibernation"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Green, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLevitationCard::CLevitationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Levitation"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyroclasmCard::CPyroclasmCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Pyroclasm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		Life(-2),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CWindDancerCard::CWindDancerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wind Dancer"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
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

//____________________________________________________________________________
//
CFugueCard::CFugueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fugue"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			3, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDisorderCard::CDisorderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disorder"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell2> cpSpell(
		::CreateObject<CGlobalChgLifeSpell2>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			Life(-2),
			new CardTypeComparer(CardType::White | CardType::Creature, true), PreventableType::Preventable,
			DamageType::SpellDamage | DamageType::NonCombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlanchwoodArmorCard::CBlanchwoodArmorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blanchwood Armor"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBlanchwoodArmorCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CBlanchwoodArmorCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBlanchwoodArmorCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false), (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CBlanchwoodArmorCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CBullHippoCard::CBullHippoCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bull Hippo"), CardType::Creature, CREATURE_TYPE(Hippo), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CVizzerdrixCard::CVizzerdrixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vizzerdrix"), CardType::Creature, CREATURE_TYPE2(Rabbit, Beast), nID,
		_T("6") BLUE_MANA_TEXT, Power(6), Life(6))
{
}

//____________________________________________________________________________
//
CLightningElementalCard::CLightningElementalCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lightning Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(1))
{
}

//____________________________________________________________________________
//
CGoblinSpelunkersCard::CGoblinSpelunkersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Goblin Spelunkers"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CPlagueBeetleCard::CPlagueBeetleCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Plague Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CGiantCockroachCard::CGiantCockroachCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Cockroach"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CSpinelessThugCard::CSpinelessThugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spineless Thug"), CardType::Creature, CREATURE_TYPE2(Zombie, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CGiantOctopusCard::CGiantOctopusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Octopus"), CardType::Creature, CREATURE_TYPE(Octopus), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
COgreTaskmasterCard::COgreTaskmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Taskmaster"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CBenthicBehemothCard::CBenthicBehemothCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Benthic Behemoth"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(7), Life(6),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CAnacondaCard::CAnacondaCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Anaconda"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CEliteArchersCard::CEliteArchersCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Elite Archers"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-3), PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CHonorGuardCard::CHonorGuardCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Honor Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
}

//____________________________________________________________________________
//
CRevenantCard::CRevenantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Revenant"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSisaysRingCard::CSisaysRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sisay's Ring"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrongholdAssassinCard::CStrongholdAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stronghold Assassin"), CardType::Creature, CREATURE_TYPE2(Zombie, Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPitTrapCard::CPitTrapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pit Trap"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2"), 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBeastOfBurdenCard::CBeastOfBurdenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Beast of Burden"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMawcorCard::CMawcorCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Mawcor"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CStormShamanCard::CStormShamanCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Storm Shaman"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(4),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CSeekerOfSkybreakCard::CSeekerOfSkybreakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seeker of Skybreak"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CEasternPaladinCard::CEasternPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eastern Paladin"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSouthernPaladinCard::CSouthernPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Southern Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Red, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWesternPaladinCard::CWesternPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Western Paladin"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::White | CardType::Creature, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPygmyPyrosaurCard::CPygmyPyrosaurCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pygmy Pyrosaur"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CCryptRatsCard::CCryptRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(0),
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::Colors( CManaCost::Color::Black ));
	cpAbility->SetExtraActionValueVector(ContextValue(-1));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVigilantDrakeCard::CVigilantDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vigilant Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			_T("2") BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIntrepidHeroCard::CIntrepidHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Intrepid Hero"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreaturePowerComparer<std::greater<int>>(3));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfWonderCard::CWallOfWonderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Wonder"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(5),
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(-4), CreatureKeyword::DefenderMayAttack)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CArchivistCard::CArchivistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archivist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReflexesCard::CReflexesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Reflexes"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CGraniteGripCard::CGraniteGripCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Granite Grip"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CGraniteGripCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CGraniteGripCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CGraniteGripCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->SetChangePowerOnly();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CGraniteGripCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CElvishChampionCard::CElvishChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Champion"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Elf), false),
			Power(+1), Life(+1), CreatureKeyword::Forestwalk));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTemporalAdeptCard::CTemporalAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Temporal Adept"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBedlamCard::CBedlamCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bedlam"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRollingStonesCard::CRollingStonesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rolling Stones"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::DefenderMayAttack));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnighthoodCard::CKnighthoodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Knighthood"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLavaAxeCard::CLavaAxeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lava Axe"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CMonstrousGrowthCard::CMonstrousGrowthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Monstrous Growth"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CVolcanicHammerCard::CVolcanicHammerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Volcanic Hammer"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CNauseaCard::CNauseaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nausea"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBreathOfLifeCard::CBreathOfLifeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Breath of Life"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CVengeanceCard::CVengeanceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vengeance"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new TappedComparer);
}

//____________________________________________________________________________
//
CPurifyCard::CPurifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Purify"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment | CardType::Artifact, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMindRotCard::CMindRotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Rot"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSacredNectarCard::CSacredNectarCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sacred Nectar"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			Life(+4), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSquallCard::CSquallCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Squall"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") GREEN_MANA_TEXT,
		Life(-2),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CNocturnalRaidCard::CNocturnalRaidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nocturnal Raid"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(+2), Life(+0)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CReclaimCard::CReclaimCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Reclaim"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CEvacuationCard::CEvacuationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Evacuation"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CElvishPiperCard::CElvishPiperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Piper"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures")),//new AnyCreatureComparer, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorruptCard::CCorruptCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Corrupt"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Battlefield, TRUE, 
			new CardTypeComparer(CardType::Swamp, false),
			PreventableType::Preventable));

	cpSpell->SetControllerGainLife(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGoblinGardenerCard::CGoblinGardenerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Gardener"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudchaserEagleCard::CCloudchaserEagleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudchaser Eagle"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CDakmorLancerCard::CDakmorLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dakmor Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinMatronCard::CGoblinMatronCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Matron"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrideOfLionsCard::CPrideOfLionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pride of Lions"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CLoneWolfCard::CLoneWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lone Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CThornElementalCard::CThornElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thorn Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CSeismicAssaultCard::CSeismicAssaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seismic Assault"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""), 
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulFeastCard::CSoulFeastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Soul Feast"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
}

//____________________________________________________________________________
//
CGangOfElkCard::CGangOfElkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gang of Elk"), CardType::Creature, CREATURE_TYPE2(Elk, Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHollowDogsCard::CHollowDogsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hollow Dogs"), CardType::Creature, CREATURE_TYPE2(Zombie, Hound), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSustainerOfTheRealmCard::CSustainerOfTheRealmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sustainer of the Realm"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGerrardsWisdomCard::CGerrardsWisdomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gerrard's Wisdom"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("cards")), ZoneId::Hand);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlessedReversalCard::CBlessedReversalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blessed Reversal"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT));

	cpSpell->SetAttackedByMultiplier(3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStarlightCard::CStarlightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Starlight"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell2> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell2>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			CCardFilter::GetFilter(_T("black creatures")),
			3));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COstracizeCard::COstracizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ostracize"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWoodElvesCard::CWoodElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wood Elves"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));
	cpAbility->SetToZone(ZoneId::Battlefield);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWorshipCard::CWorshipCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Worship"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("3") WHITE_MANA_TEXT,
			PlayerEffectType::Worship, 1, TRUE));

	cpEnchantment->SetAffectControllerOnly();

	cpEnchantment->SetConditionWork();
	cpEnchantment->GetConditionFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CEnsnaringBridgeCard::CEnsnaringBridgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ensnaring Bridge"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::EnsnaringBridge));

	cpAbility->SetParameterToController(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleetingImageCard::CFleetingImageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fleeting Image"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMegrimCard::CMegrimCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Megrim"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeasonedMarshalCard::CSeasonedMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seasoned Marshal"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COppositionCard::COppositionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Opposition"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDelusionsOfMediocrityCard::CDelusionsOfMediocrityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Delusions of Mediocrity"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+10));

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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-10));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStaticOrbCard::CStaticOrbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Static Orb"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::UntapLimit, 2));

	ATLASSERT(cpAbility);

	cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcaneLaboratoryCard::CArcaneLaboratoryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Arcane Laboratory"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("2") BLUE_MANA_TEXT,
		PlayerEffectType::SpellCastLimit, 1, TRUE));

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CSpellbookCard::CSpellbookCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spellbook"), CardType::Artifact, nID,
		_T(""), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

	cpAbility->SetAffectControllerOnly();
	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTelepathyCard::CTelepathyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Telepathy"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CChgHandVisibilityEnchantment> cpEnchantment(
		::CreateObject<CChgHandVisibilityEnchantment>(this,
			BLUE_MANA_TEXT));

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CDregsOfSorrowCard::CDregsOfSorrowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dregs of Sorrow"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell2> cpSpell(
		::CreateObject<CTargetMoveCardSpell2>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTolarianWindsCard::CTolarianWindsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tolarian Winds"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell3> cpSpell(
		::CreateObject<CDrawCardSpell3>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CImpatienceCard::CImpatienceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Impatience"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImpatienceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CImpatienceCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CImpatienceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CNode* pToNode) const
{
	return (GetGame()->GetActivePlayer()->GetTurnCastedSpellCount() == 0);
}

bool CImpatienceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	return (GetGame()->GetActivePlayer()->GetTurnCastedSpellCount() == 0);
}

//____________________________________________________________________________
//
CSuddenImpactCard::CSuddenImpactCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sudden Impact"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			ZoneId::Hand, FALSE,
			new TrueCardComparer,
			PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COkkCard::COkkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Okk"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCowardAttacker(FALSE);
	GetCreatureKeyword()->AddCowardBlocker(FALSE);
}

//____________________________________________________________________________
//
COppressionCard::COppressionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oppression"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbyssalHorrorCard::CAbyssalHorrorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abyssal Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetDiscardCount(2);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTelepathicSpiesCard::CTelepathicSpiesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Telepathic Spies"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CTelepathicSpiesCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CTelepathicSpiesCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CBellowingFiendCard::CBellowingFiendCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bellowing Fiend"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYawgmothsEdictCard::CYawgmothsEdictCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Yawgmoth's Edict"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEquilibriumCard::CEquilibriumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Equilibrium"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManaBreachCard::CManaBreachCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Breach"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTaintedAEtherCard::CTaintedAEtherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tainted Æther"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBereavementCard::CBereavementCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bereavement"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVernalBloomCard::CVernalBloomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vernal Bloom"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CProdExtraManaEnchantment> cpSpell(
		::CreateObject<CProdExtraManaEnchantment>(this,
			_T("3") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCompostCard::CCompostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Compost"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Black, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaltropsCard::CCaltropsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Caltrops"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCaltropsCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CCaltropsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSacredGroundCard::CSacredGroundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sacred Ground"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().SetByOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSacredGroundCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CSacredGroundCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//____________________________________________________________________________
//
CThoughtleechCard::CThoughtleechCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thoughtleech"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSanctimonyCard::CSanctimonyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sanctimony"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalefulStareCard::CBalefulStareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Baleful Stare"), CardType::Sorcery, nID)

	, m_CardFilter(new CardTypeComparer(CardType::Mountain | CardType::Red, false))
{
	counted_ptr<CTargetPlayerRevealHandSpell2> cpSpell(
		::CreateObject<CTargetPlayerRevealHandSpell2>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			&m_CardFilter));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSleightOfHandCard::CSleightOfHandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sleight of Hand"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			2));

	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CReprocessCard::CReprocessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reprocess"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell4> cpSpell(
		::CreateObject<CDrawCardSpell4>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			SpecialNumber::Any,
			CCardFilter::GetFilter(_T("artifacts, creatures or lands"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBloodshotCyclopsCard::CBloodshotCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodshot Cyclops"), CardType::Creature, CREATURE_TYPE2(Cyclops, Giant), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell2>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			CCardFilter::GetFilter(_T("creatures")),
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhituFireEaterCard::CGhituFireEaterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghitu Fire-Eater"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGraftedSkullcapCard::CGraftedSkullcapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grafted Skullcap"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
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
CNecrologiaCard::CNecrologiaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Necrologia"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell5> cpSpell(
		::CreateObject<CDrawCardSpell5>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->AddPayLifeDeltaCost(Life(SpecialNumber::Any));
	cpSpell->SetUseInSpecificNode(NodeId::EndStep, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianColossusCard::CPhyrexianColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Colossus"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(8), Life(8))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();
	GetCreatureKeyword()->AddCantBeBlockedByOneOrTwo(FALSE, 0);

	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-8));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCoatOfArmsCard::CCoatOfArmsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Coat of Arms"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment2> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment2>(this,
			new AnyCreatureComparer));

	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPariahCard::CPariahCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pariah"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPariahCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CPariahCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPariahCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CDamageRedirectionEnchantment> cpEnchantAbility(
		::CreateObject<CDamageRedirectionEnchantment>(pEnchantCard, 
		static_cast<DamageType>(DamageType::CombatDamage | DamageType::NonCombatDamage), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->SetAffectThisPlayerOnly(GetController());

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CPariahCard::PostEnchant(CAbility* pAbility)
{
	((CDamageRedirectionEnchantment*)pAbility)->StartEnchantment();	// Since the card has already been in in-play, we need to start the enchantment manually
}

//____________________________________________________________________________
//
CPersecuteCard::CPersecuteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Persecute"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell2> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell2>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			ZoneId::Graveyard, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEngineeredPlagueCard::CEngineeredPlagueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Engineered Plague"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CEngineeredPlagueCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CEngineeredPlagueCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
		
	cpAbility->SetAbilityName(_T("Engineered Plague weaken"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CEngineeredPlagueCard::Move(CZone* pToZone,
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

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++i)
				{
					if (GetGame()->GetPlayer(ip) != GetController())
					{
						CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
							}
						}
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
				&CEngineeredPlagueCard::CreateAdditionAbility));

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

void CEngineeredPlagueCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CEngineeredPlagueCard::CreateAdditionAbility));

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
CWildfireCard::CWildfireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wildfire"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT RED_MANA_TEXT,
			Life(-4),
			new CardTypeComparer(CardType::Creature, false), PreventableType::Preventable,
			4,
			new CardTypeComparer(CardType::_Land, false), DamageType::SpellDamage | DamageType::NonCombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDarkestHourCard::CDarkestHourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Darkest Hour"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardTypeEnchantment> cpSpell(
		::CreateObject<CCardTypeEnchantment>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			CardType::Black, CardType::_ColorMask));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNaturesRevoltCard::CNaturesRevoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nature's Revolt"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CIsAlsoAEnchantment> cpSpell(
		::CreateObject<CIsAlsoAEnchantment>(this,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Animated Land B"), 64008));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//