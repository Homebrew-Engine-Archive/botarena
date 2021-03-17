#include "stdafx.h"
#include "CardApocalypse.h"

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

		DEFINE_CARD(CAEtherMutationCard);
		DEFINE_CARD(CAnaDiscipleCard);
		DEFINE_CARD(CAnaSanctuaryCard);
		DEFINE_CARD(CAnavolverCard);
		DEFINE_CARD(CAngelfireCrusaderCard);
		DEFINE_CARD(CBloodfireDwarfCard);
		DEFINE_CARD(CBloodfireInfusionCard);
		DEFINE_CARD(CBloodfireKavuCard);
		DEFINE_CARD(CBogGnarrCard);
		DEFINE_CARD(CCetaDiscipleCard);
		DEFINE_CARD(CCetaSanctuaryCard);
		DEFINE_CARD(CCetavolverCard);
		DEFINE_CARD(CCoastalDrakeCard);
		DEFINE_CARD(CConsumeStrengthCard);
		DEFINE_CARD(CCromatCard);
		DEFINE_CARD(CDeadRingersCard);
		DEFINE_CARD(CDeathGraspCard);
		DEFINE_CARD(CDeathMutationCard);
		DEFINE_CARD(CDegaDiscipleCard);
		DEFINE_CARD(CDegaSanctuaryCard);
		DEFINE_CARD(CDegavolverCard);
		DEFINE_CARD(CDesolationAngelCard);
		DEFINE_CARD(CDesolationGiantCard);
		DEFINE_CARD(CDiversionaryTacticsCard);
		DEFINE_CARD(CDivineLightCard);
		DEFINE_CARD(CDodecapodCard);
		DEFINE_CARD(CDragonArchCard);
		DEFINE_CARD(CDwarvenLandslideCard);
		DEFINE_CARD(CDwarvenPatrolCard);
		DEFINE_CARD(CEbonyTreefolkCard);
		DEFINE_CARD(CEnlistmentOfficerCard);
		DEFINE_CARD(CEvasiveActionCard);
		DEFINE_CARD(CFerventChargeCard);
		DEFINE_CARD(CFireIceCard);
		DEFINE_CARD(CFlowstoneChargerCard);
		DEFINE_CARD(CFoulPresenceCard);
		DEFINE_CARD(CFungalShamblerCard);
		DEFINE_CARD(CGaeasBalanceCard);
		DEFINE_CARD(CGaeasSkyfolkCard);
		DEFINE_CARD(CGerrardCapashenCard);
		DEFINE_CARD(CGerrardsVerdictCard);
		DEFINE_CARD(CGladeGnarrCard);
		DEFINE_CARD(CGoblinLegionnaireCard);
		DEFINE_CARD(CGoblinRingleaderCard);
		DEFINE_CARD(CGoblinTrenchesCard);
		DEFINE_CARD(CGraveDefilerCard);
		DEFINE_CARD(CHauntedAngelCard);
		DEFINE_CARD(CHelionautCard);
		DEFINE_CARD(CIlluminateCard);
		DEFINE_CARD(CIllusionRealityCard);
		DEFINE_CARD(CJadedResponseCard);
		DEFINE_CARD(CJiltCard);
		DEFINE_CARD(CJungleBarrierCard);
		DEFINE_CARD(CKavuGliderCard);
		DEFINE_CARD(CKavuHowlerCard);
		DEFINE_CARD(CKavuMaulerCard);
		DEFINE_CARD(CLastCaressCard);
		DEFINE_CARD(CLastStandCard);
		DEFINE_CARD(CLayOfTheLandCard);
		DEFINE_CARD(CLifeDeathCard);
		DEFINE_CARD(CLightningAngelCard);
		DEFINE_CARD(CLivingAirshipCard);
		DEFINE_CARD(CLlanowarDeadCard);
		DEFINE_CARD(CManaclesOfDecayCard);
		DEFINE_CARD(CMartyrsTombCard);
		DEFINE_CARD(CMaskOfIntoleranceCard);
		DEFINE_CARD(CMindExtractionCard);
		DEFINE_CARD(CMinotaurIllusionistCard);
		DEFINE_CARD(CMinotaurTacticianCard);
		DEFINE_CARD(CMournfulZombieCard);
		DEFINE_CARD(CMysticSnakeCard);
		DEFINE_CARD(CNecraDiscipleCard);
		DEFINE_CARD(CNecraSanctuaryCard);
		DEFINE_CARD(CNecravolverCard);
		DEFINE_CARD(CNightDayCard);
		DEFINE_CARD(COrderChaosCard);
		DEFINE_CARD(COrimsThunderCard);
		DEFINE_CARD(COvergrownEstateCard);
		DEFINE_CARD(CPenumbraBobcatCard);
		DEFINE_CARD(CPenumbraKavuCard);
		DEFINE_CARD(CPenumbraWurmCard);
		DEFINE_CARD(CPerniciousDeedCard);
		DEFINE_CARD(CPlanarDespairCard);
		DEFINE_CARD(CPowerstoneMinefieldCard);
		DEFINE_CARD(CPropheticBoltCard);
		DEFINE_CARD(CPutridWarriorCard);
		DEFINE_CARD(CQuagmireDruidCard);
		DEFINE_CARD(CQuicksilverDaggerCard);
		DEFINE_CARD(CRakaDiscipleCard);
		DEFINE_CARD(CRakaSanctuaryCard);
		DEFINE_CARD(CRakavolverCard);
		DEFINE_CARD(CRazorfinHunterCard);
		DEFINE_CARD(CReefShamanCard);
		DEFINE_CARD(CSavageGorillaCard);
		DEFINE_CARD(CShieldOfDutyAndReasonCard);
		DEFINE_CARD(CShimmeringMirageCard);
		DEFINE_CARD(CSoulLinkCard);
		DEFINE_CARD(CSpectralLynxCard);
		DEFINE_CARD(CSpiritmongerCard);
		DEFINE_CARD(CSqueesEmbraceCard);
		DEFINE_CARD(CSqueesRevengeCard);
		DEFINE_CARD(CStrengthOfNightCard);
		DEFINE_CARD(CSuffocatingBlastCard);
		DEFINE_CARD(CSylvanMessengerCard);
		DEFINE_CARD(CSymbioticDeploymentCard);
		DEFINE_CARD(CTahngarthsGlareCard);
		DEFINE_CARD(CTemporalSpringCard);
		DEFINE_CARD(CTidalCourierCard);
		DEFINE_CARD(CTranquilPathCard);
		DEFINE_CARD(CTundraKavuCard);
		DEFINE_CARD(CUrborgElfCard);
		DEFINE_CARD(CUrborgUprisingCard);
		DEFINE_CARD(CVindicateCard);
		DEFINE_CARD(CWhirlpoolDrakeCard);
		DEFINE_CARD(CWhirlpoolRiderCard);
		DEFINE_CARD(CWhirlpoolWarriorCard);
		DEFINE_CARD(CWildResearchCard);
		DEFINE_CARD(CVodalianMysticCard);
		DEFINE_CARD(CYavimayasEmbraceCard);
		//DEFINE_CARD(CZombieBoaCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAngelfireCrusaderCard::CAngelfireCrusaderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Angelfire Crusader"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CFireIceCard::CFireIceCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fire // Ice"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetAbilityText(_T("Fire. Casts"));
	m_pTargetChgLifeSpell->SetAbilityName(_T("Fire"));

	//Above Fire
	{
		//Ice
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				TRUE, FALSE,	// Tap, Untap
				new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpSpell->SetAbilityText(_T("Ice. Casts"));
		cpSpell->SetAbilityName(_T("Ice"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlowstoneChargerCard::CFlowstoneChargerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flowstone Charger"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
{
	typedef
	TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
		CWhenSelfAttackedBlocked::AttackEventCallback,
		&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightningAngelCard::CLightningAngelCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lightning Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CSpiritmongerCard::CSpiritmongerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Spiritmonger"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6),
		BLACK_MANA_TEXT)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, 
								&CWhenSelfDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				GREEN_MANA_TEXT,
				new SpecificCardComparer(this)));

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSymbioticDeploymentCard::CSymbioticDeploymentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Symbiotic Deployment"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddTapCardCost(2, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTranquilPathCard::CTranquilPathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tranquil Path"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVindicateCard::CVindicateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vindicate"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Permanent, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CAnaDiscipleCard::CAnaDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ana Disciple"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(-2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodfireDwarfCard::CBloodfireDwarfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodfire Dwarf"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			RED_MANA_TEXT,
			Life(-1),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodfireKavuCard::CBloodfireKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodfire Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			RED_MANA_TEXT,
			Life(-2),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBogGnarrCard::CBogGnarrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Gnarr"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCetaDiscipleCard::CCetaDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ceta Disciple"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCoastalDrakeCard::CCoastalDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Coastal Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Kavu), false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDegaDiscipleCard::CDegaDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dega Disciple"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(-2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEbonyTreefolkCard::CEbonyTreefolkCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ebony Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CGaeasSkyfolkCard::CGaeasSkyfolkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gaea's Skyfolk"), CardType::Creature, CREATURE_TYPE2(Elf, Merfolk), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGladeGnarrCard::CGladeGnarrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glade Gnarr"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinLegionnaireCard::CGoblinLegionnaireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Legionnaire"), CardType::Creature, CREATURE_TYPE2(Goblin, Soldier), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(2), SourceColor::Null));
		
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CHelionautCard::CHelionautCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Helionaut"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
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
CJungleBarrierCard::CJungleBarrierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jungle Barrier"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);

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
CKavuGliderCard::CKavuGliderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Glider"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLivingAirshipCard::CLivingAirshipCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Living Airship"), CardType::Creature, CREATURE_TYPE(Metathran), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3),
		_T("2") GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CLlanowarDeadCard::CLlanowarDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Dead"), CardType::Creature, CREATURE_TYPE2(Zombie, Elf), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinotaurIllusionistCard::CMinotaurIllusionistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minotaur Illusionist"), CardType::Creature, CREATURE_TYPE2(Minotaur, Wizard), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMinotaurTacticianCard::CMinotaurTacticianCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Minotaur Tactician"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::White | CardType::Creature, true)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMournfulZombieCard::CMournfulZombieCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Mournful Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1),
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(+1),	// life delta
		PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CNecraDiscipleCard::CNecraDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necra Disciple"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));
		
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CQuagmireDruidCard::CQuagmireDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quagmire Druid"), CardType::Creature, CREATURE_TYPE2(Zombie, Druid), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRakaDiscipleCard::CRakaDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raka Disciple"), CardType::Creature, CREATURE_TYPE2(Minotaur, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));
		
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRazorfinHunterCard::CRazorfinHunterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Razorfin Hunter"), CardType::Creature, CREATURE_TYPE2(Merfolk, Goblin), nID,
		BLUE_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CReefShamanCard::CReefShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reef Shaman"), CardType::Creature, CREATURE_TYPE2(Merfolk, Shaman), nID,
		BLUE_MANA_TEXT, Power(0), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
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
CSavageGorillaCard::CSavageGorillaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savage Gorilla"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSpectralLynxCard::CSpectralLynxCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Spectral Lynx"), CardType::Creature, CREATURE_TYPE2(Cat, Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CTundraKavuCard::CTundraKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tundra Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Plains"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrborgElfCard::CUrborgElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDiversionaryTacticsCard::CDiversionaryTacticsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Diversionary Tactics"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetCost().AddTapCardCost(2, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFerventChargeCard::CFerventChargeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fervent Charge"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFerventChargeCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CFerventChargeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CMartyrsTombCard::CMartyrsTombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Martyrs' Tomb"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(1),
			SourceColor::Null));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COvergrownEstateCard::COvergrownEstateCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Overgrown Estate"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+3), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShieldOfDutyAndReasonCard::CShieldOfDutyAndReasonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shield of Duty and Reason"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromGreen | CardKeyword::ProtectionFromBlue));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHauntedAngelCard::CHauntedAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Haunted Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		//When <this> is put into a graveyard from the battlefield, exile <this>...
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

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//...and each other player puts a <token> onto the battlefield.
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetCreateTokenOption(TRUE, _T("Angel A"), 2781, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPenumbraBobcatCard::CPenumbraBobcatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Penumbra Bobcat"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Cat A"), 2782, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPenumbraKavuCard::CPenumbraKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Penumbra Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Kavu"), TOKEN_ID_BY_NAME, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPenumbraWurmCard::CPenumbraWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Penumbra Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Wurm A"), 2784, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinTrenchesCard::CGoblinTrenchesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Trenches"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2"),
			_T("Goblin Soldier B"), 62025,
			2));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenPatrolCard::CDwarvenPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Patrol"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(2))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-red cards")));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFungalShamblerCard::CFungalShamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fungal Shambler"), CardType::Creature, CREATURE_TYPE2(Fungus, Beast), nID,
		_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEnlistmentOfficerCard::CEnlistmentOfficerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Enlistment Officer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CEnlistmentOfficerCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CEnlistmentOfficerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Soldier) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CGoblinRingleaderCard::CGoblinRingleaderCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Ringleader"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGoblinRingleaderCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CGoblinRingleaderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Goblin) || pCreatureCard->GetCardKeyword()->HasChangeling())
				//pCard->Move(pHand, GetController(), MoveType::Others);
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CGraveDefilerCard::CGraveDefilerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Grave Defiler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1),
		_T("1") BLACK_MANA_TEXT)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGraveDefilerCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CGraveDefilerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Zombie) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CKavuHowlerCard::CKavuHowlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Howler"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CKavuHowlerCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CKavuHowlerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Kavu) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CSylvanMessengerCard::CSylvanMessengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Messenger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSylvanMessengerCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CSylvanMessengerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Elf) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CTidalCourierCard::CTidalCourierCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Tidal Courier"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(2),
		_T("3") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTidalCourierCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CTidalCourierCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Merfolk) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
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
CDragonArchCard::CDragonArchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon Arch"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	m_CardFilter.SetFilterName(_T("a multicolored creature"), _T("multicolored creatures"));
	m_CardFilter.AddComparer(new CardMulticoloredComparer);
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrderChaosCard::COrderChaosCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Order // Chaos"), CardType::Instant, nID)
{
	{
		//Chaos
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				PlayerEffectType::UnblockableCreatures, TRUE));

		cpSpell->SetAbilityText(_T("Chaos. Casts"));
		cpSpell->SetAbilityName(_T("Chaos"));
		AddSpell(cpSpell.GetPointer());
    }
	{
		//Order
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetAbilityText(_T("Order. Casts"));
		cpSpell->SetAbilityName(_T("Order"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNightDayCard::CNightDayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Night // Day"), CardType::Instant, nID)
{
	{
		//Night
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Night. Casts"));
		cpSpell->SetAbilityName(_T("Night"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Day
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNightDayCard::BeforeResolution));
		cpSpell->SetAbilityText(_T("Day. Casts"));
		cpSpell->SetAbilityName(_T("Day"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CNightDayCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZoneCreatureModifier pModifier1 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+1))));
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)));

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);


	return true;
}
//____________________________________________________________________________
//
CShimmeringMirageCard::CShimmeringMirageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shimmering Mirage"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));
	cpSpell->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));
	cpSpell->AddCardTypeToSelection(CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Mountain"));	
	cpSpell->AddCardTypeToSelection(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Plains"));
	cpSpell->AddCardTypeToSelection(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Swamp"));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDivineLightCard::CDivineLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divine Light"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenLandslideCard::CDwarvenLandslideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dwarven Landslide"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
    {
		//Kicker cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGaeasBalanceCard::CGaeasBalanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaea's Balance"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
			_T("3") GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("Forests")), 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpSpell->SetAbilityText(_T("Search your library for a land card of each basic land type. Casts"));

	cpSpell->GetCost().AddSacrificeCardCost(5, CCardFilter::GetFilter(_T("lands")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGaeasBalanceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGaeasBalanceCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Plains")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Islands")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier3 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Swamps")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier4 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Mountains")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, FALSE);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
	pModifier3.ApplyTo(GetController());
	pModifier4.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CLastCaressCard::CLastCaressCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Last Caress"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CLayOfTheLandCard::CLayOfTheLandCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Lay of the Land"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CPlanarDespairCard::CPlanarDespairCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Planar Despair"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlanarDespairCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPlanarDespairCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	if (nDomainCount > 0)
		{				
			CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);
			CZone* opponent = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(-nDomainCount), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(-nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			for (int i = 0; i < opponent->GetSize(); ++i)
				if (opponent->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)opponent->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)opponent->GetAt(i));
					}

			return true;
		}

	return true;
}

//____________________________________________________________________________
//
CTemporalSpringCard::CTemporalSpringCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Temporal Spring"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CUrborgUprisingCard::CUrborgUprisingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Urborg Uprising"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CDesolationAngelCard::CDesolationAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Desolation Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
		, m_KickerCost(WHITE_MANA_TEXT WHITE_MANA_TEXT)
		/* , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDesolationAngelCard::OnResolutionCompleted)) */
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								   CWhenSelfInplay::EventCallback,
								   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDesolationAngelCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								   CWhenSelfInplay::EventCallback,
								   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDesolationAngelCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CDesolationAngelCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	return (!GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

bool CDesolationAngelCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

/* void CDesolationAngelCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
	{
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

		pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
} */

//____________________________________________________________________________
//
CDesolationGiantCard::CDesolationGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Desolation Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
		, m_KickerCost(WHITE_MANA_TEXT WHITE_MANA_TEXT)
		/* , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDesolationGiantCard::OnResolutionCompleted)) */
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								   CWhenSelfInplay::EventCallback,
								   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDesolationGiantCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
		{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								   CWhenSelfInplay::EventCallback,
								   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDesolationGiantCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CDesolationGiantCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	return (!GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

bool CDesolationGiantCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

/* void CDesolationGiantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
	{
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

		pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
} */

//____________________________________________________________________________
//
CQuicksilverDaggerCard::CQuicksilverDaggerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Quicksilver Dagger"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CQuicksilverDaggerCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CQuicksilverDaggerCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpEnchantAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	cpEnchantAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSuffocatingBlastCard::CSuffocatingBlastCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Suffocating Blast"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStrengthOfNightCard::CStrengthOfNightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strength of Night"), CardType::Instant, nID)
		, m_KickerCost(BLACK_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CStrengthOfNightCard::OnResolutionCompleted))
		, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CStrengthOfNightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
	{
		CZoneCreatureModifier pModifier1 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+2))));
		CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable)));

		pModifier1.ApplyTo(pAbilityAction->GetController());
		pModifier2.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CKavuMaulerCard::CKavuMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Mauler"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a Kavu"), _T("Kavus"), new CreatureTypeComparer(CREATURE_TYPE(Kavu), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Kavu"), _T("other attacking Kavus"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKavuMaulerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKavuMaulerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CDegavolverCard::CDegavolverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Degavolver"), CardType::Creature, CREATURE_TYPE(Volver), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
	, m_KickerCost1(_T("1") BLACK_MANA_TEXT)
	, m_KickerCost2(RED_MANA_TEXT)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDegavolverCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CDegavolverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier modifierCounter(_T("+1/+1"), +1);
		
		CCreatureKeywordModifier modifierUp(CreatureKeyword::FirstStrike, true, false);

		CCardAbilityModifier modifierRegen = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDegavolverCard::CreateRegenerationAbility));

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1)) // kicked?
		{
			modifierCounter.ApplyTo(this);
			modifierCounter.ApplyTo(this);
			modifierRegen.ApplyTo(this);
		}
		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2)) // kicked?
		{
			modifierCounter.ApplyTo(this);
			modifierUp.ApplyTo(this);
		}
	}
}

counted_ptr<CAbility> CDegavolverCard::CreateRegenerationAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, _T("")));
	cpAbility->AddPayLifeDeltaCost(Life(-3));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRakavolverCard::CRakavolverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakavolver"), CardType::Creature, CREATURE_TYPE(Volver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_KickerCost1(_T("1") WHITE_MANA_TEXT)
	, m_KickerCost2(BLUE_MANA_TEXT)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRakavolverCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CRakavolverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier counter = CCardCounterModifier(_T("+1/+1"), +1);
		
		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		CCardAbilityModifier pModifier_Lifelink = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CRakavolverCard::CreateLifelinkAbility1));

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1)) // kicked?
		{
			counter.ApplyTo(this); counter.ApplyTo(this); pModifier_Lifelink.ApplyTo(this);
		}
		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2)) // kicked?
		{
			counter.ApplyTo(this); pmodifierUp->ApplyTo(this);
		}
	}
}

counted_ptr<CAbility> CRakavolverCard::CreateLifelinkAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRakavolverCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CRakavolverCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CAnavolverCard::CAnavolverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anavolver"), CardType::Creature, CREATURE_TYPE(Volver), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_KickerCost1(_T("1") BLUE_MANA_TEXT)
	, m_KickerCost2(BLACK_MANA_TEXT)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAnavolverCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CAnavolverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier counter = CCardCounterModifier(_T("+1/+1"), +1);
		
		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		CCardAbilityModifier pModifier_Regen = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CAnavolverCard::CreateRegenerationAbility1));

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1)) // kicked?
		{
			counter.ApplyTo(this); counter.ApplyTo(this); pmodifierUp->ApplyTo(this);
		}
		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2)) // kicked?
		{
			counter.ApplyTo(this); pModifier_Regen.ApplyTo(this);
		}
	}
}

counted_ptr<CAbility> CAnavolverCard::CreateRegenerationAbility1(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, _T("")));
	cpAbility->AddPayLifeDeltaCost(Life(-3));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCetavolverCard::CCetavolverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cetavolver"), CardType::Creature, CREATURE_TYPE(Volver), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_KickerCost1(_T("1") RED_MANA_TEXT)
	, m_KickerCost2(GREEN_MANA_TEXT)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCetavolverCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CCetavolverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier counter = CCardCounterModifier(_T("+1/+1"), +1);
		
		CCreatureKeywordModifier* pmodifierUp1 = new CCreatureKeywordModifier;
		pmodifierUp1->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pmodifierUp1->GetModifier().SetOneTurnOnly(FALSE);
		
		CCreatureKeywordModifier* pmodifierUp2 = new CCreatureKeywordModifier;
		pmodifierUp2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pmodifierUp2->GetModifier().SetOneTurnOnly(FALSE);

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1)) // kicked?
		{
			counter.ApplyTo(this); counter.ApplyTo(this); pmodifierUp1->ApplyTo(this);
		}
		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2)) // kicked?
		{
			counter.ApplyTo(this); pmodifierUp2->ApplyTo(this);
		}
	}
}

//____________________________________________________________________________
//
CNecravolverCard::CNecravolverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necravolver"), CardType::Creature, CREATURE_TYPE(Volver), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_KickerCost1(_T("1") GREEN_MANA_TEXT)
	, m_KickerCost2(WHITE_MANA_TEXT)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CNecravolverCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CNecravolverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier counter = CCardCounterModifier(_T("+1/+1"), +1);
		
		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		CCardAbilityModifier pModifier_Lifelink = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CNecravolverCard::CreateLifelinkAbility1));

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1)) // kicked?
		{
			counter.ApplyTo(this); counter.ApplyTo(this); pmodifierUp->ApplyTo(this);
		}
		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2)) // kicked?
		{
			counter.ApplyTo(this); pModifier_Lifelink.ApplyTo(this);
		}
	}
}

counted_ptr<CAbility> CNecravolverCard::CreateLifelinkAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecravolverCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CNecravolverCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CDeathGraspCard::CDeathGraspCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Death Grasp"), CardType::Sorcery, nID, AbilityType::Sorcery,
		WHITE_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(0),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();

	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::LifeGain);
}

//____________________________________________________________________________
//
CAEtherMutationCard::CAEtherMutationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Æther Mutation"), CardType::Sorcery, nID,
		_T("3") BLUE_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAEtherMutationCard::BeforeResolution));
}

bool CAEtherMutationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(),
		_T("Saproling F"), // token name
		2920, //token id
		converted // number of tokens
		// put here True to add tokens to player's opponent
		);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CDeathMutationCard::CDeathMutationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death Mutation"), CardType::Sorcery, nID,
		_T("6") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDeathMutationCard::BeforeResolution));
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));	// Exclude black cards
}

bool CDeathMutationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(),
		_T("Saproling F"), // token name
		2920, //token id
		converted // number of tokens
		// put here True to add tokens to player's opponent
		);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CFoulPresenceCard::CFoulPresenceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Foul Presence"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(-1), Life(-1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFoulPresenceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CFoulPresenceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			_T(""),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMysticSnakeCard::CMysticSnakeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Snake"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))

	/*, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CMysticSnakeCard::OnResolutionCompleted1))*/
{
	GetCardKeyword()->AddFlash(FALSE);
	
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionCost(_T(""));
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Stack);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGerrardCapashenCard::CGerrardCapashenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gerrard Capashen"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGerrardCapashenCard::BeforeResolution));		
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("3") WHITE_MANA_TEXT,
				TRUE, // tap
				FALSE, // untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CGerrardCapashenCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGerrardCapashenCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int n= m_CardFilter_temp.CountIncluded(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Hand)->GetCardContainer());

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(+n), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pmodifier1.ApplyTo(GetController());

	return (n > 0);
}

BOOL CGerrardCapashenCard::CanPlay(BOOL bIncludeTricks)
{
	return (IsAttacking() == TRUE);
}

//____________________________________________________________________________
//
CLifeDeathCard::CLifeDeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Life // Death"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLifeDeathCard::OnResolutionCompleted))
{
	{
		//Life
		counted_ptr<CIsAlsoAEnchantment> cpSpell(
			::CreateObject<CIsAlsoAEnchantment>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				_T("Animated Land C"), 64009));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Life. Casts"));
		cpSpell->SetAbilityName(_T("Life"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Death
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityText(_T("Death. Casts"));
		cpSpell->SetAbilityName(_T("Death"));
		AddSpell(cpSpell.GetPointer());
	}
}

void CLifeDeathCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(-converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CMaskOfIntoleranceCard::CMaskOfIntoleranceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mask of Intolerance"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaskOfIntoleranceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMaskOfIntoleranceCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMaskOfIntoleranceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	CZone* pInplay = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	{
		if (nDomainCount >= 4)
			return true;
	}

	return false;
}

bool CMaskOfIntoleranceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pInplay = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	{
		if (nDomainCount >= 4)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CSoulLinkCard::CSoulLinkCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Soul Link"), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSoulLinkCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSoulLinkCard::CreateAdditionalAbility2));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
}

counted_ptr<CAbility> CSoulLinkCard::CreateAdditionalAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulLinkCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSoulLinkCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

counted_ptr<CAbility> CSoulLinkCard::CreateAdditionalAbility2(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulLinkCard::SetTriggerContext2));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSoulLinkCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
/*CConsumeStrengthCard::CConsumeStrengthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consume Strength"), CardType::Instant, nID)
{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->FlagTargets(TRUE, TRUE);
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());

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
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardAbilityFlagComparer(cpSpell.GetPointer()));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}*/

//____________________________________________________________________________
//
CJiltCard::CJiltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jilt"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}

		//Kicker cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->FlagTargets(TRUE, TRUE);
        cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

        cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

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
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardAbilityFlagComparer(cpSpell.GetPointer()));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
}

//____________________________________________________________________________
//
CIlluminateCard::CIlluminateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Illuminate"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost 2R
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetAbilityText(_T("Casts kicked with {2R}"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIlluminateCard::BeforeResolution1));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost 3U
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

        cpSpell->SetAbilityText(_T("Casts kicked with {3U}"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIlluminateCard::BeforeResolution2));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost 2R+3U
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

        cpSpell->SetAbilityText(_T("Casts kicked with {2R} and {3U}"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIlluminateCard::BeforeResolution3));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}

	AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
}

bool CIlluminateCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* TargetsController=pAction->GetAssociatedCard()->GetController();

	int n = GetLastCastingExtraValue();

	CLifeModifier pModifier = CLifeModifier(Life(-n), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	pModifier.ApplyTo(TargetsController);

	return true;
}

bool CIlluminateCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));

	pModifier.ApplyTo(GetController());

	return true;
}

bool CIlluminateCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CPlayer* TargetsController=pAction->GetAssociatedCard()->GetController();

	int n = GetLastCastingExtraValue();

	CLifeModifier pModifier1 = CLifeModifier(Life(-n), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));
	
	pModifier1.ApplyTo(TargetsController);
	pModifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CManaclesOfDecayCard::CManaclesOfDecayCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Manacles of Decay"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(-0), Life(-0),
		CreatureKeyword::CantAttack)
{
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pChgPwrTghAttrEnchant,
				BLACK_MANA_TEXT));

		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(-1)));

		cpAbility->SetAbilityText(_T("Enchanted creature gets -1/-1 until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pChgPwrTghAttrEnchant,
				RED_MANA_TEXT));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier();
		pModifier->GetModifier().SetToAdd(CreatureKeyword::CantBlock);
		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityText(_T("Enchanted creature can't block this turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPerniciousDeedCard::CPerniciousDeedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pernicious Deed"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CPerniciousDeedSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPerniciousDeedSpell>>(this,
			_T(""), CCardFilter::GetFilter(_T("artifacts, creatures or enchantments"))));

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->SetExtraActionValueVector();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVodalianMysticCard::CVodalianMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Mystic"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false)));

	cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white spell"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue spell"));	
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black spell"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red spell"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green spell"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIllusionRealityCard::CIllusionRealityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Illusion // Reality"), CardType::Instant, nID)
{
	{
		//Illusion: target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);
		
		cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white spell"));
		cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue spell"));	
		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black spell"));
		cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red spell"));
		cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green spell"));

		cpSpell->SetAbilityText(_T("Illusion. Casts"));
		cpSpell->SetAbilityName(_T("Illusion"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Illusion: target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));
		
		cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
		cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
		cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
		cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

		cpSpell->SetAbilityText(_T("Illusion. Casts"));
		cpSpell->SetAbilityName(_T("Illusion"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Reality
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Reality. Casts"));
		cpSpell->SetAbilityName(_T("Reality"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CConsumeStrengthCard::CConsumeStrengthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consume Strength"), CardType::Instant, nID)
{
	{
		counted_ptr<CDoubleTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CDoubleTargetChgPwrTghAttrSpell>(this,
			AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodfireInfusionCard::CBloodfireInfusionCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Bloodfire Infusion"), CardType::EnchantCreature, nID,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer)
	, m_CardFilter(new EnchantedByComparer(this))
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			RED_MANA_TEXT,
			Life(-0),
			new AnyCreatureComparer,
			false,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodfireInfusionCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBloodfireInfusionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -GET_INTEGER(pCreature->GetLastKnownPower());

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CMindExtractionCard::CMindExtractionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Extraction"), CardType::Sorcery, nID)
	, m_CardFilter(new TrueCardComparer)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			SpecialNumber::All, MoveType::Discard, ZoneId::Graveyard, true,
			false,
			&m_CardFilter));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetShowHandBeforeDiscards();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindExtractionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMindExtractionCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardSharingCardColorComparer(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)));
	return true;
}

//____________________________________________________________________________
//
CCromatCard::CCromatCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Cromat"), CardType::_LegendaryCreature, CREATURE_TYPE(Illusion), nID,
		ALL_MANA_TEXT, Power(5), Life(5),
		BLACK_MANA_TEXT GREEN_MANA_TEXT)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AttackingBlockingThisCreatureComparer(this),
				ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				ZoneId::Library, true, MoveType::Others));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSqueesEmbraceCard::CSqueesEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Squee's Embrace"), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT,
		Power(+2), Life(+2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSqueesEmbraceCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CSqueesEmbraceCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CYavimayasEmbraceCard::CYavimayasEmbraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yavimaya's Embrace"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlPumpEnchant> cpSpell(
		::CreateObject<CControlPumpEnchant>(this,
			_T("5") GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+2),
			CardKeyword::Null,
			CreatureKeyword::Trample));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJadedResponseCard::CJadedResponseCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Jaded Response"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJadedResponseCard::BeforeResolution));
}

bool CJadedResponseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter cfilter(new AnyCreatureComparer);
	cfilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));

	return (cfilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CWildResearchCard::CWildResearchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wild Research"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this, &CWildResearchCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				CCardFilter::GetFilter(_T("enchantments")), 
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->SetAbilityText(_T("Search library for an enchantment card. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				CCardFilter::GetFilter(_T("instant cards")), 
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->SetAbilityText(_T("Search library for an instant card. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

void CWildResearchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CRandomDiscardModifier modifier = CRandomDiscardModifier(1);
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPropheticBoltCard::CPropheticBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Prophetic Bolt"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-4),
		PreventableType::Preventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this, &CPropheticBoltCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CPropheticBoltCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZoneModifier modifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer);
	modifier.AddSelection(MinimumValue(1), MaximumValue(1),
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	modifier.SetReorderInformation(true,
		ZoneId::Library,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Bottom);

	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CWhirlpoolRiderCard::CWhirlpoolRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whirlpool Rider"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWhirlpoolRiderCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CWhirlpoolRiderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = pAbilityAction->GetController();
	int nCards = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others, GetController())));

	pDiscardModifier.ApplyTo(pPlayer);
	pPlayer->GetZoneById(ZoneId::Library)->Shuffle();
	CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
	pDrawModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CWhirlpoolDrakeCard::CWhirlpoolDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Whirlpool Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWhirlpoolDrakeCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{

		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CWhirlpoolDrakeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = pAbilityAction->GetController();
	int nCards = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others, GetController())));

	pDiscardModifier.ApplyTo(pPlayer);
	pPlayer->GetZoneById(ZoneId::Library)->Shuffle();
	CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
	pDrawModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CWhirlpoolWarriorCard::CWhirlpoolWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whirlpool Warrior"), CardType::Creature, CREATURE_TYPE2(Merfolk, Warrior), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWhirlpoolWarriorCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWhirlpoolWarriorCard::OnResolutionCompleted2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				RED_MANA_TEXT));

		cpAbility->AddSacrificeCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CWhirlpoolWarriorCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = pAbilityAction->GetController();
	int nCards = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others, GetController())));

	pDiscardModifier.ApplyTo(pPlayer);
	pPlayer->GetZoneById(ZoneId::Library)->Shuffle();
	CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
	pDrawModifier.ApplyTo(pPlayer);
}

void CWhirlpoolWarriorCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CAnaSanctuaryCard::CAnaSanctuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ana Sanctuary"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAnaSanctuaryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnaSanctuaryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}
bool CAnaSanctuaryCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nBlack = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer());
	int nBlue = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer());

	return (nBlack > 0) | (nBlue > 0);
}

bool CAnaSanctuaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CCreatureCard* target = (CCreatureCard*)pAction->GetAssociatedCard();
	CPowerModifier pModifier1;
	CLifeModifier pModifier2;

	int nBlack = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer());
	int nBlue = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer());

	if ((nBlack > 0) & (nBlue > 0))
	{
		pModifier1 = CPowerModifier(Power(+5), TRUE);
		pModifier2 = CLifeModifier(Life(+5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);
		pModifier1.ApplyTo(target);
		pModifier2.ApplyTo(target);
		return true;
	}
	else if ((nBlack > 0) | (nBlue > 0))
	{
		pModifier1 = CPowerModifier(Power(+1), TRUE);
		pModifier2 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);
		pModifier1.ApplyTo(target);
		pModifier2.ApplyTo(target);
		return true;
	}
	return false;
}

//____________________________________________________________________________
//
CCetaSanctuaryCard::CCetaSanctuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ceta Sanctuary"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCetaSanctuaryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCetaSanctuaryCard::SetTriggerContext));
	
	AddAbility(cpAbility.GetPointer());
}
bool CCetaSanctuaryCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nRed = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer());
	int nGreen = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer());

	return (nRed > 0) | (nGreen > 0);
}

bool CCetaSanctuaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nRed = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer());
	int nGreen = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer());

	if ((nRed > 0) & (nGreen > 0))
	{
		triggerContext.nValue1 = 2;
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	else if ((nRed > 0) | (nGreen > 0))
	{
		triggerContext.nValue1 = 1;
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	return false;
}

//____________________________________________________________________________
//
CDegaSanctuaryCard::CDegaSanctuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dega Sanctuary"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDegaSanctuaryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDegaSanctuaryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}
bool CDegaSanctuaryCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nBlack = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer());
	int nRed = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer());
	
	return (nBlack > 0) | (nRed > 0);
}

bool CDegaSanctuaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nBlack = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer());
	int nRed = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pInplay->GetCardContainer());

	if ((nBlack > 0) & (nRed > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(+4);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	else if ((nBlack > 0) | (nRed > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(+2);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	return false;
}

//____________________________________________________________________________
//
CNecraSanctuaryCard::CNecraSanctuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necra Sanctuary"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNecraSanctuaryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecraSanctuaryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}
bool CNecraSanctuaryCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nGreen = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer());
	int nWhite = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer());

	return (nGreen > 0) | (nWhite > 0);
}

bool CNecraSanctuaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nGreen = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pInplay->GetCardContainer());
	int nWhite = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer());

	if ((nGreen > 0) & (nWhite > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(-3);
		triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	else if ((nGreen > 0) | (nWhite > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(-1);
		triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	return false;
}

//____________________________________________________________________________
//
CRakaSanctuaryCard::CRakaSanctuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Raka Sanctuary"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRakaSanctuaryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRakaSanctuaryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
bool CRakaSanctuaryCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nWhite = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer());
	int nBlue = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer());
	
	return (nWhite > 0) | (nBlue > 0);
}

bool CRakaSanctuaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nWhite = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pInplay->GetCardContainer());
	int nBlue = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pInplay->GetCardContainer());
	
	if ((nWhite > 0) & (nBlue > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(-3);
		triggerContext.m_LifeModifier.SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	else if ((nWhite > 0) | (nBlue > 0))
	{
		triggerContext.m_LifeModifier.SetLifeDelta(-1);
		triggerContext.m_LifeModifier.SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		pAction->SetTriggerContext(triggerContext);
		return true;
	}
	return false;
}

//____________________________________________________________________________
//
CLastStandCard::CLastStandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last Stand"), CardType::Sorcery, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
			ALL_MANA_TEXT,
			FALSE_CARD_COMPARER, true,
			new AnyCreatureComparer, false,
			_T("")));

	cpSpell->GetTargeting1()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLastStandCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLastStandCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = GetController();
	CZone* pInplay = pController->GetZoneById(ZoneId::Battlefield);
	int nSwampCount = 2 * CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer());
	int nMountainCount = CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer());
	int nForestCount = CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer());
	int nPlainsCount = 2 * CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer());
	int nIslandCount = CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer());

	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CLifeModifier pModifier1 = CLifeModifier(Life(-nSwampCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);
	pModifier1.ApplyTo((CPlayer*)(pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject()));

	CLifeModifier pModifier2 = CLifeModifier(Life(-nMountainCount), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage, FALSE);
	pModifier2.ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	CTokenCreationModifier pModifier3 = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nForestCount);
	pModifier3.ApplyTo(pController);

	CLifeModifier pModifier4 = CLifeModifier(Life(+nPlainsCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);
	pModifier4.ApplyTo(pController);

	CDrawCardModifier pModifier5 = CDrawCardModifier(GetGame(), MinimumValue(nIslandCount), MaximumValue(nIslandCount));
	pModifier5.ApplyTo(pController);

	CCardFilter pFilter = CCardFilter(new TrueCardComparer);

	CZoneModifier pModifier6 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			
	pModifier6.AddSelection(MinimumValue(nIslandCount), MaximumValue(nIslandCount), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier6.ApplyTo(pController);

	return true;
}
//____________________________________________________________________________
//
CSqueesRevengeCard::CSqueesRevengeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Squee's Revenge"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSqueesRevengeCard::OnFlipSelected))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSqueesRevengeCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT RED_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSqueesRevengeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSqueesRevengeCard::BeforeResolution (CAbilityAction* pAction)
{
	SelectionFunction(0);
	return true;
}

void CSqueesRevengeCard::SelectionFunction (int Base)
{
	std::vector<SelectionEntry> entries;
	for (int i = Base; i < Base + 10; i++)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i - Base + 1;
		selectionEntry.strText.Format(_T("Select %d"), i);

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 11;
		selectionEntry.strText.Format(_T("More numbers"));

		entries.push_back(selectionEntry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)Base);
}

void CSqueesRevengeCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			
			if (n == 10)
				SelectionFunction((int)dwContext1 + 10);
			else
			{
				FlipNumber = (int)dwContext1 + n;
				FlipsWon = 0;
				if (FlipNumber > 0)
					FlipFunction(pSelectionPlayer);
			}
		}
}

void CSqueesRevengeCard::FlipFunction (CPlayer* pController)
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
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		FlipsWon++;
		if (FlipsWon == FlipNumber)
		{
			CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2*FlipNumber), MaximumValue(2*FlipNumber));
			pModifier->ApplyTo(pController);
		}
		else
			FlipFunction(pController);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
}

void CSqueesRevengeCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				FlipsWon++;
				if (FlipsWon == FlipNumber)
				{
					CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2*FlipNumber), MaximumValue(2*FlipNumber));
					pModifier->ApplyTo(pSelectionPlayer);
				}
				else
					FlipFunction(pSelectionPlayer);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s loses the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CPowerstoneMinefieldCard::CPowerstoneMinefieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Powerstone Minefield"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetAttackingOrBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPowerstoneMinefieldCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CPowerstoneMinefieldCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
COrimsThunderCard::COrimsThunderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Orim's Thunder"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker {R}
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false), false,
				new AnyCreatureComparer, false,
				_T("")));

		cpSpell->GetCost().AddManaCost(RED_MANA_TEXT);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrimsThunderCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);

		cpSpell->SetAbilityName(_T("Kicker"));
		cpSpell->SetAbilityText(_T("Casts kicked"));

		AddSpell(cpSpell.GetPointer());
	}
	AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.

}

bool COrimsThunderCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCreatureCard* pTarget2 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
		
	int nCMC = pTarget1->GetConvertedManaCost();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
	CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	pModifier1.ApplyTo(pTarget1);
	pModifier2.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
CTahngarthsGlareCard::CTahngarthsGlareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tahngarth's Glare"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTahngarthsGlareCard::OnResolutionCompleted))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			3));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetReorder(TRUE, ZoneId::Library);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CTahngarthsGlareCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardCommon::ResolveRevealZone(
		pAbilityAction->GetController(), pAbilityAction->GetAssociatedPlayer(), 3, FALSE,
		TRUE,
		ZoneId::Library,
		CardPlacement::Top,
		NULL,
		MaximumValue(0),
		MinimumValue(0),
		ZoneId::Library,
		ZoneId::Library,
		CardPlacement::Top,
		FALSE);
}

//____________________________________________________________________________
//
CEvasiveActionCard::CEvasiveActionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Evasive Action"), CardType::Instant, nID)
{
	{
		counted_ptr<CEvasiveActionAbility> cpSpell(
		::CreateObject<CEvasiveActionAbility>(this, _T("1") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}
CEvasiveActionCard::CEvasiveActionAbility::CEvasiveActionAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CEvasiveActionCard::CEvasiveActionAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, nDomainCount);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CPutridWarriorCard::CPutridWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Putrid Warrior"), CardType::Creature, CREATURE_TYPE3(Zombie, Soldier, Warrior), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPutridWarriorCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPutridWarriorCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetAbilityName(_T("Mode 1 - each player loses 1 life"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
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

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetAbilityName(_T("Mode 2 - each player gains 1 life"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CPutridWarriorCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													Damage damage)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: Each player loses 1 life"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: Each player gains 1 life"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return false;
}

void CPutridWarriorCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

//____________________________________________________________________________
//
CDodecapodCard::CDodecapodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dodecapod"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(3), Life(3))
{
	
}
	void CDodecapodCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Hand) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) && (moveType == MoveType::Discard ) && (pByPlayer == m_pGame->GetNextPlayer(GetController())))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Battlefield);
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::Hand, ZoneId::Battlefield, false);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CDeadRingersCard::CDeadRingersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dead Ringers"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	cpSpell->GetTargeting()->SetSubjectCount(2, 2);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDeadRingersCard::BeforeResolution));

	m_cSpell = cpSpell.GetPointer();
	AddSpell(m_cSpell);
}

bool CDeadRingersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetActionCommon* pTargetAction = dynamic_cast<CTargetActionCommon*>(pAction);

	CCountedCardContainer pTargets;
	pTargetAction->GetTargetGroup().GetCardSubjects(pTargets);

	CCard* pTarget1 = pTargets.GetAt(0);
	CCard* pTarget2 = pTargets.GetAt(1);

	BOOL bTrick;
	bool bTarget1Allowed = true;
	bool bTarget2Allowed = true;

	if (!m_cSpell->GetTargeting()->TargetAllowed(pTarget1, true, bTrick))
		bTarget1Allowed = false;
	if (!m_cSpell->GetTargeting()->TargetAllowed(pTarget2, true, bTrick))
		bTarget2Allowed = false;

	if (pTarget1 && pTarget2)
	{
		bool WCheck = (pTarget1->IsColor(CManaPoolBase::Color::White) && pTarget2->IsColor(CManaPoolBase::Color::White)) || (!pTarget1->IsColor(CManaPoolBase::Color::White) && !pTarget2->IsColor(CManaPoolBase::Color::White));
		bool UCheck = (pTarget1->IsColor(CManaPoolBase::Color::Blue) && pTarget2->IsColor(CManaPoolBase::Color::Blue)) || (!pTarget1->IsColor(CManaPoolBase::Color::Blue) && !pTarget2->IsColor(CManaPoolBase::Color::Blue));
		bool BCheck = (pTarget1->IsColor(CManaPoolBase::Color::Black) && pTarget2->IsColor(CManaPoolBase::Color::Black)) || (!pTarget1->IsColor(CManaPoolBase::Color::Black) && !pTarget2->IsColor(CManaPoolBase::Color::Black));
		bool RCheck = (pTarget1->IsColor(CManaPoolBase::Color::Red) && pTarget2->IsColor(CManaPoolBase::Color::Red)) || (!pTarget1->IsColor(CManaPoolBase::Color::Red) && !pTarget2->IsColor(CManaPoolBase::Color::Red));
		bool GCheck = (pTarget1->IsColor(CManaPoolBase::Color::Green) && pTarget2->IsColor(CManaPoolBase::Color::Green)) || (!pTarget1->IsColor(CManaPoolBase::Color::Green) && !pTarget2->IsColor(CManaPoolBase::Color::Green));

		if (WCheck && UCheck && BCheck && RCheck && GCheck)
		{
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pAction->GetController());
			if (bTarget1Allowed) pModifier.ApplyTo(pTarget1);
			if (bTarget2Allowed) pModifier.ApplyTo(pTarget2);
		}
	}
	return true;
}

//____________________________________________________________________________
//
/*
CZombieBoaCard::CZombieBoaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Boa"), CardType::Creature, CREATURE_TYPE2(Zombie, Snake), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CZombieBoaCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CZombieBoaCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CZombieBoaCard::BeforeResolution(CAbilityAction* pAction)
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

void CZombieBoaCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s chooses white"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				CCountedCardContainer pSubjects;
				if (IsInplay())
					pSubjects.AddCard(this, CardPlacement::Top);

				CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Zombie Boa White Effect"), 61044, &pSubjects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses blue"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				CCountedCardContainer pSubjects;
				if (IsInplay())
					pSubjects.AddCard(this, CardPlacement::Top);

				CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Zombie Boa Blue Effect"), 61045, &pSubjects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses black"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				CCountedCardContainer pSubjects;
				if (IsInplay())
					pSubjects.AddCard(this, CardPlacement::Top);

				CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Zombie Boa Black Effect"), 61046, &pSubjects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 4)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses red"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				CCountedCardContainer pSubjects;
				if (IsInplay())
					pSubjects.AddCard(this, CardPlacement::Top);

				CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Zombie Boa Red Effect"), 61047, &pSubjects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 5)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses green"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				CCountedCardContainer pSubjects;
				if (IsInplay())
					pSubjects.AddCard(this, CardPlacement::Top);

				CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Zombie Boa Green Effect"), 61048, &pSubjects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}
*/
//____________________________________________________________________________
//
CGerrardsVerdictCard::CGerrardsVerdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gerrard's Verdict"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CGerrardsVerdictCard::OnResolutionCompleted))
	, nLands(0)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGerrardsVerdictCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CGerrardsVerdictCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	nLands = m_CardFilter.CountIncluded(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Hand)->GetCardContainer());
	
	return true;
}

void CGerrardsVerdictCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	int nNewLands = m_CardFilter.CountIncluded(pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Hand)->GetCardContainer());

	if (nLands > nNewLands)
	{
		CLifeModifier pModifier = CLifeModifier(Life(3*(nLands - nNewLands)), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//