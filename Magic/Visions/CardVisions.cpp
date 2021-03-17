#include "stdafx.h"
#include "CardVisions.h"

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

		DEFINE_CARD(CAkuDjinnCard);
		DEFINE_CARD(CAnvilOfBogardanCard);
		DEFINE_CARD(CArmyAntsCard);
		DEFINE_CARD(CBetrayalCard);
		DEFINE_CARD(CBlanketOfNightCard);
		DEFINE_CARD(CBogardanPhoenixCard);
		DEFINE_CARD(CBrassTalonChimeraCard);
		DEFINE_CARD(CBreezekeeperCard);
		DEFINE_CARD(CBroodOfCockroachesCard);
		DEFINE_CARD(CBullElephantCard);
		DEFINE_CARD(CChronatogCard);
		DEFINE_CARD(CCityOfSolitudeCard);
		DEFINE_CARD(CCoralAtollCard);
		DEFINE_CARD(CCorrosionCard);
		DEFINE_CARD(CDarkPrivilegeCard);
		DEFINE_CARD(CDeathWatchCard);
		DEFINE_CARD(CDiamondKaleidoscopeCard);
		DEFINE_CARD(CDormantVolcanoCard);
		DEFINE_CARD(CElephantGrassCard);
		DEFINE_CARD(CEmeraldCharmCard);
		DEFINE_CARD(CEvergladesCard);
		DEFINE_CARD(CEyeOfSingularityCard);
		DEFINE_CARD(CFallenAskariCard);
		DEFINE_CARD(CFemerefEnchantressCard);
		DEFINE_CARD(CFeralInstinctCard);
		DEFINE_CARD(CFireblastCard);
		DEFINE_CARD(CFirestormHellkiteCard);
		DEFINE_CARD(CFloodedShorelineCard);
		DEFINE_CARD(CForbiddenRitualCard);
		DEFINE_CARD(CForeshadowCard);
		DEFINE_CARD(CFreewindFalconCard);
		DEFINE_CARD(CFuneralCharmCard);
		DEFINE_CARD(CGiantCaterpillarCard);
		DEFINE_CARD(CGoblinSwineRiderCard);
		DEFINE_CARD(CGriffinCanyonCard);
		DEFINE_CARD(CGuidingSpiritCard);
		DEFINE_CARD(CHelmOfAwakeningCard);
		DEFINE_CARD(CHearthCharmCard);
		DEFINE_CARD(CHopeCharmCard);
		DEFINE_CARD(CImpulseCard);
		DEFINE_CARD(CIronHeartChimeraCard);
		DEFINE_CARD(CJamuraanLionCard);
		DEFINE_CARD(CJujuBubbleCard);
		DEFINE_CARD(CJungleBasinCard);
		DEFINE_CARD(CKaerveksSpiteCard);
		DEFINE_CARD(CKarooCard);
		DEFINE_CARD(CKeeperOfKookusCard);
		DEFINE_CARD(CKyscuDrakeCard);
		DEFINE_CARD(CKookusCard);
		DEFINE_CARD(CLeadBellyChimeraCard);
		DEFINE_CARD(CLightningCloudCard);
		DEFINE_CARD(CMagmaMineCard);
		DEFINE_CARD(CManOWarCard);
		DEFINE_CARD(CMiraculousRecoveryCard);
		DEFINE_CARD(CMortalWoundCard);
		DEFINE_CARD(CNaturalOrderCard);
		DEFINE_CARD(COvinomancerCard);
		DEFINE_CARD(CPhyrexianWalkerCard);
		DEFINE_CARD(CPillarTombsOfAkuCard);
		DEFINE_CARD(CQuirionDruidCard);
		DEFINE_CARD(CQuirionRangerCard);
		DEFINE_CARD(CRagingGorillaCard);
		DEFINE_CARD(CRainbowEfreetCard);
		DEFINE_CARD(CRetributionOfTheMeekCard);
		DEFINE_CARD(CRighteousAuraCard);
		DEFINE_CARD(CRighteousWarCard);
		DEFINE_CARD(CRockSlideCard);
		DEFINE_CARD(CScalebanesEliteCard);
		DEFINE_CARD(CShriekingDrakeCard);
		DEFINE_CARD(CSimoonCard);
		DEFINE_CARD(CSunClaspCard);
		DEFINE_CARD(CSuqAtaAssassinCard);
		DEFINE_CARD(CSuqAtaLancerCard);
		DEFINE_CARD(CTalruumChampionCard);
		DEFINE_CARD(CTarPitWarriorCard);
		DEFINE_CARD(CTeferisHonorGuardCard);
		DEFINE_CARD(CTempestDrakeCard);
		DEFINE_CARD(CTitheCard);
		DEFINE_CARD(CTinWingChimeraCard);
		DEFINE_CARD(CTriangleOfWarCard);
		DEFINE_CARD(CUndiscoveredParadiseCard);
		DEFINE_CARD(CUndoCard);
		DEFINE_CARD(CUrborgMindsuckerCard);
		DEFINE_CARD(CVampirismCard);
		DEFINE_CARD(CViashivanDragonCard);
		DEFINE_CARD(CWakeOfVulturesCard);
		DEFINE_CARD(CWaterspoutDjinnCard);
		DEFINE_CARD(CWickedRewardCard);
		DEFINE_CARD(CWindShearCard);
		DEFINE_CARD(CZhalfirinCrusaderCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CPhyrexianWalkerCard::CPhyrexianWalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Walker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("0"), Power(0), Life(3))
{
}

//____________________________________________________________________________
//
CRetributionOfTheMeekCard::CRetributionOfTheMeekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Retribution of the Meek"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new CreaturePowerComparer<std::greater<int>>(3), // no need to add a AnyCreatureComparer here - the power comparer will make sure that a card is a creature first
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFireblastCard::CFireblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fireblast"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFireblastCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CFireblastCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CImpulseCard::CImpulseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Impulse"), CardType::Instant, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			4));

	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLightningCloudCard::CLightningCloudCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lightning Cloud"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetResolutionCost(RED_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkuDjinnCard::CAkuDjinnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aku Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmyAntsCard::CArmyAntsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Army Ants"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBullElephantCard::CBullElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bull Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(2, 2);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFemerefEnchantressCard::CFemerefEnchantressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Femeref Enchantress"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFreewindFalconCard::CFreewindFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Freewind Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CGoblinSwineRiderCard::CGoblinSwineRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Swine-Rider"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new AttackingCreatureComparer);//"to each attacking creature...
	m_CardFilter.AddChildFilter(new CCardFilter(new BlockingCreatureComparer));//...and each blocking creature"

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJamuraanLionCard::CJamuraanLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jamuraan Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeeperOfKookusCard::CKeeperOfKookusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keeper of Kookus"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRagingGorillaCard::CRagingGorillaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raging Gorilla"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScalebanesEliteCard::CScalebanesEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scalebane's Elite"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CShriekingDrakeCard::CShriekingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shrieking Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTarPitWarriorCard::CTarPitWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tar Pit Warrior"), CardType::Creature, CREATURE_TYPE2(Cyclops, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(4))
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
CTempestDrakeCard::CTempestDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tempest Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CUrborgMindsuckerCard::CUrborgMindsuckerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Mindsucker"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetAtRandom();

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashivanDragonCard::CViashivanDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Viashivan Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWakeOfVulturesCard::CWakeOfVulturesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wake of Vultures"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("1") BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWaterspoutDjinnCard::CWaterspoutDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Waterspout Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, GetController()));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrassTalonChimeraCard::CBrassTalonChimeraCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Brass-Talon Chimera"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			FALSE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Chimera), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+2/+2"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIronHeartChimeraCard::CIronHeartChimeraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iron-Heart Chimera"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("4"), Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Vigilance, CreatureKeyword::Null,
			FALSE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Chimera), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+2/+2"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeadBellyChimeraCard::CLeadBellyChimeraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lead-Belly Chimera"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("4"), Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			FALSE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Chimera), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+2/+2"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTinWingChimeraCard::CTinWingChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tin-Wing Chimera"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			FALSE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Chimera), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+2/+2"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoralAtollCard::CCoralAtollCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Coral Atoll"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDormantVolcanoCard::CDormantVolcanoCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dormant Volcano"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEvergladesCard::CEvergladesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Everglades"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJungleBasinCard::CJungleBasinCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Jungle Basin"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKarooCard::CKarooCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Karoo"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1") WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Plains, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBetrayalCard::CBetrayalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Betrayal"), CardType::EnchantCreature, nID)
{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBetrayalCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));

		AddSpell(cpSpell.GetPointer());
	}

counted_ptr<CAbility> CBetrayalCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRighteousAuraCard::CRighteousAuraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Righteous Aura"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources, TRUE));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRighteousWarCard::CRighteousWarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Righteous War"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmeraldCharmCard::CEmeraldCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Emerald Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				FALSE, TRUE, //only untap
				new TrueCardComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::GlobalEnchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFuneralCharmCard::CFuneralCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Funeral Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				Power(+2), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Swampwalk, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHearthCharmCard::CHearthCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hearth Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new CardTypeComparer(CardType::_ArtifactCreature, true),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AttackingCreatureComparer,
				Power(+1), Life(+0)));

		cpSpell->SetAbilityText(_T("Attacking creatures get +1/+0 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreaturePowerComparer<std::less<int>>(3)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHopeCharmCard::CHopeCharmCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hope Charm"), CardType::Instant, nID, AbilityType::Instant, 
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+2), PreventableType::NotPreventable)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Aura, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSimoonCard::CSimoonCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Simoon"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT GREEN_MANA_TEXT,
		Life(-1),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetAffectOpponentCardsOnly();
}

//____________________________________________________________________________
//
CWickedRewardCard::CWickedRewardCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wicked Reward"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT,
		Power(+4), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CWindShearCard::CWindShearCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wind Shear"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(-2), Life(-2)));

	cpSpell->GetEnchantmentCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpSpell->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
	cpSpell->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUndoCard::CUndoCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Undo"), CardType::Sorcery, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CTalruumChampionCard::CTalruumChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talruum Champion"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTalruumChampionCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CTalruumChampionCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CDiamondKaleidoscopeCard::CDiamondKaleidoscopeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Diamond Kaleidoscope"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Prism"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Prism), false));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Prism), false));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Prism), false));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Prism), false));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Prism), false));

		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMortalWoundCard::CMortalWoundCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mortal Wound"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CMortalWoundCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CMortalWoundCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
						   CWhenDamageDealt::CreatureEventCallback, 
						   &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMortalWoundCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CMortalWoundCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = (CCard*)pToCreature;
	return true;
}

//____________________________________________________________________________
//
CRockSlideCard::CRockSlideCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Rock Slide"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CManOWarCard::CManOWarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Man-o'-War"), CardType::Creature, CREATURE_TYPE(Jellyfish), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CNaturalOrderCard::CNaturalOrderCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Natural Order"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("green creatures")), 
		ZoneId::Battlefield, FALSE, FALSE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("green creatures")));
}

//____________________________________________________________________________
//
CVampirismCard::CVampirismCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vampirism"), CardType::EnchantCreature, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(-1), Life(-1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CVampirismCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard,
				CAbilityEnchant::PostEnchantCallback(this,
					&CVampirismCard::PostEnchant)));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CVampirismCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new NegateCardComparer(new SpecificCardComparer(this)), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CVampirismCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CFeralInstinctCard::CFeralInstinctCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Feral Instinct"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CMiraculousRecoveryCard::CMiraculousRecoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Miraculous Recovery"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMiraculousRecoveryCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("4") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->FlagTargets(TRUE,  // flag targets
						TRUE); // until end of turn

	m_CardFilter.AddComparer(new CardAbilityFlagComparer(cpSpell.GetPointer())); // flagged by this spell

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMiraculousRecoveryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter, // do something with the flagged card
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

	pModifier.ApplyTo(cont);
}

//____________________________________________________________________________
//
CPillarTombsOfAkuCard::CPillarTombsOfAkuCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pillar Tombs of Aku"), CardType::_WorldEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuirionRangerCard::CQuirionRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Ranger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFloodedShorelineCard::CFloodedShorelineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flooded Shoreline"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddReturnFromPlayCardCost(2, CCardFilter::GetFilter(_T("Islands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnvilOfBogardanCard::CAnvilOfBogardanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Anvil of Bogardan"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAnvilOfBogardanCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnvilOfBogardanCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	pModifier.ApplyTo(pAction->GetTriggeredPlayer());

	return true;
}

//____________________________________________________________________________
//
CBlanketOfNightCard::CBlanketOfNightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blanket of Night"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				CardType::Swamp, CardType::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CBlanketOfNightCard::CreateAbility)));	

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CBlanketOfNightCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLACK_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CBogardanPhoenixCard::CBogardanPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bogardan Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCounterContainer()->ScheduleCounter(DEATH_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBogardanPhoenixCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBogardanPhoenixCard::SetTriggerContext2));
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEATH_COUNTER, +1));
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

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBogardanPhoenixCard::SetTriggerContext3));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBogardanPhoenixCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(DEATH_COUNTER)->GetCount();
	return ((GetCardKeyword()->CantBeCountered() == FALSE) && (nCounterCount == 0));
}

bool CBogardanPhoenixCard::SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

bool CBogardanPhoenixCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(DEATH_COUNTER)->GetCount();
	return (nCounterCount >= 1);
}

//____________________________________________________________________________
//
CBroodOfCockroachesCard::CBroodOfCockroachesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brood of Cockroaches"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndStep);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	CLifeModifier* pModifier = new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage); // lost of life, not preventable

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChronatogCard::CChronatogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chronatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""),
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpAbility->SetAffectOpponentsOnly();

	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->SetAbilityText(_T("This creature gets +3/+3 until end of turn. You skip your next turn. Activates"));

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+3), TRUE));
	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGriffinCanyonCard::CGriffinCanyonCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Griffin Canyon"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CreatureTypeComparer(CREATURE_TYPE(Griffin), false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1), TRUE));
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CKaerveksSpiteCard::CKaerveksSpiteCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Kaervek's Spite"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(SpecialNumber::All, CCardFilter::GetFilter(_T("cards")));
	m_pTargetChgLifeSpell->GetCost().AddDiscardCardCost(SpecialNumber::All, &m_CardFilter);
}

//____________________________________________________________________________
//
CFallenAskariCard::CFallenAskariCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fallen Askari"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE);

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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFallenAskariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFallenAskariCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSuqAtaLancerCard::CSuqAtaLancerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Suq'Ata Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuqAtaLancerCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSuqAtaLancerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CZhalfirinCrusaderCard::CZhalfirinCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhalfirin Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZhalfirinCrusaderCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				SourceColor::Null, TRUE));

		cpAbility->SetRedirectValue(Life(1));

		AddAbility(cpAbility.GetPointer()); 
	}
}

bool CZhalfirinCrusaderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
COvinomancerCard::COvinomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ovinomancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(1))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(3, 3);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::BasicLand, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddReturnThisCardCost(this);

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Sheep"), TOKEN_ID_BY_NAME, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddReturnThisCardCost(this);

		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Sheep"), TOKEN_ID_BY_NAME, 1, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHelmOfAwakeningCard::CHelmOfAwakeningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helm of Awakening"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new TrueCardComparer,
			_T("1")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunClaspCard::CSunClaspCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sun Clasp"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+3))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSunClaspCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSunClaspCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(pCard,
			WHITE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiantCaterpillarCard::CGiantCaterpillarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Caterpillar"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CGiantCaterpillarCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			GREEN_MANA_TEXT));

	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGiantCaterpillarCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CScheduledPlayerModifier pModifier = CScheduledPlayerModifier(GetGame(),
		new CTokenCreationModifier(GetGame(), _T("Butterfly"), TOKEN_ID_BY_NAME, 1),
		TurnNumberDelta(-1),
		NodeId::EndStep,
		CScheduledPlayerModifier::Operation::ApplyToLater);

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CSuqAtaAssassinCard::CSuqAtaAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Suq'Ata Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetPoisonCount(1);
	cpAbility->SetReplacePoisonCount(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuqAtaAssassinCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CSuqAtaAssassinCard::SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CJujuBubbleCard::CJujuBubbleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Juju Bubble"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CJujuBubbleCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	//Sac it by played spells
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	//Sac it by play lands
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	//Gain 2 life
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("2"),
				Life(+1), PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	//Cumulative upkeep
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
void CJujuBubbleCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CFirestormHellkiteCard::CFirestormHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Firestorm Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLUE_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CFirestormHellkiteCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	GetCreatureKeyword()->AddTrample(FALSE);
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
void CFirestormHellkiteCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Blue, 0);
	mCost.AddCost(CManaCost::Color::Red, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Blue, n_value);
		mCost.AddCost(CManaCost::Color::Red, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CMagmaMineCard::CMagmaMineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magma Mine"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(PRESSURE_COUNTER, +1));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpellCounter>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpellCounter>>(this,
			_T(""),
				new AnyCreatureComparer, TRUE, 
				PreventableType::Preventable, PRESSURE_COUNTER, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarkPrivilegeCard::CDarkPrivilegeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dark Privilege"), nID, 
		_T("1") BLACK_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CDarkPrivilegeCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CDarkPrivilegeCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T(""),
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUndiscoveredParadiseCard::CUndiscoveredParadiseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Undiscovered Paradise"), nID)
	, m_cpEventListenerW(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CUndiscoveredParadiseCard::OnResolutionCompleted))
	, m_cpEventListenerU(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CUndiscoveredParadiseCard::OnResolutionCompleted))
	, m_cpEventListenerB(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CUndiscoveredParadiseCard::OnResolutionCompleted))
	, m_cpEventListenerR(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CUndiscoveredParadiseCard::OnResolutionCompleted))
	, m_cpEventListenerG(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CUndiscoveredParadiseCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListenerW.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListenerU.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListenerB.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListenerR.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListenerG.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

void CUndiscoveredParadiseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE);
	CScheduledCardModifier modifier2 = CScheduledCardModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::UntapStep, true,
		CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::CustomPlayerTurn, GetController());

	if (bResult) modifier2.ApplyTo(this);
}

//____________________________________________________________________________
//
CKookusCard::CKookusCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kookus"), CardType::_LegendaryCreature, CREATURE_TYPE(Djinn), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(5),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
	m_CardFilter.AddComparer(new CardNameComparer(_T("Keeper of Kookus")));

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKookusCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKookusCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
	}
}

bool CKookusCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CKookusCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CKyscuDrakeCard::CKyscuDrakeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kyscu Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT,
		Power(+0), Life(+1))
	, m_CardFilter1(_T("a card named Viashivan Dragon"), _T("cards named Viashivan Dragon"), new CardNameComparer(_T("Viashivan Dragon")))
	, m_CardFilter2(_T("a card named Spitting Drake"), _T("cards named Spitting Drake"), new CardNameComparer(_T("Spitting Drake")))
{
	m_pPumpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
	GetCreatureKeyword()->AddFlying(false);

	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter1, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));
		ATLASSERT(cpAbility);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCityOfSolitudeCard::CCityOfSolitudeCard(CGame* pGame, UINT nID)
	:  CInPlaySpellCard(pGame, _T("City of Solitude"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, true,
			(int)CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CCityOfSolitudeCard::SetTriggerContext1));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CCityOfSolitudeCard::SetTriggerContext2));

		m_pTriggeredAbility2 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility2);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));
				
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, true,
			(int)CCardFilter::GetFilter(_T("cards")));
		
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));
		
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, true,
			(int)CCardFilter::GetFilter(_T("cards")));
	
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCityOfSolitudeCard::SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility1->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return true;
}
bool CCityOfSolitudeCard::SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility2->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return true;
}

//____________________________________________________________________________
//
CDeathWatchCard::CDeathWatchCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Death Watch"), CardType::EnchantCreature, nID,
		BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathWatchCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathWatchCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDeathWatchCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

bool CDeathWatchCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(Life(GET_INTEGER(-triggerContext.m_pCreature->GetLastKnownPower())));

	CLifeModifier modifier(triggerContext.m_pCreature->GetLastKnownToughness(), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(pAction->GetController());

	triggerContext.m_pCreature = NULL;
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CElephantGrassCard::CElephantGrassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elephant Grass"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CElephantGrassCard::OnCounterMoved))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		counted_ptr<CCanBeAttackedByEnchantment> cpAbility( 
			::CreateObject<CCanBeAttackedByEnchantment>(this, 
				CCardFilter::GetFilter(_T("black creatures"))));

		cpAbility->SetAffectOpponentCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("2")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

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
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CElephantGrassCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CBreezekeeperCard::CBreezekeeperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Breezekeeper"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddPhasing(FALSE);
}

//____________________________________________________________________________
//
CRainbowEfreetCard::CRainbowEfreetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rainbow Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CGenericSpell>>(this,
		BLUE_MANA_TEXT BLUE_MANA_TEXT));

	CCardFlagModifier* m_CardFlagModifier = new CCardFlagModifier();
	m_CardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
	m_CardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing));
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(m_CardFlagModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTeferisHonorGuardCard::CTeferisHonorGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teferi's Honor Guard"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT));

	CCardFlagModifier* m_CardFlagModifier = new CCardFlagModifier();
	m_CardFlagModifier->GetModifier().SetToAdd(CardFlag::PhaseFlag);
	m_CardFlagModifier->GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier->GetModifier().SetAdditionData(GetInstanceID());
	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing));
	cpAbility->GetResolutionModifier().CCardModifiers::Add(m_CardFlagModifier);

	cpAbility->SetAbilityText(_T("Flanking ability"));
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTriangleOfWarCard::CTriangleOfWarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Triangle of War"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTriangleOfWarSpell>> cpAbility(
		::CreateObject <CActivatedAbility<CTriangleOfWarSpell>>(this,
			_T("2")));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

CTriangleOfWarCard::CTriangleOfWarSpell::CTriangleOfWarSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CTriangleOfWarCard::CTriangleOfWarSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || !pContainer2.GetSize()) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	const CCreatureCard* pCreature2 = dynamic_cast<const CCreatureCard*>(pContainer2.GetAt(0));
	if (!pCreature2) return;

	CFightsModifier modifier(const_cast<CCreatureCard*>(pCreature2));
	modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
}

//____________________________________________________________________________
//
CForbiddenRitualCard::CForbiddenRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forbidden Ritual"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForbiddenRitualCard::OnPunisherSelected))
	, m_ContinueSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForbiddenRitualCard::OnContinueSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForbiddenRitualCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CForbiddenRitualCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CPlayer* pController = GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Sacrifice, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
		pModifier.ApplyTo(pController);

		PunisherChoice(pTarget);
	}

	return true;
}

void CForbiddenRitualCard::PunisherChoice(CPlayer* pTarget)
{
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Lose 2 life"));

		entries.push_back(selectionEntry);
	}
	if (CCardFilter::GetFilter(_T("cards"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Sacrifice a permanent"));

		entries.push_back(selectionEntry);
	}
	if (CCardFilter::GetFilter(_T("cards"))->CountIncluded(pHand->GetCardContainer()) > 0)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Discard a card"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
}

void CForbiddenRitualCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s loses 2 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier.ApplyTo(pSelectionPlayer);

				ContinueChoice(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices a permanent"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
															CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier.ApplyTo(pSelectionPlayer);
				
				ContinueChoice(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s discards a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
															CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier.ApplyTo(pSelectionPlayer);
				
				ContinueChoice(pSelectionPlayer);

				return;
			}
		}
}

void CForbiddenRitualCard::ContinueChoice(CPlayer* pTarget)
{
	CPlayer* pController = GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Sacrifice another nontoken permanent"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Stop"));

			entries.push_back(selectionEntry);
		}
		m_ContinueSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}
}

void CForbiddenRitualCard::OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s sacrifices another nontoken permanent"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new TrueCardComparer);
				m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
															CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier.ApplyTo(pSelectionPlayer);

				PunisherChoice((CPlayer*)dwContext1);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops"), pSelectionPlayer->GetPlayerName());
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

//____________________________________________________________________________
//
CCorrosionCard::CCorrosionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Corrosion"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CCorrosionCard::OnCounterMoved))
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
		cpAbility->SetAbilityName(_T("Cumulative upkeep ability"));
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetAbilityName(_T("Rust counter ability"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorrosionCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorrosionCard::BeforeResolution2));
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

void CCorrosionCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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

bool CCorrosionCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CCardCounterModifier pModifier1 = CCardCounterModifier(RUST_COUNTER, +1);

	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsArtifact())
			pModifier1.ApplyTo(pCard);
	}
	
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pAction->GetController());

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard->GetCardType().IsArtifact() && (pCard->GetCounterContainer()->GetCounter(RUST_COUNTER)->GetCount() >= (int)pCard->GetConvertedManaCost()))
				pModifier2.ApplyTo(pCard);
		}
	}

	return true;
}

bool CCorrosionCard::BeforeResolution2(CAbilityAction* pAction) const
{
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	CCardCounterModifier pModifier = CCardCounterModifier(RUST_COUNTER, 0, true);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard->GetCounterContainer()->GetCounter(RUST_COUNTER)->GetCount() > 0)
				pModifier.ApplyTo(pCard);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CForeshadowCard::CForeshadowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Foreshadow"), CardType::Instant, nID)
{
	counted_ptr<CForeshadowSpell> cpSpell(
		::CreateObject<CForeshadowSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEyeOfSingularityCard::CEyeOfSingularityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eye of Singularity"), CardType::_WorldEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEyeOfSingularityCard::BeforeResolution1));		

		cpAbility->SetAbilityName(_T("Establish singularity"));
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CEyeOfSingularityCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CEyeOfSingularityCard::BeforeResolution2));

		cpAbility->SetAbilityName(_T("Sustain singularity"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CEyeOfSingularityCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCountedCardContainer pAllCards;
	CCountedCardContainer pToDestroy;

	pAllCards.RemoveAll();
	pToDestroy.RemoveAll();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			pAllCards.AddCard(pBattlefield->GetAt(i), CardPlacement::Top);
	}

	while (pAllCards.GetSize() > 0)
	{
		CCard* pCard = pAllCards.GetAt(0);

		bool bSecondFound = false;

		for (int i = pAllCards.GetSize() - 1; i >= 1; --i)
		{
			CCard* pSecondCard = pAllCards.GetAt(i);
			if (pSecondCard->GetPrintedCardName() == pCard->GetPrintedCardName())
			{
				bSecondFound = true;
				if (!(pSecondCard->GetCardType() & CardType::BasicLand).Any())
					pToDestroy.AddCard(pSecondCard, CardPlacement::Top);

				pAllCards.RemoveCard(pSecondCard);
			}
		}

		if (bSecondFound && !(pCard->GetCardType() & CardType::BasicLand).Any())
			pToDestroy.AddCard(pCard, CardPlacement::Top);

		pAllCards.RemoveCard(pCard);
	}

	if (pToDestroy.GetSize() > 0)
	{

		CCardFilter m_FinalFilter;
		m_FinalFilter.SetComparer(new ContainedinComparer(&pToDestroy));

		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_FinalFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration, pAction->GetController())));
		
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
	return true;
}

bool CEyeOfSingularityCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if ((pCard->GetCardType() & CardType::BasicLand).Any()) return false;
	triggerContext.m_pCard = pCard;
	return true;
}

bool CEyeOfSingularityCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const
{
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCard* pCard = triggerContext.m_pCard;

	CCardFilter m_FinalFilter;
	m_FinalFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));
	m_FinalFilter.AddNegateComparer(new SpecificCardComparer(pCard));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_FinalFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration, pAction->GetController())));
		
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return false;
}

//____________________________________________________________________________
//
CTitheCard::CTitheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tithe"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTitheCard::BeforeResolution));
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

bool CTitheCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pTarget->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > CCardFilter::GetFilter(_T("lands"))->CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer()))
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(2), pController, ZoneId::Library, CCardFilter::GetFilter(_T("Plains")));
		pModifier.ApplyTo(pController);
	}
	else
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController, ZoneId::Library, CCardFilter::GetFilter(_T("Plains")));
		pModifier.ApplyTo(pController);
	}
	return true;
}

//____________________________________________________________________________
//
CGuidingSpiritCard::CGuidingSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Guiding Spirit"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGuidingSpiritCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CGuidingSpiritCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pGraveyard = pTarget->GetZoneById(ZoneId::Graveyard);
	
	if (pGraveyard->GetSize() > 0)
	{
		CCard* pCard = pGraveyard->GetTopCard();

		if (pCard->GetCardType().IsCreature())
		{
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others, pAction->GetController());
			pModifier.ApplyTo(pCard);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CQuirionDruidCard::CQuirionDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Druid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuirionDruidCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CQuirionDruidCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Animated Land G"), 64052, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//