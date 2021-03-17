#include "stdafx.h"
#include "CardDark.h"

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

		DEFINE_CARD(CAmnesiaCard);
		DEFINE_CARD(CBansheeCard);
		DEFINE_CARD(CBoneFluteCard);
		DEFINE_CARD(CBookOfRassCard);
		DEFINE_CARD(CCityOfShadowsCard);
		DEFINE_CARD(CCoalGolemCard);
		DEFINE_CARD(CCurseArtifactCard);
		DEFINE_CARD(CDarkHeartOfTheWoodCard);
		DEFINE_CARD(CDrownedCard);
		DEFINE_CARD(CElectricEelCard);
		DEFINE_CARD(CElvesOfDeepShadowCard);
		DEFINE_CARD(CExorcistCard);
		DEFINE_CARD(CFestivalCard);
		DEFINE_CARD(CGiantSharkCard);
		DEFINE_CARD(CGoblinsOfTheFlargCard);
		DEFINE_CARD(CGoblinWizardCard);
		DEFINE_CARD(CGraveRobbersCard);
		DEFINE_CARD(CHiddenPathCard);
		DEFINE_CARD(CHolyLightCard);
		DEFINE_CARD(CLurkerCard);
		DEFINE_CARD(CMarshGoblinsCard);
		DEFINE_CARD(CMazeOfIthCard);
		DEFINE_CARD(CMerfolkAssassinCard);
		DEFINE_CARD(CNamelessRaceCard);
		DEFINE_CARD(CNecropolisCard);
		DEFINE_CARD(CNiallSilvainCard);
		DEFINE_CARD(COrcGeneralCard);
		DEFINE_CARD(CPeopleOfTheWoodsCard);
		DEFINE_CARD(CPsychicAllergyCard);
		DEFINE_CARD(CRiptideCard);
		DEFINE_CARD(CRuneswordCard);
		DEFINE_CARD(CSavaenElvesCard);
		DEFINE_CARD(CScarwoodGoblinsCard);
		DEFINE_CARD(CScarwoodHagCard);
		DEFINE_CARD(CSquireCard);
		DEFINE_CARD(CStandingStonesCard);
		DEFINE_CARD(CTheFallenCard);
		DEFINE_CARD(CTivadarSCrusadeCard);
		DEFINE_CARD(CTowerOfCoireallCard);
		DEFINE_CARD(CTrackerCard);
		DEFINE_CARD(CWandOfIthCard);
		DEFINE_CARD(CWarBargeCard);
		DEFINE_CARD(CWaterWurmCard);
		DEFINE_CARD(CWitchHunterCard);
		DEFINE_CARD(CWormwoodTreefolkCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBookOfRassCard::CBookOfRassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Book of Rass"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoalGolemCard::CCoalGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coal Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, _T("3")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarkHeartOfTheWoodCard::CDarkHeartOfTheWoodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dark Heart of the Wood"), CardType::GlobalEnchantment, nID, 
		BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+3), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrownedCard::CDrownedCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Drowned"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CElectricEelCard::CElectricEelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Electric Eel"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT RED_MANA_TEXT,
				Power(+2), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElvesOfDeepShadowCard::CElvesOfDeepShadowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elves of Deep Shadow"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
	GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExorcistCard::CExorcistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Exorcist"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Black | CardType::Creature, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinWizardCard::CGoblinWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Wizard"), CardType::Creature, CREATURE_TYPE2(Goblin, Wizard), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	{
		m_CardFilter.SetFilterName(_T("a Goblin permanent"), _T("Goblin permanents"));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGraveRobbersCard::CGraveRobbersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grave Robbers"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHiddenPathCard::CHiddenPathCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hidden Path"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+0), Life(+0), CreatureKeyword::Forestwalk));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHolyLightCard::CHolyLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Holy Light"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::White, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMarshGoblinsCard::CMarshGoblinsCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Marsh Goblins"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CMazeOfIthCard::CMazeOfIthCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Maze of Ith"), nID)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerfolkAssassinCard::CMerfolkAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Assassin"), CardType::Creature, CREATURE_TYPE2(Merfolk, Assassin), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Islandwalk, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNiallSilvainCard::CNiallSilvainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Niall Silvain"), CardType::Creature, CREATURE_TYPE(Ouphe), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPeopleOfTheWoodsCard::CPeopleOfTheWoodsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("People of the Woods"), CardType::Creature, CREATURE_TYPE(Human), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(0))
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
CRiptideCard::CRiptideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Riptide"), CardType::Instant, nID)
{
	counted_ptr<CGlobalTapSpell> cpSpell(
		::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSavaenElvesCard::CSavaenElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savaen Elves"), CardType::Creature, CREATURE_TYPE(Elf), nID,
	GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::EnchantLand, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScarwoodGoblinsCard::CScarwoodGoblinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarwood Goblins"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CScarwoodHagCard::CScarwoodHagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarwood Hag"), CardType::Creature, CREATURE_TYPE(Hag), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Forestwalk, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Forestwalk,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSquireCard::CSquireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squire"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CStandingStonesCard::CStandingStonesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Standing Stones"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTivadarSCrusadeCard::CTivadarSCrusadeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tivadar's Crusade"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTowerOfCoireallCard::CTowerOfCoireallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Coireall"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("non-Walls")));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrackerCard::CTrackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tracker"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetReceiveDamageFromTargetedCreature();

	//cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWitchHunterCard::CWitchHunterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Witch Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWormwoodTreefolkCard::CWormwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Forestwalk));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Swampwalk));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAmnesiaCard::CAmnesiaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Amnesia"), CardType::Sorcery, nID)

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			SpecialNumber::Any, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			&m_CardFilter));

	cpSpell->SetShowHandBeforeDiscards();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//

CBoneFluteCard::CBoneFluteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bone Flute"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("2"),
			Power(-1), Life(+0),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiantSharkCard::CGiantSharkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Shark"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(4))
	, m_CardFilter(new CreatureFlagComparer(CreatureFlag::TakenCombatDamage | CreatureFlag::TakenNonCombatDamage, false))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGiantSharkCard::CanAttack)));

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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiantSharkCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CGiantSharkCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//pump when blocked by or blocking damaged creatures
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CGiantSharkCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CGiantSharkCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CGiantSharkCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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
COrcGeneralCard::COrcGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orc General"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Orc) | CREATURE_TYPE(Goblin), false));
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+1), Life(+1),
			new CreatureTypeComparer(CREATURE_TYPE(Orc), false)));

	cpAbility->SetToActivatedAbility();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	cpAbility->AddTapCost();
	cpAbility->SetExceptParent();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFestivalCard::CFestivalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Festival"), CardType::Instant, nID)

	, m_CardFilter(FALSE_CARD_COMPARER)
{
	counted_ptr<CCanBeAttackedByEnchantment> cpSpell(
		::CreateObject<CCanBeAttackedByEnchantment>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			&m_CardFilter));

	cpSpell->SetUseInSpecificNode(NodeId::UpkeepStep, TRUE);
	cpSpell->SetAffectPlayers();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWaterWurmCard::CWaterWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Water Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Island, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"
	
	cpAbility->SetMaximumAddedPower(Power(0));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->SetPowerMultiplier(Power(0));
	cpAbility->SetToughnessMultiplier(Life(1));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCurseArtifactCard::CCurseArtifactCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Curse Artifact"), CardType::EnchantArtifact, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new CardTypeComparer(CardType::Artifact, false))
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCurseArtifactCard::SetTriggerContext));

	cpAbility->GetOptionalModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CCurseArtifactCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;

	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CGoblinsOfTheFlargCard::CGoblinsOfTheFlargCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Goblins of the Flarg"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Mountainwalk)
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinsOfTheFlargCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinsOfTheFlargCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinsOfTheFlargCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

bool CGoblinsOfTheFlargCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLurkerCard::CLurkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lurker"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant | CardType::_Enchantment, false)))
{
	GetCardKeyword()->AddShroud(FALSE, &m_CardFilter);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(true);
		//cpAbility->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter); // no needed
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCityOfShadowsCard::CCityOfShadowsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("City of Shadows"), nID)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddExileCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetAbilityText(_T("Put a storage counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {X} to your mana pool, where X is number of storage counters on"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCityOfShadowsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCityOfShadowsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetCounterContainer()->GetCounter(STORAGE_COUNTER)->GetCount();
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CWandOfIthCard::CWandOfIthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wand of Ith"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
		, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWandOfIthCard::OnPunisherSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWandOfIthCard::BeforeResolution));
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());	
}

bool CWandOfIthCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nLifeCost;
	
		if (pCard->GetCardType().IsLand())
			nLifeCost = 1;
		else
			nLifeCost = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Discard %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		if (nLifeCost == 0)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Don't discard"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		else if (pTarget->GetLife() >= nLifeCost && !pTarget->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Pay %d life"), nLifeCost);

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pCard, (DWORD)nLifeCost);
	}

	return true;
}

void CWandOfIthCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s discards %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
		
				pModifier.ApplyTo(pCard);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does nothing"), pSelectionPlayer->GetPlayerName());
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
				int iLifePaid = (int)dwContext2;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays %d life"), pSelectionPlayer->GetPlayerName(), iLifePaid);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-iLifePaid), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CPsychicAllergyCard::CPsychicAllergyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Psychic Allergy"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CPsychicAllergyCard::OnSelectionDone))
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPsychicAllergyCard::OnPaymentSelected))

{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPsychicAllergyCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPsychicAllergyCard::BeforeResolution2));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

void CPsychicAllergyCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue = false;
		cBlack = false;
		cRed = false;
		cGreen = false;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("blue"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("green"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CPsychicAllergyCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cWhite = true;
				return;
			}
			if (nSelectedIndex == 2)
			{
				cBlue = true;
				return;
			}
			if (nSelectedIndex == 3)
			{
				cBlack = true;
				return;
			}
			if (nSelectedIndex == 4)
			{
				cRed = true;
				return;
			}
			if (nSelectedIndex == 5)
			{
				cGreen = true;
				return;
			}
		}
}

bool CPsychicAllergyCard::BeforeResolution1(CPsychicAllergyCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	CCardFilter m_CardFilter;
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	if (cWhite) m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));
	if (cBlue) m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));
	if (cBlack) m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));
	if (cRed) m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));
	if (cGreen) m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green, false));

	int nPermanents = m_CardFilter.CountIncluded(pPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier (Life(-nPermanents), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pPlayer);
	
	return true;
}

bool CPsychicAllergyCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Island, false));

	int nIslands = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Destroy %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	if (nIslands >= 2)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Sacrifice two Islands"));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CPsychicAllergyCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s destroys %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pSelectionPlayer);
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices two Islands"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::Island, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
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
CNecropolisCard::CNecropolisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necropolis"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("5"), Power(0), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNecropolisCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CNecropolisCard::BeforeResolution(CAbilityAction* pAction)
{
	int n = pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetAt(0)->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+0/+1"), +n);
	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CNamelessRaceCard::CNamelessRaceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nameless Race"), CardType::Creature, CREATURE_TYPE(Null), nID,
		_T("3") BLACK_MANA_TEXT, Power(0), Life(0))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CNamelessRaceCard::OnSelectionDone))
	, m_nLifePaid(0)
{
	GetCreatureKeyword()->AddTrample(false);
}

void CNamelessRaceCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_nLifePaid = 0;

		int n = GET_INTEGER(GetController()->GetLife());
		int nWhite = 0;
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));
		m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);

			if (pPlayer != GetController())
			{
				CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
				CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

				nWhite += m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
				nWhite += m_CardFilter.CountIncluded(pGraveyard->GetCardContainer());
			}
		}

		if (n > nWhite) n = nWhite;

		if ((n > 0) && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i <= n; ++i)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)i;
			
				entry.strText.Format(_T("Pay %d life"),
						i);

				entries.push_back(entry);
			}
			m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
		}
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CNamelessRaceCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			m_nLifePaid = it->dwContext;

			CLifeModifier pModifier = CLifeModifier(Life(-m_nLifePaid), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier.ApplyTo(pSelectionPlayer);

			this->SetPower(Power(m_nLifePaid), true);
			this->SetPermanentPower(Power(m_nLifePaid), true);
			this->SetLife(this, Life(m_nLifePaid));
			this->SetPermanentLife(Life(m_nLifePaid), true);

			return;
		}
}

//____________________________________________________________________________
//
CTheFallenCard::CTheFallenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("The Fallen"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
	, pDamagedPlayers(2)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTheFallenCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTheFallenCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTheFallenCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTheFallenCard::BeforeResolution(CAbilityAction* pAction) const
{
	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((pDamagedPlayers[ip] == 1) && (GetGame()->GetPlayer(ip) != pAction->GetController()))
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	
	return true;
}

bool CTheFallenCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) == pPlayer)
		{
			pDamagedPlayers[ip] = 1;
			break;
		}

	return false;
}

bool CTheFallenCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pDamagedPlayers[ip] = 0;

	return false;
}

//____________________________________________________________________________
//
CWarBargeCard::CWarBargeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("War Barge"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWarBargeCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(0),
			CreatureKeyword::Islandwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CWarBargeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (IsInplay())
		pSubjects1.AddCard(this, CardPlacement::Top);
	if (pTarget->IsInplay())
		pSubjects2.AddCard(pTarget, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("War Barge Effect"), 61102, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CRuneswordCard::CRuneswordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Runesword"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRuneswordCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+2), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CRuneswordCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Runesword Effect"), 61107, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBansheeCard::CBansheeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Banshee"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
		_T(""),
		new AnyCreatureComparer, TRUE));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBansheeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBansheeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* targetCard = pAction->GetAssociatedCard();
	CPlayer* targetPlayer = pAction->GetAssociatedPlayer();
	int pCeiledDamages = 1 + ((pAction->GetCostConfigEntry().GetExtraValue() - 1) / 2); //Fast int ceil http://stackoverflow.com/questions/2745074/fast-ceiling-of-an-integer-division-in-c-c

	//Target damage
	CLifeModifier pTargetModifier = CLifeModifier(
		Life(-pAction->GetCostConfigEntry().GetExtraValue() / 2 ),
			this,
			PreventableType::Preventable,
			DamageType::AbilityDamage | DamageType::NonCombatDamage,
			TRUE, FALSE
			);

	//Controller damage
	CLifeModifier pOwnLifeModifier = CLifeModifier(
	Life(-pCeiledDamages),
		this,
		PreventableType::Preventable,
		DamageType::AbilityDamage | DamageType::NonCombatDamage
	);
 
	//Let's apply damage
	if (targetCard)
	{
		CCreatureCard* pTargetCreature = (CCreatureCard*)targetCard;
		pTargetModifier.ApplyTo(pTargetCreature);
	}
	else
		pTargetModifier.ApplyTo(targetPlayer);

	pOwnLifeModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//