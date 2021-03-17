#include "stdafx.h"
#include "CardNine.h"

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

		DEFINE_CARD(CAnarchistCard);
		DEFINE_CARD(CAngelicBlessingCard);
		DEFINE_CARD(CAngelsFeatherCard);
		DEFINE_CARD(CAnnexCard);
		DEFINE_CARD(CAvenWindreaderCard);
		DEFINE_CARD(CBallistaSquadCard);
		DEFINE_CARD(CBattleOfWitsCard);
		DEFINE_CARD(CBattlefieldForgeCard);
		DEFINE_CARD(CBiorhythmCard);
		DEFINE_CARD(CBlackmailCard);
		DEFINE_CARD(CBlessedOratorCard);
		DEFINE_CARD(CBloodfireColossusCard);
		DEFINE_CARD(CBoilingSeasCard);
		DEFINE_CARD(CBottleGnomesCard);
		DEFINE_CARD(CCavesOfKoilosCard);
		DEFINE_CARD(CConsumeSpiritCard);
		DEFINE_CARD(CContaminatedBondCard);
		DEFINE_CARD(CCounselOfTheSoratamiCard);
		DEFINE_CARD(CCraftyPathmageCard);
		DEFINE_CARD(CCruelEdictCard);
		DEFINE_CARD(CDemonsHornCard);
		DEFINE_CARD(CDragonsClawCard);
		DEFINE_CARD(CDreamProwlerCard);
		DEFINE_CARD(CElvishBardCard);
		DEFINE_CARD(CElvishBerserkerCard);
		DEFINE_CARD(CElvishWarriorCard);
		DEFINE_CARD(CExhaustionCard);
		DEFINE_CARD(CFesteringGoblinCard);
		DEFINE_CARD(CFinalPunishmentCard);
		DEFINE_CARD(CFishliverOilCard);
		DEFINE_CARD(CFlameWaveCard);
		DEFINE_CARD(CFlowstoneCrusherCard);
		DEFINE_CARD(CFlowstoneShamblerCard);
		DEFINE_CARD(CFlowstoneSlideCard);
		DEFINE_CARD(CFootSoldiersCard);
		DEFINE_CARD(CFormOfTheDragonCard);
		DEFINE_CARD(CGiftOfEstatesCard);
		DEFINE_CARD(CGoblinBrigandCard);
		DEFINE_CARD(CGoblinMountaineerCard);
		DEFINE_CARD(CGoblinPikerCard);
		DEFINE_CARD(CGoblinSkyRaiderCard);
		DEFINE_CARD(CGreaterGoodCard);
		DEFINE_CARD(CGroundskeeperCard);
		DEFINE_CARD(CHellsCaretakerCard);
		DEFINE_CARD(CHighwayRobberCard);
		DEFINE_CARD(CHorrorOfHorrorsCard);
		DEFINE_CARD(CImaginaryPetCard);
		DEFINE_CARD(CInspiritCard);
		DEFINE_CARD(CKamiOfOldStoneCard);
		DEFINE_CARD(CKarplusanYetiCard);
		DEFINE_CARD(CKavuClimberCard);
		DEFINE_CARD(CKingCheetahCard);
		DEFINE_CARD(CKrakensEyeCard);
		DEFINE_CARD(CLeoninSkyhunterCard);
		DEFINE_CARD(CLlanowarWastesCard);
		DEFINE_CARD(CLoxodonWarhammerCard);
		DEFINE_CARD(CLumengridWardenCard);
		DEFINE_CARD(CMagnivoreCard);
		DEFINE_CARD(CMarbleTitanCard);
		DEFINE_CARD(CMendingHandsCard);
		DEFINE_CARD(CMindslicerCard);
		DEFINE_CARD(CMortivoreCard);
		DEFINE_CARD(CNantukoHuskCard);
		DEFINE_CARD(CNaturalSpringCard);
		DEFINE_CARD(CNeedleStormCard);
		DEFINE_CARD(COrderOfTheSacredBellCard);
		DEFINE_CARD(COvergrowthCard);
		DEFINE_CARD(CPaladinEnvecCard);
		DEFINE_CARD(CPeaceOfMindCard);
		DEFINE_CARD(CPegasusChargerCard);
		DEFINE_CARD(CPhyrexianGargantuaCard);
		DEFINE_CARD(CQuicksandCard);
		DEFINE_CARD(CRathiDragonCard);
		DEFINE_CARD(CReminisceCard);
		DEFINE_CARD(CRiverBearCard);
		DEFINE_CARD(CRogueKavuCard);
		DEFINE_CARD(CRootbreakerWurmCard);
		DEFINE_CARD(CRootwallaCard);
		DEFINE_CARD(CSageAvenCard);
		DEFINE_CARD(CSanctumGuardianCard);
		DEFINE_CARD(CSandstoneWarriorCard);
		DEFINE_CARD(CSeasClaimCard);
		DEFINE_CARD(CSeedbornMuseCard);
		DEFINE_CARD(CSeethingSongCard);
		DEFINE_CARD(CShardPhoenixCard);
		DEFINE_CARD(CShivanReefCard);
		DEFINE_CARD(CSiftCard);
		DEFINE_CARD(CSilklashSpiderCard);
		DEFINE_CARD(CSkyhunterProwlerCard);
		DEFINE_CARD(CSlateOfAncestryCard);
		DEFINE_CARD(CSoulWardenCard);
		DEFINE_CARD(CStorageMatrixCard);
		DEFINE_CARD(CTanglebloomCard);
		DEFINE_CARD(CTempestOfLightCard);
		DEFINE_CARD(CThoughtCourierCard);
		DEFINE_CARD(CThranGolemCard);
		DEFINE_CARD(CThreatenCard);
		DEFINE_CARD(CThundermareCard);
		DEFINE_CARD(CTidingsCard);
		DEFINE_CARD(CTimeEbbCard);
		DEFINE_CARD(CTraumatizeCard);
		DEFINE_CARD(CTreeMonkeyCard);
		DEFINE_CARD(CTreetopBracersCard);
		DEFINE_CARD(CUrgolemsEyeCard);
		DEFINE_CARD(CUtopiaTreeCard);
		DEFINE_CARD(CVerdantForceCard);
		DEFINE_CARD(CVeteranCavalierCard);
		DEFINE_CARD(CViridianShamanCard);
		DEFINE_CARD(CVulshokMorningstarCard);
		DEFINE_CARD(CWanderguardSentryCard);
		DEFINE_CARD(CWeatheredWayfarerCard);
		DEFINE_CARD(CWeirdHarvestCard);
		DEFINE_CARD(CWhipSergeantCard);
		DEFINE_CARD(CWitheringGazeCard);
		DEFINE_CARD(CWurmsToothCard);
		DEFINE_CARD(CYavimayaCoastCard);
		DEFINE_CARD(CYawgmothDemonCard);
		DEFINE_CARD(CZealousInquisitorCard);
		DEFINE_CARD(CZodiacMonkeyCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CElvishWarriorCard::CElvishWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Warrior"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CGoblinPikerCard::CGoblinPikerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Piker"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
COrderOfTheSacredBellCard::COrderOfTheSacredBellCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the Sacred Bell"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CLumengridWardenCard::CLumengridWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lumengrid Warden"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CKamiOfOldStoneCard::CKamiOfOldStoneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Old Stone"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(7))
{
}

//____________________________________________________________________________
//
CLeoninSkyhunterCard::CLeoninSkyhunterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Leonin Skyhunter"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGoblinSkyRaiderCard::CGoblinSkyRaiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goblin Sky Raider"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CPegasusChargerCard::CPegasusChargerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pegasus Charger"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CZodiacMonkeyCard::CZodiacMonkeyCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Monkey"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CRiverBearCard::CRiverBearCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("River Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CGoblinMountaineerCard::CGoblinMountaineerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Goblin Mountaineer"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CSkyhunterProwlerCard::CSkyhunterProwlerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyhunter Prowler"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CElvishBardCard::CElvishBardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Bard"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddLure(FALSE);
}

//____________________________________________________________________________
//
CTreeMonkeyCard::CTreeMonkeyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tree Monkey"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CVeteranCavalierCard::CVeteranCavalierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Cavalier"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CUtopiaTreeCard::CUtopiaTreeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Utopia Tree"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(2))
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
}

//____________________________________________________________________________
//
CSandstoneWarriorCard::CSandstoneWarriorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sandstone Warrior"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CFlowstoneCrusherCard::CFlowstoneCrusherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Crusher"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CFlowstoneShamblerCard::CFlowstoneShamblerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Shambler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CSageAvenCard::CSageAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sage Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
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
CElvishBerserkerCard::CElvishBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Berserker"), CardType::Creature, CREATURE_TYPE2(Elf, Berserker), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodfireColossusCard::CBloodfireColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodfire Colossus"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			RED_MANA_TEXT,
			Life(-6),	// life delta
			new AnyCreatureComparer, 
			TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFootSoldiersCard::CFootSoldiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foot Soldiers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CWhipSergeantCard::CWhipSergeantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whip Sergeant"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNantukoHuskCard::CNantukoHuskCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Nantuko Husk"), CardType::Creature, CREATURE_TYPE2(Zombie, Insect), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CBattlefieldForgeCard::CBattlefieldForgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Battlefield Forge"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCavesOfKoilosCard::CCavesOfKoilosCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Caves of Koilos"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLlanowarWastesCard::CLlanowarWastesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Llanowar Wastes"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShivanReefCard::CShivanReefCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shivan Reef"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYavimayaCoastCard::CYavimayaCoastCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Yavimaya Coast"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQuicksandCard::CQuicksandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Quicksand"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CBottleGnomesCard::CBottleGnomesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bottle Gnomes"), CardType::_ArtifactCreature, CREATURE_TYPE(Gnome), nID,
		_T("3"), Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+3), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGroundskeeperCard::CGroundskeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Groundskeeper"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID, 
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::BasicLand, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViridianShamanCard::CViridianShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Shaman"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
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
CTanglebloomCard::CTanglebloomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tanglebloom"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrgolemsEyeCard::CUrgolemsEyeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ur-Golem's Eye"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTempestOfLightCard::CTempestOfLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempest of Light"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBoilingSeasCard::CBoilingSeasCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boiling Seas"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCounselOfTheSoratamiCard::CCounselOfTheSoratamiCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Counsel of the Soratami"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNaturalSpringCard::CNaturalSpringCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Natural Spring"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(+8), PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTidingsCard::CTidingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tidings"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThoughtCourierCard::CThoughtCourierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thought Courier"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
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
CMendingHandsCard::CMendingHandsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mending Hands"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(4), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngelicBlessingCard::CAngelicBlessingCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Angelic Blessing"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") WHITE_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CNeedleStormCard::CNeedleStormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Needle Storm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") GREEN_MANA_TEXT,
		Life(-4),
		new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CSiftCard::CSiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sift"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT, 3));

	cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimeEbbCard::CTimeEbbCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Time Ebb"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CMarbleTitanCard::CMarbleTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marble Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::Meekstone, 2));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKavuClimberCard::CKavuClimberCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Climber"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPeaceOfMindCard::CPeaceOfMindCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Peace of Mind"), CardType::GlobalEnchantment, nID, 
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			WHITE_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnnexCard::CAnnexCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Annex"), CardType::EnchantLand, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTreetopBracersCard::CTreetopBracersCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Treetop Bracers"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Unblockable)
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("flying creatures")));
}

//____________________________________________________________________________
//
CFishliverOilCard::CFishliverOilCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Fishliver Oil"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CSeasClaimCard::CSeasClaimCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sea's Claim"), CardType::EnchantLand, nID)
{
	counted_ptr<CCardTypeEnchant> cpSpell(
		::CreateObject<CCardTypeEnchant>(this,
			BLUE_MANA_TEXT, 
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->AddCardTypeToAdd(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Island"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngelsFeatherCard::CAngelsFeatherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angel's Feather"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenSpellCastedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenSpellCastedAbility>(this,
			Life(+1), PreventableType::NotPreventable));

	cpAbility->SetOptional(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::Pre defined::WhiteCards);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CDemonsHornCard::CDemonsHornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Demon's Horn"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenSpellCastedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenSpellCastedAbility>(this,
			Life(+1), PreventableType::NotPreventable));

	cpAbility->SetOptional(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::Pre defined::BlackCards);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CDragonsClawCard::CDragonsClawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon's Claw"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenSpellCastedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenSpellCastedAbility>(this,
			Life(+1), PreventableType::NotPreventable));

	cpAbility->SetOptional(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::Pre defined::RedCards);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CKrakensEyeCard::CKrakensEyeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kraken's Eye"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenSpellCastedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenSpellCastedAbility>(this,
													Life(+1), PreventableType::NotPreventable));

	cpAbility->SetOptional(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::Pre defined::BlueCards);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CWurmsToothCard::CWurmsToothCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wurm's Tooth"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenSpellCastedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenSpellCastedAbility>(this,
													Life(+1), PreventableType::NotPreventable));

	cpAbility->SetOptional(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::Pre defined::GreenCards);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CBlessedOratorCard::CBlessedOratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blessed Orator"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCraftyPathmageCard::CCraftyPathmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crafty Pathmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagnivoreCard::CMagnivoreCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Magnivore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Sorcery, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMortivoreCard::CMortivoreCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Mortivore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0),
		BLACK_MANA_TEXT)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootwallaCard::CRootwallaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Rootwalla"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		_T("1") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CFlowstoneSlideCard::CFlowstoneSlideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flowstone Slide"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			Power(+0), Life(+0),
			new AnyCreatureComparer));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetExtraActionValueVector(ContextValue(-1, +1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBallistaSquadCard::CBallistaSquadCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Ballista Squad"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(0),	// life delta
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, 
		TRUE,
		CManaCost::AllCostColors);
	m_pTargetChgLifeAbility->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeAbility->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CSilklashSpiderCard::CSilklashSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silklash Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(7))
{
	GetCreatureKeyword()->AddReach(FALSE);

	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,	// Cost
			Life(0),		// life delta
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),	// Affects creatures
			FALSE,	// Affects players
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));	// Preventable

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(-1));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShardPhoenixCard::CShardPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shard Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID, 
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			FALSE,	// opponent's turn only
			TRUE);	// your turn only

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T(""),
				Life(-2),	// life delta
				new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRathiDragonCard::CRathiDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rathi Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(2, 2);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
	//cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative); cannot set to negative or otherwise computer will not use card
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWanderguardSentryCard::CWanderguardSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wanderguard Sentry"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CWanderguardSentryCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredTargetDiscardCardWhenSelfMovedAbility> cpAbility(
		::CreateObject<CTriggeredTargetDiscardCardWhenSelfMovedAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield,
			TRUE,
			FALSE,
			0,
			FALSE_CARD_COMPARER));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
	*/
}

bool CWanderguardSentryCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CThundermareCard::CThundermareCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Thundermare"), CardType::Creature, CREATURE_TYPE2(Elemental, Horse), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWitheringGazeCard::CWitheringGazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Withering Gaze"), CardType::Sorcery, nID)

	, m_CardFilter(new CardTypeComparer(CardType::Forest | CardType::Green, false))
{
	counted_ptr<CTargetPlayerRevealHandSpell2> cpSpell(
		::CreateObject<CTargetPlayerRevealHandSpell2>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			&m_CardFilter));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAnarchistCard::CAnarchistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anarchist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Sorcery, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHellsCaretakerCard::CHellsCaretakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hell's Caretaker"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
		FALSE,	// opponent's turn only
		TRUE);	// your turn only

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenWindreaderCard::CAvenWindreaderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Windreader"), CardType::Creature, CREATURE_TYPE3(Bird, Soldier, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT, 1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKarplusanYetiCard::CKarplusanYetiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karplusan Yeti"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
			_T(""),
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetReceiveDamageFromTargetedCreature();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInspiritCard::CInspiritCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inspirit"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			Power(+2), Life(+4), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CConsumeSpiritCard::CConsumeSpiritCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Consume Spirit"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(0),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::Colors(CManaCost::Color::Black));
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CFlameWaveCard::CFlameWaveCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flame Wave"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetPropagateToTargetedPlayersCreatures();
}

//____________________________________________________________________________
//
CWeatheredWayfarerCard::CWeatheredWayfarerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Weathered Wayfarer"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			WHITE_MANA_TEXT,
			CCardFilter::GetFilter(_T("lands")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddTapCost();
	cpAbility->SetRevealCards(TRUE);
	cpAbility->SetOnlyPlayableIfControlsLess(CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COvergrowthCard::COvergrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Overgrowth"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this, &COvergrowthCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> COvergrowthCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiftOfEstatesCard::CGiftOfEstatesCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Gift of Estates"), CardType::Sorcery, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Plains")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(3));
	m_pSearchLibrarySpell->SetOnlyPlayableIfControlsLess(
		CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CPhyrexianGargantuaCard::CPhyrexianGargantuaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Gargantua"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetDrawCount(2);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CContaminatedBondCard::CContaminatedBondCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Contaminated Bond"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CContaminatedBondCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CContaminatedBondCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHighwayRobberCard::CHighwayRobberCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Highway Robber"), CardType::Creature, CREATURE_TYPE3(Human, Rogue, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlateOfAncestryCard::CSlateOfAncestryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Slate of Ancestry"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell2>>(this,
			_T("4"),
			ZoneId::Battlefield, TRUE, FALSE));

	cpAbility->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All, CCardFilter::GetFilter(_T("cards")));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulWardenCard::CSoulWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul Warden"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTraumatizeCard::CTraumatizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Traumatize"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,					
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			SpecialNumber::DivideBy2RoundDown));

	//cpSpell->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBiorhythmCard::CBiorhythmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Biorhythm"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
		::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
			_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMindslicerCard::CMindslicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindslicer"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDiscardCount(SpecialNumber::All);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattleOfWitsCard::CBattleOfWitsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Battle of Wits"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBattleOfWitsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBattleOfWitsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBattleOfWitsCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	return pLibrary->GetSize() >= 200;
}

bool CBattleOfWitsCard::BeforeResolution(CBattleOfWitsCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	return pLibrary->GetSize() >= 200;
}

//____________________________________________________________________________
//
CRogueKavuCard::CRogueKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rogue Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgPwrTghAttrWhenSelfAttackedBlockedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghAttrWhenSelfAttackedBlockedAbility>(this,
			FALSE,
			FALSE,
			Power(+2), Life(+0), CreatureKeyword::Null));

	cpAbility->GetTrigger().SetAttackingAloneEventCallback(CWhenSelfAttackedBlocked::PlayerEventCallback(cpAbility.GetPointer(),
		&CTriggeredChgPwrTghAttrWhenSelfAttackedBlockedAbility::OnAttacking));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CDreamProwlerCard::CDreamProwlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dream Prowler"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//removing unblockable after combat (at the end of combat step)
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility,CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Unblockable);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKingCheetahCard::CKingCheetahCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("King Cheetah"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CRootbreakerWurmCard::CRootbreakerWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rootbreaker Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CThranGolemCard::CThranGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thran Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(
			CreatureKeyword::Flying | CreatureKeyword::FirstStrike | CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(
			CreatureKeyword::Flying | CreatureKeyword::FirstStrike | CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeethingSongCard::CSeethingSongCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seething Song"), CardType::Instant, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Instant,					
			_T("2") RED_MANA_TEXT,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVulshokMorningstarCard::CVulshokMorningstarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vulshok Morningstar"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonWarhammerCard::CLoxodonWarhammerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Loxodon Warhammer"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Lifelink);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYawgmothDemonCard::CYawgmothDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Yawgmoth Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVerdantForceCard::CVerdantForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Verdant Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling I"), 62000, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeedbornMuseCard::CSeedbornMuseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seedborn Muse"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UntapStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFesteringGoblinCard::CFesteringGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Festering Goblin"), CardType::Creature, CREATURE_TYPE2(Zombie, Goblin), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgPwrTghWhenSelfMovedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenSelfMovedAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CReminisceCard::CReminisceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reminisce"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("cards"))));

	CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE);
	pCardModifier->SetShuffle(TRUE);
	cpSpell->AddCardModifier(pCardModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGreaterGoodCard::CGreaterGoodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Greater Good"), CardType::GlobalEnchantment, nID, 
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell6>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell6>>(this,
			_T(""),
			CCardFilter::GetFilter(_T("creatures"))));

	cpAbility->SetDiscard(3, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHorrorOfHorrorsCard::CHorrorOfHorrorsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horror of Horrors"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature | CardType::Black, true)));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinBrigandCard::CGoblinBrigandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Brigand"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CFinalPunishmentCard::CFinalPunishmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Final Punishment"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell4> cpSpell(
		::CreateObject<CTargetChgLifeSpell4>(this, AbilityType::Sorcery,					
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCruelEdictCard::CCruelEdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cruel Edict"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
			_T("1") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSanctumGuardianCard::CSanctumGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanctum Guardian"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			TRUE,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources));

	cpAbility->GetCost().AddSacrificeThisCardCost(this);

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CZealousInquisitorCard::CZealousInquisitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zealous Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(1));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CPaladinEnvecCard::CPaladinEnvecCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Paladin en-Vec"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CStorageMatrixCard::CStorageMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Storage Matrix"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CTriggeredChgUntapCardTypeWhenNodeChangedAbility> cpAbility(
		::CreateObject<CTriggeredChgUntapCardTypeWhenNodeChangedAbility>(this));

	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);
	cpAbility->SetOptionalType(CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OptionalType::Required);

	cpAbility->AddCardTypeSelection(CardType::Artifact, _T("artifact"));
	cpAbility->AddCardTypeSelection(CardType::Creature, _T("creature"));
	cpAbility->AddCardTypeSelection(CardType::_Land, _T("land"));

	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImaginaryPetCard::CImaginaryPetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Imaginary Pet"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImaginaryPetCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CImaginaryPetCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CImaginaryPetCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0;
}

bool CImaginaryPetCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0;
}

//____________________________________________________________________________
//
CExhaustionCard::CExhaustionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exhaustion"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgUntapCardTypeSpell> cpSpell(
		::CreateObject<CTargetChgUntapCardTypeSpell>(this, AbilityType::Sorcery,					
			_T("2") BLUE_MANA_TEXT,
			CardType::Creature | CardType::_Land));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWeirdHarvestCard::CWeirdHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Weird Harvest"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalSearchLibrarySpell> cpSpell(
		::CreateObject<CGlobalSearchLibrarySpell>(this, AbilityType::Sorcery,					
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures")),
			0, 0));	// X cost

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThreatenCard::CThreatenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Threaten"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1); 

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFormOfTheDragonCard::CFormOfTheDragonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Form of the Dragon"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CCanBeAttackedByEnchantment> cpAbility( 
			::CreateObject<CCanBeAttackedByEnchantment>(this, 
				CCardFilter::GetFilter(_T("flying creatures"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(5));
		cpAbility->GetLifeModifier().SetReplacement(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlackmailCard::CBlackmailCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blackmail"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			3, MoveType::Discard, ZoneId::Null, FALSE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetSecondaryAction(1, MoveType::Discard, ZoneId::Graveyard, TRUE, FALSE, new TrueCardComparer, TRUE, FALSE,
								CardPlacement::Top, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//