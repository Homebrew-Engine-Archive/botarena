#include "stdafx.h"
#include "CardHomelands.h"

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

		DEFINE_CARD(CAbbeyMatronCard);
		DEFINE_CARD(CAlibansTowerCard);
		DEFINE_CARD(CAmbushCard);
		DEFINE_CARD(CAnabaAncestorCard);
		DEFINE_CARD(CAnabaSpiritCrafterCard);
		DEFINE_CARD(CAnHavvaInnCard);
		DEFINE_CARD(CAnHavvaTownshipCard);
		DEFINE_CARD(CAnZerrinRuinsCard);
		DEFINE_CARD(CAutumnWillowCard);
		DEFINE_CARD(CAysenAbbeyCard);
		DEFINE_CARD(CAysenCrusaderCard);
		DEFINE_CARD(CAysenHighwayCard);
		DEFINE_CARD(CBakisCurseCard);
		DEFINE_CARD(CBaronSengirCard);
		DEFINE_CARD(CBlackCarriageCard);
		DEFINE_CARD(CCastleSengirCard);
		DEFINE_CARD(CCemeteryGateCard);
		DEFINE_CARD(CChandlerCard);
		DEFINE_CARD(CClockworkGnomesCard);
		DEFINE_CARD(CClockworkSwarmCard);
		DEFINE_CARD(CCoralReefCard);
		DEFINE_CARD(CDaughterOfAutumnCard);
		DEFINE_CARD(CDidgeridooCard);
		DEFINE_CARD(CDrudgeSpellCard);
		DEFINE_CARD(CDwarvenPonyCard);
		DEFINE_CARD(CDwarvenSeaClanCard);
		DEFINE_CARD(CDwarvenTraderCard);
		DEFINE_CARD(CEbonyRhinoCard);
		DEFINE_CARD(CEronTheRelentlessCard);
		DEFINE_CARD(CEvaporateCard);
		DEFINE_CARD(CFaerieNobleCard);
		DEFINE_CARD(CFolkOfAnHavvaCard);
		DEFINE_CARD(CGhostHoundsCard);
		DEFINE_CARD(CGrandmotherSengirCard);
		DEFINE_CARD(CHeadstoneCard);
		DEFINE_CARD(CHeartWolfCard);
		DEFINE_CARD(CIhsansShadeCard);
		DEFINE_CARD(CIriniSengirCard);
		DEFINE_CARD(CJinxCard);
		DEFINE_CARD(CJovenCard);
		DEFINE_CARD(CKoskunFallsCard);
		DEFINE_CARD(CKoskunKeepCard);
		DEFINE_CARD(CLeapingLizardCard);
		DEFINE_CARD(CLeechesCard);
		//DEFINE_CARD(CMammothHarnessCard);
		DEFINE_CARD(CMarjhanCard);
		DEFINE_CARD(CMysticDecreeCard);
		DEFINE_CARD(CNarwhalCard);
		DEFINE_CARD(CProphecyCard);
		DEFINE_CARD(CRashkaTheSlayerCard);
		DEFINE_CARD(CRenewalCard);
		DEFINE_CARD(CRevekaWizardSavantCard);
		DEFINE_CARD(CRootsCard);
		DEFINE_CARD(CRootSpiderCard);
		DEFINE_CARD(CRoterothopterCard);
		DEFINE_CARD(CSamiteAlchemistCard);
		DEFINE_CARD(CSengirBatsCard);
		DEFINE_CARD(CSerraAviaryCard);
		DEFINE_CARD(CSerraInquisitorsCard);
		DEFINE_CARD(CSerratedArrowsCard);
		DEFINE_CARD(CSpectralBearsCard);
		DEFINE_CARD(CTradeCaravanCard);
		DEFINE_CARD(CVeldraneOfSengirCard);
		DEFINE_CARD(CWallOfKelpCard);
		DEFINE_CARD(CWillowFaerieCard);
		DEFINE_CARD(CWillowPriestessCard);
		DEFINE_CARD(CWinterSkyCard);
		DEFINE_CARD(CWizardsSchoolCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBaronSengirCard::CBaronSengirCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Baron Sengir"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+2/+2"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Vampire), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRoterothopterCard::CRoterothopterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Roterothopter"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("1"), Power(0), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2"),
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbbeyMatronCard::CAbbeyMatronCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abbey Matron"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlibansTowerCard::CAlibansTowerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aliban's Tower"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			Power(+3), Life(+1), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAmbushCard::CAmbushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ambush"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new BlockingCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAnabaAncestorCard::CAnabaAncestorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anaba Ancestor"), CardType::Creature, CREATURE_TYPE2(Minotaur, Spirit), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnabaSpiritCrafterCard::CAnabaSpiritCrafterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anaba Spirit Crafter"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false),
			Power(+1), Life(+0)));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnHavvaTownshipCard::CAnHavvaTownshipCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("An-Havva Township"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("2")));
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
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CAysenAbbeyCard::CAysenAbbeyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Aysen Abbey"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CAysenCrusaderCard::CAysenCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aysen Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Soldier) | CREATURE_TYPE(Warrior), false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAysenHighwayCard::CAysenHighwayCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aysen Highway"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(+0), Life(+0), CreatureKeyword::Plainswalk));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlackCarriageCard::CBlackCarriageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Black Carriage"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCastleSengirCard::CCastleSengirCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Castle Sengir"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("2")));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CCemeteryGateCard::CCemeteryGateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cemetery Gate"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CChandlerCard::CChandlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chandler"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::_ArtifactCreature, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClockworkGnomesCard::CClockworkGnomesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Gnomes"), CardType::_ArtifactCreature, CREATURE_TYPE(Gnome), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("3"),
			new CardTypeComparer(CardType::_ArtifactCreature, true)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDaughterOfAutumnCard::CDaughterOfAutumnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daughter of Autumn"), CardType::_LegendaryCreature, CREATURE_TYPE(Avatar), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			FALSE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(1));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CDidgeridooCard::CDidgeridooCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Didgeridoo"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	m_CardFilter.SetFilterName(_T("a Minotaur permanent"), _T("Minotaur permanents"));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenPonyCard::CDwarvenPonyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Pony"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Mountainwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenTraderCard::CDwarvenTraderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Trader"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CEbonyRhinoCard::CEbonyRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ebony Rhino"), CardType::_ArtifactCreature, CREATURE_TYPE(Rhino), nID,
		_T("7"), Power(4), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CEronTheRelentlessCard::CEronTheRelentlessCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Eron the Relentless"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(2),
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT)
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CEvaporateCard::CEvaporateCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Evaporate"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		Life(-1),	// life delta
		new CardTypeComparer(CardType::White | CardType::Creature, true), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Blue | CardType::Creature, true)));
}

//____________________________________________________________________________
//
CFaerieNobleCard::CFaerieNobleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Noble"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+0), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+1), Life(+0),
			new CreatureTypeComparer(CREATURE_TYPE(Faerie), false)));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddTapCost();
		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetExceptParent();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFolkOfAnHavvaCard::CFolkOfAnHavvaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Folk of An-Havva"), CardType::Creature, CREATURE_TYPE(Human), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhostHoundsCard::CGhostHoundsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost Hounds"), CardType::Creature, CREATURE_TYPE2(Hound, Spirit), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
										CWhenSelfAttackedBlocked::BlockEventCallback2,
										&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrandmotherSengirCard::CGrandmotherSengirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grandmother Sengir"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CIhsansShadeCard::CIhsansShadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ihsan's Shade"), CardType::_LegendaryCreature, CREATURE_TYPE2(Shade, Knight), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CJovenCard::CJovenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Joven"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKoskunKeepCard::CKoskunKeepCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Koskun Keep"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("2")));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CLeapingLizardCard::CLeapingLizardCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Leaping Lizard"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3),
		_T("1") GREEN_MANA_TEXT, Power(+0), Life(-1), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CNarwhalCard::CNarwhalCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Narwhal"), CardType::Creature, CREATURE_TYPE(Whale), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CRashkaTheSlayerCard::CRashkaTheSlayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rashka the Slayer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Archer), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("black creatures")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRootSpiderCard::CRootSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Root Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::BlockEventCallback,
									&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSengirBatsCard::CSengirBatsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sengir Bats"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerraInquisitorsCard::CSerraInquisitorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serra Inquisitors"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback2,
						   &CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSerraInquisitorsCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSerraInquisitorsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	return (pCreature2->GetCardType() & CardType::Black).Any();
}

//____________________________________________________________________________
//
CVeldraneOfSengirCard::CVeldraneOfSengirCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Veldrane of Sengir"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5),
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(-3), Life(0), CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CWallOfKelpCard::CWallOfKelpCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Kelp"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Kelp"), TOKEN_ID_BY_NAME,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWillowFaerieCard::CWillowFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Willow Faerie"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CWillowPriestessCard::CWillowPriestessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Willow Priestess"), CardType::Creature, CREATURE_TYPE2(Faerie, Druid), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		m_CardFilter.SetFilterName(_T("a Faerie permanent"), _T("Faerie permanents"));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
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
				_T("2") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Green | CardType::Creature, true)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWizardsSchoolCard::CWizardsSchoolCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wizards' School"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("2")));
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
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CIriniSengirCard::CIriniSengirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Irini Sengir"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vampire, Dwarf), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::_Enchantment, false),
			_T("2")));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAutumnWillowCard::CAutumnWillowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Autumn Willow"), CardType::_LegendaryCreature, CREATURE_TYPE(Avatar), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddShroud(FALSE);

	{
		m_CardFilter1.AddComparer(new CardControllerComparer(this));
		m_CardFilter1.SetFilterName(_T("controller"), _T("controllers"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword:: Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter1);

		cpAbility->SetAbilityText(_T("Controller can target Autumn Willow. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter2.AddComparer(new NegateCardComparer(new CardControllerComparer(this)));
		m_CardFilter2.SetFilterName(_T("opponent"), _T("opponents"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword:: Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter2);

		cpAbility->SetAbilityText(_T("Opponent can target Autumn Willow. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrudgeSpellCard::CDrudgeSpellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Drudge Spell"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLACK_MANA_TEXT,
				_T("Skeleton A"), 2718,
				1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//When Drudge Spell leaves the battlefield, destroy all Skeleton tokens. They can't be regenerated.
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Skeleton), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSerratedArrowsCard::CSerratedArrowsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serrated Arrows"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	// Come into play with 3 arrowhead counters
	GetCounterContainer()->ScheduleCounter(ARROWHEAD_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(ARROWHEAD_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		// -1/-1 counters ability
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(ARROWHEAD_COUNTER), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// sacrifice if no counters left
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSerratedArrowsCard::SetTriggerContextF1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSerratedArrowsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSerratedArrowsCard::SetTriggerContextF1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	return GetCounterContainer()->GetCounter(ARROWHEAD_COUNTER)->GetCount() == 0;
}

bool CSerratedArrowsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetCounterContainer()->GetCounter(ARROWHEAD_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CHeadstoneCard::CHeadstoneCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Headstone"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CJinxCard::CJinxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jinx"), CardType::Instant, nID)
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

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRenewalCard::CRenewalCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Renewal"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	m_pSearchLibrarySpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CCoralReefCard::CCoralReefCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Coral Reef"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(POLYP_COUNTER, 4, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(POLYP_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		cpAbility->SetAbilityText(_T("Put two polyp counters on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(POLYP_COUNTER, +2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("blue creatures")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(POLYP_COUNTER), -1);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+0/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMysticDecreeCard::CMysticDecreeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mystic Decree"), CardType::_WorldEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying | CreatureKeyword::Islandwalk);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerraAviaryCard::CSerraAviaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serra Aviary"), CardType::_WorldEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->SetListenToKeyword();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnHavvaInnCard::CAnHavvaInnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("An-Havva Inn"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
			TRUE, //Opponent Zones
			TRUE)); //Controller Zones

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("green creatures")), ZoneId::Battlefield);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
//"Mammoth Harness\n{3G}\nEnchantment - Aura\nHML,R\nEnchant creature\rEnchanted creature loses flying.\rWhenever enchanted creature blocks or becomes blocked by a creature, the other creature gains first strike until end of turn."
//The other creature doesn't get anything. Flailing Drake, Inferno Elemental, Lim-Dûl's Cohort & Talruum Champion also doesn't work, they use the same ability.
//CMammothHarnessCard::CMammothHarnessCard(CGame* pGame, UINT nID)
//	: CChgPwrTghAttrEnchantCard(pGame, _T("Mammoth Harness"), nID,
//		_T("3") GREEN_MANA_TEXT,
//		Power(+0), Life(+0), CreatureKeyword::Null)
//{
//	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
//	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//
//	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
//				&CMammothHarnessCard::CreateAdditionalAbility));
//
//	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
//}
//
//counted_ptr<CAbility> CMammothHarnessCard::CreateAdditionalAbility(CCard* pCard)
//{
//	typedef
//		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
//							CWhenSelfAttackedBlocked::BlockEventCallback2, 
//							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
//	
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
//	
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
//
//	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
//	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
//
//	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//
//	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMammothHarnessCard::SetTriggerContext));
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//bool CMammothHarnessCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
//{
//	triggerContext.m_pCreature = pCreature2;
//	return true;
//}
//
////____________________________________________________________________________
////
CMarjhanCard::CMarjhanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marjhan"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(8))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CMarjhanCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarjhanCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CMarjhanCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);
		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			FALSE,	// opponent's turn only
			TRUE);	// your turn only
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AttackingCreatureComparer, FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CPowerModifier(Power(-1)));
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMarjhanCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CMarjhanCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CMarjhanCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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
CTradeCaravanCard::CTradeCaravanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trade Caravan"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(CURRENCY_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(CURRENCY_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CURRENCY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::BasicLand, false)));
		
	    cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CURRENCY_COUNTER), -2);
		
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			TRUE,	// opponent's turn only
			FALSE);	// your turn only

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpectralBearsCard::CSpectralBearsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Bears"), CardType::Creature, CREATURE_TYPE2(Bear, Spirit), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpectralBearsCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpectralBearsCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSpectralBearsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											   AttackSubject attacked) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CSpectralBearsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CRevekaWizardSavantCard::CRevekaWizardSavantCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Reveka, Wizard Savant"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dwarf, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-2),	// life delta
		PreventableType::Preventable)
{
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

	m_pTargetChgLifeAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CSamiteAlchemistCard::CSamiteAlchemistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samite Alchemist"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(4), SourceColor::Null));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));
	
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CProphecyCard::CProphecyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Prophecy"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CProphecyCard::OnResolutionCompleted))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT,
			1));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->SetRevealCardsToOthers(TRUE);	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CProphecyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* lib_owner = pAbilityAction->GetAssociatedPlayer();
		CZone* lib=lib_owner->GetZoneById(ZoneId::Library);
		if (lib->GetSize()>0)
		{
			CCard* pNextDraw = lib_owner->GetZoneById(ZoneId::Library)->GetTopCard();

			CLifeModifier pModifier1 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

			if (pNextDraw->GetCardType().IsLand()) pModifier1.ApplyTo(GetController());

			lib->Shuffle();
		}
		
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CLeechesCard::CLeechesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Leeches"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CLeechesCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT));


	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CLeechesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();	
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-(target->GetPoisonCounters())), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	CPoisonModifier pModifier2 = CPoisonModifier(m_pGame, 0, TRUE);

	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pModifier2.ApplyTo(target);
	}
}

//____________________________________________________________________________
//
CRootsCard::CRootsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Roots"), nID,
		_T("3") GREEN_MANA_TEXT,
		Power(+0), Life(+0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CRootsCard::OnResolutionCompleted))
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	m_pChgPwrTghAttrEnchant->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CRootsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(true);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CKoskunFallsCard::CKoskunFallsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Koskun Falls"), CardType::_WorldEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, FALSE);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	 
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

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBakisCurseCard::CBakisCurseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Baki's Curse"), CardType::Sorcery, nID)
{
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBakisCurseCard::BeforeResolution));

    AddSpell(cpSpell.GetPointer());
}

bool CBakisCurseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer creatures;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)), creatures);

	if (creatures.GetSize() == 0) return false;

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(creatures.GetAt(ic));
		if (!pCreature || !pCreature->GetEnchantCount()) continue;

		CLifeModifier* pModifier = new CLifeModifier(Life(-2 * pCreature->GetEnchantCount()), this,
										PreventableType::Preventable, DamageType::NonCombatDamage | DamageType::SpellDamage);
		pModifier->ApplyTo(pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CWinterSkyCard::CWinterSkyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Winter Sky"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWinterSkyCard::OnFlipSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWinterSkyCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CWinterSkyCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
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
		CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
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
		CLifeModifier* pModifier1 = new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCreatureModifier>(pModifier1));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
		}
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
		}
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
	return true;
}

void CWinterSkyCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier1 = new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCreatureModifier>(pModifier1));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
				}
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
				}
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
				CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier->ApplyTo(GetGame()->GetPlayer(ip));
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CAnZerrinRuinsCard::CAnZerrinRuinsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("An-Zerrin Ruins"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAnZerrinRuinsCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CAnZerrinRuinsCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		
	cpAbility->SetAbilityName(_T("An-Zerrin Ruins hold"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CAnZerrinRuinsCard::Move(CZone* pToZone,
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
				&CAnZerrinRuinsCard::CreateAdditionAbility));

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

void CAnZerrinRuinsCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CAnZerrinRuinsCard::CreateAdditionAbility));

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
CClockworkSwarmCard::CClockworkSwarmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Swarm"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("4"), Power(0), Life(3))
	, bAttackedOrBlocked(FALSE)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CClockworkSwarmCard::OnNumberSelected))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+0"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("non-Walls")));

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSwarmCard::SetTriggerContext));
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+0"), -1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpAbility->AddTapCost();
		
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClockworkSwarmCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSwarmCard::SetTriggerContextAux1));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSwarmCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSwarmCard::SetTriggerContextAux3));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CClockworkSwarmCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard)
{
	bAttackedOrBlocked = TRUE;

	return false;
}

bool CClockworkSwarmCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CClockworkSwarmCard::SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CClockworkSwarmCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return bAttackedOrBlocked == TRUE;
}

bool CClockworkSwarmCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounters = GetCounterContainer()->GetCounter(_T("+1/+0"))->GetCount();
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	if (!IsInplay() || GetCardKeyword()->HasCantGetCounters() || (nCounters >= 4) || (nValue == 0))
		return true;
	
	int nCount = 1;
	int nMultiplier = 0;
	if (pAction->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE));
		nCount <<= nMultiplier;
	bool bMaxReached = false;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't add counters"));

		entries.push_back(selectionEntry);
	}
	for (int i = 1; i <= nValue; i++)
	{
		int nToPut = i * nCount;
		if (nCounters + nToPut >= 4)
		{
			nToPut = 4 - nCounters;
			bMaxReached = true;
		}

		SelectionEntry selectionEntry;

		selectionEntry.dwContext = nToPut;
		if (nToPut == 1)
			selectionEntry.strText.Format(_T("Put %d +1/+0 counter on %s"), nToPut, GetCardName(TRUE));
		else
			selectionEntry.strText.Format(_T("Put %d +1/+0 counters on %s"), nToPut, GetCardName(TRUE));

		entries.push_back(selectionEntry);

		if (bMaxReached) break;
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	
	return true;
}

void CClockworkSwarmCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			
			if (n > 0)
			{
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+0"), +n);
				pModifier.SetDoubling(false);
				pModifier.ApplyTo(this);
			}
		}
}

//____________________________________________________________________________
//
CHeartWolfCard::CHeartWolfCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Heart Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHeartWolfCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CHeartWolfCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CHeartWolfCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

void CHeartWolfCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Heart Wolf Effect"), 61097, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDwarvenSeaClanCard::CDwarvenSeaClanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Sea Clan"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, false, new CDwarvenSeaClanTargeting));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CDwarvenSeaClanCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenSeaClanCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}


BOOL CDwarvenSeaClanCard::CDwarvenSeaClanTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CDwarvenSeaClanCard::CDwarvenSeaClanTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (!pCard->GetCardType().IsCreature()) return FALSE;
	if (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pCard->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
		return FALSE;
	
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (!pCreature->IsAttacking() && !pCreature->IsBlocking()) return FALSE;	

	return TRUE;
}

BOOL CDwarvenSeaClanCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b);
}

bool CDwarvenSeaClanCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Dwarven Sea Clan Effect"), 61108, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//