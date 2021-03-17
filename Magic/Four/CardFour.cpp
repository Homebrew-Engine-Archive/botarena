#include "stdafx.h"
#include "CardFour.h"

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

		DEFINE_CARD(CAbominationCard);
		DEFINE_CARD(CAlabasterPotionCard);
		DEFINE_CARD(CAliBabaCard);
		DEFINE_CARD(CAmrouKithkinCard);
		DEFINE_CARD(CAmuletOfKroogCard);
		DEFINE_CARD(CApprenticeWizardCard);
		DEFINE_CARD(CAshesToAshesCard);
		DEFINE_CARD(CBackfireCard);
		DEFINE_CARD(CBallLightningCard);
		DEFINE_CARD(CBirdMaidenCard);
		DEFINE_CARD(CBlightCard);
		DEFINE_CARD(CBloodLustCard);
		DEFINE_CARD(CBlackManaBatteryCard);
		DEFINE_CARD(CBlueManaBatteryCard);
		DEFINE_CARD(CBogImpCard);
		DEFINE_CARD(CBrothersOfFireCard);
		DEFINE_CARD(CCarnivorousPlantCard);
		DEFINE_CARD(CCarrionAntsCard);
		DEFINE_CARD(CCavePeopleCard);
		DEFINE_CARD(CClayStatueCard);
		DEFINE_CARD(CColossusOfSardiaCard);
		DEFINE_CARD(CCosmicHorrorCard);
		DEFINE_CARD(CCrimsonManticoreCard);
		DEFINE_CARD(CCyclopeanMummyCard);
		DEFINE_CARD(CDetonateCard);
		DEFINE_CARD(CDiabolicMachineCard);
		DEFINE_CARD(CDivineTransformationCard);
		DEFINE_CARD(CDurkwoodBoarsCard);
		DEFINE_CARD(CElderLandWurmCard);
		DEFINE_CARD(CElvenRidersCard);
		DEFINE_CARD(CEnergyTapCard);
		DEFINE_CARD(CEternalWarriorCard);
		DEFINE_CARD(CFellwarStoneCard);
		DEFINE_CARD(CFissureCard);
		DEFINE_CARD(CFloodCard);
		DEFINE_CARD(CGaseousFormCard);
		DEFINE_CARD(CGhostShipCard);
		DEFINE_CARD(CGiantStrengthCard);
		DEFINE_CARD(CGiantTortoiseCard);
		DEFINE_CARD(CGoblinRockSledCard);
		DEFINE_CARD(CGrapeshotCatapultCard);
		DEFINE_CARD(CGreedCard);
		DEFINE_CARD(CGreenManaBatteryCard);
		DEFINE_CARD(CHurrJackalCard);
		DEFINE_CARD(CImmolationCard);
		DEFINE_CARD(CInfernoCard);
		DEFINE_CARD(CJununEfreetCard);
		DEFINE_CARD(CKillerBeesCard);
		DEFINE_CARD(CKismetCard);
		DEFINE_CARD(CLandLeechesCard);
		DEFINE_CARD(CLandTaxCard);
		DEFINE_CARD(CLeviathanCard);
		DEFINE_CARD(CLostSoulCard);
		DEFINE_CARD(CManaClashCard);
		DEFINE_CARD(CMarshGasCard);
		DEFINE_CARD(CMarshViperCard);
		DEFINE_CARD(CMishrasFactoryCard);
		DEFINE_CARD(CMoraleCard);
		DEFINE_CARD(CMurkDwellersCard);
		DEFINE_CARD(COasisCard);
		DEFINE_CARD(COsaiVulturesCard);
		DEFINE_CARD(CPietyCard);
		DEFINE_CARD(CPitScorpionCard);
		DEFINE_CARD(CPradeshGypsiesCard);
		DEFINE_CARD(CPsionicEntityCard);
		DEFINE_CARD(CPyrotechnicsCard);
		DEFINE_CARD(CRadjanSpiritCard);
		DEFINE_CARD(CRagManCard);
		DEFINE_CARD(CRedManaBatteryCard);
		DEFINE_CARD(CSandstormCard);
		DEFINE_CARD(CSeekerCard);
		DEFINE_CARD(CSegovianLeviathanCard);
		DEFINE_CARD(CShapeshifterCard);
		DEFINE_CARD(CSindbadCard);
		DEFINE_CARD(CSistersOfTheFlameCard);
		DEFINE_CARD(CSpiritLinkCard);
		DEFINE_CARD(CSpiritShackleCard);
		DEFINE_CARD(CStripMineCard);
		DEFINE_CARD(CSunkenCityCard);
		DEFINE_CARD(CSylvanLibraryCard);
		DEFINE_CARD(CTawnossWandCard);
		DEFINE_CARD(CTimeElementalCard);
		DEFINE_CARD(CTheBruteCard);
		DEFINE_CARD(CTriskelionCard);
		DEFINE_CARD(CTundraWolvesCard);
		DEFINE_CARD(CUncleIstvanCard);
		DEFINE_CARD(CUntamedWildsCard);
		DEFINE_CARD(CVampireBatsCard);
		DEFINE_CARD(CVenomCard);
		DEFINE_CARD(CVisionsCard);
		DEFINE_CARD(CWallOfSpearsCard);
		DEFINE_CARD(CWhirlingDervishCard);
		DEFINE_CARD(CWhiteManaBatteryCard);
		DEFINE_CARD(CWindsofChangeCard);
		DEFINE_CARD(CWordOfBindingCard);
		DEFINE_CARD(CXenicPoltergeistCard);
		DEFINE_CARD(CYotianSoldierCard);
		DEFINE_CARD(CZephyrFalconCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CElderLandWurmCard::CElderLandWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder Land Wurm"), CardType::Creature, CREATURE_TYPE2(Dragon, Wurm), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
										CWhenSelfAttackedBlocked::BlockEventCallback,
										&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCosmicHorrorCard::CCosmicHorrorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Cosmic Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CCosmicHorrorCard::CreateTemporaryAbility),
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CCosmicHorrorCard::PreRemoveAbilityCallback));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

CCard* CCosmicHorrorCard::CreateTemporaryAbility()
{
	return this;
}

void CCosmicHorrorCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CZone* pInplay;
	int m_nCards = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	}

	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	modifier.ApplyTo(pCard);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	}

	if (m_nCards > 0)
	{
		CLifeModifier modifier2(Life(-7), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		modifier2.ApplyTo(pTriggeredPlayer);
	}
}

//____________________________________________________________________________
//
CGiantTortoiseCard::CGiantTortoiseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Tortoise"), CardType::Creature, CREATURE_TYPE(Turtle), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+3)));

	cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmuletOfKroogCard::CAmuletOfKroogCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Amulet of Kroog"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CClayStatueCard::CClayStatueCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Clay Statue"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(3), Life(1),
		_T("2"))
{
}

//____________________________________________________________________________
//
CMishrasFactoryCard::CMishrasFactoryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mishra's Factory"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1"),
				_T("Assembly-Worker AA"), 64013));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(AssemblyWorker), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStripMineCard::CStripMineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Strip Mine"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTawnossWandCard::CTawnossWandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tawnos's Wand"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYotianSoldierCard::CYotianSoldierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yotian Soldier"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("3"), Power(1), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CAliBabaCard::CAliBabaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ali Baba"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			RED_MANA_TEXT,
			TRUE, // tap
			FALSE, // untap
			new CreatureTypeComparer(CREATURE_TYPE(Wall), false)));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBirdMaidenCard::CBirdMaidenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bird Maiden"), CardType::Creature, CREATURE_TYPE2(Human, Bird), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CAbominationCard::CAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abomination"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(6))
	, m_CardFilter(_T("a green or white creature"), _T("green or white creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAbominationCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CAbominationCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CAmrouKithkinCard::CAmrouKithkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amrou Kithkin"), CardType::Creature, CREATURE_TYPE(Kithkin), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(new CreaturePowerComparer<std::less<int>>(3))
{
	GetCreatureKeyword()->AddUnblockable(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CApprenticeWizardCard::CApprenticeWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apprentice Wizard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, _T("3"), BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAshesToAshesCard::CAshesToAshesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ashes to Ashes"), CardType::Sorcery, nID)
{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Artifact, false));	// Exclude artifact cards

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::Preventable,
																 DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBackfireCard::CBackfireCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Backfire"), CardType::EnchantCreature, nID,
		BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
							CWhenDamageDealt::PlayerEventCallback,
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	cpAbility->GetTrigger().SetToControllerOnly(true);

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBackfireCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CBackfireCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);

	return true;
}

//____________________________________________________________________________
//
CBrothersOfFireCard::CBrothersOfFireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brothers of Fire"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarnivorousPlantCard::CCarnivorousPlantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carnivorous Plant"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CCarrionAntsCard::CCarrionAntsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Carrion Ants"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(1),
		_T("1"), Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CCavePeopleCard::CCavePeopleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cave People"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Mountainwalk, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());

		cpAbility->AddTapCost();
	}
}

//____________________________________________________________________________
//
CCrimsonManticoreCard::CCrimsonManticoreCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Crimson Manticore"), CardType::Creature, CREATURE_TYPE(Manticore), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-1), // life delta
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CCyclopeanMummyCard::CCyclopeanMummyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cyclopean Mummy"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiabolicMachineCard::CDiabolicMachineCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Diabolic Machine"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("7"), Power(4), Life(4),
		_T("3"))
{
}

//____________________________________________________________________________
//
CDurkwoodBoarsCard::CDurkwoodBoarsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Durkwood Boars"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CEternalWarriorCard::CEternalWarriorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Eternal Warrior"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CFissureCard::CFissureCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Fissure"), CardType::Instant, nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CFloodCard::CFloodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flood"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhostShipCard::CGhostShipCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Ghost Ship"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4),
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CImmolationCard::CImmolationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Immolation"), nID,
		RED_MANA_TEXT, Power(+2), Life(-2))
{
}

//____________________________________________________________________________
//
CJununEfreetCard::CJununEfreetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Junún Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	AddUpkeepCost(BLACK_MANA_TEXT BLACK_MANA_TEXT);
}

//____________________________________________________________________________
//
CKillerBeesCard::CKillerBeesCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Killer Bees"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(1),
		GREEN_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CLandLeechesCard::CLandLeechesCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Land Leeches"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CLandTaxCard::CLandTaxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Land Tax"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLandTaxCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLandTaxCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CLandTaxCard::SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

bool CLandTaxCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
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
CMarshGasCard::CMarshGasCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Marsh Gas"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-2), Life(+0)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMoraleCard::CMoraleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morale"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetToAttackingOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COasisCard::COasisCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Oasis"), nID)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPietyCard::CPietyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Piety"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new BlockingCreatureComparer,
			Power(+0), Life(+3)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPsionicEntityCard::CPsionicEntityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Psionic Entity"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSandstormCard::CSandstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Sandstorm"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Life(-1), // life delta
		new AttackingCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CSeekerCard::CSeekerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Seeker"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("artifact creatures or white creatures")));
}

//____________________________________________________________________________
//
CSindbadCard::CSindbadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sindbad"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	counted_ptr<CActivatedAbility<CDrawCardSpellEx>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpellEx>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();

	// Reveal draw to all players
	cpAbility->GetZoneModifier().GetSelection(0).revealTo = CZoneModifier::RoleType::AllPlayers;

	// If the card is not a land, discard and reveal to all
	cpAbility->GetZoneModifier().AddSelection(MinimumValue(1), MaximumValue(1), // select 1 from draw 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to all
		&m_CardFilter, // these cards only
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer, // order selected cards by this player
		true); // select from previously drew cards

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSistersOfTheFlameCard::CSistersOfTheFlameCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Sisters of the Flame"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSunkenCityCard::CSunkenCityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sunken City"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(BLUE_MANA_TEXT BLUE_MANA_TEXT);
	
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWordOfBindingCard::CWordOfBindingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Word of Binding"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			TRUE, FALSE,
			new CardTypeComparer(CardType::Creature, false)));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CZephyrFalconCard::CZephyrFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zephyr Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBallLightningCard::CBallLightningCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ball Lightning"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlightCard::CBlightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blight"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBlightCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBlightCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, 
							&CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlightCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CBlightCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CBogImpCard::CBogImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bog Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CColossusOfSardiaCard::CColossusOfSardiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Colossus of Sardia"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("9"), Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			_T("9")));
	ATLASSERT(cpAbility);

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDivineTransformationCard::CDivineTransformationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Divine Transformation"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+3), Life(+3))
{
}

//____________________________________________________________________________
//
CElvenRidersCard::CElvenRidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elven Riders"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(new CreatureKeywordComparer(CreatureKeyword::Flying, false))
{
	m_CardFilter.AddChildFilter(new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Wall), false)));

	GetCreatureKeyword()->AddUnblockable(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CFellwarStoneCard::CFellwarStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fellwar Stone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
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
CGaseousFormCard::CGaseousFormCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Gaseous Form"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage)
{
}

//____________________________________________________________________________
//
CGiantStrengthCard::CGiantStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Giant Strength"), nID,
		RED_MANA_TEXT RED_MANA_TEXT,
		Power(+2), Life(+2))
{
}

//____________________________________________________________________________
//
CGrapeshotCatapultCard::CGrapeshotCatapultCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grapeshot Catapult"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreedCard::CGreedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Greed"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			BLACK_MANA_TEXT, 1));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInfernoCard::CInfernoCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Inferno"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-6),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CKismetCard::CKismetCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kismet"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("3") WHITE_MANA_TEXT,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("artifacts, creatures or lands")),	
			TRUE));

	cpEnchantment->SetAffectOpponentsOnly();

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CLostSoulCard::CLostSoulCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Lost Soul"), CardType::Creature, CREATURE_TYPE2(Spirit, Minion), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CManaClashCard::CManaClashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mana Clash"), CardType::Sorcery, nID)
	, m_FlipSelectionController(pGame, CSelectionSupport::SelectionCallback(this, &CManaClashCard::OnFlipSelectedController))
	, m_FlipSelectionTarget(pGame, CSelectionSupport::SelectionCallback(this, &CManaClashCard::OnFlipSelectedTarget))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE));
	
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaClashCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CManaClashCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	FlipFunctionController(pController, pTarget);
	return true;
}

void CManaClashCard::FlipFunctionController (CPlayer* pController, CPlayer* pTarget)
{
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
		strMessage.Format(_T("%s flips heads"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		ControllersFlip = 0;
		FlipFunctionTarget(pController, pTarget);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s flips tails"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		ControllersFlip = 1;
		FlipFunctionTarget(pController, pTarget);

	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Heads"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Tails"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelectionController.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pController, (DWORD)pTarget);
	}
	return;
}

void CManaClashCard::OnFlipSelectedController(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s flips heads"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				ControllersFlip = 0;
				FlipFunctionTarget(pSelectionPlayer, (CPlayer*)dwContext2);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s flips tails"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				ControllersFlip = 1;
				FlipFunctionTarget(pSelectionPlayer, (CPlayer*)dwContext2);

				return;
			}
		}
}

void CManaClashCard::FlipFunctionTarget (CPlayer* pController, CPlayer* pTarget)
{
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pTarget->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
		Flip = pTarget->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s flips heads"), pTarget->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		TargetsFlip = 0;
		FlipResult(pController, pTarget);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s flips tails"), pTarget->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		TargetsFlip = 1;
		FlipResult(pController, pTarget);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Heads"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Tails"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelectionTarget.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController, (DWORD)pTarget);
	}
	return;
}

void CManaClashCard::OnFlipSelectedTarget(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s flips heads"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				TargetsFlip = 0;
				FlipResult((CPlayer*)dwContext1, pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s flips tails"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				TargetsFlip = 1;
				FlipResult((CPlayer*)dwContext1, pSelectionPlayer);

				return;
			}
		}
}

void CManaClashCard::FlipResult (CPlayer* pController, CPlayer* pTarget)
{
	if (ControllersFlip == 1 || TargetsFlip == 1)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		if (ControllersFlip == 1)
			pModifier.ApplyTo(pController);
		if (TargetsFlip == 1)
			pModifier.ApplyTo(pTarget);
		FlipFunctionController(pController, pTarget);
	}
}
//____________________________________________________________________________
//
CPradeshGypsiesCard::CPradeshGypsiesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pradesh Gypsies"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(-2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyrotechnicsCard::CPyrotechnicsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Pyrotechnics"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-4),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CRadjanSpiritCard::CRadjanSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Radjan Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Flying,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRagManCard::CRagManCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rag Man"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("creatures"))));

	cpAbility->AddTapCost();
	cpAbility->SetAtRandom();
	cpAbility->SetShowHandBeforeDiscards();
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSegovianLeviathanCard::CSegovianLeviathanCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Segovian Leviathan"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CSpiritLinkCard::CSpiritLinkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spirit Link"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSpiritLinkCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSpiritLinkCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritLinkCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSpiritLinkCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CTundraWolvesCard::CTundraWolvesCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Tundra Wolves"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CUntamedWildsCard::CUntamedWildsCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Untamed Wilds"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CVampireBatsCard::CVampireBatsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vampire Bats"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		BLACK_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfSpearsCard::CWallOfSpearsCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Wall of Spears"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("3"), Power(2), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CHurrJackalCard::CHurrJackalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hurr Jackal"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::CantRegenerate, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiritShackleCard::CSpiritShackleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spirit Shackle"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
		CAbilityEnchant::CreateAbilityCallback(this,
			&CSpiritShackleCard::CreateEnchantAbility),
		CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSpiritShackleCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-0/-2"), +1, false)); // add one counter
	cpAbility->SetToCard(pEnchantedCard);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVenomCard::CVenomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Venom"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		CAbilityEnchant::CreateAbilityCallback(this,
			&CVenomCard::CreateEnchantAbility),
		CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CVenomCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-Wall creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVenomCard::SetTriggerContext));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CVenomCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CAlabasterPotionCard::CAlabasterPotionCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Alabaster Potion"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(0), PreventableType::NotPreventable)
{
	//Target player gains X life.
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::LifeGain);

	{
		//Prevent the next X damage that would be dealt to target creature or player this turn.
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT, 
				new AnyCreatureComparer, TRUE,
				Life(0), SourceColor::Null));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CShapeshifterCard::CShapeshifterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shapeshifter"), CardType::_ArtifactCreature, CREATURE_TYPE(Shapeshifter), nID,
		_T("6"), Power(0), Life(0))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMorphCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->AddMorphToType(_T("0/7 artifact creature"), Power(0), Life(7), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("1/6 artifact creature"), Power(1), Life(6), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("2/5 artifact creature"), Power(2), Life(5), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("3/4 artifact creature"), Power(3), Life(4), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("4/3 artifact creature"), Power(4), Life(3), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("5/2 artifact creature"), Power(5), Life(2), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("6/1 artifact creature"), Power(6), Life(1), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		//cpAbility->AddMorphToType(_T("7/0 artifact creature"), Power(7), Life(0), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 0"), Power(0), Life(7), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 1"), Power(1), Life(6), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 2"), Power(2), Life(5), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 3"), Power(3), Life(4), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 4"), Power(4), Life(3), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 5"), Power(5), Life(2), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 6"), Power(6), Life(1), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 7"), Power(7), Life(0), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMorphCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->AddMorphToType(_T("the number 0"), Power(0), Life(7), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 1"), Power(1), Life(6), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 2"), Power(2), Life(5), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 3"), Power(3), Life(4), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 4"), Power(4), Life(3), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 5"), Power(5), Life(2), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 6"), Power(6), Life(1), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
		cpAbility->AddMorphToType(_T("the number 7"), Power(7), Life(0), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);

		//cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTriskelionCard::CTriskelionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Triskelion"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		ATLASSERT(cpAbility);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMurkDwellersCard::CMurkDwellersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Murk Dwellers"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	//cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+2), TRUE));

	//Remove +2/+0 at end of combat.
	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(
		new CScheduledCreatureModifier(pGame, new CPowerModifier(Power(-2), TRUE),
		TurnNumberDelta(-1),
		NodeId::EndOfCombatStep,
		true, // in-play only
		CScheduledCreatureModifier::Operation::ApplyToLater));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMurkDwellersCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CMurkDwellersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CWindsofChangeCard::CWindsofChangeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Winds of Change"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWindsofChangeCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->SetAbilityName(_T("Each player shuffles the cards from his or her hand into his or her library, then draws that many cards. Casts"));
	cpSpell->SetAbilityText(_T("Each player shuffles the cards from his or her hand into his or her library, then draws that many cards. Casts"));
	
	AddSpell(cpSpell.GetPointer());
}

void CWindsofChangeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer;
	int nCards;

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others, GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		nCards = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();
		pDiscardModifier.ApplyTo(pPlayer);
		pPlayer->GetZoneById(ZoneId::Library)->Shuffle();
		CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
		pDrawModifier.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CMarshViperCard::CMarshViperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marsh Viper"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetPoisonCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPitScorpionCard::CPitScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pit Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetPoisonCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodLustCard::CBloodLustCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Blood Lust"), CardType::Instant, nID, AbilityType::Instant,
	    _T("1") RED_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodLustCard::BeforeResolution));
}

bool CBloodLustCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* target = (CCreatureCard*)pAction->GetAssociatedCard();
	int nToughness = GET_INTEGER(target->GetLastKnownToughness());

	int nToughnessDelta;
	if (nToughness < 5)
		nToughnessDelta = nToughness - 1;
	else
		nToughnessDelta = 4;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(-nToughnessDelta, 4);

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), Context);

	return true;
}

//____________________________________________________________________________
//
CUncleIstvanCard::CUncleIstvanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uncle Istvan"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddPreventAllCombatDamage(FALSE);
}

//____________________________________________________________________________
//
CTheBruteCard::CTheBruteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("The Brute"), nID, 
		_T("1") RED_MANA_TEXT,
		Power(+1), Life(+0))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CTheBruteCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CTheBruteCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			 RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhiteManaBatteryCard::CWhiteManaBatteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("White Mana Battery"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWhiteManaBatteryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CWhiteManaBatteryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CBlueManaBatteryCard::CBlueManaBatteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blue Mana Battery"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlueManaBatteryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBlueManaBatteryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CBlackManaBatteryCard::CBlackManaBatteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Black Mana Battery"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlackManaBatteryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBlackManaBatteryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CRedManaBatteryCard::CRedManaBatteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Red Mana Battery"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRedManaBatteryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CRedManaBatteryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CGreenManaBatteryCard::CGreenManaBatteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Green Mana Battery"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGreenManaBatteryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CGreenManaBatteryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CEnergyTapCard::CEnergyTapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Energy Tap"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			true, false,
			new AnyCreatureComparer));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);
	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEnergyTapCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CEnergyTapCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCMC = pAction->GetAssociatedCard()->GetConvertedManaCost();

	CManaPoolModifier* pModifier = new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(CManaPoolBase::Color::Colorless, nCMC));
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
COsaiVulturesCard::COsaiVulturesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Osai Vultures"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
					::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
		 
			cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

			cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CARRION_COUNTER, +1));

			cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

			cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COsaiVulturesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());    
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CARRION_COUNTER), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

bool COsaiVulturesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CTimeElementalCard::CTimeElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Time Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::EventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CScheduledPlayerModifier(GetGame(),
			new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage),
			TurnNumberDelta(-1), NodeId::EndOfCombatStep, CScheduledPlayerModifier::Operation::ApplyToLater));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new EnchantedCardComparer);

		cpAbility->AddTapCost();


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeviathanCard::CLeviathanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leviathan"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(10), Life(10))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();
	GetCreatureKeyword()->AddTrample(FALSE);
	SetIntoPlayTapped();

	m_pAttackAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Islands")));

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetAbilityName(_T("untap ability"));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetSacrificeResolutionCost(2, CCardFilter::GetFilter(_T("Islands")));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVisionsCard::CVisionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Visions"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVisionsCard::OnResolutionCompleted))
	, m_ShuffleSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVisionsCard::OnShuffleSelected))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT,
			5));

	cpSpell->SetReorder(FALSE);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CVisionsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Shuffle the library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Don't shuffle"));

		entries.push_back(selectionEntry);
	}

	m_ShuffleSelection.AddSelectionRequest(entries, 1, 1, this, pAbilityAction->GetController(),(DWORD)pAbilityAction->GetAssociatedPlayer());
}

void CVisionsCard::OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				((CPlayer*)dwContext1)->GetZoneById(ZoneId::Library)->Shuffle();

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		return;
		}
}

//____________________________________________________________________________
//
CSylvanLibraryCard::CSylvanLibraryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sylvan Library"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_UseSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSylvanLibraryCard::OnUseSelected))
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSylvanLibraryCard::OnPaymentSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSylvanLibraryCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSylvanLibraryCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Use the effect of Sylvan Library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Don't use the effect of Sylvan Library"));

		entries.push_back(selectionEntry);
	}
	m_UseSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	
	return true;
}

void CSylvanLibraryCard::OnUseSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s uses the effect of Sylvan Library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
				pModifier.ApplyTo(pSelectionPlayer);

				CZone* pHand = pSelectionPlayer->GetZoneById(ZoneId::Hand);
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new DrawnThisTurnComparer);

				int nCards = m_CardFilter.CountIncluded(pHand->GetCardContainer());
	
				if (nCards > 0)
				{
					std::vector<SelectionEntry> entries;
					{
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = 0;
						if (nCards == 1)
							selectionEntry.strText.Format(_T("Don't pay life, put 1 card on top of library"));
						else
							selectionEntry.strText.Format(_T("Don't pay life, put 2 cards on top of library"));

						entries.push_back(selectionEntry);
					}
					if (!pSelectionPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
					{
						if (pSelectionPlayer->GetLife() >= Life(4))
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 1;
							if (nCards == 1)
								selectionEntry.strText.Format(_T("Pay 4 life, put no cards on top of library"));
							else
								selectionEntry.strText.Format(_T("Pay 4 life, put 1 card on top of library"));

							entries.push_back(selectionEntry);
						}
						if (pSelectionPlayer->GetLife() >= Life(8) && (nCards >= 2))
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 2;
							selectionEntry.strText.Format(_T("Pay 8 life, put no cards on top of library"));

							entries.push_back(selectionEntry);
						}
					}
					if (nCards > 2) nCards = 2;
					m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, (DWORD)nCards);
				}

				return;
			}
			if (it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't use the effect of Sylvan Library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
		}
}

void CSylvanLibraryCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nCards = (int)dwContext1;
			int nPay = (int)it->dwContext;
			int nLibrary = nCards - nPay;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (nPay == 0)
					strMessage.Format(_T("%s doesn't pay life"), pSelectionPlayer->GetPlayerName());
				else
					strMessage.Format(_T("%s pays %d life"), pSelectionPlayer->GetPlayerName(), 4*nPay);
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CLifeModifier pModifier1 = CLifeModifier(Life(-4*nPay), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier1.ApplyTo(pSelectionPlayer);

			CCardFilter m_CardFilter;
			m_CardFilter.SetComparer(new DrawnThisTurnComparer);

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(nLibrary), MaximumValue(nLibrary), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				&m_CardFilter, // any cards
				ZoneId::Library, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
			pModifier2.ApplyTo(pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CGoblinRockSledCard::CGoblinRockSledCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Rock Sled"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CGoblinRockSledCard::CanUntap)));

		m_pUntapAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CGoblinRockSledCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CGoblinRockSledCard::CanUntap(BOOL bIncludeTricks)
{
	if (this->AttackedLastTurn(this->GetController()))
		return FALSE;

	return TRUE;
}

BOOL CGoblinRockSledCard::CanAttack(BOOL bIncludeTricks)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) != GetController())
		{
			CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pInplay->GetSize(); ++i)
				if ((pInplay->GetAt(i)->GetCardType() & CardType::Mountain).Any())
					return TRUE;
		}

	return FALSE;
}

//____________________________________________________________________________
//
CDetonateCard::CDetonateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Detonate"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDetonateCard::OnResolutionCompleted))
{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDetonateCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CDetonateCard::BeforeResolution(CAbilityAction* pAction)
{
	pTargetController = pAction->GetAssociatedCard()->GetController();

	return true;
}

void CDetonateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int n = GetLastCastingExtraValue();

	CLifeModifier pModifier = CLifeModifier(Life(-n), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTargetController);
}

//____________________________________________________________________________
//
CWhirlingDervishCard::CWhirlingDervishCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whirling Dervish"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
	, bHitOpponent(FALSE)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWhirlingDervishCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWhirlingDervishCard::SetTriggerContextAux1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWhirlingDervishCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CWhirlingDervishCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (bHitOpponent == TRUE);
}

bool CWhirlingDervishCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CPlayer* pToPlayer, Damage damage)

{
	bHitOpponent = TRUE;

	return false;
}

bool CWhirlingDervishCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	bHitOpponent = FALSE;

	return false;
}

//____________________________________________________________________________
//
CXenicPoltergeistCard::CXenicPoltergeistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Xenic Poltergeist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
		new CardTypeComparer(CardType::Artifact, false), false));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CXenicPoltergeistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CXenicPoltergeistCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCard* pCard = pAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Artifact B"), 64058, pController);
	CScheduledCardModifier pModifier2 = CScheduledCardModifier(GetGame(), pModifier1,
		TurnNumberDelta(+1), NodeId::UpkeepStep, false, CScheduledCardModifier::Operation::ApplyToNowRemoveLater,
		CScheduledCardModifier::DeltaOption::CustomPlayerTurn, pController);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(nCMC);
	pCreature->SetPrintedToughness(nCMC);

	return true;
}

//____________________________________________________________________________
//