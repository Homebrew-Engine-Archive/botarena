#include "stdafx.h"
#include "CardColdsnap.h"

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

		DEFINE_CARD(CAllosaurusRiderCard);
		DEFINE_CARD(CArcticFlatsCard);
		DEFINE_CARD(CArcumDagssonCard);
		DEFINE_CARD(CAurochsHerdCard);
		DEFINE_CARD(CBalduvianFrostwakerCard);
		DEFINE_CARD(CBalduvianRageCard);
		DEFINE_CARD(CBlizzardSpecterCard);
		DEFINE_CARD(CBorealDruidCard);
		DEFINE_CARD(CBorealShelfCard);
		DEFINE_CARD(CBraidOfFireCard);
		DEFINE_CARD(CBullAurochsCard);
		DEFINE_CARD(CChillToTheBoneCard);
		DEFINE_CARD(CColdsteelHeartCard);
		DEFINE_CARD(CControvertCard);
		DEFINE_CARD(CCounterbalanceCard);
		DEFINE_CARD(CDarienKingOfKjeldorCard);
		DEFINE_CARD(CDarkDepthsCard);
		DEFINE_CARD(CDeepfireElementalCard);
		DEFINE_CARD(CDiscipleOfTeveshSzatCard);
		DEFINE_CARD(CDrelnochCard);
		DEFINE_CARD(CFeastOfFleshCard);
		DEFINE_CARD(CFreyalisesRadianceCard);
		DEFINE_CARD(CFrostMarshCard);
		DEFINE_CARD(CFrostwebSpiderCard);
		DEFINE_CARD(CFuryOfTheHordeCard);
		DEFINE_CARD(CGarzasAssassinCard);
		DEFINE_CARD(CGarzaZolPlagueQueenCard);
		DEFINE_CARD(CGreaterStoneSpiritCard);
		DEFINE_CARD(CGrimHarvestCard);
		DEFINE_CARD(CGristleGrinnerCard);
		DEFINE_CARD(CGutlessGhoulCard);
		DEFINE_CARD(CHaakonStromgaldScourgeCard);
		DEFINE_CARD(CHeidarRimewindMasterCard);
		DEFINE_CARD(CHeraldOfLeshracCard);
		DEFINE_CARD(CHighlandWealdCard);
		DEFINE_CARD(CIcefallCard);
		DEFINE_CARD(CIntoTheNorthCard);
		DEFINE_CARD(CJokulmorderCard);
		DEFINE_CARD(CJotunGruntCard);
		DEFINE_CARD(CJuniperOrderRangerCard);
		DEFINE_CARD(CKarplusanMinotaurCard);
		DEFINE_CARD(CKarplusanWolverineCard);
		DEFINE_CARD(CKjeldoranGargoyleCard);
		DEFINE_CARD(CKjeldoranJavelineerCard);
		DEFINE_CARD(CKjeldoranOutriderCard);
		DEFINE_CARD(CKjeldoranWarCryCard);
		DEFINE_CARD(CKrovikanMistCard);
		DEFINE_CARD(CKrovikanRotCard);
		DEFINE_CARD(CKrovikanScoundrelCard);
		DEFINE_CARD(CLightningSerpentCard);
		DEFINE_CARD(CLovisaColdeyesCard);
		DEFINE_CARD(CMartyrOfAshesCard);
		DEFINE_CARD(CMartyrOfSandsCard);
		DEFINE_CARD(CMartyrOfSporesCard);
		DEFINE_CARD(CMishrasBaubleCard);
		DEFINE_CARD(CMysticMeltingCard);
		DEFINE_CARD(COhranViperCard);
		DEFINE_CARD(COrcishBloodpainterCard);
		DEFINE_CARD(CPerilousResearchCard);
		DEFINE_CARD(CPhobianPhantasmCard);
		DEFINE_CARD(CPhyrexianEtchingsCard);
		DEFINE_CARD(CPhyrexianSoulgorgerCard);
		DEFINE_CARD(CResizeCard);
		DEFINE_CARD(CRimewindCryomancerCard);
		DEFINE_CARD(CRimewindTaskmageCard);
		DEFINE_CARD(CRiteOfFlameCard);
		DEFINE_CARD(CRonomHulkCard);
		DEFINE_CARD(CRonomSerpentCard);
		DEFINE_CARD(CRonomUnicornCard);
		DEFINE_CARD(CRuneSnagCard);
		DEFINE_CARD(CSekKuarDeathkeeperCard);
		DEFINE_CARD(CShelteringAncientCard);
		DEFINE_CARD(CSkredCard);
		DEFINE_CARD(CSimianBrawlerCard);
		DEFINE_CARD(CSoulSpikeCard);
		DEFINE_CARD(CSoundTheCallCard);
		DEFINE_CARD(CSquallDrifterCard);
		DEFINE_CARD(CSteamSpitterCard);
		DEFINE_CARD(CStromgaldCrusaderCard);
		DEFINE_CARD(CSunsBountyCard);
		DEFINE_CARD(CSunscourCard);
		DEFINE_CARD(CSurvivorOfTheUnseenCard);
		DEFINE_CARD(CSwiftManeuverCard);
		DEFINE_CARD(CTamanoaCard);
		DEFINE_CARD(CThermalFluxCard);
		DEFINE_CARD(CTresserhornSinksCard);
		DEFINE_CARD(CUrsineFylgjaCard);
		DEFINE_CARD(CVexingSphinxCard);
		DEFINE_CARD(CWallOfShardsCard);
		DEFINE_CARD(CWhiteShieldCrusaderCard);
		DEFINE_CARD(CWildernessElementalCard);
		DEFINE_CARD(CZurTheEnchanterCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CGarzaZolPlagueQueenCard::CGarzaZolPlagueQueenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Garza Zol, Plague Queen"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDiscipleOfTeveshSzatCard::CDiscipleOfTeveshSzatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Tevesh Szat"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),	
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(-6), Life(-6),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGristleGrinnerCard::CGristleGrinnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gristle Grinner"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKjeldoranOutriderCard::CKjeldoranOutriderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kjeldoran Outrider"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT, Power(0), Life(+1))
{
}

//____________________________________________________________________________
//
CKrovikanMistCard::CKrovikanMistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Krovikan Mist"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Illusion), false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrovikanScoundrelCard::CKrovikanScoundrelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krovikan Scoundrel"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CLovisaColdeyesCard::CLovisaColdeyesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lovisa Coldeyes"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+2), Life(+2), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior) | CREATURE_TYPE(Berserker) | CREATURE_TYPE(Barbarian), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrcishBloodpainterCard::COrcishBloodpainterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Bloodpainter"), CardType::Creature, CREATURE_TYPE2(Orc, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRonomUnicornCard::CRonomUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ronom Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSimianBrawlerCard::CSimianBrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simian Brawler"), CardType::Creature, CREATURE_TYPE2(Ape, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("3"),
			Power(+1), Life(+1)));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoundTheCallCard::CSoundTheCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sound the Call"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this,	AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			_T("Wolf B"), 2734,
			1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSteamSpitterCard::CSteamSpitterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Steam Spitter"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT, Power(1), Life(5),
		RED_MANA_TEXT, Power(+1), Life(0))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CStromgaldCrusaderCard::CStromgaldCrusaderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Stromgald Crusader"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(+1), Life(+0))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Flying));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhiteShieldCrusaderCard::CWhiteShieldCrusaderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("White Shield Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1),
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(+1), Life(+0))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Flying));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKjeldoranGargoyleCard::CKjeldoranGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kjeldoran Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
		typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranGargoyleCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
}

bool CKjeldoranGargoyleCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CArcticFlatsCard::CArcticFlatsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Arctic Flats"), nID, CardType::NonbasicLand | CardType::Snow)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBorealShelfCard::CBorealShelfCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Boreal Shelf"), nID, CardType::NonbasicLand | CardType::Snow)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CFrostMarshCard::CFrostMarshCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Frost Marsh"), nID, CardType::NonbasicLand | CardType::Snow)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHighlandWealdCard::CHighlandWealdCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Highland Weald"), nID, CardType::NonbasicLand | CardType::Snow)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTresserhornSinksCard::CTresserhornSinksCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tresserhorn Sinks"), nID, CardType::NonbasicLand | CardType::Snow)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CJokulmorderCard::CJokulmorderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jokulmorder"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(12), Life(12))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddNoUntapInUntapPhase();

	SetIntoPlayTapped();

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
										CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(5, 5);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CJokulmorderCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJokulmorderCard::BeforeResolution));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJokulmorderCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return  (moveType == MoveType::Play);
}

bool CJokulmorderCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CTamanoaCard::CTamanoaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tamanoa"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTamanoaCard::SetTriggerContext));

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CTamanoaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CHaakonStromgaldScourgeCard::CHaakonStromgaldScourgeCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Haakon, Stromgald Scourge"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Knight), nID,
        _T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))

    , m_CardFilter(_T("a Knight"), _T("Knights"), new CreatureTypeComparer(CREATURE_TYPE(Knight), false))
{
    CAbility* pSpell = GetSpells().GetAt(0);

    pSpell->SetGraveyardOnly();

    {
        counted_ptr<CPlayerEffectEnchantment> cpAbility(
            ::CreateObject<CPlayerEffectEnchantment>(this,
                PlayerEffectType::PlayCardsFromGraveyard,
                (int)&m_CardFilter));

        cpAbility->SetAffectControllerOnly();

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
        cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
        cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

        cpAbility->AddAbilityTag(AbilityTag::LifeLost);

        AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CRiteOfFlameCard::CRiteOfFlameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rite of Flame"), CardType::Sorcery, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetAbilityText(_T("Add {RR} to your mana pool, then add {R} to your mana pool for each card named Rite of Flame in each graveyard with"));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfFlameCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRiteOfFlameCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Rite of Flame")));

	int n = ((m_CardFilter_temp.CountIncluded(pContGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer())));

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAllosaurusRiderCard::CAllosaurusRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Allosaurus Rider"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Land, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green, false));

		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->GetCost().AddExileHandCardCost(2, &m_CardFilter);

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAllosaurusRiderCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAllosaurusRiderCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CDrelnochCard::CDrelnochCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drelnoch"), CardType::Creature, CREATURE_TYPE2(Yeti, Mutant), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetDrawCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSekKuarDeathkeeperCard::CSekKuarDeathkeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sek'Kuar, Deathkeeper"), CardType::_LegendaryCreature, CREATURE_TYPE2(Orc, Shaman), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Graveborn B"), 2819, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildernessElementalCard::CWildernessElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wilderness Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::NonbasicLand, false))); //"Nonbasic Lands"

		cpAbility->SetChangePowerOnly();

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPerilousResearchCard::CPerilousResearchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Perilous Research"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPerilousResearchCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 2));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPerilousResearchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CSoulSpikeCard::CSoulSpikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul Spike"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

		//Alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->GetCost().AddExileHandCardCost(2, &m_CardFilter);
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSoulSpikeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSoulSpikeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CFuryOfTheHordeCard::CFuryOfTheHordeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fury of the Horde"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				TRUE,
				1, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

		//Alternative cost
		counted_ptr<CExtraCombatSpell> cpSpell(
			::CreateObject<CExtraCombatSpell>(this, AbilityType::Sorcery,
				_T(""),
				TRUE,
				1, TRUE));

		cpSpell->GetCost().AddExileHandCardCost(2, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFuryOfTheHordeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CFuryOfTheHordeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSunscourCard::CSunscourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sunscour"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileHandCardCost(2, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSunscourCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSunscourCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CUrsineFylgjaCard::CUrsineFylgjaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ursine Fylgja"), CardType::Creature, CREATURE_TYPE2(Spirit, Bear), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCounterContainer()->ScheduleCounter(HEALING_COUNTER, 4, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(HEALING_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
	    counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
	   	::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T(""),
			Life(1),
			SourceColor::Null, FALSE));

	    cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(HEALING_COUNTER), -1);

	    AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(HEALING_COUNTER), +1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAurochsHerdCard::CAurochsHerdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aurochs Herd"), CardType::Creature, CREATURE_TYPE(Aurochs), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("an Aurochs"), _T("Aurochs"), new CreatureTypeComparer(CREATURE_TYPE(Aurochs), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Aurochs), false));
		cpAbility->SetToZone(ZoneId::Hand);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Aurochs"), _T("other attacking Aurochs"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAurochsHerdCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAurochsHerdCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	//triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	//triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CBullAurochsCard::CBullAurochsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bull Aurochs"), CardType::Creature, CREATURE_TYPE(Aurochs), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("an Aurochs"), _T("Aurochs"), new CreatureTypeComparer(CREATURE_TYPE(Aurochs), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Aurochs"), _T("other attacking Aurochs"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBullAurochsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBullAurochsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	//triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	//triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CLightningSerpentCard::CLightningSerpentCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lightning Serpent"), CardType::Creature, CREATURE_TYPE2(Elemental, Serpent), nID,
		RED_MANA_TEXT, Power(2), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLightningSerpentCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

void CLightningSerpentCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = GetLastCastingExtraValue();

		CCardCounterModifier modifier(_T("+1/+0"), +nCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CMishrasBaubleCard::CMishrasBaubleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mishra's Bauble"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(FALSE);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CBalduvianRageCard::CBalduvianRageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Balduvian Rage"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AttackingCreatureComparer)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));

	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CMysticMeltingCard::CMysticMeltingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Mystic Melting"), CardType::Instant, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CSwiftManeuverCard::CSwiftManeuverCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swift Maneuver"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBorealDruidCard::CBorealDruidCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Boreal Druid"), CardType::_SnowCreature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		_T("1"))
{
}

//____________________________________________________________________________
//
CFrostwebSpiderCard::CFrostwebSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frostweb Spider"), CardType::_SnowCreature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrostwebSpiderCard::SetTriggerContext));

		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), +1);

		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFrostwebSpiderCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CGutlessGhoulCard::CGutlessGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gutless Ghoul"), CardType::_SnowCreature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+2), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKarplusanWolverineCard::CKarplusanWolverineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karplusan Wolverine"), CardType::_SnowCreature, CREATURE_TYPE2(Wolverine, Beast), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COhranViperCard::COhranViperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ohran Viper"), CardType::_SnowCreature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COhranViperCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool COhranViperCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CSquallDrifterCard::CSquallDrifterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Squall Drifter"), CardType::_SnowCreature, CREATURE_TYPE(Elemental), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CChillToTheBoneCard::CChillToTheBoneCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Chill to the Bone"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Snow, false));
}

//____________________________________________________________________________
//
CHeidarRimewindMasterCard::CHeidarRimewindMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heidar, Rimewind Master"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2"),
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CHeidarRimewindMasterCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CHeidarRimewindMasterCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 3)
		return true;

	return false;
}

//____________________________________________________________________________
//
CRimewindTaskmageCard::CRimewindTaskmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rimewind Taskmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));

	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1"),
			TRUE,	// tap
			TRUE,	// untap
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CRimewindTaskmageCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CRimewindTaskmageCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 3)
		return true;

	return false;
}

//____________________________________________________________________________
//
CSkredCard::CSkredCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skred"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Snow, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThermalFluxCard::CThermalFluxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thermal Flux"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::Snow, false))));

		cpSpell->AddCardTypeToSelection(CardType::Snow, CardType::Null, TRUE, _T("snow permanent"));

		cpSpell->SetAbilityText(_T("Target nonsnow permanent becomes snow until end of turn. Casts"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Snow, false)));

		cpSpell->AddCardTypeToSelection(CardType::Null, CardType::Snow, TRUE, _T("nonsnow permanent"));

		cpSpell->SetAbilityText(_T("Target snow permanent isn't snow until end of turn. Casts"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 2981, 1, FALSE, ZoneId::_Effects));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIntoTheNorthCard::CIntoTheNorthCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Into the North"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter, 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_CardFilter.SetFilterName(_T("a snow land"), _T("snow lands"));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CJuniperOrderRangerCard::CJuniperOrderRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juniper Order Ranger"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJuniperOrderRangerCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CJuniperOrderRangerCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CRonomSerpentCard::CRonomSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ronom Serpent"), CardType::_SnowCreature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(6))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land
	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CRonomSerpentCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRonomSerpentCard::SetTriggerContext));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CRonomSerpentCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRonomSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	return (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CRonomSerpentCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0);
}

bool CRonomSerpentCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0);
}

//____________________________________________________________________________
//
CZurTheEnchanterCard::CZurTheEnchanterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zur the Enchanter"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGarzasAssassinCard::CGarzasAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Garza's Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Recover-Pay half your life, rounded up.
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this)); //"another" only at Garza's Assassin's Recover ability
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetAbilityName(_T("Pay half your life, rounded up to use the Recover ability"));
		cpAbility->SetPayLifeResolutionCost(Life(SpecialNumber::DivideBy2RoundUp));

		cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGarzasAssassinCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGarzasAssassinCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGarzasAssassinCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CGarzasAssassinCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CControvertCard::CControvertCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Controvert"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	//Recover {2UU}
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetAbilityName(_T("Pay {2UU} to use the Recover ability"));
	cpAbility->SetResolutionCost(_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT);

	cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CControvertCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CControvertCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CControvertCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CControvertCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CGrimHarvestCard::CGrimHarvestCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Grim Harvest"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	{
		//Recover {2B}
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetAbilityName(_T("Pay {2B} to use the Recover ability"));
		cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT);

		cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrimHarvestCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGrimHarvestCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrimHarvestCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CGrimHarvestCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CKrovikanRotCard::CKrovikanRotCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Krovikan Rot"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new CreaturePowerComparer<std::less<int>>(3),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Recover {1BB}
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetAbilityName(_T("Pay {1BB} to use the Recover ability"));
	cpAbility->SetResolutionCost(_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT);

	cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrovikanRotCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKrovikanRotCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKrovikanRotCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CKrovikanRotCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CResizeCard::CResizeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Resize"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Recover {1G}
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetAbilityName(_T("Pay {1G} to use the Recover ability"));
	cpAbility->SetResolutionCost(_T("1") GREEN_MANA_TEXT);

	cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CResizeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CResizeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CResizeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CResizeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CSunsBountyCard::CSunsBountyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sun's Bounty"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Life(+4), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Recover {1W}
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetAbilityName(_T("Pay {1W} to use the Recover ability"));
		cpAbility->SetResolutionCost(_T("1") WHITE_MANA_TEXT);

		cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunsBountyCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSunsBountyCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunsBountyCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CSunsBountyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CIcefallCard::CIcefallCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Icefall"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Recover {RR}
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetAbilityName(_T("Pay {RR} to use the Recover ability"));
	cpAbility->SetResolutionCost(RED_MANA_TEXT RED_MANA_TEXT);

	cpAbility->GetOptionalModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIcefallCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIcefallCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIcefallCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CIcefallCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CDarkDepthsCard::CDarkDepthsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dark Depths"), nID, CardType::NonbasicLand | CardType::Snow | CardType::Legendary)
{
	GetCounterContainer()->ScheduleCounter(ICE_COUNTER, 10, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->SetAbilityText(_T("Remove an ice counter from"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(ICE_COUNTER, -1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Marit Lage"), 2876, 1);

		CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDarkDepthsCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDarkDepthsCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == ICE_COUNTER);
}

//____________________________________________________________________________
//
CCounterbalanceCard::CCounterbalanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Counterbalance"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Optional);	
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CCounterbalanceCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CCounterbalanceCard::SetTriggerContext));		
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::Counterspell);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CCounterbalanceCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CCounterbalanceCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

	pModifier.ApplyTo(GetController());

	if (GetController()->GetZoneById(ZoneId::Library)->GetSize() == 0) return false;

	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}
	
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.m_pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal() == nCost)
	return true;
	else 
	return false;
}

//____________________________________________________________________________
//
CGreaterStoneSpiritCard::CGreaterStoneSpiritCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Greater Stone Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		CCardFilter::GetFilter(_T("non-flying creatures"))) //can't be blocked except by "this"
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CGreaterStoneSpiritCard::CreateAdditionalAbility));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGreaterStoneSpiritCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFeastOfFleshCard::CFeastOfFleshCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Feast of Flesh"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-0),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeastOfFleshCard::BeforeResolution));
}

bool CFeastOfFleshCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Feast of Flesh")));

	int nDomainCount = 1 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nDomainCount;

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
CKjeldoranWarCryCard::CKjeldoranWarCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kjeldoran War Cry"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKjeldoranWarCryCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CKjeldoranWarCryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Kjeldoran War Cry")));

	int nDomainCount = 1 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));
	
	if (nDomainCount > 0)
		{				
			CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(nDomainCount), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			return true;
		}

	return true;
}

//____________________________________________________________________________
//
CPhobianPhantasmCard::CPhobianPhantasmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phobian Phantasm"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CPhobianPhantasmCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	GetCreatureKeyword()->AddFear(FALSE);
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
void CPhobianPhantasmCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Black, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Black, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CFreyalisesRadianceCard::CFreyalisesRadianceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Freyalise's Radiance"), CardType::GlobalEnchantment, nID)

	, m_CardFilter(new CardTypeComparer(CardType::Snow, false))
			, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CFreyalisesRadianceCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	{
		counted_ptr<CCardKeywordEnchantment> cpSpell(
			::CreateObject<CCardKeywordEnchantment>(this,
				_T("1") GREEN_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetCardKeywordMod()->GetModifier().SetAdditionData((DWORD)&m_CardFilter); 

		cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpSpell.GetPointer());
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
void CFreyalisesRadianceCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}
//____________________________________________________________________________
//
CSurvivorOfTheUnseenCard::CSurvivorOfTheUnseenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Survivor of the Unseen"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CSurvivorOfTheUnseenCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
	
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 2));

		cpAbility->SetDiscard(1, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);
		cpAbility->AddTapCost();

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
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}
void CSurvivorOfTheUnseenCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CDeepfireElementalCard::CDeepfireElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepfire Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));		

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarienKingOfKjeldorCard::CDarienKingOfKjeldorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darien, King of Kjeldor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDarienKingOfKjeldorCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier A"), 2713, 0);	

	AddAbility(cpAbility.GetPointer());
}

bool CDarienKingOfKjeldorCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CMartyrOfSandsCard::CMartyrOfSandsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Martyr of Sands"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
    counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
            _T("1"),
            Life(+0), PreventableType::NotPreventable));

    cpAbility->AddSacrificeCost();
	cpAbility->GetCost().AddRevealCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("white cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMartyrOfSandsCard::BeforeResolution));
 
    AddAbility(cpAbility.GetPointer());
}

bool CMartyrOfSandsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetRevealCards()->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = 3 * nCount;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CMartyrOfAshesCard::CMartyrOfAshesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Martyr of Ashes"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("2"),
			Life(-0),
			new AnyCreatureComparer,
			false, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

    cpAbility->AddSacrificeCost();
	cpAbility->GetCost().AddRevealCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("red cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMartyrOfAshesCard::BeforeResolution));
 
    AddAbility(cpAbility.GetPointer());
}

bool CMartyrOfAshesCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetRevealCards()->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCount;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CMartyrOfSporesCard::CMartyrOfSporesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Martyr of Spores"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));

    cpAbility->AddSacrificeCost();
	cpAbility->GetCost().AddRevealCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("green cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMartyrOfSporesCard::BeforeResolution));
 
    AddAbility(cpAbility.GetPointer());
}

bool CMartyrOfSporesCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetRevealCards()->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCount;
	Context.nValue2 = nCount;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CPhyrexianSoulgorgerCard::CPhyrexianSoulgorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Soulgorger"), CardType::_SnowCreature | CardType::Artifact, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(8), Life(8))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CPhyrexianSoulgorgerCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

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

void CPhyrexianSoulgorgerCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetSacrificeResolutionCost(0, CCardFilter::GetFilter(_T("creatures")));
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetSacrificeResolutionCost(n_value, CCardFilter::GetFilter(_T("creatures")));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CRimewindCryomancerCard::CRimewindCryomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rimewind Cryomancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));
	counted_ptr<CActivatedAbility<CCounterAbilitySpell>> cpAbility(
	::CreateObject<CActivatedAbility<CCounterAbilitySpell>>(this,
		_T("1"),
		CCardFilter::GetFilter(_T("cards")), TRUE, FALSE));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CRimewindCryomancerCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CRimewindCryomancerCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 3)
		return true;

	return false;
}

//____________________________________________________________________________
//
CBraidOfFireCard::CBraidOfFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Braid of Fire"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBraidOfFireCard::OnCUSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBraidOfFireCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CBraidOfFireCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("add %d red mana to your mana pool"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CBraidOfFireCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s adds %d red mana to his mana pool"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

				if (dwContext1 != 0) for (int i = 1; i <= (int)dwContext1; i++) pModifier.ApplyTo(pSelectionPlayer);
								
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CHeraldOfLeshracCard::CHeraldOfLeshracCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Herald of Leshrac"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") BLACK_MANA_TEXT, Power(2), Life(4))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHeraldOfLeshracCard::OnCUSelected))
		, m_LandSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHeraldOfLeshracCard::OnLandSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeraldOfLeshracCard::BeforeResolution1));
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetSurveyCardFilter().AddNegateComparer(
				new CardOwnerComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeraldOfLeshracCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHeraldOfLeshracCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();
		int nLands = 0;
		CPlayer* pController = pAction->GetController();

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (GetGame()->GetPlayer(ip) != pController)
			{
				CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
				nLands += CCardFilter::GetFilter(_T("lands"))->CountIncluded(pZone->GetCardContainer());
			}
		}

		std::vector<SelectionEntry> entries;
		if (nLands >= nCounters)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("gain control of %d land you don't control"), nCounters);
			else
				selectionEntry.strText.Format(_T("gain control of %d lands you don't control"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CHeraldOfLeshracCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s gains control of %d land he doesn't control"), pSelectionPlayer->GetPlayerName(), dwContext1);
					else
						strMessage.Format(_T("%s gains control of %d lands he doesn't control"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) LandSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CHeraldOfLeshracCard::LandSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands)
{
	std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (GetGame()->GetPlayer(ip) != pPlayer)
			{
				CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pZone->GetSize(); ++i)
				{
					CCard* pCard = pZone->GetAt(i);
					if (pCard->GetCardType().IsLand())
					{
						SelectionEntry entry;

						entry.dwContext = (DWORD)pCard;
						entry.cpAssociatedCard = pCard;
									
						entry.strText.Format(_T("gain control of %s"),
							pCard->GetCardName(TRUE));

						entries.push_back(entry);
					}
					
				}
			}
		}
		m_LandSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, CurrentLand, TotalLands);
}

void CHeraldOfLeshracCard::OnLandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			CZone* pBattlefield = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);

			pCard->Move(pBattlefield, pSelectionPlayer, MoveType::Others);

			if (dwContext1 < dwContext2) LandSelection(pSelectionPlayer, dwContext1 + 1, dwContext2);
		}
}

bool CHeraldOfLeshracCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		CPlayer *pOwner = pCard->GetOwner();
		if (pCard->GetCardType().IsLand() && (pOwner != pController))
			pCard->Move(pOwner->GetZoneById(ZoneId::Battlefield), pOwner, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CJotunGruntCard::CJotunGruntCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jotun Grunt"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(4), Life(4))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJotunGruntCard::OnCUSelected))
		, m_GraveyardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJotunGruntCard::OnGraveyardSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJotunGruntCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CJotunGruntCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();
		int nGravePairs = 0;
		CPlayer* pController = pAction->GetController();

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard);
			nGravePairs += pZone->GetSize() / 2;
		}

		std::vector<SelectionEntry> entries;
		if (nGravePairs >= nCounters)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("put %d cards from graveyards on bottom of libraries (in pairs)"), 2*nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CJotunGruntCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s puts %d cards from graveyards to bottom of libraries"), pSelectionPlayer->GetPlayerName(), 2*dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) GraveyardSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CJotunGruntCard::GraveyardSelection(CPlayer* pPlayer, DWORD CurrentPair, DWORD TotalPairs)
{
	std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
			CZone* pZone = pSelectedPlayer->GetZoneById(ZoneId::Graveyard);
			if (pZone->GetSize() >= 2)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pSelectedPlayer;
									
				entry.strText.Format(_T("select %s's graveyard"),
					pSelectedPlayer->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_GraveyardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, CurrentPair, TotalPairs);
}

void CJotunGruntCard::OnGraveyardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

			CCardFilter m_CardFilter;
			m_CardFilter.SetComparer(new TrueCardComparer);

			CDrawCardCommon::ResolveRevealZone(pPlayer,		// This player's zone (default: library)
									 pSelectionPlayer,
									 pGraveyard->GetSize(),
									 TRUE,
									 FALSE,
									 ZoneId::Graveyard,
									 CardPlacement::Top,
									 NULL,
									 MaximumValue(2),
									 MinimumValue(2),
									 ZoneId::Graveyard,
									 ZoneId::Library,
									 CardPlacement::Bottom,
									 &m_CardFilter,
									 FALSE);

			if (dwContext1 < dwContext2) GraveyardSelection(pSelectionPlayer, dwContext1 + 1, dwContext2);
		}
}

//____________________________________________________________________________
//
CKarplusanMinotaurCard::CKarplusanMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karplusan Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CKarplusanMinotaurCard::OnCUSelected))
		, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CKarplusanMinotaurCard::OnFlipSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKarplusanMinotaurCard::BeforeResolution));
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(COIN_FLIP_WIN_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(COIN_FLIP_LOSE_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CKarplusanMinotaurCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("flip %d coin"), nCounters);
			else
				selectionEntry.strText.Format(_T("flip %d coins"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CKarplusanMinotaurCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s flips %d coin"), pSelectionPlayer->GetPlayerName(), dwContext1);
					else
						strMessage.Format(_T("%s flips %d coins"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) FlipSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CKarplusanMinotaurCard::FlipSelection(CPlayer* pPlayer, DWORD CurrentFlip, DWORD TotalFlips)
{
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
		Flip = pPlayer->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pPlayer->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);
		FlipContinue(pPlayer, CurrentFlip, TotalFlips);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pPlayer->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
		FlipContinue(pPlayer, CurrentFlip, TotalFlips);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), CurrentFlip, TotalFlips);
	}
}

void CKarplusanMinotaurCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				FlipContinue(pSelectionPlayer, dwContext1, dwContext2);
				
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
				FlipContinue(pSelectionPlayer, dwContext1, dwContext2);
					
				return;
			}
		}
}

void CKarplusanMinotaurCard::FlipContinue(CPlayer* pPlayer, DWORD CurrentFlip, DWORD TotalFlips)
{
	if (CurrentFlip < TotalFlips)
		FlipSelection(pPlayer, CurrentFlip + 1, TotalFlips);
}

//____________________________________________________________________________
//
CKjeldoranJavelineerCard::CKjeldoranJavelineerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Javelineer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CKjeldoranJavelineerCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
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
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingBlockingCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKjeldoranJavelineerCard::BeforeResolution));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

void CKjeldoranJavelineerCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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

bool CKjeldoranJavelineerCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

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
CRonomHulkCard::CRonomHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ronom Hulk"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(5), Life(6))
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CRonomHulkCard::OnCounterMoved))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Snow, false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
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

void CRonomHulkCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
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
CShelteringAncientCard::CShelteringAncientCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sheltering Ancient"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("1") GREEN_MANA_TEXT, Power(5), Life(5))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShelteringAncientCard::OnCUSelected))
		, m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShelteringAncientCard::OnCreatureSelected))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShelteringAncientCard::BeforeResolution));
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CShelteringAncientCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();
		int nCreatures = 0;
		CPlayer* pController = pAction->GetController();

		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new CardKeywordComparer(CardKeyword::CantGetCounters, false));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (GetGame()->GetPlayer(ip) != pController)
			{
				CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
				nCreatures += m_CardFilter.CountIncluded(pZone->GetCardContainer());
			}
		}

		std::vector<SelectionEntry> entries;
		if (nCreatures >= nCounters)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("put %d +1/+1 counter on a creature an opponent controls"), nCounters);
			else
				selectionEntry.strText.Format(_T("put %d +1/+1 counters on creature your opponents control"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CShelteringAncientCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s puts %d +1/+1 counter on a creature opponent controls"), pSelectionPlayer->GetPlayerName(), dwContext1);
					else
						strMessage.Format(_T("%s puts %d +1/+1 counters on creatures opponents control"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) CreatureSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CShelteringAncientCard::CreatureSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands)
{
	std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (GetGame()->GetPlayer(ip) != pPlayer)
			{
				CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pZone->GetSize(); ++i)
				{
					CCard* pCard = pZone->GetAt(i);
					if (pCard->GetCardType().IsCreature() && !pCard->GetCardKeyword()->HasCantGetCounters())
					{
						SelectionEntry entry;

						entry.dwContext = (DWORD)pCard;
						entry.cpAssociatedCard = pCard;
									
						entry.strText.Format(_T("put a +1/+1 counter on %s"),
							pCard->GetCardName(TRUE));

						entries.push_back(entry);
					}
					
				}
			}
		}
		m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, CurrentLand, TotalLands);
}

void CShelteringAncientCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
			pModifier.SetDoubling(false);

			pModifier.ApplyTo(pCard);

			if (dwContext1 < dwContext2) CreatureSelection(pSelectionPlayer, dwContext1 + 1, dwContext2);
		}
}

//____________________________________________________________________________
//
CWallOfShardsCard::CWallOfShardsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Shards"), CardType::Snow | CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(8))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWallOfShardsCard::OnCUSelected))
		, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWallOfShardsCard::OnOpponentSelected))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWallOfShardsCard::BeforeResolution));
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfShardsCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();
		int nOpponents = 0;
		CPlayer* pController = pAction->GetController();

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			if ((pPlayer != pController) && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)) && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife)))
			{
				nOpponents++;
			}
		}


		std::vector<SelectionEntry> entries;
		if (nOpponents > 0)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("have an opponent gain %d life"), nCounters);
			else
				selectionEntry.strText.Format(_T("distribute %d life among opponents"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CWallOfShardsCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s has an opponent gain %d life"), pSelectionPlayer->GetPlayerName(), dwContext1);
					else
						strMessage.Format(_T("%s distributes %d life among opponents"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext1 > 0) OpponentSelection(pSelectionPlayer, 1, dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CWallOfShardsCard::OpponentSelection(CPlayer* pPlayer, DWORD CurrentToken, DWORD TotalTokens)
{
	std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
			if ((pSelectedPlayer != pPlayer) && (!pSelectedPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)) && (!pSelectedPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife)))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pSelectedPlayer;
									
				entry.strText.Format(_T("give 1 life to %s"),
					pSelectedPlayer->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, CurrentToken, TotalTokens);
}

void CWallOfShardsCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			CLifeModifier pModifier = CLifeModifier(Life(1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			
			pModifier.ApplyTo(pPlayer);

			if (dwContext1 < dwContext2) OpponentSelection(pSelectionPlayer, dwContext1 + 1, dwContext2);
		}
}


//____________________________________________________________________________
//
CColdsteelHeartCard::CColdsteelHeartCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Coldsteel Heart"), CardType::Snow | CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CColdsteelHeartCard::OnSelectionDone))
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CColdsteelHeartCard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CColdsteelHeartCard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CColdsteelHeartCard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CColdsteelHeartCard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CColdsteelHeartCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CColdsteelHeartCard::Move(CZone* pToZone,
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

void CColdsteelHeartCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

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

BOOL CColdsteelHeartCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CColdsteelHeartCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CColdsteelHeartCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CColdsteelHeartCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CColdsteelHeartCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CRuneSnagCard::CRuneSnagCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rune Snag"), CardType::Instant, nID)
{
	{
		counted_ptr<CRuneSnagAbility> cpSpell(
		::CreateObject<CRuneSnagAbility>(this, _T("1") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}
CRuneSnagCard::CRuneSnagAbility::CRuneSnagAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CRuneSnagCard::CRuneSnagAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Rune Snag")));
	int n = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		n += m_CardFilter_temp.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard)->GetCardContainer());
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 2+2*n);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CArcumDagssonCard::CArcumDagssonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcum Dagsson"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
		, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CArcumDagssonCard::OnSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_ArtifactCreature, true), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArcumDagssonCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));
	AddAbility(cpAbility.GetPointer());
}

bool CArcumDagssonCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pPlayer);
	pModifier1.ApplyTo(pTarget);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't search your library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Search your library"));

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);

	return true;
}

void CArcumDagssonCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't search his library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s searches his library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardFilter m_Cardfilter;
				m_Cardfilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
				m_Cardfilter.AddNegateComparer(new AnyCreatureComparer);

				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(1),
					pSelectionPlayer, ZoneId::Library,
					&m_Cardfilter, 
					ZoneId::Battlefield, TRUE, CardPlacement::Top,
					FALSE, FALSE, FALSE);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CVexingSphinxCard::CVexingSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vexing Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
	, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVexingSphinxCard::OnCUSelected))
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CVexingSphinxCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVexingSphinxCard::BeforeResolution));
	
		AddAbility(cpAbility.GetPointer());
	}
	{ 
		typedef 
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required); 
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVexingSphinxCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVexingSphinxCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CPlayer* pController = pAction->GetController();

		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();
		m_nCounterCount = nCounters;

		std::vector<SelectionEntry> entries;
		if (pController->GetZoneById(ZoneId::Hand)->GetSize() >= nCounters)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("discard %d card"), nCounters);
			else
				selectionEntry.strText.Format(_T("discard %d cards"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, nCounters);
	}
	return true;
}

void CVexingSphinxCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s discards %d card"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					else
						strMessage.Format(_T("%s discards %d cards"), pSelectionPlayer->GetPlayerName(), dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					CCardFilter::GetFilter(_T("cards")), // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
				if (dwContext1 != 0) for (int i = 1; i <= (int)dwContext1; i++) pModifier.ApplyTo(pSelectionPlayer);
								
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

void CVexingSphinxCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CVexingSphinxCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != AGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

bool CVexingSphinxCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	triggerContext.nValue1 = m_nCounterCount; 

	return true;
}

//____________________________________________________________________________
//
CPhyrexianEtchingsCard::CPhyrexianEtchingsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Etchings"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CPhyrexianEtchingsCard::OnCounterMoved))
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
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianEtchingsCard::BeforeResolution3));
		
		AddAbility(cpAbility.GetPointer());
	}
	{ 
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required); 
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianEtchingsCard::BeforeResolution4));

		AddAbility(cpAbility.GetPointer());
	}
}

void CPhyrexianEtchingsCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CPhyrexianEtchingsCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			
	
	if ((pFromCard = this) && ((CString)name = AGE_COUNTER))
		m_nCounterCount = n_value;

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, ((n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

bool CPhyrexianEtchingsCard::BeforeResolution3(CAbilityAction* pAction)
{
	if (m_nCounterCount > 0)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(m_nCounterCount), MaximumValue(m_nCounterCount));
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

bool CPhyrexianEtchingsCard::BeforeResolution4(CAbilityAction* pAction)
{
	if (m_nCounterCount > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-2*m_nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CBalduvianFrostwakerCard::CBalduvianFrostwakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balduvian Frostwaker"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Snow, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); //basic or non-basic land

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBalduvianFrostwakerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CBalduvianFrostwakerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Elemental AF"), 64036, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CBlizzardSpecterCard::CBlizzardSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blizzard Specter"), CardType::Snow | CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBlizzardSpecterCard::OnModeSelected))
	, PlayerID(0)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlizzardSpecterCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
        counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CBlizzardSpecterCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CBlizzardSpecterCard::BeforeResolution1));

		cpAbility->SetAbilityName(_T("Mode 1 - return a permanent"));
		AddAbility(cpAbility.GetPointer());
	}	
	{
        counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBlizzardSpecterCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CBlizzardSpecterCard::BeforeResolution2));

		cpAbility->SetAbilityName(_T("Mode 2 - discard a card"));
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CBlizzardSpecterCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage)
{
	int PID = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) == pPlayer)
		{
			PID = ip;
			break;
		}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: %s returns a permanent he controls to his hand"), GetCardName(TRUE), pPlayer->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: %s discards a card"), GetCardName(TRUE), pPlayer->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), PID);

	return false;
}

void CBlizzardSpecterCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				
				PlayerID = dwContext1;
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
				
				PlayerID = dwContext1;
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_2_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

bool CBlizzardSpecterCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, int nValue)
{
	triggerContext.nValue1 = PlayerID;

	return true;
}

bool CBlizzardSpecterCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(pAction->GetTriggerContext().nValue1);

	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(pPlayer);

	return true;
}

bool CBlizzardSpecterCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, int nValue)
{
	triggerContext.nValue1 = PlayerID;

	return true;
}

bool CBlizzardSpecterCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(pAction->GetTriggerContext().nValue1);

	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Hand, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
