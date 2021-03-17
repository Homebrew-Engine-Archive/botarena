#include "stdafx.h"
#include "CardShadowsOverInnistrad.h"

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
		DEFINE_CARD(CChokedEstuaryCard);
		DEFINE_CARD(CDevilthornFoxCard);
		DEFINE_CARD(CDrownyardTempleCard);
		DEFINE_CARD(CForebodingRuinsCard);
		DEFINE_CARD(CForsakenSantuaryCard);
		DEFINE_CARD(CFortifiedVillageCard);
		DEFINE_CARD(CFoulOrchardCard);
		DEFINE_CARD(CGameTrailCard);
		DEFINE_CARD(CHighlandLakeCard);
		DEFINE_CARD(CHulkingDevilCard);
		DEFINE_CARD(CNiblisOfDuskCard);
		DEFINE_CARD(CPortTownCard);
		DEFINE_CARD(CSanguinaryMageCard);
		DEFINE_CARD(CSeagrafSkaabCard);
		DEFINE_CARD(CSilentObserverCard);
		DEFINE_CARD(CStoneQuarryCard);
		DEFINE_CARD(CThornhideWolvesCard);
		DEFINE_CARD(CVampireNobleCard);
		DEFINE_CARD(CWarpedLandscapeCard);
		DEFINE_CARD(CWoodlandStreamCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDevilthornFoxCard::CDevilthornFoxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devilthorn Fox"), CardType::Creature, CREATURE_TYPE(Fox), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CHulkingDevilCard::CHulkingDevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hulking Devil"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(2))
{
}

//____________________________________________________________________________
//
CNiblisOfDuskCard::CNiblisOfDuskCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niblis of Dusk"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeagrafSkaabCard::CSeagrafSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seagraf Skaab"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CThornhideWolvesCard::CThornhideWolvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornhide Wolves"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CVampireNobleCard::CVampireNobleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Noble"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CWarpedLandscapeCard::CWarpedLandscapeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Warped Landscape"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("2"), 
				CCardFilter::GetFilter(_T("basic lands")),		
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSilentObserverCard::CSilentObserverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silent Observer"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CSanguinaryMageCard::CSanguinaryMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanguinary Mage"), CardType::Creature, CREATURE_TYPE2(Vampire, Wizard), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(3))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChokedEstuaryCard::CChokedEstuaryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Choked Estuary"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("an Island or a Swamp"), _T("Islands or Swamps"), new CardTypeComparer(CardType::Island | CardType::Swamp, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CForebodingRuinsCard::CForebodingRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Foreboding Ruins"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Swamp or a Mountain"), _T("Swamps or Mountains"), new CardTypeComparer(CardType::Swamp | CardType::Mountain, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFortifiedVillageCard::CFortifiedVillageCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Fortified Village"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Forest or a Plains"), _T("Forests or Plains"), new CardTypeComparer(CardType::Forest | CardType::Plains, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGameTrailCard::CGameTrailCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Game Trail"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Mountain or a Forest"), _T("Mountains or Forests"), new CardTypeComparer(CardType::Mountain | CardType::Forest, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPortTownCard::CPortTownCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Port Town"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Plains or an Island"), _T("Plains or Islands"), new CardTypeComparer(CardType::Plains | CardType::Island, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrownyardTempleCard::CDrownyardTempleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Drownyard Temple"), nID)
{
	{//{T}: Add {1} to your mana pool.
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{//{3}: Return Drownyard Temple from your graveyard to the battlefield tapped.	
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("3"),
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));//To tap this card on resolution.

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHighlandLakeCard::CHighlandLakeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Highland Lake"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodlandStreamCard::CWoodlandStreamCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Woodland Stream"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFoulOrchardCard::CFoulOrchardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Foul Orchard"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CForsakenSantuaryCard::CForsakenSantuaryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Forsaken Santuary"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStoneQuarryCard::CStoneQuarryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Stone Quarry"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
