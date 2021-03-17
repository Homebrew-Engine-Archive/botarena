#include "stdafx.h"
#include "CardAntiquities.h"

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

		DEFINE_CARD(CArgivianArchaeologistCard);
		DEFINE_CARD(CArgivianBlacksmithCard);
		DEFINE_CARD(CArtifactBlastCard);
		DEFINE_CARD(CCandelabraOfTawnosCard);
		DEFINE_CARD(CCitanulDruidCard);
		DEFINE_CARD(CDampingFieldCard);
		DEFINE_CARD(CGaeasAvengerCard);
		DEFINE_CARD(CGateToPhyrexiaCard);
		DEFINE_CARD(CMightstoneCard);
		DEFINE_CARD(COrcishMechanicsCard);
		DEFINE_CARD(CRakaliteCard);
		DEFINE_CARD(CStaffOfZegonCard);
		DEFINE_CARD(CSuChiCard);
		DEFINE_CARD(CTabletOfEpityrCard);
		DEFINE_CARD(CUrzasChaliceCard);
		DEFINE_CARD(CWeakstoneCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CArgivianArchaeologistCard::CArgivianArchaeologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argivian Archaeologist"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStaffOfZegonCard::CStaffOfZegonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff Of Zegon"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(-2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeakstoneCard::CWeakstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Weakstone"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(-1), Life(+0)));

	cpAbility->SetToAttackingOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMightstoneCard::CMightstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mightstone"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(+0)));

	cpAbility->SetToAttackingOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArgivianBlacksmithCard::CArgivianBlacksmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argivian Blacksmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_ArtifactCreature, true), FALSE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArtifactBlastCard::CArtifactBlastCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Artifact Blast"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false))
{
}

//____________________________________________________________________________
//
CCitanulDruidCard::CCitanulDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Citanul Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(
		CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	//cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	//cpAbility->GetLifeModifier().SetToBase(TRUE);
	//cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
	//cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	//cpAbility->GetPowerModifier().SetToBase(TRUE);
	//cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGateToPhyrexiaCard::CGateToPhyrexiaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gate to Phyrexia"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);
	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrcishMechanicsCard::COrcishMechanicsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Mechanics"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTabletOfEpityrCard::CTabletOfEpityrCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tablet of Epityr"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->SetCreateAbilityCallback(CCreateTempTriggeredAbilityAbility::CreateAbilityCallback(this,
		&CTabletOfEpityrCard::CreateTemporaryAbility));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CTabletOfEpityrCard::CreateTemporaryAbility()
{
	return
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+1), PreventableType::NotPreventable).GetPointer();
}

//____________________________________________________________________________
//
CUrzasChaliceCard::CUrzasChaliceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Urza's Chalice"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCandelabraOfTawnosCard::CCandelabraOfTawnosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Candelabra of Tawnos"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,	// Tap, Untap
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSuChiCard::CSuChiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Su-Chi"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("4"))));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGaeasAvengerCard::CGaeasAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gaea's Avenger"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false))); //"artifacts"

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDampingFieldCard::CDampingFieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Damping Field"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::UntapLimit, 1));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgUntapCardTypeWhenNodeChangedAbility> cpAbility(
			::CreateObject<CTriggeredChgUntapCardTypeWhenNodeChangedAbility>(this));

		cpAbility->SetOptionalType(CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OptionalType::Required);
		cpAbility->AddCardTypeSelection(CardType::Artifact, _T("artifact"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));	

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::NoUntapInUntapPhase, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRakaliteCard::CRakaliteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rakalite"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(pGame, new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others),
		TurnNumberDelta(-1),
		NodeId::EndStep,
		true, // in-play only
		CScheduledCardModifier::Operation::ApplyToLater));
	
	AddAbility(cpAbility.GetPointer()); 
}



