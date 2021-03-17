#include "stdafx.h"
#include "CardProphecy.h"

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

		DEFINE_CARD(CAbolishCard);
		DEFINE_CARD(CAgentOfShaukuCard);
		DEFINE_CARD(CAlexiZephyrMageCard);
		DEFINE_CARD(CAlexiSCloakCard);
		DEFINE_CARD(CAuraFractureCard);
		DEFINE_CARD(CAvatarOfFuryCard);
		DEFINE_CARD(CAvatarOfWillCard);
		DEFINE_CARD(CAvatarOfWoeCard);
		DEFINE_CARD(CBarbedFieldCard);
		DEFINE_CARD(CBlessedWindCard);
		DEFINE_CARD(CBogElementalCard);
		DEFINE_CARD(CBogGliderCard);
		DEFINE_CARD(CBrandedBrawlersCard);
		DEFINE_CARD(CCalmingVerseCard);
		DEFINE_CARD(CChillingApparitionCard);
		DEFINE_CARD(CChimericIdolCard);
		DEFINE_CARD(CCoffinPuppetsCard);
		DEFINE_CARD(CCopperLeafAngelCard);
		DEFINE_CARD(CDarbaCard);
		DEFINE_CARD(CDeathCharmerCard);
		DEFINE_CARD(CDenyingWindCard);
		DEFINE_CARD(CDespoilCard);
		DEFINE_CARD(CDevastateCard);
		DEFINE_CARD(CDualNatureCard);
		DEFINE_CARD(CElephantResurgenceCard);
		DEFINE_CARD(CFaultRidersCard);
		DEFINE_CARD(CFenStalkerCard);
		DEFINE_CARD(CFlameshotCard);
		DEFINE_CARD(CFloweringFieldCard);
		DEFINE_CARD(CFoilCard);
		DEFINE_CARD(CForgottenHarvestCard);
		DEFINE_CARD(CGreelMindRakerCard);
		DEFINE_CARD(CGreelsCaressCard);
		DEFINE_CARD(CHazyHomunculusCard);
		DEFINE_CARD(CHeightenedAwarenessCard);
		DEFINE_CARD(CInflameCard);
		DEFINE_CARD(CJeweledSpiritCard);
		DEFINE_CARD(CJolraelsFavorCard);
		DEFINE_CARD(CJolraelEmpressOfBeastsCard);
		DEFINE_CARD(CKeldonArsonistCard);
		DEFINE_CARD(CKeldonBerserkerCard);
		DEFINE_CARD(CLatullaKeldonOverseerCard);
		DEFINE_CARD(CLatullasOrdersCard);
		DEFINE_CARD(CMagetasBoonCard);
		DEFINE_CARD(CMagetaTheLionCard);
		DEFINE_CARD(CManaVaporsCard);
		DEFINE_CARD(CMarshBoaCard);
		DEFINE_CARD(CMercenaryInformerCard);
		DEFINE_CARD(CMineBearerCard);
		DEFINE_CARD(CMunghaWurmCard);
		DEFINE_CARD(CNoxiousFieldCard);
		DEFINE_CARD(COverburdenCard);
		DEFINE_CARD(CPitRaptorCard);
		DEFINE_CARD(CPlagueFiendCard);
		DEFINE_CARD(CPygmyRazorbackCard);
		DEFINE_CARD(CRebelInformerCard);
		//DEFINE_CARD(CReveilleSquadCard);
		DEFINE_CARD(CRibCageSpiderCard);
		DEFINE_CARD(CRootCageCard);
		DEFINE_CARD(CScoriaCatCard);
		DEFINE_CARD(CSearchForSurvivorsCard);
		DEFINE_CARD(CSiltCrawlerCard);
		DEFINE_CARD(CSpiketailDrakeCard);
		DEFINE_CARD(CSporeFrogCard);
		DEFINE_CARD(CSpurGrapplerCard);
		DEFINE_CARD(CSquirrelWranglerCard);
		DEFINE_CARD(CStealStrengthCard);
		DEFINE_CARD(CStormwatchEagleCard);
		DEFINE_CARD(CSunkenFieldCard);
		DEFINE_CARD(CThresherBeastCard);
		DEFINE_CARD(CThriveCard);
		DEFINE_CARD(CTrenchingSteedCard);
		DEFINE_CARD(CTroubledHealerCard);
		DEFINE_CARD(CTroublesomeSpiritCard);
		DEFINE_CARD(CVerdantFieldCard);
		DEFINE_CARD(CVeteranBrawlersCard);
		DEFINE_CARD(CVintaraSnapperCard);
		DEFINE_CARD(CVitalizingWindCard);
		DEFINE_CARD(CWellOfDiscoveryCard);
		DEFINE_CARD(CWellOfLifeCard);
		DEFINE_CARD(CWhipstitchedZombieCard);
		DEFINE_CARD(CWindscouterCard);
		DEFINE_CARD(CWintermoonMesaCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAlexiSCloakCard::CAlexiSCloakCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Alexi's Cloak"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::Shroud));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVitalizingWindCard::CVitalizingWindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vitalizing Wind"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("8") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+7), Life(+7)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAvatarOfWoeCard::CAvatarOfWoeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avatar of Woe"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddFear(FALSE);
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this,	AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAvatarOfWoeCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CAvatarOfWoeCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	int nContCount = 0;
	int nOppCount = 0;

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pContCard = pContGraveyard->GetAt(i);
		if (pContCard->GetCardType().IsCreature())
            ++nContCount;
	}

	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pOppGraveyard->GetSize(); ++i)
	{
		CCard* pOppCard = pOppGraveyard->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
			++nOppCount;
	}

	return nContCount + nOppCount >= 10;
}

//____________________________________________________________________________
//
CAgentOfShaukuCard::CAgentOfShaukuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agent of Shauku"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlexiZephyrMageCard::CAlexiZephyrMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alexi, Zephyr Mage"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvatarOfFuryCard::CAvatarOfFuryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Avatar of Fury"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this,	AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAvatarOfFuryCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAvatarOfFuryCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nOppCount = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsLand())
            ++nOppCount;
	}

	return nOppCount >= 7;
}

//____________________________________________________________________________
//
CAvatarOfWillCard::CAvatarOfWillCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avatar of Will"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this,	AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAvatarOfWillCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAvatarOfWillCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	return m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() == 0;
}

//____________________________________________________________________________
//
CBogElementalCard::CBogElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBogGliderCard::CBogGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bog Glider"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 2 or less"), _T("Mercenary permanents with converted mana cost 2 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CChillingApparitionCard::CChillingApparitionCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Chilling Apparition"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoffinPuppetsCard::CCoffinPuppetsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coffin Puppets"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));
	cpAbility->SetGraveyardOnly();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,&CCoffinPuppetsCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CCoffinPuppetsCard::CanPlay(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CDarbaCard::CDarbaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darba"), CardType::Creature, CREATURE_TYPE2(Bird, Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(4))
{
	AddUpkeepCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);
}

//____________________________________________________________________________
//
CFaultRidersCard::CFaultRidersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fault Riders"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+0), CreatureKeyword::FirstStrike)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CGreelMindRakerCard::CGreelMindRakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greel, Mind Raker"), CardType::_LegendaryCreature, CREATURE_TYPE2(Horror, Spellshaper), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(1));
	cpAbility->SetAtRandom();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeldonArsonistCard::CKeldonArsonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keldon Arsonist"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1"),
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLatullaKeldonOverseerCard::CLatullaKeldonOverseerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Latulla, Keldon Overseer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(-1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagetaTheLionCard::CMagetaTheLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mageta the Lion"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, 
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));
	ATLASSERT(cpAbility);

	cpAbility->SetExceptParent();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarshBoaCard::CMarshBoaCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Marsh Boa"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CMercenaryInformerCard::CMercenaryInformerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mercenary Informer"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Mercenary), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE, CCardFilter::GetFilter(_T("non-black cards")));//It can't be the target of black spells or abilities from black sources.

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Rebel), false),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMineBearerCard::CMineBearerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mine Bearer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""), 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPitRaptorCard::CPitRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pit Raptor"), CardType::Creature, CREATURE_TYPE2(Bird, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	AddUpkeepCost(_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT);
}

//____________________________________________________________________________
//
CPygmyRazorbackCard::CPygmyRazorbackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pygmy Razorback"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CRebelInformerCard::CRebelInformerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rebel Informer"), CardType::Creature, CREATURE_TYPE3(Human, Mercenary, Rebel), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddShroud(FALSE, CCardFilter::GetFilter(_T("non-white cards")));//It can't be the target of white spells or abilities from white sources.

	{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3"),
			new CreatureTypeComparer(CREATURE_TYPE(Rebel), false),
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->SetCardPlacement(CardPlacement::Bottom);

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CRibCageSpiderCard::CRibCageSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rib Cage Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CSiltCrawlerCard::CSiltCrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silt Crawler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiketailDrakeCard::CSpiketailDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spiketail Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("3"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSporeFrogCard::CSporeFrogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spore Frog"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""),
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSquirrelWranglerCard::CSquirrelWranglerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squirrel Wrangler"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				_T("Squirrel"), TOKEN_ID_BY_NAME,
				2));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1") GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false)));

		cpAbility->SetToActivatedAbility();

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStormwatchEagleCard::CStormwatchEagleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormwatch Eagle"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThresherBeastCard::CThresherBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thresher Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrenchingSteedCard::CTrenchingSteedCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Trenching Steed"), CardType::Creature, CREATURE_TYPE2(Horse, Rebel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3),
		_T(""), Power(+0), Life(+3))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CTroubledHealerCard::CTroubledHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Troubled Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CTroublesomeSpiritCard::CTroublesomeSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Troublesome Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhipstitchedZombieCard::CWhipstitchedZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whipstitched Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	AddUpkeepCost(BLACK_MANA_TEXT);
}

//____________________________________________________________________________
//
CWindscouterCard::CWindscouterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windscouter"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWintermoonMesaCard::CWintermoonMesaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wintermoon Mesa"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("2"),
				TRUE, FALSE,
				new CardTypeComparer(CardType::_Land, false)));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetSubjectCount(2, 2);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CAuraFractureCard::CAuraFractureCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aura Fracture"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreelsCaressCard::CGreelsCaressCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Greel's Caress"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-3), Life(+0))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CHeightenedAwarenessCard::CHeightenedAwarenessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heightened Awareness"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, 
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetDiscardCount(SpecialNumber::All);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::DrawStep2));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJolraelsFavorCard::CJolraelsFavorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jolrael's Favor"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CJolraelsFavorCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CJolraelsFavorCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, _T("1") GREEN_MANA_TEXT, (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagetasBoonCard::CMagetasBoonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mageta's Boon"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CRootCageCard::CRootCageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Root Cage"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("1") GREEN_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false)));

	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAbolishCard::CAbolishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abolish"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T(""),
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("Plains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAbolishCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAbolishCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CInflameCard::CInflameCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Inflame"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Life(-2),
		new CreatureFlagComparer(CreatureFlag::TakenCombatDamage | CreatureFlag::TakenNonCombatDamage, false), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CDenyingWindCard::CDenyingWindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Denying Wind"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			MinimumValue(0), MaximumValue(7),
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDespoilCard::CDespoilCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Despoil"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CFlameshotCard::CFlameshotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flameshot"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlameshotCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CFlameshotCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CManaVaporsCard::CManaVaporsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mana Vapors"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgUntapCardTypeSpell> cpSpell(
		::CreateObject<CTargetChgUntapCardTypeSpell>(this, AbilityType::Sorcery,					
			_T("1") BLUE_MANA_TEXT,
			CardType::_Land));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThriveCard::CThriveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thrive"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CMunghaWurmCard::CMunghaWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mungha Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::UntapLimit, 1));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgUntapCardTypeWhenNodeChangedAbility> cpAbility(
			::CreateObject<CTriggeredChgUntapCardTypeWhenNodeChangedAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetOptionalType(CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OptionalType::Required);
		cpAbility->AddCardTypeSelection(CardType::_Land, _T("land"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::NoUntapInUntapPhase, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarbedFieldCard::CBarbedFieldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Barbed Field"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBarbedFieldCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBarbedFieldCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFloweringFieldCard::CFloweringFieldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flowering Field"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CFloweringFieldCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFloweringFieldCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CLatullasOrdersCard::CLatullasOrdersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Latulla's Orders"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CLatullasOrdersCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CLatullasOrdersCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNoxiousFieldCard::CNoxiousFieldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Noxious Field"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CNoxiousFieldCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CNoxiousFieldCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(pEnchantedCard,
			_T(""),
			Life(-1),	// life delta
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunkenFieldCard::CSunkenFieldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sunken Field"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSunkenFieldCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSunkenFieldCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(pEnchantedCard,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetCanBeDenied();
	cpEnchantAbility->GetDenialCost().SetManaCost(_T("1"));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CVerdantFieldCard::CVerdantFieldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Verdant Field"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CVerdantFieldCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CVerdantFieldCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevastateCard::CDevastateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devastate"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
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
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDevastateCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDevastateCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CBrandedBrawlersCard::CBrandedBrawlersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Branded Brawlers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CBrandedBrawlersCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CBrandedBrawlersCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CBrandedBrawlersCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

BOOL CBrandedBrawlersCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CVeteranBrawlersCard::CVeteranBrawlersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Brawlers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CVeteranBrawlersCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CVeteranBrawlersCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CVeteranBrawlersCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

BOOL CVeteranBrawlersCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CKeldonBerserkerCard::CKeldonBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keldon Berserker"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Berserker), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKeldonBerserkerCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKeldonBerserkerCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKeldonBerserkerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											   AttackSubject attacked) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CKeldonBerserkerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CWellOfDiscoveryCard::CWellOfDiscoveryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Well of Discovery"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWellOfDiscoveryCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWellOfDiscoveryCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CWellOfDiscoveryCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CWellOfDiscoveryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CWellOfLifeCard::CWellOfLifeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Well of Life"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWellOfLifeCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWellOfLifeCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CWellOfLifeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CWellOfLifeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CCalmingVerseCard::CCalmingVerseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Calming Verse"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
		
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCalmingVerseCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCalmingVerseCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCalmingVerseCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

bool CCalmingVerseCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CBlessedWindCard::CBlessedWindCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Blessed Wind"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("7") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(0),
		PreventableType::NotPreventable)
{
	CLifeModifier* pModifier = new CLifeModifier;
		pModifier->SetLifeDelta(Life(20));
		pModifier->SetPreventable(PreventableType::NotPreventable);
		pModifier->SetReplacement(TRUE);

	m_pTargetChgLifeSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CHazyHomunculusCard::CHazyHomunculusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hazy Homunculus"), CardType::Creature, CREATURE_TYPE2(Homunculus, Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	GetCreatureKeyword()->AddUnblockableWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
COverburdenCard::COverburdenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Overburden"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
//"Reveille Squad\n{2WW}\nCreature - Human Rebel\nPCY,U\nWhenever one or more creatures attack you, if Reveille Squad is untapped, you may untap all creatures you control.\n3/3"
//Shouldn't trigger for each attacking creature separately.
//CReveilleSquadCard::CReveilleSquadCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Reveille Squad"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
//		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
//{
//	typedef
//		TTriggeredAbility< CTriggeredTapCardAbility, CWhenAttackedBlocked,
//							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
//
//	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);
//
//	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
//	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//	
//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReveilleSquadCard::SetTriggerContext));
//	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//bool CReveilleSquadCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
//										 CCreatureCard* pCreature,
//										 AttackSubject attacked) const
//{
//	return (pCreature->GetAttackedPlayer() == GetController()); //Does the creature attack defending player (and not a planeswalker)?
//}
//
////____________________________________________________________________________
////
CStealStrengthCard::CStealStrengthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Steal Strength"), CardType::Instant, nID)
{
	{
		counted_ptr<CDoubleTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CDoubleTargetChgPwrTghAttrSpell>(this,
			AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(+1), Life(+1),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}
//{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				_T("1") BLACK_MANA_TEXT,
//				Power(+1), Life(+1),
//				CreatureKeyword::Null, CreatureKeyword::Null,
//				TRUE, PreventableType::NotPreventable));
//
//		cpSpell->FlagTargets(TRUE, TRUE);
//		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
//
//		AddSpell(cpSpell.GetPointer());
//
//    {
//		typedef
//            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
//
//        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
//            ZoneId::Stack, ZoneId::_Tokens));
//
//        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
//		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
//		cpAbility->SetSkipStack(TRUE);
//
//        AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;
//
//        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
//			ZoneId::Stack, ZoneId::_Tokens));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
//		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
//		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
//		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
//		
//		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardAbilityFlagComparer(cpSpell.GetPointer()));
//		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
//		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
//
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}

//____________________________________________________________________________
//
CChimericIdolCard::CChimericIdolCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chimeric Idol"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(this,
			_T("0"),
			_T("Turtle"), 2918));
	cpAbility->SetAbilityText(_T("Chimeric Idol becomes a 3/3 Turtle artifact creature. Activates"));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(TRUE)));

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJeweledSpiritCard::CJeweledSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jeweled Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJeweledSpiritCard::OnColorSelected))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetAbilityText(_T("Gain protection from color of your choice or from artifacts. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJeweledSpiritCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJeweledSpiritCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
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
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 6;
			selectionEntry.strText.Format(_T("artifacts"));

			entries.push_back(selectionEntry);
		}
	
		m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}
	return true;
}

void CJeweledSpiritCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 6)
			{
				GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("artifact cards")));
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSearchForSurvivorsCard::CSearchForSurvivorsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Search for Survivors"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType:: Sorcery,
			_T("2") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSearchForSurvivorsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSearchForSurvivorsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (!pZone->GetSize()) return false;
	pZone->Shuffle();

	CCard* pCard = pZone->GetAt(0);

	CString strMessage;
	strMessage.Format(_T("Choosen card %s, "), pCard->GetCardName());

	if (pCard->GetCardType().IsCreature())
	{
		strMessage += _T("move it onto the battlefield.");
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true);
		modifier.ApplyTo(pCard);
	}
	else
	{
		strMessage += _T("exile it.");
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true);
		modifier.ApplyTo(pCard);
	}

	GetGame()->Message(
		strMessage,
		pAction->GetController()->IsComputer() ? GetGame()->GetComputerImage() : GetGame()->GetHumanImage(),
		MessageImportance::High
		);	

	return true;
}

//____________________________________________________________________________
//
CFenStalkerCard::CFenStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fen Stalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	CCreatureKeywordModifier* pFearModifier = new CCreatureKeywordModifier;
	pFearModifier->GetModifier().SetToAdd(CreatureKeyword::Fear);
	pFearModifier->GetModifier().SetOneTurnOnly(true);
	
	cpAbility->GetOtherCardModifiers().Add((CCardModifier*)pFearModifier);

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetConditionFilter().AddComparer(new UntappedComparer());
	cpAbility->SetConditionValue(0);		
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScoriaCatCard::CScoriaCatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scoria Cat"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+3), Life(+3)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetConditionFilter().AddComparer(new UntappedComparer());
	cpAbility->SetConditionValue(0);		
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpurGrapplerCard::CSpurGrapplerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spur Grappler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetConditionFilter().AddComparer(new UntappedComparer());
	cpAbility->SetConditionValue(0);		
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVintaraSnapperCard::CVintaraSnapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vintara Snapper"), CardType::Creature, CREATURE_TYPE(Turtle), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetConditionFilter().AddComparer(new UntappedComparer());
	cpAbility->SetConditionValue(0);		
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlagueFiendCard::CPlagueFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Fiend"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlagueFiendCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));
	
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CPlagueFiendCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CDeathCharmerCard::CDeathCharmerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death Charmer"), CardType::Creature, CREATURE_TYPE2(Worm, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CForgottenHarvestCard::CForgottenHarvestCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Forgotten Harvest"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForgottenHarvestCard::OnCardSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForgottenHarvestCard::BeforeResolution));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

bool CForgottenHarvestCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	if (m_CardFilter.CountIncluded(pGraveyard->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't exile anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pGraveyard->GetSize(); ++i)
		{
			CCard* pCard = pGraveyard->GetAt(i);
			if (pCard->GetCardType().IsLand())
			{
				SelectionEntry entry;
					entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
								
				entry.strText.Format(_T("Exile %s"),
					pCard->GetCardName(TRUE));
					entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedCard());
	}

	return true;
}

void CForgottenHarvestCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't exile anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s exiles %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

				pModifier1.ApplyTo(pCard);
				pModifier2.ApplyTo((CCard*)dwContext1);

				return;
			}
		}
}

//____________________________________________________________________________
//
CDualNatureCard::CDualNatureCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dual Nature"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDualNatureCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CDualNatureCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CDualNatureCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CDualNatureCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility3;

		counted_ptr<TriggeredAbility3> cpAbility(::CreateObject<TriggeredAbility3>(this));

		cpAbility->SetOptionalType(TriggeredAbility3::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDualNatureCard::BeforeResolution3));
		AddAbility(cpAbility.GetPointer());
	}
}

void CDualNatureCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		pTokens.RemoveAll();
}

bool CDualNatureCard::SetTriggerContext1(TriggeredAbility1::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.m_pCard = pCard;

	return true;
}

bool CDualNatureCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCard* pCard = triggerContext.m_pCard;
	
	CCountedCardContainer pCreatedTokens;
	pCreatedTokens.RemoveAll();

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), pCard, (CCardModifier*)0, (CCreatureModifier*)0, &pCreatedTokens);
	pModifier.ApplyTo(pCard);

	for (int ic = 0; ic < pCreatedTokens.GetSize(); ic++)
		pTokens.AddCard(pCreatedTokens.GetAt(ic), CardPlacement::Top);

	return true;
}

bool CDualNatureCard::SetTriggerContext2(TriggeredAbility2::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.m_pCard = pCard;

	return true;
}

bool CDualNatureCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCard* pCard = triggerContext.m_pCard;
	
	CCountedCardContainer pAffectedTokens;
	pAffectedTokens.RemoveAll();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, pAffectedTokens);
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others);

	for (int ic = 0; ic < pAffectedTokens.GetSize(); ++ic)
		pModifier.ApplyTo(pAffectedTokens.GetAt(ic));

	return true;
}

bool CDualNatureCard::BeforeResolution3(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others);

	for (int ic = 0; ic < pTokens.GetSize(); ic++)
	{
		CCard* pToken = pTokens.GetAt(ic);
		if (pToken)
			pModifier.ApplyTo(pToken);
	}
	
	return true;
}
//____________________________________________________________________________
//
CFoilCard::CFoilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Foil"), CardType::Instant, nID)
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Island, false));
	m_CardFilter1.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddNegateComparer(new CardTypeComparer(CardType::Island, false));
	m_CardFilter2.AddNegateComparer(new SpecificCardComparer(this));

	{
		//Regular mana cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost 1
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T(""),
				new TrueCardComparer));

		cpSpell->GetCost().AddDiscardCardCost(2, &m_CardFilter1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFoilCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost 2
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T(""),
				new TrueCardComparer));

		cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter1);
		cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter2);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFoilCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CFoilCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CCopperLeafAngelCard::CCopperLeafAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Copper-Leaf Angel"), CardType::_ArtifactCreature, CREATURE_TYPE(Angel), nID,
		_T("5"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("lands")));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCopperLeafAngelCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCopperLeafAngelCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nValue);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
CElephantResurgenceCard::CElephantResurgenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elephant Resurgence"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElephantResurgenceCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CElephantResurgenceCard::BeforeResolution(CAbilityAction* pAction)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elephant D"), 2829, 1);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CJolraelEmpressOfBeastsCard::CJolraelEmpressOfBeastsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jolrael, Empress of Beasts"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJolraelEmpressOfBeastsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CJolraelEmpressOfBeastsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land D"), 64049, pAction->GetController());
	CScheduledCardModifier pModifier2 = CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		
		if (pCard->GetCardType().IsLand())
		{
			pModifier1->ApplyTo(pCard);
			pModifier2.ApplyTo(pCard);
		}
	}
	
	return true;
}

//____________________________________________________________________________
//

