#include "stdafx.h"
#include "CardLegions.h"

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

		DEFINE_CARD(CAkromaAngelOfWrathCard);
		DEFINE_CARD(CAkromasDevotedCard);
		DEFINE_CARD(CAphettoExterminatorCard);
		DEFINE_CARD(CAvenEnvoyCard);
		DEFINE_CARD(CAvenRedeemerCard);
		DEFINE_CARD(CAvenWarhawkCard);
		DEFINE_CARD(CBerserkMurlodontCard);
		DEFINE_CARD(CBladeSliverCard);
		DEFINE_CARD(CBloodCelebrantCard);
		DEFINE_CARD(CBloodstokeHowlerCard);
		DEFINE_CARD(CBranchsnapLorianCard);
		DEFINE_CARD(CBroodSliverCard);
		DEFINE_CARD(CCanopyCrawlerCard);
		DEFINE_CARD(CCelestialGatekeeperCard);
		DEFINE_CARD(CCephalidPathmageCard);
		DEFINE_CARD(CClickslitherCard);
		DEFINE_CARD(CCloudreachCavalryCard);
		DEFINE_CARD(CCorpseHarvesterCard);
		DEFINE_CARD(CCovertOperativeCard);
		DEFINE_CARD(CChromeshellCrabCard);
		DEFINE_CARD(CCrookclawElderCard);
		DEFINE_CARD(CCryptSliverCard);
		DEFINE_CARD(CDarkSupplicantCard);
		DEFINE_CARD(CDaruSanctifierCard);
		DEFINE_CARD(CDaruStingerCard);
		DEFINE_CARD(CDeathmarkPrelateCard);
		DEFINE_CARD(CDefenderOfTheOrderCard);
		DEFINE_CARD(CDefiantElfCard);
		DEFINE_CARD(CDrinkerOfSorrowCard);
		DEFINE_CARD(CDrippingDeadCard);
		DEFINE_CARD(CEarthblighterCard);
		DEFINE_CARD(CEchoTracerCard);
		DEFINE_CARD(CEmbalmedBrawlerCard);
		DEFINE_CARD(CEssenceSliverCard);
		DEFINE_CARD(CFreneticRaptorCard);
		DEFINE_CARD(CGempalmAvengerCard);
		DEFINE_CARD(CGempalmIncineratorCard);
		DEFINE_CARD(CGempalmPolluterCard);
		DEFINE_CARD(CGempalmSorcererCard);
		DEFINE_CARD(CGempalmStriderCard);
		DEFINE_CARD(CGhastlyRemainsCard);
		DEFINE_CARD(CGlintwingInvokerCard);
		DEFINE_CARD(CGloweringRogonCard);
		DEFINE_CARD(CGlowriderCard);
		DEFINE_CARD(CGoblinAssassinCard);
		DEFINE_CARD(CGoblinClearcutterCard);
		DEFINE_CARD(CGoblinDynamoCard);
		DEFINE_CARD(CGoblinFirebugCard);
		DEFINE_CARD(CGoblinGoonCard);
		DEFINE_CARD(CGoblinLookoutCard);
		DEFINE_CARD(CGoblinTurncoatCard);
		DEFINE_CARD(CHavocDemonCard);
		DEFINE_CARD(CHundroogCard);
		DEFINE_CARD(CImperialHellkiteCard);
		DEFINE_CARD(CKeeneyeAvenCard);
		DEFINE_CARD(CKeeperOfTheNineGalesCard);
		DEFINE_CARD(CKilnmouthDragonCard);
		DEFINE_CARD(CKrosanCloudscraperCard);
		DEFINE_CARD(CLiegeOfTheAxeCard);
		DEFINE_CARD(CMacetailHystrodonCard);
		DEFINE_CARD(CMagmaSliverCard);
		DEFINE_CARD(CMistformUltimusCard);
		DEFINE_CARD(CNantukoVigilanteCard);
		DEFINE_CARD(CNeedleshotGournaCard);
		DEFINE_CARD(CNoxiousGhoulCard);
		DEFINE_CARD(CPatronOfTheWildCard);
		DEFINE_CARD(CPlatedSliverCard);
		DEFINE_CARD(CPrimocEscapeeCard);
		DEFINE_CARD(CQuickSliverCard);
		DEFINE_CARD(CRidgetopRaptorCard);
		DEFINE_CARD(CRiptideDirectorCard);
		DEFINE_CARD(CRiptideManglerCard);
		DEFINE_CARD(CRockshardElementalCard);
		DEFINE_CARD(CRootSliverCard);
		DEFINE_CARD(CScionOfDarknessCard);
		DEFINE_CARD(CShaleskinPlowerCard);
		DEFINE_CARD(CShiftingSliverCard);
		DEFINE_CARD(CSkinthinnerCard);
		DEFINE_CARD(CSkirkDrillSergeantCard);
		DEFINE_CARD(CSkirkMarauderCard);
		DEFINE_CARD(CSkirkOutriderCard);
		DEFINE_CARD(CSmokespewInvokerCard);
		DEFINE_CARD(CSootfeatherFlockCard);
		DEFINE_CARD(CSpectralSliverCard);
		DEFINE_CARD(CStonewoodInvokerCard);
		DEFINE_CARD(CSunstrikeLegionnaireCard);
		DEFINE_CARD(CSynapseSliverCard);
		DEFINE_CARD(CTimberwatchElfCard);
		DEFINE_CARD(CTotemSpeakerCard);
		DEFINE_CARD(CToxinSliverCard);
		DEFINE_CARD(CUnstableHulkCard);
		DEFINE_CARD(CVileDeaconCard);
		DEFINE_CARD(CVoidmageApprenticeCard);
		DEFINE_CARD(CWallOfHopeCard);
		DEFINE_CARD(CWardSliverCard);
		DEFINE_CARD(CWingbeatWarriorCard);
		DEFINE_CARD(CWirewoodChannelerCard);
		DEFINE_CARD(CWirewoodHivemasterCard);
		DEFINE_CARD(CWitheredWretchCard);
		DEFINE_CARD(CZombieBruteCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAkromaAngelOfWrathCard::CAkromaAngelOfWrathCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Akroma, Angel of Wrath"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CAkromasDevotedCard::CAkromasDevotedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroma's Devoted"), CardType::Creature, CREATURE_TYPE2(Human,Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Cleric), false),	
			Power(+0), Life(+0), CreatureKeyword::Vigilance));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBladeSliverCard::CBladeSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blade Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+1), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodCelebrantCard::CBloodCelebrantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Celebrant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
	BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBroodSliverCard::CBroodSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brood Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);	

	cpAbility->SetCreateTokenOption(TRUE, _T("Sliver"), TOKEN_ID_BY_NAME, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidPathmageCard::CCephalidPathmageCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Cephalid Pathmage"), CardType::Creature, CREATURE_TYPE2(Cephalid, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCovertOperativeCard::CCovertOperativeCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Covert Operative"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CEssenceSliverCard::CEssenceSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Essence Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEssenceSliverCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CEssenceSliverCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CPlatedSliverCard::CPlatedSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plated Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootSliverCard::CRootSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Root Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
			PlayerEffectType::SpellsCantBeCountered,
			reinterpret_cast<int>(&m_CardFilter)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShiftingSliverCard::CShiftingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shifting Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Unblockable));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSynapseSliverCard::CSynapseSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Synapse Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	//cpAbility->GetTrigger().SetDefaultCharacteristic(Characteristic::Positive);	We need this line to the A.I draw cards

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWitheredWretchCard::CWitheredWretchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Withered Wretch"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1"),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScionOfDarknessCard::CScionOfDarknessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scion of Darkness"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);

		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

		cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenEnvoyCard::CAvenEnvoyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Envoy"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		BLUE_MANA_TEXT, Power(0), Life(2))
{
}

//____________________________________________________________________________
//
CAvenRedeemerCard::CAvenRedeemerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Redeemer"), CardType::Creature, CREATURE_TYPE2(Bird, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CClickslitherCard::CClickslitherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Clickslither"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+2), Life(+2), CreatureKeyword::Trample)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CCrookclawElderCard::CCrookclawElderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crookclaw Elder"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("a Bird"), _T("Birds"), new CreatureTypeComparer(CREATURE_TYPE(Bird), false))
	, m_CardFilter2(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathmarkPrelateCard::CDeathmarkPrelateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathmark Prelate"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	cpAbility->AddTapCost();

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDefiantElfCard::CDefiantElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Defiant Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CDrippingDeadCard::CDrippingDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dripping Dead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDrippingDeadCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDrippingDeadCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CEarthblighterCard::CEarthblighterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earthblighter"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFreneticRaptorCard::CFreneticRaptorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frenetic Raptor"), CardType::Creature, CREATURE_TYPE2(Lizard, Beast), nID,
		_T("5") RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Beast), false),
			Power(+0), Life(+0), CreatureKeyword::CantBlock));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGempalmAvengerCard::CGempalmAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gempalm Avenger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(5))
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGempalmSorcererCard::CGempalmSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gempalm Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGempalmStriderCard::CGempalmStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gempalm Strider"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlintwingInvokerCard::CGlintwingInvokerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Glintwing Invoker"), CardType::Creature, CREATURE_TYPE3(Human, Wizard, Mutant), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		_T("7") BLUE_MANA_TEXT, Power(+3), Life(+3), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CGlowriderCard::CGlowriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glowrider"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new NegateCardComparer(new AnyCreatureComparer),
			_T("1")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinClearcutterCard::CGoblinClearcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Clearcutter"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinDynamoCard::CGoblinDynamoCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Goblin Dynamo"), CardType::Creature, CREATURE_TYPE2(Goblin, Mutant), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		_T(""),
		new AnyCreatureComparer, TRUE,
		Life(-1),		// life delta
		PreventableType::Preventable)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(-1));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinFirebugCard::CGoblinFirebugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Firebug"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinLookoutCard::CGoblinLookoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Lookout"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+2), Life(+0),
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false)));

	//cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinTurncoatCard::CGoblinTurncoatCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Goblin Turncoat"), CardType::Creature, CREATURE_TYPE2(Goblin, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));
}

//____________________________________________________________________________
//
CHavocDemonCard::CHavocDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Havoc Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-5));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHundroogCard::CHundroogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hundroog"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT, Power(4), Life(7))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("3")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeeneyeAvenCard::CKeeneyeAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Keeneye Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeeperOfTheNineGalesCard::CKeeperOfTheNineGalesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Keeper of the Nine Gales"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("a Bird"), _T("Birds"), new CreatureTypeComparer(CREATURE_TYPE(Bird), false))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMacetailHystrodonCard::CMacetailHystrodonCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Macetail Hystrodon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNeedleshotGournaCard::CNeedleshotGournaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Needleshot Gourna"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CNoxiousGhoulCard::CNoxiousGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noxious Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	//cpAbility->GetTrigger().SetReportSelfMoves(TRUE); //would trigger twice, because of its creature type
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimocEscapeeCard::CPrimocEscapeeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Primoc Escapee"), CardType::Creature, CREATURE_TYPE2(Bird, Beast), nID,
		_T("6") BLUE_MANA_TEXT, Power(4), Life(4))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRidgetopRaptorCard::CRidgetopRaptorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ridgetop Raptor"), CardType::Creature, CREATURE_TYPE2(Lizard, Beast), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CRiptideDirectorCard::CRiptideDirectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riptide Director"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell2>>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpAbility->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), FALSE));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSmokespewInvokerCard::CSmokespewInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Smokespew Invoker"), CardType::Creature, CREATURE_TYPE2(Zombie, Mutant), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("7") BLACK_MANA_TEXT,
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CStonewoodInvokerCard::CStonewoodInvokerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Stonewood Invoker"), CardType::Creature, CREATURE_TYPE2(Elf, Mutant), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		_T("7") GREEN_MANA_TEXT, Power(+5), Life(+5))
{
}

//____________________________________________________________________________
//
CSunstrikeLegionnaireCard::CSunstrikeLegionnaireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunstrike Legionnaire"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new ConvertedManaCostComparer<std::less<int>>(4));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CTotemSpeakerCard::CTotemSpeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Totem Speaker"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfHopeCard::CWallOfHopeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Hope"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWallOfHopeCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfHopeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CWirewoodHivemasterCard::CWirewoodHivemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Hivemaster"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	cpAbility->SetCreateTokenOption(TRUE, _T("Insect B"), 2723, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrinkerOfSorrowCard::CDrinkerOfSorrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drinker of Sorrow"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(5), Life(3))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::DamageEventCallback, &CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCryptSliverCard::CCryptSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CCryptSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CCryptSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(pCard,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false)));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Regenerate target Sliver. Activates"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpectralSliverCard::CSpectralSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Sliver"), CardType::Creature, CREATURE_TYPE2(Sliver, Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSpectralSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSpectralSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			_T("2"),
			Power(+1), Life(+1)));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToxinSliverCard::CToxinSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Toxin Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CToxinSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CToxinSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CToxinSliverCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CToxinSliverCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CBerserkMurlodontCard::CBerserkMurlodontCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Berserk Murlodont"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Beast), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBerserkMurlodontCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CBerserkMurlodontCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudreachCavalryCard::CCloudreachCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cloudreach Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Bird), false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkirkOutriderCard::CSkirkOutriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirk Outrider"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}


//____________________________________________________________________________
//
CGempalmIncineratorCard::CGempalmIncineratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gempalm Incinerator"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(FALSE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGempalmIncineratorCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGempalmIncineratorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay1 = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pInplay2 = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	CCard* target = pAction->GetAssociatedCard();

	int nDomainCount = m_CardFilter1.CountIncluded(pInplay1->GetCardContainer()) + m_CardFilter1.CountIncluded(pInplay2->GetCardContainer());

	CLifeModifier pmodifier2 = CLifeModifier(
		Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage, // Damage Type
	TRUE , FALSE);

	if (target->GetCardType().IsCreature()) 
	{ CCreatureCard* pTargetCreature = (CCreatureCard*)target;
	  pmodifier2.ApplyTo(pTargetCreature);
	}	

	return true;
}

//____________________________________________________________________________
//
CGempalmPolluterCard::CGempalmPolluterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gempalm Polluter"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(3))
{
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGempalmPolluterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGempalmPolluterCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay1 = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pInplay2 = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	CPlayer* target = pAction->GetAssociatedPlayer();

	int nDomainCount = m_CardFilter1.CountIncluded(pInplay1->GetCardContainer()) + m_CardFilter1.CountIncluded(pInplay2->GetCardContainer());

	CLifeModifier pmodifier2 = CLifeModifier(
		Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::NotPreventable // preventable or not prevantable
	, DamageType::NotDealingDamage // Damage Type
	);
	
	pmodifier2.ApplyTo(target);

	return true;
}

//____________________________________________________________________________
//
CTimberwatchElfCard::CTimberwatchElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timberwatch Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimberwatchElfCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTimberwatchElfCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter cfilter(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	CZone* pInplay;
	int nCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCreatures += cfilter.CountIncluded(pInplay->GetCardContainer());
	}

	if (nCreatures == 0) return false;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatures;
	Context.nValue2 = nCreatures;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CSkirkDrillSergeantCard::CSkirkDrillSergeantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirk Drill Sergeant"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
	_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		//cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);		
		cpAbility->SetRevealCount(0);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkirkDrillSergeantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);		
		cpAbility->SetRevealCount(0);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkirkDrillSergeantCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CSkirkDrillSergeantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard,TRUE, MoveType::Others, GetController());
	CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield,TRUE, MoveType::Others, GetController());

	CCardFilter tempFilter;
	tempFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	pModifier1.ApplyTo(GetController());

	if (tempFilter.IsCardIncluded(pNextDraw) && (pNextDraw->GetCardType().IsCreature() || pNextDraw->GetCardType().IsEnchantment() ||  pNextDraw->GetCardType().IsArtifact()))
		pModifier3.ApplyTo(pNextDraw);
	else
		pModifier2.ApplyTo(pNextDraw);
	return true;
}
bool CSkirkDrillSergeantCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const
{
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard,TRUE, MoveType::Others, GetController());
	CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield,TRUE, MoveType::Others, GetController());

	CCardFilter tempFilter;
	tempFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	pModifier1.ApplyTo(GetController());

	if (tempFilter.IsCardIncluded(pNextDraw) && (pNextDraw->GetCardType().IsCreature() || pNextDraw->GetCardType().IsEnchantment() ||  pNextDraw->GetCardType().IsArtifact()))
		pModifier3.ApplyTo(pNextDraw);
	else
		pModifier2.ApplyTo(pNextDraw);
	return true;
}
//____________________________________________________________________________
//
CCorpseHarvesterCard::CCorpseHarvesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Harvester"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("Swamps")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityText(_T("Search your library for a Zombie card and a Swamp card. Activates"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorpseHarvesterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCorpseHarvesterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		&m_CardFilter,
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CGoblinGoonCard::CGoblinGoonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Goon"), CardType::Creature, CREATURE_TYPE2(Goblin, Mutant), nID,
		_T("3") RED_MANA_TEXT, Power(6), Life(6))
{	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CGoblinGoonCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CGoblinGoonCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CGoblinGoonCard::CanAttack(BOOL bIncludeTricks)
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
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

BOOL CGoblinGoonCard::CanBlock(BOOL bIncludeTricks)
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
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CMagmaSliverCard::CMagmaSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magma Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CMagmaSliverCard::OnResolutionCompleted))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMagmaSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMagmaSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));
	
	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CMagmaSliverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));

	CPowerModifier pModifier = CPowerModifier(Power(+nDomainCount));

	if (bResult) pModifier.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
}

//____________________________________________________________________________
//
CQuickSliverCard::CQuickSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quick Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWirewoodChannelerCard::CWirewoodChannelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Channeler"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {W} to your mana pool for each Elf on the battlefield with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodChannelerCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {U} to your mana pool for each Elf on the battlefield with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodChannelerCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {B} to your mana pool for each Elf on the battlefield with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodChannelerCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {R} to your mana pool for each Elf on the battlefield with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodChannelerCard::BeforeResolution4));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool for each Elf on the battlefield with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodChannelerCard::BeforeResolution5));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWirewoodChannelerCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CWirewoodChannelerCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CWirewoodChannelerCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CWirewoodChannelerCard::BeforeResolution4(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CWirewoodChannelerCard::BeforeResolution5(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAvenWarhawkCard::CAvenWarhawkCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Aven Warhawk"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAvenWarhawkCard::OnZoneChanged))
	, m_CardFilter(_T("1 Bird or Soldier card"), _T("Bird and/or Soldier cards"), new CreatureTypeComparer(CREATURE_TYPE(Bird) | CREATURE_TYPE(Soldier), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);
	GetCreatureKeyword()->AddFlying(FALSE);
}

void CAvenWarhawkCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CCanopyCrawlerCard::CCanopyCrawlerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Canopy Crawler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCanopyCrawlerCard::OnZoneChanged))
	, m_CardFilter(_T("1 Beast card"), _T("Beast cards"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCanopyCrawlerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CCanopyCrawlerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CCanopyCrawlerCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nCounterCount;
		Context.nValue2 = nCounterCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CDaruStingerCard::CDaruStingerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Daru Stinger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDaruStingerCard::OnZoneChanged))
	, m_CardFilter(_T("1 Human or Soldier card"), _T("Human and/or Soldier cards"), new CreatureTypeComparer(CREATURE_TYPE(Human) | CREATURE_TYPE(Soldier), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingBlockingCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDaruStingerCard::BeforeResolution));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

void CDaruStingerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CDaruStingerCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nCounterCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CEmbalmedBrawlerCard::CEmbalmedBrawlerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Embalmed Brawler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEmbalmedBrawlerCard::OnZoneChanged))
	, m_CardFilter(_T("1 Zombie card"), _T("Zombie cards"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmbalmedBrawlerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

void CEmbalmedBrawlerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CEmbalmedBrawlerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCounterCount));
	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CGhastlyRemainsCard::CGhastlyRemainsCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Ghastly Remains"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGhastlyRemainsCard::OnZoneChanged))
	, m_CardFilter(_T("1 Zombie card"), _T("Zombie cards"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetResolutionCost(BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGhastlyRemainsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGhastlyRemainsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

void CGhastlyRemainsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CGhastlyRemainsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CGhastlyRemainsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CGloweringRogonCard::CGloweringRogonCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Glowering Rogon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGloweringRogonCard::OnZoneChanged))
	, m_CardFilter(_T("1 Beast card"), _T("Beast cards"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);
}

void CGloweringRogonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CZombieBruteCard::CZombieBruteCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Zombie Brute"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("6") BLACK_MANA_TEXT, Power(5), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CZombieBruteCard::OnZoneChanged))
	, m_CardFilter(_T("1 Zombie card"), _T("Zombie cards"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

void CZombieBruteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CKilnmouthDragonCard::CKilnmouthDragonCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Kilnmouth Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKilnmouthDragonCard::OnZoneChanged))
	, m_CardFilter(_T("1 Dragon card"), _T("Dragon cards"), new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKilnmouthDragonCard::BeforeResolution1));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKilnmouthDragonCard::BeforeResolution2));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

void CKilnmouthDragonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 3;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CKilnmouthDragonCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nCounterCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

bool CKilnmouthDragonCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nCounterCount;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CDarkSupplicantCard::CDarkSupplicantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dark Supplicant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter1(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
	, m_CardFilter2(_T("a card named Scion of Darkness"), _T("cards named Scion of Darkness"), new CardNameComparer(_T("Scion of Darkness")))
{
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				&m_CardFilter2,
				ZoneId::Battlefield, false, false, false));
		ATLASSERT(cpAbility);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Graveyard);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(3, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				&m_CardFilter2,
				ZoneId::Battlefield, false, false, false));
		ATLASSERT(cpAbility);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(3, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				&m_CardFilter2,
				ZoneId::Battlefield, false, false, false));
		ATLASSERT(cpAbility);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Library);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(3, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CAphettoExterminatorCard::CAphettoExterminatorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Aphetto Exterminator"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1), _T("3") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

	{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CBranchsnapLorianCard::CBranchsnapLorianCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Branchsnap Lorian"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(1), _T("1") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CRiptideManglerCard::CRiptideManglerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riptide Mangler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CRiptideManglerCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CRiptideManglerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CPowerModifier* pModifier1 = new CPowerModifier(pCreature->GetLastKnownPower(), false, true);
	pModifier1->SetReplacement(true);

	pModifier1->ApplyTo(this);
}

//____________________________________________________________________________
//
CBloodstokeHowlerCard::CBloodstokeHowlerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Bloodstoke Howler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(4), _T("6") RED_MANA_TEXT)
	, m_CardFilter(_T("a Beast"), _T("Beasts"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	this->AddCreatureType(SingleCreatureType::Beast);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDefenderOfTheOrderCard::CDefenderOfTheOrderCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Defender of the Order"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3")WHITE_MANA_TEXT, Power(2), Life(4), _T("") WHITE_MANA_TEXT WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRockshardElementalCard::CRockshardElementalCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Rockshard Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3), _T("4") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elemental);

	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CSootfeatherFlockCard::CSootfeatherFlockCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Sootfeather Flock"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2), _T("3") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CChromeshellCrabCard::CChromeshellCrabCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Chromeshell Crab"), CardType::Creature, CREATURE_TYPE2(Crab, Beast), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3), _T("4") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Crab);
	this->AddCreatureType(SingleCreatureType::Beast);

	{
		typedef
			TTriggeredDoubleTargetAbility< CTriggeredExchangeControlAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting1().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaruSanctifierCard::CDaruSanctifierCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Daru Sanctifier"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4), _T("1") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEchoTracerCard::CEchoTracerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Echo Tracer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2), _T("2") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CImperialHellkiteCard::CImperialHellkiteCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Imperial Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6), _T("6") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Dragon);

	GetCreatureKeyword()->AddFlying(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
		cpAbility->SetToZone(ZoneId::Hand);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLiegeOfTheAxeCard::CLiegeOfTheAxeCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Liege of the Axe"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3), _T("1") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Soldier);

	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNantukoVigilanteCard::CNantukoVigilanteCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Nantuko Vigilante"), CardType::Creature, CREATURE_TYPE3(Insect, Druid, Mutant), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2), _T("1") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Insect);
	this->AddCreatureType(SingleCreatureType::Druid);
	this->AddCreatureType(SingleCreatureType::Mutant);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPatronOfTheWildCard::CPatronOfTheWildCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Patron of the Wild"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("") GREEN_MANA_TEXT, Power(1), Life(1), _T("2") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elf);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShaleskinPlowerCard::CShaleskinPlowerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Shaleskin Plower"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2), _T("4") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkinthinnerCard::CSkinthinnerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Skinthinner"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1), _T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Zombie);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkirkMarauderCard::CSkirkMarauderCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Skirk Marauder"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1), _T("2") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Goblin);

	{	
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnstableHulkCard::CUnstableHulkCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Unstable Hulk"), CardType::Creature, CREATURE_TYPE2(Goblin, Mutant), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2), _T("3") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Goblin);
	this->AddCreatureType(SingleCreatureType::Mutant);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTriggeredPlayerModifiers().push_back(new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+6), TRUE));
		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(+6), this, PreventableType::NotPreventable));
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVoidmageApprenticeCard::CVoidmageApprenticeCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Voidmage Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1), _T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionCost(_T(""));
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Stack);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false)));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier


		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWingbeatWarriorCard::CWingbeatWarriorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Wingbeat Warrior"), CardType::Creature, CREATURE_TYPE3(Bird, Soldier, Warrior), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1), _T("2") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Soldier);
	this->AddCreatureType(SingleCreatureType::Warrior);

	GetCreatureKeyword()->AddFlying(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrosanCloudscraperCard::CKrosanCloudscraperCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Krosan Cloudscraper"), CardType::Creature, CREATURE_TYPE2(Beast, Mutant), nID,
		_T("7") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(13), Life(13),
		_T("7") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
	this->AddCreatureType(SingleCreatureType::Mutant);

	AddUpkeepCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);
}

//____________________________________________________________________________
//
CMistformUltimusCard::CMistformUltimusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mistform Ultimus"), CardType::_LegendaryCreature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CGoblinAssassinCard::CGoblinAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Assassin"), CardType::Creature, CREATURE_TYPE2(Goblin, Assassin), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinAssassinCard::OnFlipSelected))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CGoblinAssassinCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CGoblinAssassinCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinAssassinCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CPlayer* pPlayer;
	int Thumb;
	int Exponent;
	int Flip;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		Thumb = 0;
		Exponent = 2;
		pPlayer = GetGame()->GetPlayer(ip);
		if (m_pGame->IsThinking())
			Flip = 2;
		else
		{
			pPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
			for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
			Flip = pPlayer->GetRand() % Exponent;
		}

		if (Flip == 0)
		{
			CString strMessage;
			strMessage.Format(_T("%s flips a coin: heads"), pPlayer->GetPlayerName());
			m_pGame->Message(
				strMessage,
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		if (Flip == 1)
		{
			CString strMessage;
			strMessage.Format(_T("%s flips a coin: tails"), pPlayer->GetPlayerName());
			m_pGame->Message(
				strMessage,
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
			CZoneModifier pModifier = CZoneModifier(GetGame(),
				ZoneId::Battlefield, SpecialNumber::All,
				CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				CCardFilter::GetFilter(_T("creatures")), // what cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Sacrifice, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier.ApplyTo(pPlayer);
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
			m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
		}
	}
	return true;
}

bool CGoblinAssassinCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CPlayer* pPlayer;
	int Thumb;
	int Exponent;
	int Flip;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		Thumb = 0;
		Exponent = 2;
		pPlayer = GetGame()->GetPlayer(ip);
		if (m_pGame->IsThinking())
			Flip = 2;
		else
		{
			pPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
			for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
			Flip = pPlayer->GetRand() % Exponent;
		}

		if (Flip == 0)
		{
			CString strMessage;
			strMessage.Format(_T("%s flips a coin: heads"), pPlayer->GetPlayerName());
			m_pGame->Message(
				strMessage,
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		if (Flip == 1)
		{
			CString strMessage;
			strMessage.Format(_T("%s flips a coin: tails"), pPlayer->GetPlayerName());
			m_pGame->Message(
				strMessage,
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
			CZoneModifier pModifier = CZoneModifier(GetGame(),
				ZoneId::Battlefield, SpecialNumber::All,
				CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				CCardFilter::GetFilter(_T("creatures")), // what cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Sacrifice, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier.ApplyTo(pPlayer);
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
			m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
		}
	}
	return true;
}

void CGoblinAssassinCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s flips a coin: heads"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s flips a coin: tails"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier = CZoneModifier(GetGame(),
					ZoneId::Battlefield, SpecialNumber::All,
					CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					CCardFilter::GetFilter(_T("creatures")), // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier.ApplyTo(pSelectionPlayer);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CVileDeaconCard::CVileDeaconCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vile Deacon"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVileDeaconCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CVileDeaconCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nCount = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCount += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
	
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CCelestialGatekeeperCard::CCelestialGatekeeperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Celestial Gatekeeper"), CardType::Creature, CREATURE_TYPE2(Bird, Cleric), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Bird) | CREATURE_TYPE(Cleric), false));
	cpAbility->GetTargeting().SetSubjectCount(0, 2);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCelestialGatekeeperCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CCelestialGatekeeperCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(this);
	}

	return true;
}

//____________________________________________________________________________
//
CWardSliverCard::CWardSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ward Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CWardSliverCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CWardSliverCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),
			Power(+0), Life(+0)));

	cpAbility->SetAbilityName(_T("Ward Sliver boost"));	
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(SelectedProtection);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CWardSliverCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedProtection = CardKeyword::Null;

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose protection from %s"), _T("white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose protection from %s"), _T("blue"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose protection from %s"), _T("black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose protection from %s"), _T("red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose protection from %s"), _T("green"));
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CWardSliverCard::CreateAdditionAbility));

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

void CWardSliverCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedProtection = CardKeyword::ProtectionFromWhite;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CWardSliverCard::CreateAdditionAbility));

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
				SelectedProtection = CardKeyword::ProtectionFromBlue;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CWardSliverCard::CreateAdditionAbility));

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
				SelectedProtection = CardKeyword::ProtectionFromBlack;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CWardSliverCard::CreateAdditionAbility));

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
				SelectedProtection = CardKeyword::ProtectionFromRed;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CWardSliverCard::CreateAdditionAbility));

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
				SelectedProtection = CardKeyword::ProtectionFromGreen;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CWardSliverCard::CreateAdditionAbility));

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
