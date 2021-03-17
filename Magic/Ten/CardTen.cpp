#include "stdafx.h"
#include "CardTen.h"

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

		DEFINE_CARD(CAfflictCard);
		DEFINE_CARD(CAggressiveUrgeCard);
		DEFINE_CARD(CAmbassadorLaquatusCard);
		DEFINE_CARD(CAncestorsChosenCard);
		DEFINE_CARD(CAngelicChorusCard);
		DEFINE_CARD(CAngelicWallCard);
		DEFINE_CARD(CArcaneTeachingsCard);
		DEFINE_CARD(CArcanisTheOmnipotentCard);
		DEFINE_CARD(CAscendantEvincarCard);
		DEFINE_CARD(CAssassinateCard);
		DEFINE_CARD(CAuraOfSilenceCard);
		DEFINE_CARD(CAvatarOfMightCard);
		DEFINE_CARD(CBandageCard);
		DEFINE_CARD(CBeaconOfDestructionCard);
		DEFINE_CARD(CBeaconOfImmortalityCard);
		DEFINE_CARD(CBeaconOfUnrestCard);
		DEFINE_CARD(CBenalishKnightCard);
		DEFINE_CARD(CBloodrockCyclopsCard);
		DEFINE_CARD(CBogardanFirefiendCard);
		DEFINE_CARD(CCancelCard);
		DEFINE_CARD(CCephalidConstableCard);
		DEFINE_CARD(CChimericStaffCard);
		DEFINE_CARD(CChomannoRevolutionaryCard);
		DEFINE_CARD(CChromaticStarCard);
		DEFINE_CARD(CCitanulFluteCard);
		DEFINE_CARD(CCivicWayfinderCard);
		DEFINE_CARD(CCloudElementalCard);
		DEFINE_CARD(CCloudSpriteCard);
		DEFINE_CARD(CCommuneWithNatureCard);
		DEFINE_CARD(CCompositeGolemCard);
		DEFINE_CARD(CCondemnCard);
		DEFINE_CARD(CCrucibleOfWorldsCard);
		DEFINE_CARD(CCryoclasmCard);
		DEFINE_CARD(CDeathmarkCard);
		DEFINE_CARD(CDelugeCard);
		DEFINE_CARD(CDenizenoftheDeepCard);
		DEFINE_CARD(CDiscombobulateCard);
		DEFINE_CARD(CDistressCard);
		DEFINE_CARD(CDoomedNecromancerCard);
		DEFINE_CARD(CDoublingCubeCard);
		DEFINE_CARD(CDragonRoostCard);
		DEFINE_CARD(CDreambornMuseCard);
		DEFINE_CARD(CDrossCrocodileCard);
		DEFINE_CARD(CDuctCrawlerCard);
		DEFINE_CARD(CEssenceDrainCard);
		DEFINE_CARD(CFaerieConclaveCard);
		DEFINE_CARD(CFieldMarshalCard);
		DEFINE_CARD(CFistsOfTheAnvilCard);
		DEFINE_CARD(CFlamewaveInvokerCard);
		DEFINE_CARD(CFlashfreezeCard);
		DEFINE_CARD(CForbiddingWatchtowerCard);
		DEFINE_CARD(CFurnaceWhelpCard);
		DEFINE_CARD(CGhituEncampmentCard);
		DEFINE_CARD(CGhostWardenCard);
		DEFINE_CARD(CGoblinLoreCard);
		DEFINE_CARD(CGravebornMuseCard);
		DEFINE_CARD(CHailOfArrowsCard);
		DEFINE_CARD(CHateWeaverCard);
		DEFINE_CARD(CHeartOfLightCard);
		DEFINE_CARD(CHighGroundCard);
		DEFINE_CARD(CHorseshoeCrabCard);
		DEFINE_CARD(CIcatianPriestCard);
		DEFINE_CARD(CJoinerAdeptCard);
		DEFINE_CARD(CKamahlPitFighterCard);
		DEFINE_CARD(CKarplusanStriderCard);
		DEFINE_CARD(CKnightOfDuskCard);
		DEFINE_CARD(CLavabornMuseCard);
		DEFINE_CARD(CLegacyWeaponCard);
		DEFINE_CARD(CLeoninScimitarCard);
		DEFINE_CARD(CLlanowarSentinelCard);
		DEFINE_CARD(CLoxodonMysticCard);
		DEFINE_CARD(CLoyalSentryCard);
		DEFINE_CARD(CMantisEngineCard);
		DEFINE_CARD(CMassOfGhoulsCard);
		DEFINE_CARD(CMidnightRitualCard);
		DEFINE_CARD(CMightWeaverCard);
		DEFINE_CARD(CMindStoneCard);
		DEFINE_CARD(CMirriCatWarriorCard);
		DEFINE_CARD(CMobilizationCard);
		DEFINE_CARD(CMoggFanaticCard);
		DEFINE_CARD(CMolimoMaroSorcererCard);
		DEFINE_CARD(CMortalCombatCard);
		DEFINE_CARD(CNoRestForTheWickedCard);
		DEFINE_CARD(COverrunCard);
		DEFINE_CARD(CPeekCard);
		DEFINE_CARD(CPersuasionCard);
		DEFINE_CARD(CPhageTheUntouchableCard);
		DEFINE_CARD(CPhyrexianRagerCard);
		DEFINE_CARD(CPincherBeetlesCard);
		DEFINE_CARD(CPithingNeedleCard);
		DEFINE_CARD(CPlatinumAngelCard);
		DEFINE_CARD(CPrimalRageCard);
		DEFINE_CARD(CProdigalPyromancerCard);
		DEFINE_CARD(CQuirionDryadCard);
		DEFINE_CARD(CRageWeaverCard);
		DEFINE_CARD(CRainOfTearsCard);
		DEFINE_CARD(CRazormaneMasticoreCard);
		DEFINE_CARD(CRecollectCard);
		DEFINE_CARD(CRecoverCard);
		DEFINE_CARD(CRelentlessRatsCard);
		DEFINE_CARD(CRevivingDoseCard);
		DEFINE_CARD(CReyaDawnbringerCard);
		DEFINE_CARD(CRobeOfMirrorsCard);
		DEFINE_CARD(CRockBadgerCard);
		DEFINE_CARD(CRootMazeCard);
		DEFINE_CARD(CRootwaterCommandoCard);
		DEFINE_CARD(CRuleOfLawCard);
		DEFINE_CARD(CScalpelexisCard);
		DEFINE_CARD(CScionOfTheWildCard);
		DEFINE_CARD(CScoriaWurmCard);
		DEFINE_CARD(CShimmeringWingsCard);
		DEFINE_CARD(CShivanHellkiteCard);
		DEFINE_CARD(CShuntCard);
		DEFINE_CARD(CSiegeGangCommanderCard);
		DEFINE_CARD(CSkyWeaverCard);
		DEFINE_CARD(CSkyhunterPatrolCard);
		DEFINE_CARD(CSkyhunterSkirmisherCard);
		DEFINE_CARD(CSkyshroudRangerCard);
		DEFINE_CARD(CSleeperAgentCard);
		DEFINE_CARD(CSmashCard);
		DEFINE_CARD(CSnappingDrakeCard);
		DEFINE_CARD(CSoulblastCard);
		DEFINE_CARD(CSparkElementalCard);
		DEFINE_CARD(CSpawningPoolCard);
		DEFINE_CARD(CSpiritWeaverCard);
		DEFINE_CARD(CSqueeGoblinNabobCard);
		DEFINE_CARD(CStampedingWildebeestsCard);
		DEFINE_CARD(CStarlightInvokerCard);
		DEFINE_CARD(CSteadfastGuardCard);
		DEFINE_CARD(CSteelGolemCard);
		DEFINE_CARD(CStrongholdDisciplineCard);
		DEFINE_CARD(CStunCard);
		DEFINE_CARD(CSunkenHopeCard);
		DEFINE_CARD(CSylvanBasiliskCard);
		DEFINE_CARD(CSylvanScryingCard);
		DEFINE_CARD(CTangleSpiderCard);
		DEFINE_CARD(CTellingTimeCard);
		DEFINE_CARD(CTerramorphicExpanseCard);
		DEFINE_CARD(CThrullSurgeonCard);
		DEFINE_CARD(CThunderingGiantCard);
		DEFINE_CARD(CTimeStopCard);
		DEFINE_CARD(CTimeStretchCard);
		DEFINE_CARD(CTreasureHunterCard);
		DEFINE_CARD(CTreetopVillageCard);
		DEFINE_CARD(CTrollAsceticCard);
		DEFINE_CARD(CTrueBelieverCard);
		DEFINE_CARD(CTwincastCard);
		DEFINE_CARD(CTwitchCard);
		DEFINE_CARD(CUncontrollableAngerCard);
		DEFINE_CARD(CVedalkenMastermindCard);
		DEFINE_CARD(CViashinoRunnerCard);
		DEFINE_CARD(CViashinoSandscoutCard);
		DEFINE_CARD(CVoiceOfAllCard);
		DEFINE_CARD(CWarpWorldCard);
		DEFINE_CARD(CWhispersilkCloakCard);
		DEFINE_CARD(CWildGriffinCard);
		DEFINE_CARD(CWindbornMuseCard);
		DEFINE_CARD(CYouthfulKnightCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDrossCrocodileCard::CDrossCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Crocodile"), CardType::Creature, CREATURE_TYPE2(Zombie, Crocodile), nID,
		_T("3") BLACK_MANA_TEXT, Power(5), Life(1))
{
}

//____________________________________________________________________________
//
CMassOfGhoulsCard::CMassOfGhoulsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mass of Ghouls"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
}

//____________________________________________________________________________
//
CWildGriffinCard::CWildGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wild Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CYouthfulKnightCard::CYouthfulKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Youthful Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CBloodrockCyclopsCard::CBloodrockCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodrock Cyclops"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CHorseshoeCrabCard::CHorseshoeCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horseshoe Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCancelCard::CCancelCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Cancel"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
}

//____________________________________________________________________________
//
CAmbassadorLaquatusCard::CAmbassadorLaquatusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ambassador Laquatus"), CardType::_LegendaryCreature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("3"), 3));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPhageTheUntouchableCard::CPhageTheUntouchableCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phage the Untouchable"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Minion), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Hand, ZoneId::Stack));

		CCardFlagModifier* pModifier1 = new CCardFlagModifier;
		pModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier1);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CPhageTheUntouchableCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CPhageTheUntouchableCard::SetTriggerContext2));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility3;

		counted_ptr<TriggeredAbility3> cpAbility(::CreateObject<TriggeredAbility3>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility3::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhageTheUntouchableCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pFromZone->GetPlayer() != pByPlayer ||
		pFromZone->GetZoneId() != ZoneId::Stack || // stack is enough
		GetCardFlag()->HasAbilityFlag(0) != TRUE ||
		moveType != MoveType::Cast)
		return true; // lose the game

	return false;
}

bool CPhageTheUntouchableCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CAssassinateCard::CAssassinateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Assassinate"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new TappedComparer);
}

//____________________________________________________________________________
//
CCompositeGolemCard::CCompositeGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Composite Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(4), Life(4))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this, 
			WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathmarkCard::CDeathmarkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deathmark"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT, 
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::White | CardType::Creature, true)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStarlightInvokerCard::CStarlightInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Starlight Invoker"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Mutant), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("7") WHITE_MANA_TEXT,
			Life(+5), PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuirionDryadCard::CQuirionDryadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(
		CCardFilter::GetFilter(_T("white, blue, black or red cards")));
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrucibleOfWorldsCard::CCrucibleOfWorldsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crucible of Worlds"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromGraveyard,
			(int)CCardFilter::GetFilter(_T("lands"))));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuraOfSilenceCard::CAuraOfSilenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aura of Silence"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CConsExtraManaEnchantment> cpAbility(
			::CreateObject<CConsExtraManaEnchantment>(this,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				_T("2")));

		cpAbility->SetAffectOpponentCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""), 
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChomannoRevolutionaryCard::CChomannoRevolutionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cho-Manno, Revolutionary"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	Life prevent(PreventionType::PreventAllDamage);
	CDamagePreventionEntry entry(prevent);
	entry.SetOneTurnOnly(FALSE);

	GetDamagePrevention().AddDamagePreventionEntry(entry);
}

//____________________________________________________________________________
//
CPlatinumAngelCard::CPlatinumAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Platinum Angel"), CardType::_ArtifactCreature, CREATURE_TYPE(Angel), nID,
		_T("7"), Power(4), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantLoseGame));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPeekCard::CPeekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Peek"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 
			0, MoveType::Others, ZoneId::Null, FALSE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCryoclasmCard::CCryoclasmCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cryoclasm"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Plains | CardType::Island, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																  DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CMobilizationCard::CMobilizationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mobilization"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false),
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				_T("Soldier H"), 2906,
				1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRuleOfLawCard::CRuleOfLawCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rule of Law"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("2") WHITE_MANA_TEXT,
			PlayerEffectType::SpellCastLimit, 1, TRUE));

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CLeoninScimitarCard::CLeoninScimitarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leonin Scimitar"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHateWeaverCard::CHateWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hate Weaver"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRainOfTearsCard::CRainOfTearsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rain of Tears"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CFistsOfTheAnvilCard::CFistsOfTheAnvilCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fists of the Anvil"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+4), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CFlashfreezeCard::CFlashfreezeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Flashfreeze"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new CardTypeComparer(CardType::Red, false))
{
	m_pCounterSpell->GetCounterspellCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Green, false)));
}

//____________________________________________________________________________
//
CGhostWardenCard::CGhostWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost Warden"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRecollectCard::CRecollectCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Recollect"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CThunderingGiantCard::CThunderingGiantCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Thundering Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CLoxodonMysticCard::CLoxodonMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Mystic"), CardType::Creature, CREATURE_TYPE2(Elephant, Cleric), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRevivingDoseCard::CRevivingDoseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reviving Dose"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAfflictCard::CAfflictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Afflict"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CAggressiveUrgeCard::CAggressiveUrgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aggressive Urge"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CMindStoneCard::CMindStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mind Stone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSmashCard::CSmashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Smash"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpiritWeaverCard::CSpiritWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spirit Weaver"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Blue | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSteadfastGuardCard::CSteadfastGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steadfast Guard"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CTrueBelieverCard::CTrueBelieverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("True Believer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargeted));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVedalkenMastermindCard::CVedalkenMastermindCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Mastermind"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelicWallCard::CAngelicWallCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CArcanisTheOmnipotentCard::CArcanisTheOmnipotentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcanis the Omnipotent"), CardType::_LegendaryCreature, CREATURE_TYPE(Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 3));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBandageCard::CBandageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bandage"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCloudElementalCard::CCloudElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CCloudSpriteCard::CCloudSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Sprite"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CKamahlPitFighterCard::CKamahlPitFighterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Kamahl, Pit Fighter"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-3), PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggFanaticCard::CMoggFanaticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Fanatic"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMirriCatWarriorCard::CMirriCatWarriorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Mirri, Cat Warrior"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Forestwalk, FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CMolimoMaroSorcererCard::CMolimoMaroSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Molimo, Maro-Sorcerer"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Land, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMantisEngineCard::CMantisEngineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mantis Engine"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("5"), Power(3), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMightWeaverCard::CMightWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Might Weaver"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::White | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonRoostCard::CDragonRoostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon Roost"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT,
			_T("Dragon F"), 2867,
			1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEssenceDrainCard::CEssenceDrainCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Essence Drain"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
}

//____________________________________________________________________________
//
CFlamewaveInvokerCard::CFlamewaveInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamewave Invoker"), CardType::Creature, CREATURE_TYPE2(Goblin, Mutant), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T("7") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-5), PreventableType::Preventable));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDistressCard::CDistressCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Distress"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			CCardFilter::GetFilter(_T("non-lands"))));	// Exclude land cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFurnaceWhelpCard::CFurnaceWhelpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Furnace Whelp"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeartOfLightCard::CHeartOfLightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Heart of Light"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage | CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage)
{
}

//____________________________________________________________________________
//
CMortalCombatCard::CMortalCombatCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mortal Combat"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPersuasionCard::CPersuasionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Persuasion"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianRagerCard::CPhyrexianRagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Rager"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredPlayerModifiers().push_back(
		new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPincherBeetlesCard::CPincherBeetlesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pincher Beetles"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CRecoverCard::CRecoverCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Recover"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CRootMazeCard::CRootMazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Root Maze"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			GREEN_MANA_TEXT,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("artifacts or lands")),	
			TRUE));

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CScionOfTheWildCard::CScionOfTheWildCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scion of the Wild"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSparkElementalCard::CSparkElementalCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Spark Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

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

//____________________________________________________________________________
//
CTimeStretchCard::CTimeStretchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Stretch"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CTimeStretchCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

void CTimeStretchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::TimeWalk, 2, true);

	if (bResult) pmodifier.ApplyTo(target);  // You can apply it two times if you want to add two turns
	//pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CTreasureHunterCard::CTreasureHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treasure Hunter"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhispersilkCloakCard::CWhispersilkCloakCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Whispersilk Cloak"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Shroud);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRobeOfMirrorsCard::CRobeOfMirrorsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Robe of Mirrors"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::Shroud));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRazormaneMasticoreCard::CRazormaneMasticoreCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Razormane Masticore"), CardType::_ArtifactCreature, CREATURE_TYPE(Masticore), nID,
		_T("5"), Power(5), Life(5))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep1));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(FALSE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	 
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTerramorphicExpanseCard::CTerramorphicExpanseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Terramorphic Expanse"), nID)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieldMarshalCard::CFieldMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Field Marshal"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
			Power(+1), Life(+1), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));	// Soldiers
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChromaticStarCard::CChromaticStarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chromatic Star"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIcatianPriestCard::CIcatianPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRageWeaverCard::CRageWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rage Weaver"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKarplusanStriderCard::CKarplusanStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karplusan Strider"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(4))

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Black | CardType::Blue, false)))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Hand | ZoneId::Stack));

	GetCardKeyword()->AddShroud(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CShuntCard::CShuntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shunt"), CardType::Instant, nID)
{
	counted_ptr<CDeflectionSpell> cpSpell(
		::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
			_T("1") RED_MANA_TEXT RED_MANA_TEXT, 
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShivanHellkiteCard::CShivanHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shivan Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStunCard::CStunCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stun"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CViashinoRunnerCard::CViashinoRunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Runner"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
}

//____________________________________________________________________________
//
CDelugeCard::CDelugeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deluge"), CardType::Instant, nID)
{
	counted_ptr<CGlobalTapSpell> cpSpell(
		::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false))));

	cpSpell->GetGlobalCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDoomedNecromancerCard::CDoomedNecromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doomed Necromancer"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCondemnCard::CCondemnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Condemn"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell3> cpSpell(
		::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others,
			FALSE, TRUE));

	cpSpell->SetCreatureControllerGainLife(TRUE);
	cpSpell->SetCardPlacement(CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CViashinoSandscoutCard::CViashinoSandscoutCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Viashino Sandscout"), CardType::Creature, CREATURE_TYPE2(Viashino, Scout), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrullSurgeonCard::CThrullSurgeonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrull Surgeon"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddSacrificeCost();
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSylvanScryingCard::CSylvanScryingCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Sylvan Scrying"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("lands")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CSnappingDrakeCard::CSnappingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Snapping Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CSkyhunterPatrolCard::CSkyhunterPatrolCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyhunter Patrol"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSkyWeaverCard::CSkyWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sky Weaver"), CardType::Creature, CREATURE_TYPE2(Metathran, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::White | CardType::Creature, true)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShimmeringWingsCard::CShimmeringWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Shimmering Wings"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPithingNeedleCard::CPithingNeedleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pithing Needle"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_CardFilter(new CardAbilityTypeComparer(AbilityType::Activated, true, AbilityType::ManaSource)) // any cards with activated abilities which is not a mana source
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(NULL, // any cards
		&m_CardFilter); // preferred to these cards

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities2, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteelGolemCard::CSteelGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steel Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(3), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("creatures"))));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrongholdDisciplineCard::CStrongholdDisciplineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stronghold Discipline"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
		::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			PreventableType::NotPreventable));

	cpSpell->SetMultiplier(-1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFaerieConclaveCard::CFaerieConclaveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Faerie Conclave"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				_T("Faerie AA"), 64043));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CForbiddingWatchtowerCard::CForbiddingWatchtowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Forbidding Watchtower"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") WHITE_MANA_TEXT,
				_T("Soldier AA"), 64066));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpawningPoolCard::CSpawningPoolCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Spawning Pool"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") BLACK_MANA_TEXT,
				_T("Skeleton B"), 2718));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGhituEncampmentCard::CGhituEncampmentCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ghitu Encampment"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") RED_MANA_TEXT,
				_T("Warrior AA"), 64080));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTreetopVillageCard::CTreetopVillageCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Treetop Village"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") GREEN_MANA_TEXT,
				_T("Ape AA"), 64011));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COverrunCard::COverrunCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Overrun"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+3), Life(+3), CreatureKeyword::Trample));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPrimalRageCard::CPrimalRageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Primal Rage"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootwaterCommandoCard::CRootwaterCommandoCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Rootwater Commando"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CRockBadgerCard::CRockBadgerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Rock Badger"), CardType::Creature, CREATURE_TYPE2(Badger, Beast), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CSylvanBasiliskCard::CSylvanBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSylvanBasiliskCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CSylvanBasiliskCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSqueeGoblinNabobCard::CSqueeGoblinNabobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squee, Goblin Nabob"), CardType::_LegendaryCreature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSqueeGoblinNabobCard::SetTriggerContext));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CSqueeGoblinNabobCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CBenalishKnightCard::CBenalishKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Benalish Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CTangleSpiderCard::CTangleSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tangle Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CUncontrollableAngerCard::CUncontrollableAngerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Uncontrollable Anger"), nID, 
		_T("2") RED_MANA_TEXT RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::MustAttack)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CAncestorsChosenCard::CAncestorsChosenCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ancestor's Chosen"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CAncestorsChosenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAncestorsChosenCard::BeforeResolution(CAncestorsChosenCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(
		GetController()->GetZoneById(ZoneId::Graveyard)->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAngelicChorusCard::CAngelicChorusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Chorus"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelicChorusCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAngelicChorusCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAngelicChorusCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CAngelicChorusCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	Life nLife = pCreature->GetLastKnownToughness();
	
	triggerContext.m_LifeModifier.SetLifeDelta(nLife);
	triggerContext.m_LifeModifier.SetSourceCard(this);
	pAction->SetTriggerContext(triggerContext);

	return nLife > Life(0);
}

//____________________________________________________________________________
//
CKnightOfDuskCard::CKnightOfDuskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of Dusk"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new BlockingThisCreatureComparer(this), 
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBogardanFirefiendCard::CBogardanFirefiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bogardan Firefiend"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAscendantEvincarCard::CAscendantEvincarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ascendant Evincar"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	//Pump other black creatures
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
			new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}

	//Unpump non-black creatures
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new CardTypeComparer(CardType::Creature | CardType::Black, true)),
				Power(-1), Life(-1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCivicWayfinderCard::CCivicWayfinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Civic Wayfinder"), CardType::Creature, CREATURE_TYPE3(Elf, Warrior, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshroudRangerCard::CSkyshroudRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Ranger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>( this,
			_T(""),
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSiegeGangCommanderCard::CSiegeGangCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Siege-Gang Commander"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
		, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin J"), 62021, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBeaconOfDestructionCard::CBeaconOfDestructionCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Beacon of Destruction"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE, // Target player?
		Life(-5), // Life delta
		PreventableType::Preventable) // Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?
}

//____________________________________________________________________________
//
CLavabornMuseCard::CLavabornMuseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lavaborn Muse"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLavabornMuseCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLavabornMuseCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CLavabornMuseCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

bool CLavabornMuseCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

//____________________________________________________________________________
//
CSunkenHopeCard::CSunkenHopeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sunken Hope"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	// Not optional
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to node's owner

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReyaDawnbringerCard::CReyaDawnbringerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Reya Dawnbringer"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStampedingWildebeestsCard::CStampedingWildebeestsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stampeding Wildebeests"), CardType::Creature, CREATURE_TYPE2(Antelope, Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	// Not optional
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Creature | CardType::Green, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CBeaconOfUnrestCard::CBeaconOfUnrestCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Beacon of Unrest"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::Artifact, false), 
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::Library,
		TRUE, // owner's zone?
		CardPlacement::Top,
		TRUE); // shuffle?
}

//____________________________________________________________________________
//
CDenizenoftheDeepCard::CDenizenoftheDeepCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Denizen of the Deep"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(11), Life(11))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	// Not optional
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoyalSentryCard::CLoyalSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loyal Sentry"), CardType::Creature, CREATURE_TYPE2(Human,Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
	TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
		CWhenSelfAttackedBlocked::BlockEventCallback2,
		&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLoyalSentryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	// Move this card too
	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddAbility(cpAbility.GetPointer());
}

bool CLoyalSentryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CCommuneWithNatureCard::CCommuneWithNatureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Commune with Nature"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("creatures")));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTellingTimeCard::CTellingTimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Telling Time"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			3)); // Get 3 cards

	// Out of the 3 cards, get 1 to hand, ... (selection 0 is added by default)
	cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(1);
	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(1);
	cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpSpell->GetZoneModifier().AddSelection(MinimumValue(1), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpSpell->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRelentlessRatsCard::CRelentlessRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Relentless Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	AllowUnlimitedCopies(TRUE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new NegateCardComparer(new SpecificCardComparer(this))));

	cpAbility->GetSurveyCardFilter().AddComparer(new CardNameComparer(_T("Relentless Rats")));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwitchCard::CTwitchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twitch"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLlanowarSentinelCard::CLlanowarSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Sentinel"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))

	, m_CardFilter(_T("a card named Llanowar Sentinel"), _T("cards named Llanowar Sentinel"), new CardNameComparer(_T("Llanowar Sentinel")))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	cpAbility->SetResolutionCost(_T("1") GREEN_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CProdigalPyromancerCard::CProdigalPyromancerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Prodigal Pyromancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CTrollAsceticCard::CTrollAsceticCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Troll Ascetic"), CardType::Creature, CREATURE_TYPE2(Troll, Shaman), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2),
		_T("1") GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CSkyhunterSkirmisherCard::CSkyhunterSkirmisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyhunter Skirmisher"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CAvatarOfMightCard::CAvatarOfMightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avatar of Might"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this,	AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAvatarOfMightCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAvatarOfMightCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

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
		if (nCount1 + 3 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CCephalidConstableCard::CCephalidConstableCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Constable"), CardType::Creature, CREATURE_TYPE2(Cephalid, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCephalidConstableCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CCephalidConstableCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CPlayer* pToPlayer, Damage damage) const
{
	m_pTriggeredAbility->GetTargeting().SetSubjectCount(GET_INTEGER(0), GET_INTEGER(-damage.m_nLifeDelta), TRUE);
	return true;
}

//____________________________________________________________________________
//
CHailOfArrowsCard::CHailOfArrowsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hail of Arrows"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		new AttackingCreatureComparer, FALSE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CJoinerAdeptCard::CJoinerAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Joiner Adept"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CJoinerAdeptCard::CreateAbility1)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CJoinerAdeptCard::CreateAbility2)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CJoinerAdeptCard::CreateAbility3)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CJoinerAdeptCard::CreateAbility4)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CJoinerAdeptCard::CreateAbility5)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CJoinerAdeptCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CJoinerAdeptCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CJoinerAdeptCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CJoinerAdeptCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CJoinerAdeptCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLegacyWeaponCard::CLegacyWeaponCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Legacy Weapon"), CardType::_LegendaryArtifact, nID,
		_T("7"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				ALL_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Land | CardType::_Enchantment | CardType::Creature | CardType::Planeswalker, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
}

void CLegacyWeaponCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if (pToZone->GetZoneId() == ZoneId::Graveyard)
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::_Tokens);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CScalpelexisCard::CScalpelexisCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scalpelexis"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLUE_MANA_TEXT, Power(1), Life(5))
{
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetReorder(true, ZoneId::Exile);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScalpelexisCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CScalpelexisCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pLib = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library);

	int count=1; 
	int broken=0;
	for (int i = 0; i < pLib->GetSize(); i=i+4)
	{

	CCard* c1 = NULL ; CCard* c2 = NULL; CCard* c3=NULL; CCard* c4=NULL;
	if (i<pLib->GetSize()) c1 = pLib->GetAt(pLib->GetSize()-1-i); else broken = 1;
	if (i+1<pLib->GetSize()) c2 = pLib->GetAt(pLib->GetSize()-1-i-1); else broken = 1;
	if (i+2<pLib->GetSize()) c3 = pLib->GetAt(pLib->GetSize()-1-i-2); else broken = 1;
	if (i+3<pLib->GetSize()) c4 = pLib->GetAt(pLib->GetSize()-1-i-3); else broken = 1;
	if ( broken ==0 ) { if ( ((c1->GetPrintedCardName() == c2->GetPrintedCardName()) || (c1->GetPrintedCardName() == c3->GetPrintedCardName()) ||
							  (c1->GetPrintedCardName() == c4->GetPrintedCardName()) || (c2->GetPrintedCardName() == c3->GetPrintedCardName()) ||
							  (c2->GetPrintedCardName() == c4->GetPrintedCardName()) || (c3->GetPrintedCardName() == c4->GetPrintedCardName()) )) 
	{ count = count+1; } else {broken=1;}}
	}

	count = count*4;
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = count;
	pAction->SetTriggerContext(triggerContext);
//		m_pTriggeredAbility->SetRevealCount(count);

return true;
}

//____________________________________________________________________________
//
CDiscombobulateCard::CDiscombobulateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Discombobulate"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(4), MaximumValue(4), // select cards to Top
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
}

//____________________________________________________________________________
//
CGoblinLoreCard::CGoblinLoreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Goblin Lore"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinLoreCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGoblinLoreCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4));
	CRandomDiscardModifier modifier2 = CRandomDiscardModifier(3);

	modifier1.ApplyTo(pAction->GetController());
	modifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CScoriaWurmCard::CScoriaWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scoria Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") RED_MANA_TEXT, Power(7), Life(7))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScoriaWurmCard::OnFlipSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	
	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::DamageSource));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScoriaWurmCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScoriaWurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pController);
		pModifier->ApplyTo(this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CScoriaWurmCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CArcaneTeachingsCard::CArcaneTeachingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Arcane Teachings"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+2), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CArcaneTeachingsCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CArcaneTeachingsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravebornMuseCard::CGravebornMuseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graveborn Muse"), CardType::Creature, CREATURE_TYPE2(Zombie, Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGravebornMuseCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CGravebornMuseCard::BeforeResolution(CGravebornMuseCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	int zombie_count = m_CardFilter_temp.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(zombie_count), MaximumValue(zombie_count));
	CLifeModifier pModifier1 = CLifeModifier(-Life(zombie_count), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier2.ApplyTo(GetController());
	pModifier1.ApplyTo(GetController());
	return (zombie_count>0);
}

//____________________________________________________________________________
//
CBeaconOfImmortalityCard::CBeaconOfImmortalityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beacon of Immortality"), CardType::Instant, nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CBeaconOfImmortalityCard::OnResolutionCompleted1))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("5") WHITE_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(0), PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

void CBeaconOfImmortalityCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	Life p = target->GetLife();

	CLifeModifier pModifier = CLifeModifier(Life(p), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	//CLifeModifier pModifier1 = CLifeModifier(Life(-p), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	//if ((GetController()->GetLife()) >= 0) pModifier.ApplyTo(target);
	//else pModifier1.ApplyTo(target);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CVoiceOfAllCard::CVoiceOfAllCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of All"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CVoiceOfAllCard::OnSelectionDone))
{
}

void CVoiceOfAllCard::Move(CZone* pToZone,
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
		CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

		pModifier.RemoveFrom(this);
	}
}

void CVoiceOfAllCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedProtection = CardKeyword::ProtectionFromWhite;

				CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 2)
			{
				SelectedProtection = CardKeyword::ProtectionFromBlue;

				CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 3)
			{
				SelectedProtection = CardKeyword::ProtectionFromBlack;

				CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 4)
			{
				SelectedProtection = CardKeyword::ProtectionFromRed;

				CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 5)
			{
				SelectedProtection = CardKeyword::ProtectionFromGreen;

				CCardKeywordModifier pModifier = CCardKeywordModifier(SelectedProtection, TRUE, FALSE);

				pModifier.ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CSleeperAgentCard::CSleeperAgentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sleeper Agent"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTriggeredPlayerModifiers().push_back(
			new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetAbilityName(_T("gain control ability"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef	TTriggeredAbility<CTriggeredModifyLifeAbility, CWhenNodeChanged>
			TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		// To set the damage to the player who triggered the Sleeper Agent,
		// not to the controller at resolution 
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetAbilityName(_T("deal 2 damage ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulblastCard::CSoulblastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Soulblast"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(SpecialNumber::All, CCardFilter::GetFilter(_T("creatures")));
	m_pTargetChgLifeSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulblastCard::BeforeResolution));
}

bool CSoulblastCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature;
	int nPower = 0;

	for (int i = 0; i < pAction->GetSacrificeCards()->GetSize(); ++i)
	{
		pCreature = dynamic_cast<CCreatureCard*>(pAction->GetSacrificeCards()->GetAt(i));
		if (!pCreature) continue;
		if (pCreature) nPower += GET_INTEGER(pCreature->GetLastKnownPower());
	}

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -nPower;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
	}

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CWindbornMuseCard::CWindbornMuseCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windborn Muse"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
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

//____________________________________________________________________________
//
CNoRestForTheWickedCard::CNoRestForTheWickedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("No Rest for the Wicked"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));

	cpAbility->AddSacrificeCost();

	cpAbility->GetGlobalCardFilter().AddComparer(new CardPresentinHistoryComparer(ZoneId::Graveyard, ZoneId::Battlefield));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCitanulFluteCard::CCitanulFluteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Citanul Flute"), CardType::Artifact, nID, 
		_T("5"), AbilityType::Artifact)
{
	{
			counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
				::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
					_T(""),
					&m_CardFilter, 
					ZoneId::Battlefield,
					false, true, false));

			cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

			cpAbility->GetCost().SetExtraManaCost();
			cpAbility->AddTapCost();

			cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCitanulFluteCard::BeforeResolution));

			AddAbility(cpAbility.GetPointer());
	}
}

bool CCitanulFluteCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCMC = pAction->GetCostConfigEntry().GetExtraValue();

	m_CardFilter.RemoveAllComparers();
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(nCMC));

	return true;
}

//____________________________________________________________________________
//
CWarpWorldCard::CWarpWorldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Warp World"), CardType::Sorcery, nID)
{
	counted_ptr<CWarpWorldSpell> cpSpell(
		::CreateObject<CWarpWorldSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDoublingCubeCard::CDoublingCubeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Doubling Cube"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("3"));

	cpAbility->SetAbilityText(_T("double the amount of each type of mana in your mana pool with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDoublingCubeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDoublingCubeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nWhite = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::White);
	int nBlue = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::Blue);
	int nBlack = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::Black);
	int nRed = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::Red);
	int nGreen = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::Green);
	int nColorless = pAction->GetController()->GetManaPool().GetMana(CManaPool::Color::Colorless);

	CManaPoolModifier pModifierW =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT)); // mana color
	CManaPoolModifier pModifierU =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT)); // mana color
	CManaPoolModifier pModifierB =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT)); // mana color
	CManaPoolModifier pModifierR =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT)); // mana color
	CManaPoolModifier pModifierG =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)); // mana color
	CManaPoolModifier pModifierC =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

	if (nWhite!=0) for (int i=0; i<nWhite; i++) pModifierW.ApplyTo(pAction->GetController());
	if (nBlue!=0) for (int i=0; i<nBlue; i++) pModifierU.ApplyTo(pAction->GetController());
	if (nBlack!=0) for (int i=0; i<nBlack; i++) pModifierB.ApplyTo(pAction->GetController());
	if (nRed!=0) for (int i=0; i<nRed; i++) pModifierR.ApplyTo(pAction->GetController());
	if (nGreen!=0) for (int i=0; i<nGreen; i++) pModifierG.ApplyTo(pAction->GetController());
	if (nColorless!=0) for (int i=0; i<nColorless; i++) pModifierC.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CHighGroundCard::CHighGroundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("High Ground"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0)));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CTwincastCard::CTwincastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twincast"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetCopyCastSpell> cpSpell(
			::CreateObject<CTargetCopyCastSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CDuctCrawlerCard::CDuctCrawlerCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Duct Crawler"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		RED_MANA_TEXT, Power(1), Life(1), &m_CardFilter)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDuctCrawlerCard::OnResolutionCompleted))
	,m_WhenNodeChanged(this, NodeId::CleanupStep1, FALSE)
{
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CDuctCrawlerCard::OnNodeChanged));
	m_CardFilter.AddNegateComparer(new  ContainedinComparer(&m_AffectedCards));

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CDuctCrawlerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	m_AffectedCards.AddCard(pAbilityAction->GetAssociatedCard(),CardPlacement::Top);
}
void CDuctCrawlerCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
}
//____________________________________________________________________________
//
CDreambornMuseCard::CDreambornMuseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreamborn Muse"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDreambornMuseCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDreambornMuseCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand;
	int nCount;
	CPlayer* pPlayer = GetGame()->GetActivePlayer();
	pHand = pPlayer->GetZoneById(ZoneId::Hand);
	nCount = pHand->GetSize();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nCount, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(pPlayer);
	return true;
}
//____________________________________________________________________________
//
CTimeStopCard::CTimeStopCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Stop"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTimeStopCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));
		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CTimeStopCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CStack& stack = m_pGame->GetStack();
	
	stack.ClearStack();

	
	CCountedCardContainer creatures;
	CZone* pZone;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}


	for (int ic = 0; ic < creatures.GetSize(); ++ic)
	{
		((CCreatureCard*)creatures.GetAt(ic))->RemoveFromCombat(TRUE);
	}

	m_pGame->GetCurrentNode()->GetGraph()->SetNode(m_pGame->GetCurrentNode()->GetGraph(), m_pGame->GetCurrentNode()->GetGraph(), NodeId::CleanupStep1);

}

//____________________________________________________________________________
//
CMidnightRitualCard::CMidnightRitualCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("MidnightRitual"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
	, nGraveyard(0)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMidnightRitualCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMidnightRitualCard::BeforeResolution));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

bool CMidnightRitualCard::BeforeResolution(CAbilityAction* pAction)
{
	nGraveyard = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	return true;
}

void CMidnightRitualCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nNewGraveyard = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	if (nGraveyard > nNewGraveyard)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Zombie A"), 2724, nGraveyard - nNewGraveyard);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CChimericStaffCard::CChimericStaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chimeric Staff"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChimericStaffCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CChimericStaffCard::BeforeResolution(CAbilityAction* pAction)
{
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Construct AE"), 64082, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(this);
	pModifier2.ApplyTo(this);

	CCreatureCard* pCreature = (CCreatureCard*)GetIsAlsoA();

	pCreature->SetPrintedPower(nValue);
	pCreature->SetPrintedToughness(nValue);

	return true;
}

//____________________________________________________________________________
//
