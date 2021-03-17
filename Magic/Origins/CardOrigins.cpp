#include "stdafx.h"
#include "CardOrigins.h"

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
		DEFINE_CARD(CAcolyteOfTheInfernoCard);
		DEFINE_CARD(CAkroanJailerCard);
		DEFINE_CARD(CAkroanSergeantCard);
		DEFINE_CARD(CAlchemistsVialCard);
		DEFINE_CARD(CAmprynTacticianCard);
		DEFINE_CARD(CAnchorToTheAetherCard);
		DEFINE_CARD(CAngelsTombCard);
		DEFINE_CARD(CAnointerOfChampionsCard);
		DEFINE_CARD(CAvariciousDragonCard);
		DEFINE_CARD(CAvenBattlePriestCard);
		DEFINE_CARD(CBellowsLizardCard);
		DEFINE_CARD(CBlazingHellhoundCard);
		DEFINE_CARD(CBlessedSpiritsCard);
		DEFINE_CARD(CBloodCursedKnightCard);
		DEFINE_CARD(CBoggartBruteCard);
		DEFINE_CARD(CBoneToAshCard);
		DEFINE_CARD(CBoundingKrasisCard);
		DEFINE_CARD(CBrawlersPlateCard);
		DEFINE_CARD(CCallOfTheFullMoonCard);
		DEFINE_CARD(CCatacombSlugCard);
		DEFINE_CARD(CChiefOfTheFoundryCard);
		DEFINE_CARD(CCitadelCastellanCard);
		DEFINE_CARD(CClericOfTheForwardOrderCard);
		DEFINE_CARD(CCobblebruteCard);
		DEFINE_CARD(CConsecratedByBloodCard);
		DEFINE_CARD(CConsulsLieutenantCard);
		DEFINE_CARD(CCruelRevivalCard);
		DEFINE_CARD(CDarkDabblingCard);
		DEFINE_CARD(CDarkPetitionCard);
		DEFINE_CARD(CDeadbridgeShamanCard);
		DEFINE_CARD(CDespoilerOfSoulsCard);
		DEFINE_CARD(CDragonFodderCard);
		DEFINE_CARD(CDreadwatersCard);
		DEFINE_CARD(CEnlightenedAsceticCard);
		DEFINE_CARD(CEnshroudingMistCard);
		DEFINE_CARD(CEyeblightAssassinCard);
		DEFINE_CARD(CEyeblightMassacreCard);
		DEFINE_CARD(CFetidImpCard);
		DEFINE_CARD(CFieryConclusionCard);
		DEFINE_CARD(CFieryImpulseCard);
		DEFINE_CARD(CFleshbagMarauderCard);
		DEFINE_CARD(CFoundryOfTheConsulsCard);
		DEFINE_CARD(CGideonsPhalanxCard);
		DEFINE_CARD(CGoblinPiledriverCard);
		DEFINE_CARD(CGoldForgedSentinelCard);
		DEFINE_CARD(CGraspOfTheHieromancerCard);
		DEFINE_CARD(CGravebladeMarauderCard);
		DEFINE_CARD(CGuardianAutomatonCard);
		DEFINE_CARD(CGuardiansOfMeletisCard);
		DEFINE_CARD(CHealingHandsCard);
		DEFINE_CARD(CHeavyInfantryCard);
		DEFINE_CARD(CHelmOfTheGodsCard);
		DEFINE_CARD(CHitchclawRecluseCard);
		DEFINE_CARD(CIroassChampionCard);
		DEFINE_CARD(CKnightOfThePilgrimsRoadCard);
		DEFINE_CARD(CKnightOfTheWhiteOrchidCard);
		DEFINE_CARD(CKnightlyValorCard);
		DEFINE_CARD(CKytheonsIrregularsCard);
		DEFINE_CARD(CKytheonsTacticsCard);
		DEFINE_CARD(CLanguishCard);
		DEFINE_CARD(CLeafGilderCard);
		DEFINE_CARD(CLlanowarEmpathCard);
		DEFINE_CARD(CMacabreWaltzCard);
		DEFINE_CARD(CMageRingNetworkCard);
		DEFINE_CARD(CMageRingResponderCard);
		//DEFINE_CARD(CMeteoriteCard);
		DEFINE_CARD(CMightOfTheMassesCard);
		DEFINE_CARD(CMurderInvestigationCard);
		DEFINE_CARD(COrchardSpiritCard);
		DEFINE_CARD(CPatronOfTheValiantCard);
		DEFINE_CARD(CPossessedSkaabCard);
		DEFINE_CARD(CPrismRingCard);
		DEFINE_CARD(CRamrollerCard);
		DEFINE_CARD(CReadTheBonesCard);
		DEFINE_CARD(CReclusiveArtificerCard);
		DEFINE_CARD(CRelicSeekerCard);
		DEFINE_CARD(CReturnedCentaurCard);
		DEFINE_CARD(CRhoxMaulersCard);
		DEFINE_CARD(CRoguesPassageCard);
		DEFINE_CARD(CRunedServitorCard);
		DEFINE_CARD(CScrapskinDrakeCard);
		DEFINE_CARD(CScreechingSkaabCard);
		DEFINE_CARD(CSentinelOfTheEternalWatchCard);
		DEFINE_CARD(CShamanOfThePackCard);
		DEFINE_CARD(CSigilOfTheEmptyThroneCard);
		DEFINE_CARD(CSigiledStarfishCard);
		DEFINE_CARD(CSkaabGoliathCard);
		DEFINE_CARD(CSmashToSmithereensCard);
		DEFINE_CARD(CStalwartAvenCard);
		DEFINE_CARD(CStratusWalkCard);
		DEFINE_CARD(CSwiftReckoningCard);
		DEFINE_CARD(CSwordOfTheAnimistCard);
		DEFINE_CARD(CSylvanMessengerCard);
		DEFINE_CARD(CThunderclapWyvernCard);
		DEFINE_CARD(CTitansStrengthCard);
		DEFINE_CARD(CTopanFreebladeCard);
		DEFINE_CARD(CTotemGuideHartebeestCard);
		DEFINE_CARD(CTowerGeistCard);
		DEFINE_CARD(CUnholyHungerCard);
		DEFINE_CARD(CValorInAkrosCard);
		DEFINE_CARD(CVeteransSidearmCard);
		DEFINE_CARD(CVrynWingmareCard);
		DEFINE_CARD(CWarHornCard);
		DEFINE_CARD(CWarOracleCard);
		DEFINE_CARD(CWeightOfTheUnderworldCard);
		DEFINE_CARD(CWildInstinctsCard);
		DEFINE_CARD(CYokedOxCard);	
		DEFINE_CARD(CZendikarIncarnateCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CRhoxMaulersCard::CRhoxMaulersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Maulers"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRhoxMaulersCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRhoxMaulersCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRhoxMaulersCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CRhoxMaulersCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +2); // Renown 2
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CKnightOfThePilgrimsRoadCard::CKnightOfThePilgrimsRoadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of the Pilgrim's Road"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
						   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightOfThePilgrimsRoadCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKnightOfThePilgrimsRoadCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKnightOfThePilgrimsRoadCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
													 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CKnightOfThePilgrimsRoadCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CFieryImpulseCard::CFieryImpulseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fiery Impulse"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE));					// FALSE->do not allow targeting players 
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFieryImpulseCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CFieryImpulseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	int iDamage = 2;
	if (n >= 2)	// spell mastery - two or more instants and/or sorceries are in your graveyard
		iDamage = 3;
	CLifeModifier* pModifier = new CLifeModifier(Life(-iDamage), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	CCreatureCard* pTarget   = (CCreatureCard*)pAction->GetAssociatedCard();
	pModifier->ApplyTo(pTarget);
	//Spell mastery specific effect end-------------- 
	return true;
}

//____________________________________________________________________________
//
CBoggartBruteCard::CBoggartBruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boggart Brute"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE); //Menace
}

//____________________________________________________________________________
//
CAnointerOfChampionsCard::CAnointerOfChampionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anointer of Champions"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHitchclawRecluseCard::CHitchclawRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hitchclaw Recluse"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CAmprynTacticianCard::CAmprynTacticianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ampryn Tactician"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFoundryOfTheConsulsCard::CFoundryOfTheConsulsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Foundry of the Consuls"), nID)
{
	{//{T}: Add {1} to your mana pool.
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{//{5}, {T}, Sacrifice Foundry of the Consuls: Put two 1/1 colorless Thopter artifact creature 
	//tokens with flying onto the battlefield.
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("5"),
				_T("Thopter D"), 55053,
				2));

		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMageRingNetworkCard::CMageRingNetworkCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mage-Ring Network"), nID)
{
	{//{T}: Add {1} to your mana pool.
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{//{1}, {T}: Put a storage counter on Mage-Ring Network.
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{// Remove 0 storage counters from Mage-Ring Network.
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{//{1}, Remove X storage counters from Mage-Ring Network: Add X to your mana pool.
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMageRingNetworkCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());	
	}
}

bool CMageRingNetworkCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount	 = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));

	for (int i = 0; i < nCounterCount; i++) 
		pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CVeteransSidearmCard::CVeteransSidearmCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Veteran's Sidearm"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"))); // Equip 1

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGuardianAutomatonCard::CGuardianAutomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlchemistsVialCard::CAlchemistsVialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Alchemist's Vial"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{//When Alchemist's Vial enters the battlefield draw a card.
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{//{1},{T}, sacrifice Alchemist's Vial: Target creature can't attack or block this turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::CantAttack | CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWarHornCard::CWarHornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("War Horn"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+0)));

	cpAbility->SetToAttackingOnly();
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRamrollerCard::CRamrollerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramroller"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("3"), Power(2), Life(3))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
	{//Ramroller gets +2/+0 as long as you control another artifact.
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->GetSurveyCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->SetMaximumAddedPower(Power(2));
		cpAbility->SetPowerMultiplier(Power(2));

		cpAbility->SetMaximumAddedToughness(Life(0));	// this code is required, without this Ramroller's toughness was being increased by one
		cpAbility->SetToughnessMultiplier(Life(0));		// for each artifact 

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
//Meteorite\n{5}\nArtifact\nM15,U\nWhen Meteorite enters the battlefield, it deals 2 damage to target creature or player.\r{T}: Add one mana of any color to your mana pool.
/*CMeteoriteCard::CMeteoriteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Meteorite"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{//When Meteorite enters the battlefield, it deals 2 damage to target creature or player.
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		// The targeting code below is causing game to crash.  There is code missing from the core
		// for Artifact cards.  This code works for creatures (Geistcatcher's Rig) and enchant creatures (Galvanic Arc).
		//cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		//cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);	

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
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
}*/

//____________________________________________________________________________
//
CPrismRingCard::CPrismRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prism Ring"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CPrismRingCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life gained
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrismRingCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

void CPrismRingCard::Move(CZone* pToZone,
						  const CPlayer* pByPlayer,
						  MoveType moveType,
						  CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue  = false;
		cBlack = false;
		cRed   = false;
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

void CPrismRingCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CPrismRingCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) ||
		   (cBlue  && pCard->IsColor(CManaPoolBase::Color::Blue))  ||
		   (cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) ||
		   (cRed   && pCard->IsColor(CManaPoolBase::Color::Red))   ||
		   (cGreen && pCard->IsColor(CManaPoolBase::Color::Green));
}

//____________________________________________________________________________
//
CChiefOfTheFoundryCard::CChiefOfTheFoundryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chief of the Foundry"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(3))
{
		//Other artifact creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrawlersPlateCard::CBrawlersPlateCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Brawler's Plate"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4"))); // Equip 4

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	
	cpAbility->AddCreatureModifier(pModifier);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSwordOfTheAnimistCard::CSwordOfTheAnimistCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of the Animist"), CardType::_LegendaryArtifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"))); //Equip 2

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CSwordOfTheAnimistCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSwordOfTheAnimistCard::CreateEquipmentAbility(CCard* pCard)
{
	//Whenever equipped creature attacks, you may search your library for a basic land card,
	//put it onto the battlefield tapped, then shuffle your library.
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetSearchCount(MinimumValue(1), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMageRingResponderCard::CMageRingResponderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mage-Ring Responder"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(7), Life(7))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();
	{//{7}: Untap Mage-Ring Responder.
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("7")));

		AddAbility(cpAbility.GetPointer());
	}
	{//Whenever Mage-Ring Responder attacks, it deals 7 damage to target creature defending player controls.
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
									 CWhenSelfAttackedBlocked::AttackEventCallback,
									 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-7));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly(); // creatures defending player controls. Need to be updated fpr multiple player games
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHelmOfTheGodsCard::CHelmOfTheGodsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helm of The Gods"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"))); //Equip 1
	
	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHelmOfTheGodsCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CHelmOfTheGodsCard::CreateEquipmentAbility(CCard* pCard)
{
	// Equipped creature gets +1/+1 for each enchantment you control.
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Enchantment, false)));

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CIroassChampionCard::CIroassChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iroas's Champion"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CPossessedSkaabCard::CPossessedSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Possessed Skaab"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	{//When Possessed Skaab enters the battlefield, return target instant, sorcery, or creature card from your graveyard to your hand.
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery | CardType::Creature, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

void CPossessedSkaabCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	//If Possessed Skaab would die, exile it instead. 
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CThunderclapWyvernCard::CThunderclapWyvernCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thunderclap Wyvern"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
	{//Other creatures you control with flying get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //Not this
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodCursedKnightCard::CBloodCursedKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood-Cursed Knight"), CardType::Creature, CREATURE_TYPE2(Vampire, Knight), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->SetConditionValue(1);
		
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);	
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoundingKrasisCard::CBoundingKrasisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bounding Krasis"), CardType::Creature, CREATURE_TYPE2(Fish, Lizard), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
	{//When Bounding Krasis enters the battlefield, you may tap or untap target creature.
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCitadelCastellanCard::CCitadelCastellanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Citadel Castellan"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCitadelCastellanCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCitadelCastellanCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCitadelCastellanCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											  CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CCitadelCastellanCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +2); // Renown 2
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CReclusiveArtificerCard::CReclusiveArtificerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Reclusive Artificer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(_T("an Artifact"), _T("Artifacts"), new CardTypeComparer(CardType::Artifact, false))
{
	//When Reclusive Artificer enters the battlefield, you may have it deal damage to target creature 
	//equal to the number of artifacts you control.
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CReclusiveArtificerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CReclusiveArtificerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));
	pAction->SetTriggerContext(triggerContext);
	return true;
}

//____________________________________________________________________________
//
CBlazingHellhoundCard::CBlazingHellhoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blazing Hellhound"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, TRUE,							//deal 1 damage to target creature or player
				Life(-1),					   
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);	//Sacrifice another creature

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZendikarIncarnateCard::CZendikarIncarnateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zendikar Incarnate"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(4))
{
	//Zendikar Incarnate's power is equal to the number of lands your control.
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Land, false)));
	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShamanOfThePackCard::CShamanOfThePackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shaman of the Pack"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	//When Shaman of the Pack enters the battlefield, target opponent loses life equal to the number of Elves you control.
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShamanOfThePackCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CShamanOfThePackCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController  = pAction->GetController();
	CZone*   pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	int n = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	if (n > 0)
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier1.ApplyTo(pAction->GetAssociatedPlayer());
	}
	return true;
}

//____________________________________________________________________________
//
CWildInstinctsCard::CWildInstinctsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wild Instincts"), CardType::Sorcery, nID)
{
	//Target creature you control gets +2/+2 until end of turn. It fights target creature an opponent controls.
	counted_ptr<CHuntTheHunterSpell> cpSpell(
		::CreateObject <CHuntTheHunterSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CWildInstinctsCard::CHuntTheHunterSpell::CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new CardTypeComparer(CardType::Creature, true), false,
		new CardTypeComparer(CardType::Creature, true), false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CWildInstinctsCard::CHuntTheHunterSpell::ResolveGroup(const CCountedCardContainer& pContainer1,  const CCountedCardContainer& pContainer2,
														   const CPlayerContainer&		pPContainer1, const CPlayerContainer&	   pPContainer2)
{
	if (!pContainer1.GetSize()) 
		return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) 
		return;

	CPowerModifier pModifier1 = CPowerModifier(Power(+2));
	CLifeModifier  pModifier2 = CLifeModifier(Life(+2), this->GetCard(), PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo((CCreatureCard*)pCreature1);
	pModifier2.ApplyTo((CCreatureCard*)pCreature1);
	
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier  = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) 
			modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
}

//____________________________________________________________________________
//
CUnholyHungerCard::CUnholyHungerCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unholy Hunger"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Destroy target creature.
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnholyHungerCard::BeforeResolution));
}

bool CUnholyHungerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = GetController();
	CZone* pSurvey		 = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2)	//If there are two or more instant and/or sorcery cards in your graveyard, you gain 2 life.
	{
		CLifeModifier* pModifier = new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->ApplyTo(pController);
	}
	//Spell mastery specific effect end--------------
	return true;
}

//____________________________________________________________________________
//
CAkroanJailerCard::CAkroanJailerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Jailer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenBattlePriestCard::CAvenBattlePriestCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Battle Priest"), CardType::Creature, CREATURE_TYPE2(Bird, Cleric), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlessedSpiritsCard::CBlessedSpiritsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blessed Spirits"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClericOfTheForwardOrderCard::CClericOfTheForwardOrderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cleric of the Forward Order"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CardNameComparer(_T("Cleric of the Forward Order")));
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
													 &CClericOfTheForwardOrderCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CClericOfTheForwardOrderCard::BeforeResolution(CClericOfTheForwardOrderCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	triggerContext.m_LifeModifier.SetLifeDelta(Life(2*m_CardFilter.CountIncluded(pInplay->GetCardContainer())));
	pAction->SetTriggerContext(triggerContext);
	return true;
}

//____________________________________________________________________________
//
CConsulsLieutenantCard::CConsulsLieutenantCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Consul's Lieutenant"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	{// Renown 1
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConsulsLieutenantCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConsulsLieutenantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{//Whenever Consul's Lieutenant attacks, if it's renowned, other attacking creatures you control get +1/+1 until end of turn
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							   CWhenSelfAttackedBlocked::AttackEventCallback,
							   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConsulsLieutenantCard::SetTriggerContext2));
		
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CConsulsLieutenantCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											   CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CConsulsLieutenantCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CConsulsLieutenantCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											    AttackSubject attacked) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CEnlightenedAsceticCard::CEnlightenedAsceticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enlightened Ascetic"), CardType::Creature, CREATURE_TYPE2(Cat, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEnshroudingMistCard::CEnshroudingMistCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Enshrouding Mist"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Target creature gets +1/+1 until end of turn. Prevent all damage that would be dealt to it this turn.
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEnshroudingMistCard::BeforeResolution));
}

bool CEnshroudingMistCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreatureCard = (CCreatureCard*)pAction->GetAssociatedCard();
	if (pCreatureCard->GetCreatureKeyword()->HasRenowned())	// If it's renowned, untap it.
	{
		CCardOrientationModifier* pModifier = new CCardOrientationModifier(false);
		pModifier->ApplyTo(pCreatureCard);
	}
	return true;
}

//____________________________________________________________________________
//
CGideonsPhalanxCard::CGideonsPhalanxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gideon's Phalanx"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Knight E"), 55046,
			4));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGideonsPhalanxCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGideonsPhalanxCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2) //If there are two or more instant and/or sorcery cards in your graveyard, creatures you control gain indestructible until end of turn.
	{
		CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);
		pModifier1->ApplyTo(pController);
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);
	}
	//Spell mastery specific effect end-------------- 
	return true;
}

//____________________________________________________________________________
//
CGraspOfTheHieromancerCard::CGraspOfTheHieromancerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Grasp of the Hieromancer"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CGraspOfTheHieromancerCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CGraspOfTheHieromancerCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHealingHandsCard::CHealingHandsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Healing Hands"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+4), PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CHeavyInfantryCard::CHeavyInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heavy Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeavyInfantryCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CHeavyInfantryCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	pModifier1.ApplyTo(pTarget);
	return true;
}

//____________________________________________________________________________
//
CKytheonsIrregularsCard::CKytheonsIrregularsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kytheon's Irregulars"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(3))
{
	{//Renown
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKytheonsIrregularsCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKytheonsIrregularsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{//{WW}: Tap target creature
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			TRUE,					// tap
			FALSE,					// untap
			new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKytheonsIrregularsCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CKytheonsIrregularsCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CKytheonsTacticsCard::CKytheonsTacticsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kytheon's Tactics"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+1)));
	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKytheonsTacticsCard::BeforeResolution));
	
	AddSpell(cpSpell.GetPointer());
}

bool CKytheonsTacticsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2)	// spell mastery - two or more instants and/or sorceries are in your graveyard
	{
		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
		CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
				std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Vigilance, true, true)));
		pModifier.ApplyTo(GetController());
	}
	//Spell mastery specific effect end-------------- 
	return true;
}

//____________________________________________________________________________
//
CPatronOfTheValiantCard::CPatronOfTheValiantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Patron of the Valiant"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	// When Patron of the Valiant enters the battlefield, put a +1/+1 counter on each creature you control with a +1/+1 counter on it.
	typedef TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRelicSeekerCard::CRelicSeekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Relic Seeker"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{//Renown
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRelicSeekerCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRelicSeekerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{//When Relic Seeker becomes renowned, you may search your library for an Equipment card, reveal it, 
	 //put it into your hand, then shuffle your library.
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetTriggerIndex(RENOWNED_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
		cpAbility->SetToZone(ZoneId::Hand);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		
		cpAbility->SetAbilityName(_T("Renowned trigger"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CRelicSeekerCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CRelicSeekerCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSentinelOfTheEternalWatchCard::CSentinelOfTheEternalWatchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sentinel of the Eternal Watch"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(4), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{//At the beginning of combat on each opponent's turn, tap target creature that player controls.
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly(); // needs to be modified for a multiplayer game with more than 2 players
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStalwartAvenCard::CStalwartAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stalwart Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
						   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStalwartAvenCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStalwartAvenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CStalwartAvenCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
													 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CStalwartAvenCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSwiftReckoningCard::CSwiftReckoningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swift Reckoning"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

		AddSpell(cpSpell.GetPointer());
	}
	{	
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::AsInstant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,							// not used
			CPlayableIfTrait::PlayableCallback(this,
			&CSwiftReckoningCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSwiftReckoningCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2)	// spell mastery - two or more instants and/or sorceries are in your graveyard
		return true;
	//Spell mastery specific effect end-------------- 
	return false;
}

//____________________________________________________________________________
//
CTopanFreebladeCard::CTopanFreebladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Topan Freeblade"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTopanFreebladeCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTopanFreebladeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTopanFreebladeCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
													 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CTopanFreebladeCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CValorInAkrosCard::CValorInAkrosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Valor in Akros"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVrynWingmareCard::CVrynWingmareCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vryn Wingmare"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
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
CWarOracleCard::CWarOracleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War Oracle"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddLifelink(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarOracleCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWarOracleCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWarOracleCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
									   CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CWarOracleCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CAnchorToTheAetherCard::CAnchorToTheAetherCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Anchor to the Aether"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CAnchorToTheAetherCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CAnchorToTheAetherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CAcolyteOfTheInfernoCard::CAcolyteOfTheInfernoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Acolyte of the Inferno"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
{
	{//Renown
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
							   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcolyteOfTheInfernoCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcolyteOfTheInfernoCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{//Whenever Acolyte of the Inferno becomes blocked by a creature, it deals 2 damage to that creature.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							   CWhenSelfAttackedBlocked::BlockEventCallback, 
							   &CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcolyteOfTheInfernoCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAcolyteOfTheInfernoCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
												  CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CAcolyteOfTheInfernoCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CAcolyteOfTheInfernoCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
												  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CAkroanSergeantCard::CAkroanSergeantCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Akroan Sergeant"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt, 
						   CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkroanSergeantCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAkroanSergeantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAkroanSergeantCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
													 CPlayer* pByPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasRenowned()) 
		return false;
	else 
		return true;
}

bool CAkroanSergeantCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasRenowned()) 
		return true;

	CCardCounterModifier	 pModifier1	= CCardCounterModifier(_T("+1/+1"), +1); // Renown 1
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Renowned, TRUE, FALSE);
	CSpecialEffectModifier	 pModifier3 = CSpecialEffectModifier(this, RENOWNED_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CAvariciousDragonCard::CAvariciousDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avaricious Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{//At the beginning of your end step, discard your hand.
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{//At the beginning of your draw step, draw an additional card.
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::DrawStep2));
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*
Gatherer Ruling 22/06/2015
* Call of the Full Moon’s last ability will look at the entire previous turn, even if Call of the Moon wasn’t 
on the battlefield for some or all of that turn. For example, if you cast Call of the Full Moon and another 
spell on the same turn, you’ll have to sacrifice Call of the Full Moon at the beginning of the upkeep of the following turn.
* A single player must have cast two or more spells during the previous turn for Call of the Full Moon’s last ability to trigger. 
If multiple players each cast just one spell during that turn, the ability won’t trigger.
*/
CCallOfTheFullMoonCard::CCallOfTheFullMoonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Call of the Full Moon"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+3), Life(+2), CreatureKeyword::Trample)
{
	{//At the beginning of each upkeep, if a player cast two or more spells last turn, sacrifice Call of the Full Moon. 
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCallOfTheFullMoonCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCallOfTheFullMoonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}


bool CCallOfTheFullMoonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											   CNode* pToNode) const
{
	//if a player cast two or more spells last turn
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

bool CCallOfTheFullMoonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	//if a player cast two or more spells last turn
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CConsecratedByBloodCard::CConsecratedByBloodCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Consecrated by Blood"), nID, 
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Flying)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new EnchantedByComparer(this)); // do not include the creature this card is enchanting 
																   // in the list of creatures that can be sacrificed 
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
															   &CConsecratedByBloodCard::CreateAdditionalAbility));
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CConsecratedByBloodCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T(""),
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);
	cpAbility->GetCost().AddSacrificeCardCost(2, &m_CardFilter);	// Sacrifice two other creatures
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarkDabblingCard::CDarkDabblingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dark Dabbling"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDarkDabblingCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CDarkDabblingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2)	// spell mastery - two or more instants and/or sorceries are in your graveyard
	{
		CCountedCardContainer cards;
		CCardFilter m_CardFilter = CCardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard())); // exclude card that was target of the original regeneration spell
		
		CZone* pFromZone = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
		CRegenerateModifier* pModifier = new CRegenerateModifier();
		m_CardFilter.GetIncluded(*pFromZone, cards);
		
		for(int ic = 0; ic < cards.GetSize(); ++ic)
		{
			CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(ic));
			if (!pCreature) 
				continue;
			pModifier->ApplyTo(pCreature);
		}		
		return true;
	}
	//Spell mastery specific effect end-------------- 
	return true;
}

//____________________________________________________________________________
//
CDarkPetitionCard::CDarkPetitionCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Dark Petition"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
	m_pSearchLibrarySpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDarkPetitionCard::BeforeResolution));
}

bool CDarkPetitionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));
	int n = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());
	//Spell mastery specific effect start------------ 
	if (n >= 2)	// spell mastery - two or more instants and/or sorceries are in your graveyard
	{
		CManaPoolModifier modifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(CManaPoolBase::Color::Black, 3));
		modifier.ApplyTo(pAction->GetController());
	}	
	//Spell mastery specific effect end-------------- 
	return true;
}

//____________________________________________________________________________
//
CDeadbridgeShamanCard::CDeadbridgeShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadbridge Shaman"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDespoilerOfSoulsCard::CDespoilerOfSoulsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Despoiler of Souls"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this)); //exclude this card from list of creatures that can be exiled
		cpAbility->GetCost().AddExileGraveyardCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEyeblightAssassinCard::CEyeblightAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eyeblight Assassin"), CardType::Creature, CREATURE_TYPE2(Elf, Assassin), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEyeblightMassacreCard::CEyeblightMassacreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Eyeblight Massacre"), CardType::Sorcery, nID)
{	
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-2),				// power delta
			Life(-2)));				// life delta
	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFetidImpCard::CFetidImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fetid Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{			
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CLanguishCard::CLanguishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Languish"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-4), Life(-4)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGravebladeMarauderCard::CGravebladeMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graveblade Marauder"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(4))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	{
		//combat damage to controller
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGravebladeMarauderCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//combat damage to opponent
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGravebladeMarauderCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGravebladeMarauderCard::BeforeResolution(CGravebladeMarauderCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pGraveyard  = GetController()->GetZoneById(ZoneId::Graveyard);
	
	// Whenever Graveblade Marauder deals combat damage to a player, that player loses life equal to the number of creature cards in your graveyard
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer());
	
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nDomainCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CRoguesPassageCard::CRoguesPassageCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rogue's Passage"), nID)
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
				_T("4"),
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDragonFodderCard::CDragonFodderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dragon Fodder"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			_T("Goblin C"), 2702,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBellowsLizardCard::CBellowsLizardCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Bellows Lizard"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		_T("1") RED_MANA_TEXT, Power(+1), Life(0))
{
}

//____________________________________________________________________________
//
CAngelsTombCard::CAngelsTombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angel's Tomb"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier( _T("Angel AA"), 64012, GetController());
	cpAbility->GetTriggeredCardModifiers().push_back(new CScheduledCardModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, true,  CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoneToAshCard::CBoneToAshCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Bone to Ash"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CCatacombSlugCard::CCatacombSlugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Catacomb Slug"), CardType::Creature, CREATURE_TYPE(Slug), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(6))
{
}

//____________________________________________________________________________
//
CCobblebruteCard::CCobblebruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cobblebrute"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(2))
{
}

//____________________________________________________________________________
//
CCruelRevivalCard::CCruelRevivalCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cruel Revival"), CardType::Instant, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
            TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CDreadwatersCard::CDreadwatersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dreadwaters"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			0));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetRevealCardsToOthers(TRUE);
	cpSpell->SetReorder(true, ZoneId::Graveyard, CardPlacement::Top);	
		
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDreadwatersCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDreadwatersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pLib    = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library);

	int n = (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()));

	if(n > pLib->GetSize()) 
		n = pLib->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = n;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return n > 0;
}

//____________________________________________________________________________
//
CFieryConclusionCard::CFieryConclusionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fiery Conclusion"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE,
			Life(-5), PreventableType::Preventable));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFleshbagMarauderCard::CFleshbagMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleshbag Marauder"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinPiledriverCard::CGoblinPiledriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Piledriver"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);

	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Goblin"), _T("other attacking Goblins"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGoblinPiledriverCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinPiledriverCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	//triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	//triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount*2));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CGoldForgedSentinelCard::CGoldForgedSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gold-Forged Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Chimera), nID,
		_T("6"), Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CGuardiansOfMeletisCard::CGuardiansOfMeletisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardians of Meletis"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CKnightOfTheWhiteOrchidCard::CKnightOfTheWhiteOrchidCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Knight of the White Orchid"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Plains")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightOfTheWhiteOrchidCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKnightOfTheWhiteOrchidCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKnightOfTheWhiteOrchidCard::SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
	for (int i = 0; i < pSurvey->GetSize(); ++i)
	{
		CCard* pCard = pSurvey->GetAt(i);
		if (pCard->GetCardType().IsLand())
			++nCount1;
	}
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int nCount2 = 0;
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsLand())
			++nCount2;
	}
	return nCount2 > nCount1;
}

bool CKnightOfTheWhiteOrchidCard::BeforeResolution(CKnightOfTheWhiteOrchidCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount1 = 0;
	for (int i = 0; i < pSurvey->GetSize(); ++i)
	{
		CCard* pCard = pSurvey->GetAt(i);
		if (pCard->GetCardType().IsLand())
			++nCount1;
	}
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	int nCount2 = 0;
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsLand())
			++nCount2;
	}
	return nCount2 > nCount1;
}

//____________________________________________________________________________
//
CKnightlyValorCard::CKnightlyValorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Knightly Valor"), nID,
		_T("4") WHITE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Vigilance)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Knight D"), 2967, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeafGilderCard::CLeafGilderCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Leaf Gilder"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CLlanowarEmpathCard::CLlanowarEmpathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Empath"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLlanowarEmpathCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CLlanowarEmpathCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	CZone* lib = pAction->GetController()->GetZoneById(ZoneId::Library);
	if (lib->GetSize()>0)
	{
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pModifier1.ApplyTo(pAction->GetController());

		CCard* pNextDraw = pAction->GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	
		if (pNextDraw->GetCardType().IsCreature())
		{
			CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pAction->GetController());
			pModifier2.ApplyTo(pNextDraw);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CMacabreWaltzCard::CMacabreWaltzCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Macabre Waltz"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMacabreWaltzCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, 2);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CMacabreWaltzCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
											CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1),	    // select cards to 
						   CZoneModifier::RoleType::PrimaryPlayer,  // select by 
						   CZoneModifier::RoleType::PrimaryPlayer,  // reveal to
						   CCardFilter::GetFilter(_T("cards")),	    // any cards
						   ZoneId::Graveyard,					    // if selected, move cards to
						   CZoneModifier::RoleType::PrimaryPlayer,  // select by this player
						   CardPlacement::Top,					    // put selected cards on top
						   MoveType::Discard,						// move type
						   CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player	
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CMightOfTheMassesCard::CMightOfTheMassesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Might of the Masses"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMightOfTheMassesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMightOfTheMassesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay     = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCreatureCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatureCount;
	Context.nValue2 = nCreatureCount;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		 it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}
	return true;
}

//____________________________________________________________________________
//
CMurderInvestigationCard::CMurderInvestigationCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Murder Investigation"), CardType::EnchantCreature, nID,
		_T("1") WHITE_MANA_TEXT,
		new AnyCreatureComparer)		
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMurderInvestigationCard::SetTriggerContext));
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier M"), 2908, 0);	

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CMurderInvestigationCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pEnchantedCard);
	if (!pCreature) return false;

	triggerContext.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());
	return true;
}

//____________________________________________________________________________
//
COrchardSpiritCard::COrchardSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orchard Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Reach, false))
{
	GetCreatureKeyword()->AddUnblockable(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CReadTheBonesCard::CReadTheBonesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Read the Bones"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadTheBonesCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CReadTheBonesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2),				// select cards to bottom
								CZoneModifier::RoleType::PrimaryPlayer,			// select by 
								CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
								NULL,											// any cards
								ZoneId::Library,								// if selected, move cards to
								CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
								CardPlacement::Bottom,							// put selected cards on top
								MoveType::Others,								// move type
								CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(true, 
										 ZoneId::Library,	
										 CZoneModifier::RoleType::PrimaryPlayer, // this player's library
										 CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pController);

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
	pModifier1.ApplyTo(pController);

	CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CReturnedCentaurCard::CReturnedCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Returned Centaur"), CardType::Creature, CREATURE_TYPE2(Zombie, Centaur), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(4);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRunedServitorCard::CRunedServitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Runed Servitor"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScrapskinDrakeCard::CScrapskinDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scrapskin Drake"), CardType::Creature, CREATURE_TYPE2(Zombie, Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CScreechingSkaabCard::CScreechingSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Screeching Skaab"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSigilOfTheEmptyThroneCard::CSigilOfTheEmptyThroneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sigil of the Empty Throne"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Angel B"), 2740, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSigiledStarfishCard::CSigiledStarfishCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigiled Starfish"), CardType::Creature, CREATURE_TYPE(Starfish), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSigiledStarfishCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSigiledStarfishCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER),		// select cards to bottom
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							NULL,											// any cards
							ZoneId::Library,								// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Bottom,							// put selected cards on top
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Top);
	//Scry end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSkaabGoliathCard::CSkaabGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skaab Goliath"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("5") BLUE_MANA_TEXT, Power(6), Life(9))
{
	GetCreatureKeyword()->AddTrample(false);
	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CSmashToSmithereensCard::CSmashToSmithereensCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Smash to Smithereens"), CardType::Instant, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																  DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CStratusWalkCard::CStratusWalkCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Stratus Walk"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::OnlyBlockFlying)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSylvanMessengerCard::CSylvanMessengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Messenger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSylvanMessengerCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CSylvanMessengerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand    = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);
		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Elf) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
		else
			revealedCards.AddCard(pCard, CardPlacement::Top);
	}

	if (matchingCards.GetSize())
		pHand->AddCards(matchingCards, GetController(), MoveType::Others, CardPlacement::Top);

	if (revealedCards.GetSize())
	{
		if (revealedCards.GetSize() == 1)
		{
			pLibrary->AddCard(revealedCards.GetAt(0), GetController(), MoveType::Others, CardPlacement::Bottom);
		}
		else
		{
			// Order cards
			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				revealedCards.Sort();	// ascending
				pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &revealedCards;

				if (GetController()->GetInterface()->OrderCards(&orderCardsData))
					pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
		}
	}
}

//____________________________________________________________________________
//
CTitansStrengthCard::CTitansStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Titan's Strength"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+3), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CTitansStrengthCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTitansStrengthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CTotemGuideHartebeestCard::CTotemGuideHartebeestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Totem-Guide Hartebeest"), CardType::Creature, CREATURE_TYPE(Antelope), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("aura cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerGeistCard::CTowerGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tower Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier3->GetSelection(0).moveType = MoveType::Others;
	pModifier3->AddSelection(MinimumValue(1), MaximumValue(1),					// select cards to bootom
							 CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							 CZoneModifier::RoleType::PrimaryPlayer,			// reveal to
							 NULL,												// any cards
							 ZoneId::Hand,										// if selected, move cards to
							 CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							 CardPlacement::Top,								// put selected cards on top
							 MoveType::Others,									// move type
							 CZoneModifier::RoleType::PrimaryPlayer);			// order selected cards by this player
	// and finally put the last ones on the bottom of the library
	pModifier3->SetReorderInformation(true, 
									  ZoneId::Graveyard,	
									  CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
									  CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeightOfTheUnderworldCard::CWeightOfTheUnderworldCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Weight of the Underworld"), nID,
		_T("3") BLACK_MANA_TEXT,
		Power(-3), Life(-2))
{
}

//____________________________________________________________________________
//
CYokedOxCard::CYokedOxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yoked Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		WHITE_MANA_TEXT, Power(0), Life(4))
{
}

//____________________________________________________________________________
//