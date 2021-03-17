#include "stdafx.h"
#include "CardFallenEmpires.h"

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

		DEFINE_CARD(CAeolipileCard);
		DEFINE_CARD(CArmorThrullCard);
		DEFINE_CARD(CBalmOfRestorationCard);
		DEFINE_CARD(CBasalThrullCard);
		DEFINE_CARD(CCombatMedicCard);
		DEFINE_CARD(CConchHornCard);
		DEFINE_CARD(CDwarvenArmorerCard);
		DEFINE_CARD(CDwarvenLieutenantCard);
		DEFINE_CARD(CEbonPraetorCard);
		DEFINE_CARD(CElvenFortressCard);
		DEFINE_CARD(CElvenLyreCard);
		DEFINE_CARD(CElvishFarmerCard);
		DEFINE_CARD(CElvishHunterCard);
		DEFINE_CARD(CElvishScoutCard);
		DEFINE_CARD(CFarrelitePriestCard);
		DEFINE_CARD(CFeralThallidCard);
		DEFINE_CARD(CFungalBloomCard);
		DEFINE_CARD(CGoblinChirurgeonCard);
		DEFINE_CARD(CHandOfJusticeCard);
		DEFINE_CARD(CHighTideCard);
		DEFINE_CARD(CHomaridCard);
		DEFINE_CARD(CHomaridShamanCard);
		DEFINE_CARD(CHomaridSpawningBedCard);
		DEFINE_CARD(CHymnToTourachCard);
		DEFINE_CARD(CIcatianJavelineersCard);
		DEFINE_CARD(CIcatianLieutenantCard);
		DEFINE_CARD(CIcatianMoneychangerCard);
		DEFINE_CARD(CImplementsOfSacrificeCard);
		DEFINE_CARD(COrcishVeteranCard);
		DEFINE_CARD(COrderOfLeitburCard);
		DEFINE_CARD(COrderOfTheEbonHandCard);
		DEFINE_CARD(CRainbowValeCard);
		DEFINE_CARD(CRingOfRenewalCard);
		DEFINE_CARD(CRiverMerfolkCard);
		DEFINE_CARD(CSporeFlowerCard);
		DEFINE_CARD(CSvyelunitePriestCard);
		DEFINE_CARD(CThallidCard);
		DEFINE_CARD(CThallidDevourerCard);
		DEFINE_CARD(CTheloniteDruidCard);
		DEFINE_CARD(CTheloniteMonkCard);
		DEFINE_CARD(CThornThallidCard);
		DEFINE_CARD(CThrullChampionCard);
		DEFINE_CARD(CThrullWizardCard);
		DEFINE_CARD(CTidalInfluenceCard);
		DEFINE_CARD(CTourachsGateCard);
		DEFINE_CARD(CVodalianKnightsCard);
		DEFINE_CARD(CVodalianMageCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CHymnToTourachCard::CHymnToTourachCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hymn to Tourach"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetAtRandom();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COrderOfTheEbonHandCard::COrderOfTheEbonHandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the Ebon Hand"), CardType::Creature, CREATURE_TYPE2(Cleric, Knight), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrderOfLeitburCard::COrderOfLeitburCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of Leitbur"), CardType::Creature, CREATURE_TYPE3(Cleric, Knight, Human), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CImplementsOfSacrificeCard::CImplementsOfSacrificeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Implements of Sacrifice"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	//Mana Generation Ability
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAeolipileCard::CAeolipileCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aeolipile"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalmOfRestorationCard::CBalmOfRestorationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Balm of Restoration"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("1"),
				Life(+2), PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, TRUE,
				Life(2), SourceColor::Null));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBasalThrullCard::CBasalThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Basal Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCombatMedicCard::CCombatMedicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Combat Medic"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CConchHornCard::CConchHornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conch Horn"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1"), 2));

	cpAbility->SetDiscard(1, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenLieutenantCard::CDwarvenLieutenantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Lieutenant"), CardType::Creature, CREATURE_TYPE2(Dwarf, Soldier), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Power(+1), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvenFortressCard::CElvenFortressCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elven Fortress"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CElvenLyreCard::CElvenLyreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elven Lyre"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishScoutCard::CElvishScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Scout"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinChirurgeonCard::CGoblinChirurgeonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Chirurgeon"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(0), Life(2))

	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHandOfJusticeCard::CHandOfJusticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of Justice"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") WHITE_MANA_TEXT, Power(2), Life(6))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	cpAbility->GetCost().AddTapCardCost(3, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHighTideCard::CHighTideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("High Tide"), CardType::Instant, nID)
/*{
	counted_ptr<CProdExtraManaEnchantment> cpSpell(
		::CreateObject<CProdExtraManaEnchantment>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 
			new CardTypeComparer(CardType::Island, false),
			BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}*/
{//Now when this spell is casted several times in a turn, all copies have effect.
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("High Tide Effect"), 2953, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHomaridShamanCard::CHomaridShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Homarid Shaman"), CardType::Creature, CREATURE_TYPE2(Homarid, Shaman), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT,
			TRUE, // tap
			FALSE, // untap
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIcatianLieutenantCard::CIcatianLieutenantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Lieutenant"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiverMerfolkCard::CRiverMerfolkCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("River Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CSvyelunitePriestCard::CSvyelunitePriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Svyelunite Priest"), CardType::Creature, CREATURE_TYPE2(Merfolk, Cleric), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheloniteDruidCard::CTheloniteDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thelonite Druid"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CIsAlsoAEnchantment> cpAbility(
		::CreateObject<CIsAlsoAEnchantment>(this, AbilityType::Activated,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			_T("Animated Forest A"), 64001));

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVodalianKnightsCard::CVodalianKnightsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Vodalian Knights"), CardType::Creature, CREATURE_TYPE2(Merfolk, Knight), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2),
		BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CVodalianKnightsCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVodalianKnightsCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CVodalianKnightsCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CVodalianKnightsCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CVodalianKnightsCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CVodalianKnightsCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CVodalianMageCard::CVodalianMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Mage"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrullWizardCard::CThrullWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrull Wizard"), CardType::Creature, CREATURE_TYPE2(Thrull, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Black, false)));
	ATLASSERT(cpAbility);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("3"));
	cpAbility->GetDenialCost().SetManaCost(BLACK_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrcishVeteranCard::COrcishVeteranCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Orcish Veteran"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::less<int>>(2));
	m_CardFilter.AddChildFilter(CCardFilter::GetFilter(_T("non-white creatures"))->Clone());

	GetCreatureKeyword()->AddCantBlock(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CThallidCard::CThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

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
				_T("Saproling B"), 2712,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThallidDevourerCard::CThallidDevourerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thallid Devourer"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

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
				_T("Saproling B"), 2712,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+2)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElvishFarmerCard::CElvishFarmerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Farmer"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(2))

	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

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
				_T("Saproling B"), 2712,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+2), PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSporeFlowerCard::CSporeFlowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spore Flower"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(1))
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

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
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
				_T(""),
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThornThallidCard::CThornThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thorn Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

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
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFeralThallidCard::CFeralThallidCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Feral Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(3),
		GREEN_MANA_TEXT)
{
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SPORE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	m_pRegenerationAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

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
}

//____________________________________________________________________________
//
CArmorThrullCard::CArmorThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armor Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+2"), +1));
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenArmorerCard::CDwarvenArmorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Armorer"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(0), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+0/+1"), +1));
		cpAbility->SetAbilityText(_T("Put a +0/+1 counter on. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+0"), +1));
		cpAbility->SetAbilityText(_T("Put a +1/+0 counter on. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTheloniteMonkCard::CTheloniteMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thelonite Monk"), CardType::Creature, CREATURE_TYPE3(Insect, Monk, Cleric), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("green creatures")));

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::BasicLand, CardType::_All, FALSE, _T("Forest"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIcatianJavelineersCard::CIcatianJavelineersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Javelineers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	// Come into play with 1 javelin counter
	GetCounterContainer()->ScheduleCounter(JAVELIN_COUNTER, 1, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(JAVELIN_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		//Ping ability
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(JAVELIN_COUNTER), -1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFungalBloomCard::CFungalBloomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fungal Bloom"), CardType::GlobalEnchantment, nID, 
		GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Fungus), false), FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CCardCounterModifier(SPORE_COUNTER, +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishHunterCard::CElvishHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Hunter"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFarrelitePriestCard::CFarrelitePriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Farrelite Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));

		m_pAbility = cpAbility.GetPointer();

		AddAbility(m_pAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFarrelitePriestCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFarrelitePriestCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CNode* pToNode) const
{
		return m_pAbility->GetTurnUsageCount() > 3;
}

//____________________________________________________________________________
//
CRainbowValeCard::CRainbowValeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rainbow Vale"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(
			new CScheduledCardModifier(pGame,
				new CSpecialEffectModifier((CCard*)this, 1),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true,
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(
			new CScheduledCardModifier(pGame,
				new CSpecialEffectModifier((CCard*)this, 1),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true,
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(
			new CScheduledCardModifier(pGame,
				new CSpecialEffectModifier((CCard*)this, 1),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true,
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(
			new CScheduledCardModifier(pGame,
				new CSpecialEffectModifier((CCard*)this, 1),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true,
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::Add(
			new CScheduledCardModifier(pGame,
				new CSpecialEffectModifier((CCard*)this, 1),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true,
				CScheduledCardModifier::Operation::ApplyToLater));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetGatherer().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTriggeredPlayerModifiers().Add(new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTourachsGateCard::CTourachsGateCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Tourach's Gate"), CardType::EnchantLand, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new CardTypeComparer(CardType::_Land, false))
	, m_VanishingKeyword(this, 0)
	, m_CardFilter1(new CreatureTypeComparer(CREATURE_TYPE(Thrull), false))
	, m_CardFilter2(new EnchantedByComparer(this))
{
	m_pEnchantSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter1);

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(TIME_COUNTER, +3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AttackingCreatureComparer,
				Power(+2), Life(-1)));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter2);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetAbilityText(_T("Attacking creatures you control get +2/-1 until end of turn. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CTourachsGateCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTourachsGateCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTourachsGateCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

BOOL CTourachsGateCard::CanPlay(BOOL bIncludeTricks)
{
	return m_pEnchantSpell->GetEnchantedOnCard()->GetOrientation()->IsUntapped();
}

//____________________________________________________________________________
//
CHomaridSpawningBedCard::CHomaridSpawningBedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Homarid Spawning Bed"), CardType::GlobalEnchantment, nID, 
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Camarid A"), 2939, 0));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::Any, &m_CardFilter);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHomaridSpawningBedCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHomaridSpawningBedCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCMC = pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)->GetConvertedManaCost();

	ContextValue Context(nCMC);
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CRingOfRenewalCard::CRingOfRenewalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Renewal"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("5"), 2));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CRandomDiscardModifier(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrullChampionCard::CThrullChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrull Champion"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new ControlledByCardComparer((CCard*)this))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CThrullChampionCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Thrull), false),
				Power(+1), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Thrull), false),
				FALSE));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CGainControlModifier(GetGame(), (CCard*)this));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		m_pStealAbility = cpAbility.GetPointer();
		AddAbility(m_pStealAbility);
	}
}

void CThrullChampionCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pFromZone == pToZone)
		return;

	// Remove abilities from stack
	CStack& stack = GetGame()->GetStack();
	for (int i = stack.GetStackSize() -1; i >= 0; --i)
		if (stack.GetStackAction(i).GetPointer()->GetAbility() == m_pStealAbility)
			stack.RemoveActionAt(i);

	// Return stolen cards
	CCountedCardContainer cards;
	CZone* pZone;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pZone, cards);
	}

	CGainControlModifier modifier = CGainControlModifier(GetGame(), (CCard*)this, true);

	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CHomaridCard::CHomaridCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Homarid"), CardType::Creature, CREATURE_TYPE(Homarid), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(TIDE_COUNTER, 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIDE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
			Power(-1), Life(-1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(TIDE_COUNTER, 1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
			Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(TIDE_COUNTER, 3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHomaridCard::SetTriggerContext));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIDE_COUNTER, 0, true));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CHomaridCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old < 4) && (n_value >= 4) && ((CString)name == TIDE_COUNTER);
}

//____________________________________________________________________________
//
CTidalInfluenceCard::CTidalInfluenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tidal Influence"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(TIDE_COUNTER, 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(
					this, &CTidalInfluenceCard::CanPlay)));

		this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIDE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
			Power(-2), Life(0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(TIDE_COUNTER, 1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
			Power(+2), Life(0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(TIDE_COUNTER, 3));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTidalInfluenceCard::SetTriggerContext));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIDE_COUNTER, 0, true));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CTidalInfluenceCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old < 4) && (n_value >= 4) && ((CString)name == TIDE_COUNTER);
}

BOOL CTidalInfluenceCard::CanPlay(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardNameComparer(_T("Tidal Influence")));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
			return false;
	}
	return true;
}

//____________________________________________________________________________
//
CIcatianMoneychangerCard::CIcatianMoneychangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Moneychanger"), CardType::Creature, CREATURE_TYPE(Human), nID,
		WHITE_MANA_TEXT, Power(0), Life(2))
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CIcatianMoneychangerCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCounterContainer()->ScheduleCounter(CREDIT_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CREDIT_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		cpAbility->AddSacrificeCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIcatianMoneychangerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIcatianMoneychangerCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(+m_nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CIcatianMoneychangerCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CREDIT_COUNTER)) return;
	m_nCounterCount = n_value;
}

void CIcatianMoneychangerCard::Move(CZone* pToZone,
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

//____________________________________________________________________________
//
CEbonPraetorCard::CEbonPraetorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ebon Praetor"), CardType::Creature, CREATURE_TYPE2(Avatar, Praetor), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-2/-2"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new AnyCreatureComparer);
		m_CardFilter1.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Thrull), false));
		m_CardFilter1.SetFilterName(_T("a non-Thrull creature"), _T("non-Thrull creatures"));

		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CEbonPraetorCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter1);

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("-2/-2"), -1));

		m_pAbility1 = cpAbility.GetPointer();
		AddAbility(m_pAbility1);
	}
	{
		m_CardFilter2.AddComparer(new AnyCreatureComparer);
		m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Thrull), false));
		m_CardFilter2.SetFilterName(_T("a Thrull creature"), _T("Thrull creatures"));

		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CEbonPraetorCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter2);

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("-2/-2"), -1));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+0"), +1));

		m_pAbility2 = cpAbility.GetPointer();
		AddAbility(m_pAbility2);
	}
}

BOOL CEbonPraetorCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetGame()->GetActivePlayer() != GetController()) return FALSE;
	if (GetGame()->GetCurrentNode()->GetNodeId() != NodeId::UpkeepStep) return FALSE;
	if (m_pAbility1->GetTurnUsageCount() + m_pAbility2->GetTurnUsageCount() > 0) return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
