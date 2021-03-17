#include "stdafx.h"
#include "CardPlanarChaos.h"

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

		DEFINE_CARD(CAEtherMembraneCard);
		DEFINE_CARD(CAeonChroniclerCard);
		DEFINE_CARD(CAkromaAngelofFuryCard);
		DEFINE_CARD(CAnaBattlemageCard);
		DEFINE_CARD(CAvenRiftwatcherCard);
		DEFINE_CARD(CBatteringSliverCard);
		DEFINE_CARD(CBenalishCommanderCard);
		DEFINE_CARD(CBigGameHunterCard);
		DEFINE_CARD(CBlightspeakerCard);
		DEFINE_CARD(CBloodKnightCard);
		DEFINE_CARD(CBogSerpentCard);
		DEFINE_CARD(CBoomBustCard);
		DEFINE_CARD(CBraidsConjurerAdeptCard);
		DEFINE_CARD(CBruteForceCard);
		DEFINE_CARD(CCalcidermCard);
		DEFINE_CARD(CCauterySliverCard);
		DEFINE_CARD(CChronozoaCard);
		DEFINE_CARD(CCircleOfAfflictionCard);
		DEFINE_CARD(CCitanulWoodreadersCard);
		DEFINE_CARD(CCradleToGraveCard);
		DEFINE_CARD(CCrovaxAscendantHeroCard);
		DEFINE_CARD(CDamnationCard);
		DEFINE_CARD(CDarkheartSliverCard);
		DEFINE_CARD(CDawnCharmCard);
		DEFINE_CARD(CDeadGoneCard);
		DEFINE_CARD(CDeadlyGrubCard)
		DEFINE_CARD(CDeadwoodTreefolkCard);
		DEFINE_CARD(CDetritivoreCard);
		DEFINE_CARD(CDichotomancyCard);
		DEFINE_CARD(CDismalFailureCard);
		DEFINE_CARD(CDormantSliverCard);
		DEFINE_CARD(CDreamscapeArtistCard);
		DEFINE_CARD(CDuneriderOutlawCard);
		DEFINE_CARD(CDustCoronaCard);
		DEFINE_CARD(CDustElementalCard);
		DEFINE_CARD(CEnslaveCard);
		DEFINE_CARD(CErraticMutationCard);
		DEFINE_CARD(CEssenceWardenCard);
		DEFINE_CARD(CExtirpateCard);
		DEFINE_CARD(CEvolutionCharmCard);
		DEFINE_CARD(CFaadiyahSeerCard);
		DEFINE_CARD(CFatalFrenzyCard);
		DEFINE_CARD(CFirefrightMageCard);
		DEFINE_CARD(CFreneticSliverCard);
		DEFINE_CARD(CFrozenAEtherCard);
		DEFINE_CARD(CGaeasAnthemCard);
		DEFINE_CARD(CGhostTacticianCard);
		DEFINE_CARD(CGiantDustwaspCard);
		DEFINE_CARD(CGossamerPhantasmCard);
		DEFINE_CARD(CGroundbreakerCard);
		DEFINE_CARD(CHammerheimDeadeyeCard);
		DEFINE_CARD(CHarmonizeCard);
		DEFINE_CARD(CHealingLeavesCard);
		DEFINE_CARD(CHedgeTrollCard);
		DEFINE_CARD(CHeroesRememberedCard);
		DEFINE_CARD(CHuntingWildsCard);
		DEFINE_CARD(CImpsMischiefCard);
		DEFINE_CARD(CJeditOjanenOfEfravaCard);
		DEFINE_CARD(CJodahsAvengerCard);
		DEFINE_CARD(CKavuPredatorCard);
		DEFINE_CARD(CKeenSenseCard);
		DEFINE_CARD(CKeldonMaraudersCard);
		DEFINE_CARD(CLavacoreElementalCard);
		DEFINE_CARD(CMagusOfTheBazaarCard);
		DEFINE_CARD(CMagusOfTheCoffersCard);
		DEFINE_CARD(CMagusOfTheLibraryCard);
		DEFINE_CARD(CMagusoftheTabernacleCard);
		DEFINE_CARD(CMalachOfTheDawnCard);
		DEFINE_CARD(CManaTitheCard);
		DEFINE_CARD(CMantleOfLeadershipCard);
		DEFINE_CARD(CMelancholyCard);
		DEFINE_CARD(CMerfolkThaumaturgistCard);
		DEFINE_CARD(CMidnightCharmCard);
		DEFINE_CARD(CMireBoaCard);
		DEFINE_CARD(CMirriTheCursedCard);
		DEFINE_CARD(CMoltenFirebirdCard);
		DEFINE_CARD(CMycologistCard);
		DEFINE_CARD(CNecroticSliverCard);
		DEFINE_CARD(CNeedlepeakSpiderCard);
		DEFINE_CARD(CNumotTheDevastatorCard);
		DEFINE_CARD(COrosTheAvengerCard);
		DEFINE_CARD(CPallidMycodermCard);
		DEFINE_CARD(CPiracyCharmCard);
		DEFINE_CARD(CPongifyCard);
		DEFINE_CARD(CPorphyryNodesCard);
		DEFINE_CARD(CPoulticeSliverCard);
		DEFINE_CARD(CPouncingWurmCard);
		DEFINE_CARD(CPrimalPlasmaCard);
		DEFINE_CARD(CPsychotropeThallidCard);
		DEFINE_CARD(CPyrohemiaCard);
		DEFINE_CARD(CRadhaHeirToKeldCard);
		DEFINE_CARD(CRathiTrapperCard);
		DEFINE_CARD(CRebufftheWickedCard);
		DEFINE_CARD(CRecklessWurmCard);
		DEFINE_CARD(CReflexSliverCard);
		DEFINE_CARD(CReveredDeadCard);
		DEFINE_CARD(CRidgedKusiteCard);
		DEFINE_CARD(CRiftmarkedKnightCard);
		DEFINE_CARD(CRiptidePilfererCard);
		DEFINE_CARD(CRoilingHorrorCard);
		DEFINE_CARD(CRoughTumbleCard);
		DEFINE_CARD(CSaltblastCard);
		DEFINE_CARD(CSaltfieldRecluseCard);
		DEFINE_CARD(CSealOfPrimordiumCard);
		DEFINE_CARD(CSerendibSorcererCard);
		DEFINE_CARD(CSerrasBoonCard);
		DEFINE_CARD(CSerraSphinxCard);
		DEFINE_CARD(CShadeOfTrokairCard);
		DEFINE_CARD(CShivanMeteorCard);
		DEFINE_CARD(CShivanWumpusCard);
		DEFINE_CARD(CSimianSpiritGuideCard);
		DEFINE_CARD(CSinewSliverCard);
		DEFINE_CARD(CSkirkShamanCard);
		DEFINE_CARD(CSophicCentaurCard);
		DEFINE_CARD(CSpittingSliverCard);
		DEFINE_CARD(CStingscourgerCard);
		DEFINE_CARD(CStonecloakerCard);
		DEFINE_CARD(CStormfrontRidersCard);
		DEFINE_CARD(CSulfurElementalCard);
		DEFINE_CARD(CSunlanceCard);
		DEFINE_CARD(CSynchronousSliverCard);
		//DEFINE_CARD(CTemporalExtortionCard);
		DEFINE_CARD(CTenebTheHarvesterCard);
		DEFINE_CARD(CTidewalkerCard);
		DEFINE_CARD(CTimbermareCard);
		//DEFINE_CARD(CTimecraftingCard);
		DEFINE_CARD(CUktabiDrakeCard);
		DEFINE_CARD(CUrborgTombOfYawgmothCard);
		DEFINE_CARD(CUtopiaVowCard);
		DEFINE_CARD(CVampiricLinkCard);
		DEFINE_CARD(CVeilingOddityCard);
		DEFINE_CARD(CVitasporeThallidCard);
		DEFINE_CARD(CVoroshTheHunterCard);
		DEFINE_CARD(CWaningWurmCard);
		DEFINE_CARD(CWhitemaneLionCard);
		DEFINE_CARD(CWistfulThinkingCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBruteForceCard::CBruteForceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Brute Force"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CBloodKnightCard::CBloodKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Blood Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CPyrohemiaCard::CPyrohemiaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyrohemia"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyrohemiaCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPyrohemiaCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				RED_MANA_TEXT,
				Life(-1),	// life delta
				new AnyCreatureComparer, TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPyrohemiaCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CNode* pToNode) const
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
			if (pSurvey->GetAt(j)->GetCardType().IsCreature())
				return false;
	}

	return true;
}

bool CPyrohemiaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
			if (pSurvey->GetAt(j)->GetCardType().IsCreature())
				return false;
	}

	return true;
}

//____________________________________________________________________________
//
CSkirkShamanCard::CSkirkShamanCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Skirk Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2),
		CCardFilter::GetFilter(_T("artifact creatures or red creatures")))
{
}

//____________________________________________________________________________
//
CDamnationCard::CDamnationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Damnation"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRathiTrapperCard::CRathiTrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rathi Trapper"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLACK_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));

	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CVampiricLinkCard::CVampiricLinkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vampiric Link"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CVampiricLinkCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CVampiricLinkCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVampiricLinkCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CVampiricLinkCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CMalachOfTheDawnCard::CMalachOfTheDawnCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Malach of the Dawn"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4),
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CManaTitheCard::CManaTitheCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mana Tithe"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
}

//____________________________________________________________________________
//
CReveredDeadCard::CReveredDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Revered Dead"), CardType::Creature, CREATURE_TYPE2(Spirit, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		WHITE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CEssenceWardenCard::CEssenceWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Essence Warden"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredChgLifeWhenCardMovedAbility> cpAbility(
		::CreateObject<CTriggeredChgLifeWhenCardMovedAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield,
			Life(+1), PreventableType::NotPreventable));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CGaeasAnthemCard::CGaeasAnthemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gaea's Anthem"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHarmonizeCard::CHarmonizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harmonize"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHealingLeavesCard::CHealingLeavesCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Healing Leaves"), CardType::Instant, nID, AbilityType::Instant, 
		GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(3),
		PreventableType::NotPreventable)
{
	counted_ptr<CTargetDamagePreventionSpell> cpAbility(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(3),
			SourceColor::Null));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeenSenseCard::CKeenSenseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Keen Sense"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CKeenSenseCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CKeenSenseCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFrozenAEtherCard::CFrozenAEtherCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Frozen Æther"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("3") BLUE_MANA_TEXT,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("artifacts, creatures or lands")),	
			TRUE));

	cpEnchantment->SetAffectOpponentsOnly();

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CSerraSphinxCard::CSerraSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serra Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CSaltfieldRecluseCard::CSaltfieldRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saltfield Recluse"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CBatteringSliverCard::CBatteringSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battering Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSynchronousSliverCard::CSynchronousSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Synchronous Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Vigilance));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSinewSliverCard::CSinewSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sinew Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReflexSliverCard::CReflexSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reflex Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpittingSliverCard::CSpittingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spitting Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMireBoaCard::CMireBoaCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Mire Boa"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Swampwalk, FALSE);
}

//____________________________________________________________________________
//
CNeedlepeakSpiderCard::CNeedlepeakSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Needlepeak Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CGhostTacticianCard::CGhostTacticianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost Tactician"), CardType::Creature, CREATURE_TYPE2(Spirit, Spellshaper), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			WHITE_MANA_TEXT,
			Power(+1), Life(+0),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunlanceCard::CSunlanceCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Sunlance"), CardType::Sorcery, nID, AbilityType::Sorcery,
		WHITE_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-3), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::White, false));
}

//____________________________________________________________________________
//
CSaltblastCard::CSaltblastCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Saltblast"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Sorcery,
		new NegateCardComparer(new CardTypeComparer(CardType::White, false)),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CPrimalPlasmaCard::CPrimalPlasmaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primal Plasma"), CardType::Creature, CREATURE_TYPE2(Elemental, Shapeshifter), nID,
		_T("3") BLUE_MANA_TEXT, Power(0), Life(0))
{
	typedef
		TTriggeredAbility< CTriggeredMorphCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddMorphToType(_T("3/3 creature"), Power(3), Life(3), CREATURE_TYPE2(Elemental, Shapeshifter), CreatureKeyword::Null);
	cpAbility->AddMorphToType(_T("2/2 creature with flying"), Power(2), Life(2), CREATURE_TYPE2(Elemental, Shapeshifter), CreatureKeyword::Flying);
	cpAbility->AddMorphToType(_T("1/6 creature with defender"), Power(1), Life(6), CREATURE_TYPE2(Elemental, Shapeshifter), CreatureKeyword::Defender);

	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGroundbreakerCard::CGroundbreakerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Groundbreaker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
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
}

//____________________________________________________________________________
//
CSulfurElementalCard::CSulfurElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sulfur Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddSplitSecond(FALSE);

	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(+1), Life(-1)));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRidgedKusiteCard::CRidgedKusiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ridged Kusite"), CardType::Creature, CREATURE_TYPE2(Horror, Spellshaper), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMagusOfTheBazaarCard::CMagusOfTheBazaarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Bazaar"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 2));

	cpAbility->AddTapCost();
	cpAbility->SetDiscard(3, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSealOfPrimordiumCard::CSealOfPrimordiumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Primordium"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""), 
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWaningWurmCard::CWaningWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Waning Wurm"), CardType::Creature, CREATURE_TYPE2(Zombie, Wurm), nID,
		_T("3") BLACK_MANA_TEXT, Power(7), Life(6))
	, CVanishingKeyword(this, 2)
{
}

//____________________________________________________________________________
//
CCalcidermCard::CCalcidermCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Calciderm"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
	, CVanishingKeyword(this, 4)
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CCrovaxAscendantHeroCard::CCrovaxAscendantHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crovax, Ascendant Hero"), CardType::_LegendaryCreature, CREATURE_TYPE(Human), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	//Pump other white creatures
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}

	//Unpump non-white creatures
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new CardTypeComparer(CardType::Creature | CardType::White, true)),
				Power(-1), Life(-1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}

	//return it to hand
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenRiftwatcherCard::CAvenRiftwatcherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Riftwatcher"), CardType::Creature, CREATURE_TYPE3(Bird, Rebel, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
	, CVanishingKeyword(this, 3)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSophicCentaurCard::CSophicCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sophic Centaur"), CardType::Creature, CREATURE_TYPE2(Centaur, Spellshaper), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeBySurveySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeBySurveySpell>>(this, 
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("cards")), ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHedgeTrollCard::CHedgeTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Hedge Troll"), CardType::Creature, CREATURE_TYPE2(Troll, Cleric), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		WHITE_MANA_TEXT)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Plains, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWistfulThinkingCard::CWistfulThinkingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wistful Thinking"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 2));

	cpSpell->SetDiscard(4, FALSE, MoveType::Discard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBraidsConjurerAdeptCard::CBraidsConjurerAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Braids, Conjurer Adept"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhitemaneLionCard::CWhitemaneLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whitemane Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDustElementalCard::CDustElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dust Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddFear(FALSE);
	
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectCount(
			3, // minimum
			3, // maximum
			TRUE); // lower minimum when not enough cards

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		//cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative); required action so setting this will cause computer to miss the selection

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDustCoronaCard::CDustCoronaCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dust Corona"), nID, RED_MANA_TEXT,
		Power(+2), Life(+0), CreatureKeyword::Unblockable)
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("non-flying creatures"))); // unblockable except for non-flying creatures
}

//____________________________________________________________________________
//
CJeditOjanenOfEfravaCard::CJeditOjanenOfEfravaCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Jedit Ojanen of Efrava"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5),
		CreatureKeyword::Forestwalk)
{
	typedef
	TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfAttackedBlocked,
		CWhenSelfAttackedBlocked::EventCallback,
		&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Cat Warrior"), TOKEN_ID_BY_NAME, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStonecloakerCard::CStonecloakerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stonecloaker"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAEtherMembraneCard::CAEtherMembraneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Æther Membrane"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
				CWhenSelfAttackedBlocked::BlockEventCallback2,
				&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEtherMembraneCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAEtherMembraneCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CBogSerpentCard::CBogSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		//Can't attack if defending player doesn't control a Swamp
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CBogSerpentCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control a Swamp
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Swamps")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBogSerpentCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBogSerpentCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBogSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Swamp).Any())
			return TRUE;

	return FALSE;
}

bool CBogSerpentCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			return false;
	}

	return true;
}

bool CBogSerpentCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CDeadwoodTreefolkCard::CDeadwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(6))
	, CVanishingKeyword(this, 3)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDreamscapeArtistCard::CDreamscapeArtistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreamscape Artist"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost(); // tap this card
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards"))); // discard a card in addition to tap
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands"))); // sacrifice a land in addition to tap

	cpAbility->SetRevealCards(TRUE); // need to reveal the searched cards, yes
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2)); // search up to two cards

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaadiyahSeerCard::CFaadiyahSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fa'adiyah Seer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	counted_ptr<CActivatedAbility<CDrawCardSpellEx>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpellEx>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();

	// Reveal draw to all players
	cpAbility->GetZoneModifier().GetSelection(0).revealTo = CZoneModifier::RoleType::AllPlayers;

	// If the card is not a land, discard and reveal to all
	cpAbility->GetZoneModifier().AddSelection(MinimumValue(1), MaximumValue(1), // select 1 from draw 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to all
		&m_CardFilter, // these cards only
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer, // order selected cards by this player
		true); // select from previously drew cards

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this, _T(""), 1));

	cpAbility->SetRevealCardsToOthers(TRUE, FALSE);
	cpAbility->SetSelectionOptions(1, ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("lands")));
	cpAbility->AddTapCost(); // tap this card

	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CMagusOfTheLibraryCard::CMagusOfTheLibraryCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Magus of the Library"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1),
		_T("1"))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CMagusOfTheLibraryCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CMagusOfTheLibraryCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 7;
}

//____________________________________________________________________________
//
CKeldonMaraudersCard::CKeldonMaraudersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keldon Marauders"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(3))
	, CVanishingKeyword(this, 2)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMirriTheCursedCard::CMirriTheCursedCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Mirri the Cursed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vampire, Cat), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
						CWhenSelfDamageDealt::CreatureEventCallback, 
						&CWhenSelfDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoltenFirebirdCard::CMoltenFirebirdCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Molten Firebird"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	// Exile this
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("4") RED_MANA_TEXT,
				ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetScheduledNode(NodeId::EndStep);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->GetTriggeredPlayerModifiers().push_back(
			new CPlayerEffectModifier(PlayerEffectType::SkipNextDrawStep));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRadhaHeirToKeldCard::CRadhaHeirToKeldCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Radha, Heir to Keld"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormfrontRidersCard::CStormfrontRidersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormfront Riders"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(4), Life(3))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(2, 2, TRUE); // minimum, maximum, true -> lower minimum when there are not enough subjects
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Hand));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Soldier A"), 2713, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTenebTheHarvesterCard::CTenebTheHarvesterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Teneb, the Harvester"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT );

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

//____________________________________________________________________________
//
COrosTheAvengerCard::COrosTheAvengerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oros, the Avenger"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") WHITE_MANA_TEXT);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-white creatures")));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoroshTheHunterCard::CVoroshTheHunterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vorosh, the Hunter"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") GREEN_MANA_TEXT);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +6));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNumotTheDevastatorCard::CNumotTheDevastatorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Numot, the Devastator"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetSubjectCount(0, 2);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeadGoneCard::CDeadGoneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dead // Gone"), CardType::Instant, nID)
{
	{
		//Dead
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-2), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetAbilityText(_T("Dead. Casts"));
		cpSpell->SetAbilityName(_T("Dead"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Gone
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Gone. Casts"));
		cpSpell->SetAbilityName(_T("Gone"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEvolutionCharmCard::CEvolutionCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Evolution Charm"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		//land search
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Raise dead
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") GREEN_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFirefrightMageCard::CFirefrightMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firefright Mage"), CardType::Creature, CREATURE_TYPE2(Goblin, Spellshaper), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost(); // tap this card
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards"))); // discard a card in addition to tap
	cpAbility->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("artifact creatures or red creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMidnightCharmCard::CMidnightCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Midnight Charm"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		//deal 1 damage, gain 1 life
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Tap creature
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				TRUE, FALSE,
				new CardTypeComparer(CardType::Creature, false)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPiracyCharmCard::CPiracyCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Piracy Charm"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Islandwalk, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+2), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRoughTumbleCard::CRoughTumbleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rough // Tumble"), CardType::Sorcery, nID)
{
	{
		//Rough
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpSpell->SetAbilityText(_T("Deal 2 damage to each creature without flying. Casts"));

		cpSpell->SetAbilityText(_T("Rough. Casts"));
		cpSpell->SetAbilityName(_T("Rough"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Tumble
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT,
				Life(-6),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Deal 6 damage to each creature with flying. Casts"));

		cpSpell->SetAbilityText(_T("Tumble. Casts"));
		cpSpell->SetAbilityName(_T("Tumble"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGossamerPhantasmCard::CGossamerPhantasmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gossamer Phantasm"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerendibSorcererCard::CSerendibSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serendib Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(0));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	CLifeModifier* pLifeModifier = new CLifeModifier;
	pLifeModifier->SetLifeDelta(Life(2));
	pLifeModifier->SetPreventable(PreventableType::NotPreventable);
	pLifeModifier->SetToBase(TRUE);
	pLifeModifier->SetReplacement(TRUE);
	pLifeModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagusOfTheCoffersCard::CMagusOfTheCoffersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Coffers"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->GetCost().AddManaCost(_T("2"));
	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {B} to your mana pool for each Swamp you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMagusOfTheCoffersCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMagusOfTheCoffersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CKavuPredatorCard::CKavuPredatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Predator"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKavuPredatorCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		//m_pTriggeredAbility = cpAbility.GetPointer();
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKavuPredatorCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKavuPredatorCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	triggerContext.nValue1 = 0;

	if (nToLife > nFromLife)
	{
	//	m_pTriggeredAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +GET_INTEGER(nToLife - nFromLife), false));
		triggerContext.nValue1 = GET_INTEGER(nToLife - nFromLife);
			 
		return true;
	}

	return false;
}
bool CKavuPredatorCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);

	pModifier.ApplyTo(this);
	
	return true;
}
//____________________________________________________________________________
//
CBlightspeakerCard::CBlightspeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blightspeaker"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
		m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 3 or less"), _T("Rebel permanents with converted mana cost 3 or less"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("4"),
				&m_CardFilter, 
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CCauterySliverCard::CCauterySliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cautery Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CCauterySliverCard::CreateAbility1)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CCauterySliverCard::CreateAbility2)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CCauterySliverCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CCauterySliverCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(pCard,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCitanulWoodreadersCard::CCitanulWoodreadersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Citanul Woodreaders"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(4))
		, m_KickerCost(_T("2") GREEN_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCitanulWoodreadersCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCitanulWoodreadersCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CDarkheartSliverCard::CDarkheartSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darkheart Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDarkheartSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDarkheartSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pCard,
			_T(""),
			Life(+3), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, new CCardFilter(new SpecificCardComparer(pCard)));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHammerheimDeadeyeCard::CHammerheimDeadeyeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hammerheim Deadeye"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CHammerheimDeadeyeCard::CreateTemporaryAbility),
                _T("5") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CHammerheimDeadeyeCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHammerheimDeadeyeCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	//	SetAbilityText

        AddAbility(cpAbility.GetPointer());
    }
}

bool CHammerheimDeadeyeCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CHammerheimDeadeyeCard::CreateTemporaryAbility()
{
    return this;
}

void CHammerheimDeadeyeCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CNecroticSliverCard::CNecroticSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necrotic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CNecroticSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CNecroticSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(pCard,
			_T("3"),
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPoulticeSliverCard::CPoulticeSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Poultice Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPoulticeSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CPoulticeSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(pCard,
			_T("2"),
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false)));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Regenerate target Sliver. Activates"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPouncingWurmCard::CPouncingWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pouncing Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
		, m_KickerCost(_T("2") GREEN_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPouncingWurmCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CPouncingWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +3, true);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CStingscourgerCard::CStingscourgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stingscourger"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CStingscourgerCard::CreateTemporaryAbility),
                _T("3") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CStingscourgerCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStingscourgerCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CStingscourgerCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CStingscourgerCard::CreateTemporaryAbility()
{
    return this;
}

void CStingscourgerCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CTimbermareCard::CTimbermareCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Timbermare"), CardType::Creature, CREATURE_TYPE2(Elemental, Horse), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(5))
{
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
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CTimbermareCard::CreateTemporaryAbility),
                _T("5") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CTimbermareCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTimbermareCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CTimbermareCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CTimbermareCard::CreateTemporaryAbility()
{
    return this;
}

void CTimbermareCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CUktabiDrakeCard::CUktabiDrakeCard(CGame* pGame, UINT nID)
    : CFlyingCreatureCard(pGame, _T("Uktabi Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);

    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CUktabiDrakeCard::CreateTemporaryAbility),
                _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CUktabiDrakeCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUktabiDrakeCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CUktabiDrakeCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CUktabiDrakeCard::CreateTemporaryAbility()
{
    return this;
}

void CUktabiDrakeCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CMantleOfLeadershipCard::CMantleOfLeadershipCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mantle of Leadership"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				 _T("1") WHITE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CMantleOfLeadershipCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CMantleOfLeadershipCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPongifyCard::CPongifyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Pongify"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Ape A"), 2753, 1));
}

//____________________________________________________________________________
//
CMycologistCard::CMycologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mycologist"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(2))

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
CPallidMycodermCard::CPallidMycodermCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pallid Mycoderm"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))

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
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T(""),
				Power(+1), Life(+1),
				new CreatureTypeComparer(CREATURE_TYPE(Saproling) | CREATURE_TYPE(Fungus), false)));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPsychotropeThallidCard::CPsychotropeThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Psychotrope Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))

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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVitasporeThallidCard::CVitasporeThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vitaspore Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))

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
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeadlyGrubCard::CDeadlyGrubCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadly Grub"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
	, CVanishingKeyword(this, 3)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CDeadlyGrubCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef	TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Insect A"), 2836, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeadlyGrubCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

void CDeadlyGrubCard::Move(CZone* pToZone,
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

bool CDeadlyGrubCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_nCounterCount == 0;
}

void CDeadlyGrubCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != TIME_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CLavacoreElementalCard::CLavacoreElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lavacore Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(5), Life(3))
	, CVanishingKeyword(this, 1)
{
	typedef	TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
						CWhenDamageDealt::PlayerEventCallback, 
						&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, +1, false));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChronozoaCard::CChronozoaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chronozoa"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
	, CVanishingKeyword(this, 3)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CChronozoaCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef	TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChronozoaCard::BeforeResolution));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChronozoaCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

void CChronozoaCard::Move(CZone* pToZone,
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

bool CChronozoaCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_nCounterCount == 0;
}

bool CChronozoaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	return true;
}

void CChronozoaCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != TIME_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CExtirpateCard::CExtirpateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Extirpate"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CExtirpateCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddSplitSecond(FALSE);

	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CExtirpateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	if (bResult)
	{
		pModifier1.ApplyTo(target);
		pmodifier2.ApplyTo(target);
		pModifier2.ApplyTo(target);
		pmodifier3.ApplyTo(target);
		pModifier3.ApplyTo(target);

		pLibrary->Shuffle();
	}
}

//____________________________________________________________________________
//
CFatalFrenzyCard::CFatalFrenzyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fatal Frenzy"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		Power(SpecialNumber::MultiplyBy2), Life(+0),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	//Sacrifice the target at the beginning of the next end step.
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(pGame,
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice),
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToLater));
}

//____________________________________________________________________________
//
CJodahsAvengerCard::CJodahsAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jodah's Avenger"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(-1), Life(-1), CreatureKeyword::DoubleStrike));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(-1), Life(-1), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(-1), Life(-1), CreatureKeyword::Vigilance));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(-1), Life(-1), CreatureKeyword::Shadow));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUtopiaVowCard::CUtopiaVowCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Utopia Vow"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUtopiaVowCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUtopiaVowCard::CreateAdditionalAbility2));
	CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUtopiaVowCard::CreateAdditionalAbility3));
	CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUtopiaVowCard::CreateAdditionalAbility4));
	CCardAbilityModifier* pModifier5 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUtopiaVowCard::CreateAdditionalAbility5));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier3);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier4);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier5);
}

counted_ptr<CAbility> CUtopiaVowCard::CreateAdditionalAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CUtopiaVowCard::CreateAdditionalAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CUtopiaVowCard::CreateAdditionalAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CUtopiaVowCard::CreateAdditionalAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CUtopiaVowCard::CreateAdditionalAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSimianSpiritGuideCard::CSimianSpiritGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simian Spirit Guide"), CardType::Creature, CREATURE_TYPE2(Ape, Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("Simian Spirit Guide"), _T("Simian Spirit Guides"), new SpecificCardComparer(this))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
	
	cpAbility->SetHandOnly();

	cpAbility->GetCost().AddExileHandCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImpsMischiefCard::CImpsMischiefCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Imp's Mischief"), CardType::Instant, nID)
{
	counted_ptr<CDeflectionSpell> cpSpell(
		::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
			_T("1") BLACK_MANA_TEXT, 
			new TrueCardComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImpsMischiefCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CImpsMischiefCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(-converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAnaBattlemageCard::CAnaBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ana Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_KickerCost1(_T("2") BLUE_MANA_TEXT)
	, m_KickerCost2(_T("1") BLACK_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetDiscardCount(3);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnaBattlemageCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new TappedComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAnaBattlemageCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnaBattlemageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnaBattlemageCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CAnaBattlemageCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

bool CAnaBattlemageCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetAssociatedCard();

	if (pCard->GetOrientation()->IsTapped() || !pCard->IsInplay() || !pCard->GetCardType().IsCreature()) return false;

	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	CCardOrientationModifier pModifier2 = CCardOrientationModifier(1);

	CLifeModifier pModifier = CLifeModifier(Life(-GET_INTEGER(pCreature->GetPower())), pCreature, PreventableType::Preventable,
											DamageType::AbilityDamage | DamageType::NonCombatDamage);

	pModifier.ApplyTo(pCreature->GetController());
	pModifier2.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CRebufftheWickedCard::CRebufftheWickedCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Rebuff the Wicked"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_CardFilter (_T("card you control") , _T("card you control"), new CardControllerComparer(this))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	
}

//____________________________________________________________________________
//
CDawnCharmCard::CDawnCharmCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dawn Charm"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_CardFilter (_T("nothing") , _T("nothing"), FALSE_CARD_COMPARER)
{
	//Counter target spell that targets you.
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter, this, TRUE));

	{
		//Prevent all combat damage that would be dealt this turn.
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		cpSpell->SetAbilityText(_T("Prevent all combat damage that would be dealt this turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regenerate target creature.
		counted_ptr<CTargetRegenerationSpell> cpSpell(
			::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAbilityText(_T("Regenerate target creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerfolkThaumaturgistCard::CMerfolkThaumaturgistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Thaumaturgist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoomBustCard::CBoomBustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boom // Bust"), CardType::Sorcery, nID)
{
	{
		//Boom
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), false,
				new CardTypeComparer(CardType::_Land, false), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoomBustCard::BeforeResolution));

		cpSpell->SetAbilityText(_T("Boom. Casts"));
		cpSpell->SetAbilityName(_T("Boom"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Bust
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Bust. Casts"));
		cpSpell->SetAbilityName(_T("Bust"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CBoomBustCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
/*//Temporal Extortion\n{BBBB}\nSorcery\nPLC,R\nWhen you cast Temporal Extortion, any player may pay half his or her life, rounded up. If a player does, counter Temporal Extortion.\rTake an extra turn after this one.
CTemporalExtortionCard::CTemporalExtortionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Extortion"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpSpell->SetAffectControllerOnly();

	AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);


		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTemporalExtortionCard::SetTriggerContext));		
		//cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTemporalExtortionCard::BeforeResolution));		

		cpAbility->SetAbilityName(_T("Pay half your life, rounded up to use counter ability"));
		cpAbility->SetPayLifeResolutionCost(Life(SpecialNumber::DivideBy2RoundUp));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CTemporalExtortionCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = (CCard*)this;
		return true;
}
/*bool CTemporalExtortionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CLifeModifier pModifier = CLifeModifier(Life(SpecialNumber::DivideBy2RoundUp), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(pAction->GetController());

	return true;
}*/
//____________________________________________________________________________
//
CMagusoftheTabernacleCard::CMagusoftheTabernacleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Tabernacle"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(6))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMagusoftheTabernacleCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMagusoftheTabernacleCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(pCard, _T("1")));

	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrborgTombOfYawgmothCard::CUrborgTombOfYawgmothCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urborg, Tomb of Yawgmoth"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				CardType::Swamp, CardType::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CUrborgTombOfYawgmothCard::CreateAbility)));	

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CUrborgTombOfYawgmothCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLACK_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CDormantSliverCard::CDormantSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dormant Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//"All Sliver creatures"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Defender));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//"All Slivers"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDormantSliverCard::CreateAbility)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Stack | ZoneId::Exile | ZoneId::_Tokens);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CDormantSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetAbilityName(_T("Battlefield ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerrasBoonCard::CSerrasBoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Serra's Boon"), CardType::EnchantCreature, nID)	
{
	counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
		::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
			_T("2") WHITE_MANA_TEXT,
			Power(+3), Life(+3), CreatureKeyword::Null, CardType::White,
			Power(-2), Life(-1), CreatureKeyword::Null, CardType::Creature //any creature
			));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDismalFailureCard::CDismalFailureCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dismal Failure"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDismalFailureCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CDismalFailureCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* spell_controller = pAbilityAction->GetAssociatedCard()->GetController();
	
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

	if (bResult) pModifier.ApplyTo(spell_controller);
}

//____________________________________________________________________________
//
CPorphyryNodesCard::CPorphyryNodesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Porphyry Nodes"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new LeastPowerCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::Indestructible, false));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPorphyryNodesCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPorphyryNodesCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPorphyryNodesCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pCard = pOppInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

bool CPorphyryNodesCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pCard = pOppInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CRecklessWurmCard::CRecklessWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reckless Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT,
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRecklessWurmCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CRecklessWurmCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CSuspendCreatureCard::CSuspendCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);	

	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		m_pSuspendAbility = cpAbility.GetPointer();

		AddAbility(m_pSuspendAbility);
	}

	{ // Removes 'cast off suspend' flag when leaving the stack.
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Gains haste if cast off suspend.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Removes haste on leaving the battlefield or changing control.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetCardFlag()->HasAbilityFlag(0) && moveType == MoveType::Cast);
}

bool CSuspendCreatureCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCreatureCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCreatureCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCreatureCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	else m_CardFlagModifier1.ApplyTo(this);
	return true;
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}
//____________________________________________________________________________
//
CAeonChroniclerCard::CAeonChroniclerCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Aeon Chronicler"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0), _T("3") BLUE_MANA_TEXT, 0)
{
	m_pSuspendAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{ // When a time counter is removed from this...
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenTimeCounterRemoved > TriggeredAbility;
			
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAeonChroniclerCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("card draw ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAeonChroniclerCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CBigGameHunterCard::CBigGameHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Big Game Hunter"), CardType::Creature, CREATURE_TYPE3(Human,Rebel,Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT,
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBigGameHunterCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(3));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CBigGameHunterCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CBenalishCommanderCard::CBenalishCommanderCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Benalish Commander"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(0), WHITE_MANA_TEXT WHITE_MANA_TEXT, 0)
{
	m_pSuspendAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)));

		AddAbility(cpAbility.GetPointer());
	}
	{ // When a time counter is removed from this...
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenTimeCounterRemoved > TriggeredAbility;
			
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Soldier A"), 2713, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBenalishCommanderCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("token creation ability"));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBenalishCommanderCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CDetritivoreCard::CDetritivoreCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Detritivore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0), _T("3") RED_MANA_TEXT, 0)
{
	m_pSuspendAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardTypeComparer(CardType::NonbasicLand, false)));

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //opponents hand

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
	{ // When a time counter is removed from this...
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenTimeCounterRemoved > TriggeredAbility;
			
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::NonbasicLand, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDetritivoreCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("land destruction ability"));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDetritivoreCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CSuspendCard::CSuspendCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,									
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCard(pGame, strCardName, cardType, uID)
{	
	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
	}
	
		{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

bool CSuspendCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}


//____________________________________________________________________________
//
CDichotomancyCard::CDichotomancyCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Dichotomancy"), CardType::Sorcery, nID, _T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, 3)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			MinimumValue(0), MaximumValue(0),
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetAbilityText(_T("Search target opponent's library. Casts"));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDichotomancyCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDichotomancyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pCaster = pAction->GetController();
	CPlayer* pPlayer = m_pGame->GetNextPlayer(pAction->GetController());
	CZone* pCountZone = pPlayer->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pCountZone->GetSize(); ++i)
	{
		CCard* pCard = pCountZone->GetAt(i);
		if (!pCard->GetCardType().IsLand() && pCard->GetOrientation()->IsTapped())
		{
			CCardFilter m_CardFilter_temp;
			m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

			CPlayerSearchModifier pModifier = CPlayerSearchModifier(
					pPlayer,
					MinimumValue(0),
					MaximumValue(1),
					pCaster,
					ZoneId::Library,
					&m_CardFilter_temp,
					ZoneId::Battlefield,
					FALSE,
					CardPlacement::Top,
					FALSE,
					TRUE);

			pModifier.ApplyTo(GetController());
		}
	}

	return true;
}

//____________________________________________________________________________
//
CHeroesRememberedCard::CHeroesRememberedCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Heroes Remembered"), CardType::Sorcery, nID, WHITE_MANA_TEXT, 10)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Life(+20), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGiantDustwaspCard::CGiantDustwaspCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Giant Dustwasp"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3), _T("1") GREEN_MANA_TEXT, 4)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CShivanMeteorCard::CShivanMeteorCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Shivan Meteor"), CardType::Sorcery, nID, _T("1") RED_MANA_TEXT RED_MANA_TEXT, 2)
{	
	{		
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-13), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiftmarkedKnightCard::CRiftmarkedKnightCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Riftmarked Knight"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2), _T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, 3)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRiftmarkedKnightCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed from this...
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenTimeCounterRemoved > TriggeredAbility;
			
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Knight C"), 2909, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRiftmarkedKnightCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("token creation ability"));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRiftmarkedKnightCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CRiftmarkedKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CRoilingHorrorCard::CRoilingHorrorCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Roiling Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0), BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, 0)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRoilingHorrorCard::OnZoneChanged))
{
	m_pSuspendAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CRoilingHorrorCard::BeforeResolution1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this,
			ZoneId::Battlefield, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CRoilingHorrorCard::BeforeResolution2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When a time counter is removed from this...
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenTimeCounterRemoved > TriggeredAbility;
			
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRoilingHorrorCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("life loss ability"));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRoilingHorrorCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

bool CRoilingHorrorCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife() - m_pGame->GetNextPlayer(GetController())->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

bool CRoilingHorrorCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife() - m_pGame->GetNextPlayer(GetController())->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

void CRoilingHorrorCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		Life p = GetController()->GetLife() - m_pGame->GetNextPlayer(GetController())->GetLife();

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(GET_INTEGER(p)));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(p));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CShadeOfTrokairCard::CShadeOfTrokairCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Shade of Trokair"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(2), WHITE_MANA_TEXT, 3)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeilingOddityCard::CVeilingOddityCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Veiling Oddity"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3), _T("1") BLUE_MANA_TEXT, 4)
{
	// When the last time counter is removed from this...
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenTimeCounterRemoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::UnblockableCreatures, TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVeilingOddityCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("creatures are unblockable ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CVeilingOddityCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CMelancholyCard::CMelancholyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Melancholy"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	{
		counted_ptr<CUpkeepAbility> cpAbility(::CreateObject<CUpkeepAbility>(this, BLACK_MANA_TEXT));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMelancholyCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMelancholyCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCard* pCard = m_pChgPwrTghAttrEnchant->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CAkromaAngelofFuryCard::CAkromaAngelofFuryCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Akroma, Angel of Fury"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6), _T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, false);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, false);
	GetCardKeyword()->AddCantBeCountered(false);
	GetCreatureKeyword()->AddFlying(false);
	GetCreatureKeyword()->AddTrample(false);

	this->AddCreatureType(SingleCreatureType::Angel);
	this->AddCardKeyword(CardKeyword::CantBeCountered);
	this->AddCardKeyword(CardKeyword::ProtectionFromBlue);
	this->AddCardKeyword(CardKeyword::ProtectionFromWhite);
	this->AddCreatureKeyword(CreatureKeyword::Trample);
	this->AddCreatureKeyword(CreatureKeyword::Flying);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(0), CreatureKeyword::Null));
		

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}
//____________________________________________________________________________
//
CRiptidePilfererCard::CRiptidePilfererCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Riptide Pilferer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1), _T("") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Merfolk);
	this->AddCreatureType(SingleCreatureType::Rogue);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRiptidePilfererCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRiptidePilfererCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CEnslaveCard::CEnslaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Enslave"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEnslaveCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEnslaveCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEnslaveCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.nValue1 = (int)pCard;
	triggerContext.nValue2 = (int)pCard->GetOwner();

	return true;
}

bool CEnslaveCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CLifeModifier modifier(Life(-1), (CCard*)triggerContext.nValue1, PreventableType::Preventable, DamageType::NonCombatDamage | DamageType::AbilityDamage);
	modifier.ApplyTo((CPlayer*)triggerContext.nValue2);
	
	return true;
}

//____________________________________________________________________________
//
CTidewalkerCard::CTidewalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tidewalker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CTidewalkerCard::OnZoneChanged))
	, CVanishingKeyword(this, 0)
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CCounterPwrTghAbility> cpAbility(
		::CreateObject<CCounterPwrTghAbility>(this, TIME_COUNTER));

	AddAbility(cpAbility.GetPointer());
}

void CTidewalkerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pToZone->GetCardContainer());

		CCardCounterModifier modifier(TIME_COUNTER, nCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CCradleToGraveCard::CCradleToGraveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cradle to Grave"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy,
			new CCradleToGraveTargeting));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	AddSpell(cpSpell.GetPointer());
}

BOOL CCradleToGraveCard::CCradleToGraveTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CCradleToGraveCard::CCradleToGraveTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	return pCard->GetGame()->GetGameTurnNumber() == pCard->GetInplayGameTurnNumber();
}

//____________________________________________________________________________
//
CShivanWumpusCard::CShivanWumpusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shivan Wumpus"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT, Power(6), Life(6))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShivanWumpusCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShivanWumpusCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CShivanWumpusCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	bSomeonePaid = 0;
	PunisherFunction(pActivePlayerID);

	return true;
}

void CShivanWumpusCard::PunisherFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;
					entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
								
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));
					entries.push_back(entry);
			}
					
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
	}
	else
		Advance(PlayerID);
}

void CShivanWumpusCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer);
	else if (bSomeonePaid == 0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others);
		pModifier.ApplyTo(this);
	}
}

void CShivanWumpusCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s sacrifices nothing"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1);
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(pCard);

				bSomeonePaid = 1;
				Advance(dwContext1);
				return;
			}
		}
}
//____________________________________________________________________________
//
CCircleOfAfflictionCard::CCircleOfAfflictionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Affliction"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CCircleOfAfflictionCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetResolutionCost(_T("1"));
	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCircleOfAfflictionCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

void CCircleOfAfflictionCard::Move(CZone* pToZone,
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

void CCircleOfAfflictionCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CCircleOfAfflictionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage)
{
	if (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) return true;
	if (cBlue && pCard->IsColor(CManaPoolBase::Color::Blue)) return true;
	if (cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) return true;
	if (cRed && pCard->IsColor(CManaPoolBase::Color::Red)) return true;
	if (cGreen && pCard->IsColor(CManaPoolBase::Color::Green)) return true;

	return false;
}

//____________________________________________________________________________
//
CErraticMutationCard::CErraticMutationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Erratic Mutation"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CErraticMutationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CErraticMutationCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{		
		if (!bSearch)
			break;
		else
		{
			++n;
			if (!pLibrary->GetAt(i)->GetCardType().IsLand())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	if (pFound && (pFound->GetConvertedManaCost() > 0))
	{
		int nCMC = pFound->GetConvertedManaCost();

		CPowerModifier pModifier1 = CPowerModifier(Power(nCMC));
		CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}

	CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier3.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier3.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
/*
CTimecraftingCard::CTimecraftingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Timecrafting"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer, false, new CTimecraftingTargeting1));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Battlefield | ZoneId::Exile);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimecraftingCard::BeforeResolution1));
		cpSpell->AddAbilityTag(AbilityTag::CardChange);

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Remove X time counters from target permanent or suspended card. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer, false, new CTimecraftingTargeting2));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Battlefield | ZoneId::Exile);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimecraftingCard::BeforeResolution2));
		cpSpell->AddAbilityTag(AbilityTag::CardChange);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Put X time counters on target permanent with a time counter on it or suspended card. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CTimecraftingCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	if (nValue > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, -nValue);
		pModifier.ApplyTo(pTarget);
	}
	
	return true;
}

bool CTimecraftingCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	if (nValue > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, nValue);
		pModifier.ApplyTo(pTarget);
	}
	
	return true;
}

BOOL CTimecraftingCard::CTimecraftingTargeting1::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CTimecraftingCard::CTimecraftingTargeting1::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (pCard->IsInplay()) return TRUE;
	else return pCard->GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

BOOL CTimecraftingCard::CTimecraftingTargeting2::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CTimecraftingCard::CTimecraftingTargeting2::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	return pCard->GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}
*/
//____________________________________________________________________________
//
CDuneriderOutlawCard::CDuneriderOutlawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dunerider Outlaw"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Rogue), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
	, bHitOpponent(FALSE)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuneriderOutlawCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuneriderOutlawCard::SetTriggerContextAux1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuneriderOutlawCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CDuneriderOutlawCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (bHitOpponent == TRUE);
}

bool CDuneriderOutlawCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CPlayer* pToPlayer, Damage damage)

{
	bHitOpponent = TRUE;

	return false;
}

bool CDuneriderOutlawCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	bHitOpponent = FALSE;

	return false;
}

//____________________________________________________________________________
//
CFreneticSliverCard::CFreneticSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frenetic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFreneticSliverCard::OnFlipSelected))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CFreneticSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CFreneticSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pCard,
			_T("")));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFreneticSliverCard::BeforeResolution));

	cpAbility->SetAbilityText(_T("Flip a coin to temporarily exile or sacrifice. Activates"));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CFreneticSliverCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* target = (CCard*)pAction->GetOriginatingCard();
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!target->IsInplay()) return false;

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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		pModifier->ApplyTo(target);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(target, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(target);
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

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(target);

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(target->GetSpells().GetAt(0)->GetInstanceID());

		CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

		m_CardFlagModifier1.ApplyTo(target);

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

		//CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new TrueCardComparer);
		m_CardFilter_temp.AddComparer(pComparer);

		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame() , pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
			CScheduledPlayerModifier::Operation::ApplyToLater);

		pModifier2->ApplyTo(target->GetOwner());

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(target, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(target);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"));

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)target);
	}
	return true;
}

void CFreneticSliverCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CCard* target = (CCard*)dwContext1;

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(target);

				m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
				m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
				m_CardFlagModifier1.GetModifier().SetAdditionData(target->GetSpells().GetAt(0)->GetInstanceID());

				CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

				m_CardFlagModifier1.ApplyTo(target);

				CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
				pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

				//CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.SetComparer(new TrueCardComparer);
				m_CardFilter_temp.AddComparer(pComparer);

				CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));

				CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
					GetGame() , pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
					CScheduledPlayerModifier::Operation::ApplyToLater);
				pModifier2->ApplyTo(target->GetOwner());

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(target, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(target);
				
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
				CCard* target = (CCard*)dwContext1;

				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier->ApplyTo(target);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(target, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(target);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CHuntingWildsCard::CHuntingWildsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunting Wilds"), CardType::Sorcery, nID)
	, m_KickerCost(_T("3") GREEN_MANA_TEXT)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CHuntingWildsCard::OnResolutionCompleted))
{	
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Search your library for up to two Forest cards. Casts"));

	AddSpell(cpSpell.GetPointer());
}

void CHuntingWildsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();

	CCountedCardContainer pFound;
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(2), pController, 
															ZoneId::Library, CCardFilter::GetFilter(_T("Forests")), ZoneId::Battlefield, TRUE, CardPlacement::Top, TRUE, TRUE, FALSE, &pFound);
	pModifier1.ApplyTo(pController);

	if (pAbilityAction->GetCostConfigEntry().HasOptionalManaCost(m_KickerCost) && (pFound.GetSize() > 0))
	{
		CCardOrientationModifier pModifier1 = CCardOrientationModifier(FALSE);

		for (int i = 0; i < pFound.GetSize(); ++i)
			pModifier1.ApplyTo(pFound.GetAt(i));

		CCardIsAlsoAModifier pModifier2 = CCardIsAlsoAModifier( _T("Animated Land H"), 64057, pController);

		for (int i = 0; i < pFound.GetSize(); ++i)
		{
			CCard* pCard = pFound.GetAt(i);
			pModifier2.ApplyTo(pCard);
		}
	}
}

//____________________________________________________________________________
//
