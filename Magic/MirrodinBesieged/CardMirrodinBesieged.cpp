#include "stdafx.h"
#include "CardMirrodinBesieged.h"

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

		DEFINE_CARD(CAccorderPaladinCard);
		DEFINE_CARD(CArdentRecruitCard);
		DEFINE_CARD(CBanishmentDecreeCard);
		DEFINE_CARD(CBlackSunsZenithCard);
		DEFINE_CARD(CBladedSentinelCard);
		DEFINE_CARD(CBlightsteelColossusCard);
		DEFINE_CARD(CBlightwidowCard);
		DEFINE_CARD(CBlisterstickShamanCard);
		DEFINE_CARD(CBlueSunsZenithCard);
		DEFINE_CARD(CBonehoardCard);
		DEFINE_CARD(CBrassSquireCard);
		DEFINE_CARD(CBurnTheImpureCard);
		DEFINE_CARD(CCausticHoundCard);
		DEFINE_CARD(CChokingFumesCard);
		DEFINE_CARD(CConcussiveBoltCard);
		DEFINE_CARD(CConsecratedSphinxCard);
		DEFINE_CARD(CContestedWarZoneCard);
		DEFINE_CARD(CCopperCarapaceCard);
		DEFINE_CARD(CCoreProwlerCard);
		DEFINE_CARD(CCorruptedConscienceCard);
		DEFINE_CARD(CCreepingCorrosionCard);
		DEFINE_CARD(CCrushCard);
		DEFINE_CARD(CDarksteelPlateCard);
		DEFINE_CARD(CDecimatorWebCard);
		DEFINE_CARD(CDistantMemoriesCard);
		DEFINE_CARD(CDrossRipperCard);
		DEFINE_CARD(CFangrenMarauderCard);
		DEFINE_CARD(CFlayerHuskCard);
		DEFINE_CARD(CFlensermiteCard);
		DEFINE_CARD(CFleshEaterImpCard);
		DEFINE_CARD(CFranticSalvageCard);
		DEFINE_CARD(CFuelfortheCauseCard);
		DEFINE_CARD(CGlissasCourierCard);
		DEFINE_CARD(CGlissaTheTraitorCard);
		DEFINE_CARD(CGnathosaurCard);
		DEFINE_CARD(CGoblinWardriverCard);
		DEFINE_CARD(CGoForTheThroatCard);
		DEFINE_CARD(CGoreVassalCard);
		DEFINE_CARD(CGreenSunsZenithCard);
		DEFINE_CARD(CGruesomeEncoreCard);
		DEFINE_CARD(CGustSkimmerCard);
		DEFINE_CARD(CHellkiteIgniterCard);
		DEFINE_CARD(CHeroOfBladeholdCard);
		DEFINE_CARD(CHeroOfOxidRidgeCard);
		DEFINE_CARD(CHexplateGolemCard);
		DEFINE_CARD(CHorrifyingRevelationCard);
		DEFINE_CARD(CIchorWellspringCard);
		DEFINE_CARD(CInkmothNexusCard);
		DEFINE_CARD(CIntoTheCoreCard);
		DEFINE_CARD(CKothsCourierCard);
		DEFINE_CARD(CKuldothaFlamefiendCard);
		DEFINE_CARD(CKuldothaRingleaderCard);
		DEFINE_CARD(CLeadTheStampedeCard);
		DEFINE_CARD(CLeoninRelicWarderCard);
		DEFINE_CARD(CLoxodonPartisanCard);
		DEFINE_CARD(CLumengridGargoyleCard);
		DEFINE_CARD(CMagneticMineCard);
		DEFINE_CARD(CMassacreWurmCard);
		DEFINE_CARD(CMastersCallCard);
		DEFINE_CARD(CMelirasKeepersCard);
		DEFINE_CARD(CMetallicMasteryCard);
		DEFINE_CARD(CMirranCrusaderCard);
		DEFINE_CARD(CMirranMettleCard);
		DEFINE_CARD(CMirranSpyCard);
		DEFINE_CARD(CMirrorworksCard);
		DEFINE_CARD(CMitoticManipulationCard);
		DEFINE_CARD(CMorbidPlunderCard);
		DEFINE_CARD(CMortarpodCard);
		DEFINE_CARD(CMyrTurbineCard);
		DEFINE_CARD(CMyrSireCard);
		DEFINE_CARD(CNestedGhoulCard);
		DEFINE_CARD(CNeurokCommandoCard);
		DEFINE_CARD(COculusCard);
		DEFINE_CARD(COgreResisterCard);
		DEFINE_CARD(CPeaceStriderCard);
		DEFINE_CARD(CPhyresisCard);
		DEFINE_CARD(CPhyrexianRebirthCard);
		DEFINE_CARD(CPhyrexianCrusaderCard);
		DEFINE_CARD(CPhyrexianDigesterCard);
		DEFINE_CARD(CPhyrexianHydraCard);
		DEFINE_CARD(CPhyrexianJuggernautCard);
		DEFINE_CARD(CPhyrexianRevokerCard);
		DEFINE_CARD(CPhyrexianVatmotherCard);
		DEFINE_CARD(CPierceStriderCard);
		DEFINE_CARD(CPistonSledgeCard);
		DEFINE_CARD(CPistusStrikeCard);
		DEFINE_CARD(CPlaguemawBeastCard);
		DEFINE_CARD(CPlagueMyrCard);
		DEFINE_CARD(CPraetorsCounselCard);
		DEFINE_CARD(CPriestsOfNornCard);
		DEFINE_CARD(CPsychosisCrawlerCard);
		DEFINE_CARD(CQuicksilverGeyserCard);
		DEFINE_CARD(CQuilledSlagwurmCard);
		DEFINE_CARD(CRallyTheForcesCard);
		DEFINE_CARD(CRazorfieldRhinoCard);
		DEFINE_CARD(CRedSunsZenithCard);
		DEFINE_CARD(CRotWolfCard);
		DEFINE_CARD(CRustedSlasherCard);
		DEFINE_CARD(CSangromancerCard);
		DEFINE_CARD(CScourgeServantCard);
		DEFINE_CARD(CSepticRatsCard);
		DEFINE_CARD(CSerumRakerCard);
		DEFINE_CARD(CShimmerMyrCard);
		DEFINE_CARD(CShriekhornCard);
		DEFINE_CARD(CSignalPestCard);
		DEFINE_CARD(CSilverskinArmorCard);
		DEFINE_CARD(CSkinwingCard);
		DEFINE_CARD(CSlagstormCard);
		DEFINE_CARD(CSphereOfTheSunsCard);
		DEFINE_CARD(CSpireSerpentCard);
		DEFINE_CARD(CSpinEngineCard);
		DEFINE_CARD(CSpineOfIshSahCard);
		DEFINE_CARD(CSpiralingDuelistCard);
		DEFINE_CARD(CSpreadTheSicknessCard);
		DEFINE_CARD(CSteelSabotageCard);
		DEFINE_CARD(CStrandwalkerCard);
		DEFINE_CARD(CSwordOfFeastAndFamineCard);
		DEFINE_CARD(CTangleHulkCard);
		DEFINE_CARD(CTangleMantisCard);
		DEFINE_CARD(CTezzeretAgentOfBolasCard);
		DEFINE_CARD(CThopterAssemblyCard);
		DEFINE_CARD(CThrunTheLastTrollCard);
		DEFINE_CARD(CTineShrikeCard);
		DEFINE_CARD(CTitanForgeCard);
		DEFINE_CARD(CTreasureMageCard);
		DEFINE_CARD(CTurnTheTideCard);
		DEFINE_CARD(CUnnaturalPredationCard);
		DEFINE_CARD(CVedalkenAnatomistCard);
		DEFINE_CARD(CVedalkenInfuserCard);
		DEFINE_CARD(CVictorysHeraldCard);
		DEFINE_CARD(CViridianClawCard);
		DEFINE_CARD(CViridianCorrupterCard);
		DEFINE_CARD(CViridianEmissaryCard);
		DEFINE_CARD(CVirulentWoundCard);
		DEFINE_CARD(CVivisectionCard);
		DEFINE_CARD(CWhiteSunsZenithCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CPeaceStriderCard::CPeaceStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Peace Strider"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(3), Life(3))
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
CPierceStriderCard::CPierceStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pierce Strider"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianCrusaderCard::CPhyrexianCrusaderCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Phyrexian Crusader"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CMirranCrusaderCard::CMirranCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirran Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}
//____________________________________________________________________________
//
CThopterAssemblyCard::CThopterAssemblyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thopter Assembly"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("6"), Power(5), Life(5))
		, m_CardFilter(_T("Thopter card"), _T("Thopter cards"), new CreatureTypeComparer(CREATURE_TYPE(Thopter), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThopterAssemblyCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThopterAssemblyCard::BeforeResolution));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Thopter C"), 2710 , 5));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));		

		AddAbility(cpAbility.GetPointer());
	}
}
bool CThopterAssemblyCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0 && GetZone()->GetZoneId() == ZoneId::Battlefield);
}

bool CThopterAssemblyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0);
}

//____________________________________________________________________________
//
CGlissaTheTraitorCard::CGlissaTheTraitorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Glissa, the Traitor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Elf), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);

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
CHeroOfBladeholdCard::CHeroOfBladeholdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hero of Bladehold"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

		cpAbility->SetAbilityName(_T("Battle Cry ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CAttackingTokenCreationAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTokenName(_T("Soldier J"));
		cpAbility->SetTokenNumber(2);
		cpAbility->SetTokenuID(2976);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMastersCallCard::CMastersCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Master's Call"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			_T("Myr B"), 62008,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPlagueMyrCard::CPlagueMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Plague Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		_T("1"))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CSignalPestCard::CSignalPestCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Signal Pest"), CardType::_ArtifactCreature, CREATURE_TYPE(Pest), nID,
		_T("1"), Power(0), Life(1),
		&m_CardFilter) //can't be blocked except by "this"

	, m_CardFilter(_T("a creature with flying or reach"), _T("creatures with flying or reach"), new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Reach, false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->SetAbilityName(_T("Battle Cry ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAccorderPaladinCard::CAccorderPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Accorder Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->SetAbilityName(_T("Battle Cry ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRazorfieldRhinoCard::CRazorfieldRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razorfield Rhino"), CardType::_ArtifactCreature, CREATURE_TYPE(Rhino), nID,
		_T("6"), Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->SetConditionValue(3);		

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPriestsOfNornCard::CPriestsOfNornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Priests of Norn"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCardKeyword()->AddInfect(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CSepticRatsCard::CSepticRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Septic Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSepticRatsCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSepticRatsCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSepticRatsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												AttackSubject attacked) const
{
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());

	return (opponent->GetPoisonCounters() > 0);
}

bool CSepticRatsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());

	return (opponent->GetPoisonCounters() > 0);
}

//____________________________________________________________________________
//
CThrunTheLastTrollCard::CThrunTheLastTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Thrun, the Last Troll"), CardType::_LegendaryCreature, CREATURE_TYPE2(Troll, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
		_T("1") GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CShimmerMyrCard::CShimmerMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shimmer Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Artifact, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKuldothaFlamefiendCard::CKuldothaFlamefiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kuldotha Flamefiend"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDistributeValues();
	cpAbility->SetValueToDistribute(-4);

	cpAbility->SetSacrificeResolutionCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViridianCorrupterCard::CViridianCorrupterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Corrupter"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);

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
CGreenSunsZenithCard::CGreenSunsZenithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Green Sun's Zenith"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT));

		cpSpell->SetAbilityText(_T("Search your library for a green creature card with converted mana cost X or less. Casts"));
		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGreenSunsZenithCard::BeforeResolution));

		cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
			TRUE,	// owner's zone?
			CardPlacement::Top, 
			TRUE);	// shuffle?

		AddSpell(cpSpell.GetPointer());
	}
}

bool CGreenSunsZenithCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(n));

	CPlayerSearchModifier modifier(
			GetController(),
			MinimumValue(0),
			MaximumValue(1),
			GetController(),
			ZoneId::Library,
			&m_CardFilter_temp,
			ZoneId::Battlefield,
			FALSE,
			CardPlacement::Top,
			FALSE,
			TRUE);

	modifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CFlensermiteCard::CFlensermiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flensermite"), CardType::Creature, CREATURE_TYPE(Gremlin), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CConsecratedSphinxCard::CConsecratedSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Consecrated Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetDrawCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFangrenMarauderCard::CFangrenMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fangren Marauder"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMirranSpyCard::CMirranSpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mirran Spy"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMirranSpyCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CMirranSpyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();

	if (pTarget->GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CPhyresisCard::CPhyresisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phyresis"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::Infect));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianHydraCard::CPhyrexianHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCardKeyword()->AddInfect(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianHydraCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhyrexianHydraCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhyrexianHydraCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CCreatureCard* pCreature, Damage damage, int effect_index) const
{
	triggerContext.m_pCreature = pCreature;
	triggerContext.m_LifeModifier.SetLifeDelta(-damage.m_nLifeDelta);
	return (effect_index==1);
}

bool CPhyrexianHydraCard::BeforeResolution(CPhyrexianHydraCard::TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("-1/-1"), +GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta()), false);
	pModifier.ApplyTo(triggerContext.m_pCreature);
	triggerContext.m_LifeModifier.SetLifeDelta(Life(0));

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CPhyrexianRevokerCard::CPhyrexianRevokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Revoker"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("2"), Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(CCardFilter::GetFilter(_T("non-lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianVatmotherCard::CPhyrexianVatmotherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Vatmother"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(5))
{
	GetCardKeyword()->AddInfect(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CPoisonModifier(GetGame(), 1, FALSE, FALSE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteelSabotageCard::CSteelSabotageCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Steel Sabotage"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlightsteelColossusCard::CBlightsteelColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blightsteel Colossus"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("12"), Power(11), Life(11))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);
	GetCardKeyword()->AddInfect(FALSE);

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
}

void CBlightsteelColossusCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
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
CSphereOfTheSunsCard::CSphereOfTheSunsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sphere of the Suns"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}
//_________________________________________________________________________________
//
CVedalkenInfuserCard::CVedalkenInfuserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Infuser"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVictorysHeraldCard::CVictorysHeraldCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Victory's Herald"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrushCard::CCrushCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Crush"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
}

//____________________________________________________________________________
//
CGoblinWardriverCard::CGoblinWardriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Wardriver"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->SetAbilityName(_T("Battle Cry ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeadTheStampedeCard::CLeadTheStampedeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lead the Stampede"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(5), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("creatures")));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLeoninRelicWarderCard::CLeoninRelicWarderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Relic-Warder"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLeoninRelicWarderCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLeoninRelicWarderCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLeoninRelicWarderCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLeoninRelicWarderCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLeoninRelicWarderCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLeoninRelicWarderCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CLeoninRelicWarderCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CLeoninRelicWarderCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CLeoninRelicWarderCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CLeoninRelicWarderCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CLeoninRelicWarderCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;
		
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);
	}
	
	return true;
}

void CLeoninRelicWarderCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CVedalkenAnatomistCard::CVedalkenAnatomistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Anatomist"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTreasureMageCard::CTreasureMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treasure Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIntoTheCoreCard::CIntoTheCoreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Into the Core"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpiralingDuelistCard::CSpiralingDuelistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiraling Duelist"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->SetConditionValue(3);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTitanForgeCard::CTitanForgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Titan Forge"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("3")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Golem C"), 2911,
			1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CViridianEmissaryCard::CViridianEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Emissary"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVivisectionCard::CVivisectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vivisection"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT, 3));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInkmothNexusCard::CInkmothNexusCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Inkmoth Nexus"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1"),
				_T("Blinkmoth AB"), 64019));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlackSunsZenithCard::CBlackSunsZenithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Black Sun's Zenith"), CardType::Sorcery, nID)

{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetAbilityText(_T("Put X -1/-1 counters on each creature. Casts"));
	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, TRUE);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlackSunsZenithCard::BeforeResolution));

	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

bool CBlackSunsZenithCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, true));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("-1/-1"), +n)));

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CBlueSunsZenithCard::CBlueSunsZenithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blue Sun's Zenith"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCoreProwlerCard::CCoreProwlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Core Prowler"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("4"), Power(2), Life(2))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCoreProwlerCard::OnResolutionCompleted1))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CCoreProwlerCard::OnProliferateSelected))
{
	GetCardKeyword()->AddInfect(FALSE);

	typedef
		TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CCoreProwlerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(target);	

	std::vector<SelectionEntry> entries;

	if (opponent->GetPoisonCounters() > 0) 
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("choose opponent to put a poison counter"));		
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && !target->IsComputer())
	{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("choose yourself to put a poison counter"));		
			entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && opponent->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("choose yourself and opponent to put poison counters"));		
		entries.push_back(selectionEntry);
	}

	SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("don't select players"));		
		entries.push_back(selectionEntry);

	m_ProliferateSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());
}

void CCoreProwlerCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int i = (int)it->dwContext;
			if (i == 1)
			{
				CPoisonModifier pModifier = CPoisonModifier(m_pGame, 1);
				pModifier.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			}
			else
				if (i == 2)
				{
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(pSelectionPlayer);
				}
				else
				if(i==3)
				{
					CPoisonModifier pModifier = CPoisonModifier(m_pGame,1);
					pModifier.ApplyTo(pSelectionPlayer);
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
				}
			return;
		}
}

//____________________________________________________________________________
//
CSangromancerCard::CSangromancerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sangromancer"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScourgeServantCard::CScourgeServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scourge Servant"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CSpineOfIshSahCard::CSpineOfIshSahCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spine of Ish Sah"), CardType::Artifact, nID, 
		_T("7"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoForTheThroatCard::CGoForTheThroatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Go for the Throat"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
}

//____________________________________________________________________________
//
CNeurokCommandoCard::CNeurokCommandoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Neurok Commando"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);

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
CHellkiteIgniterCard::CHellkiteIgniterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hellkite Igniter"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				 _T("1") RED_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHellkiteIgniterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHellkiteIgniterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Artifact, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CPowerModifier pModifier = CPowerModifier(Power(nDomainCount));
	pModifier.ApplyTo((CCreatureCard*)this);
	return true;
}

//____________________________________________________________________________
//
CIchorWellspringCard::CIchorWellspringCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ichor Wellspring"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlagstormCard::CSlagstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Slagstorm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetAbilityText(_T("Deal 3 damage to each creature. Casts"));

	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			Life(-3),
			FALSE_CARD_COMPARER,
			TRUE,
			PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->SetAbilityText(_T("Deal 3 damage to each player. Casts"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCreepingCorrosionCard::CCreepingCorrosionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Creeping Corrosion"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHeroOfOxidRidgeCard::CHeroOfOxidRidgeCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Hero of Oxid Ridge"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

		cpAbility->SetAbilityName(_T("Battle Cry ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeroOfOxidRidgeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	/* {
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Hero of Oxid Ridge Effect"), 2917, 1, FALSE, ZoneId::_Effects));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	} */
}

bool CHeroOfOxidRidgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Power1OrLessCantBlock);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
		pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
	}
	return true;
}

//____________________________________________________________________________
//
CKothsCourierCard::CKothsCourierCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Koth's Courier"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CPsychosisCrawlerCard::CPsychosisCrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Psychosis Crawler"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("5"), Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoreVassalCard::CGoreVassalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gore Vassal"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGoreVassalCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGoreVassalCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if ((pCreature->GetToughness() > Life(0)) && bResult)
	{
		CRegenerateModifier pModifier = CRegenerateModifier();

		pModifier.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CSwordOfFeastAndFamineCard::CSwordOfFeastAndFamineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Feast and Famine"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSwordOfFeastAndFamineCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier1);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		AddAbility(cpAbility.GetPointer());
	}
}
void CSwordOfFeastAndFamineCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(0)));

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CFlayerHuskCard::CFlayerHuskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flayer Husk"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CFlayerHuskCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Germ"), TOKEN_ID_BY_NAME, 1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
}

void CFlayerHuskCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// Find the token we just created and attach equipment

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter.GetIncluded(*pBattlefield, tokens) && pAbilityAction->GetAbility()->GetCard()->GetZoneId() == ZoneId::Battlefield)
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)tokens.GetAt(0));
			}
		}
	}
}

//____________________________________________________________________________
//
CBonehoardCard::CBonehoardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bonehoard"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CBonehoardCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CBonehoardCard::CreateEquipmentAbility)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Germ"), TOKEN_ID_BY_NAME, 1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
}

counted_ptr<CAbility> CBonehoardCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	cpEquipAbility->SetListenToAllPlayersZones();

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

void CBonehoardCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// Find the token we just created and attach equipment

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter.GetIncluded(*pBattlefield, tokens) && pAbilityAction->GetAbility()->GetCard()->GetZoneId() == ZoneId::Battlefield)
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)tokens.GetAt(0));
			}
		}
	}
}

//____________________________________________________________________________
//
CTezzeretAgentOfBolasCard::CTezzeretAgentOfBolasCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Tezzeret, Agent of Bolas"), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Tezzeret, 3)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 5, CZoneModifier::RoleType::PrimaryPlayer);

		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("artifact cards")), // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally reorder the last one to the bottom of library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);
		
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		cpAbility->SetAbilityText(_T("Look at the top five cards of your library. Activates"));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->SetAbilityText(_T("Target artifact becomes a 5/5 artifact creature. Activates"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretAgentOfBolasCard::BeforeResolution1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-0),
				PreventableType::NotPreventable));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretAgentOfBolasCard::BeforeResolution2));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -4);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTezzeretAgentOfBolasCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(5));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetReplacement(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

	CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(5));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetReplacement(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

	CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier(_T("Animated Artifact A"), 64000, GetController());	

	if (pCard->GetCardType().IsCreature())			
	{
		pPowerModifier->ApplyTo((CCreatureCard*)pCard);
		pLifeModifier->ApplyTo((CCreatureCard*)pCard);
	}
	else
	{
		pModifier->ApplyTo(pCard);				
	}

	return true;
}

bool CTezzeretAgentOfBolasCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int n = 2 * CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pContInplay->GetCardContainer());

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetIsAlsoA() && pCard->GetCardType().IsArtifact())
		{
			if (pCard->GetIsAlsoA()->GetCardType().IsArtifact())
			n = n - 2;
		}
	}

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(-n), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	CLifeModifier pmodifier2 = CLifeModifier(
			Life(+n), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pmodifier1.ApplyTo(target);
	pmodifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CPhyrexianJuggernautCard::CPhyrexianJuggernautCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Juggernaut"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("6"), Power(5), Life(5))
{
	GetCardKeyword()->AddInfect(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CWhiteSunsZenithCard::CWhiteSunsZenithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("White Sun's Zenith"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Cat C"), 2913, 0));

	cpSpell->SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDecimatorWebCard::CDecimatorWebCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Decimator Web"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("4"), 6));
	ATLASSERT(cpAbility);

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->AddTapCost();

	cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
	cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CPoisonModifier(GetGame(), +1));
	//cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CPoisonModifier(GetGame(), 1, FALSE, TRUE));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGlissasCourierCard::CGlissasCourierCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Glissa's Courier"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CArdentRecruitCard::CArdentRecruitCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ardent Recruit"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CPhyrexianDigesterCard::CPhyrexianDigesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Digester"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CSkinwingCard::CSkinwingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skinwing"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CSkinwingCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("6")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Germ"), TOKEN_ID_BY_NAME, 1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
}

void CSkinwingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// Find the token we just created and attach equipment

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter.GetIncluded(*pBattlefield, tokens) && pAbilityAction->GetAbility()->GetCard()->GetZoneId() == ZoneId::Battlefield)
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)tokens.GetAt(0));
			}
		}
	}
}

//____________________________________________________________________________
//
CPraetorsCounselCard::CPraetorsCounselCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Praetor's Counsel"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Hand, TRUE, MoveType::Others, ZoneId::Graveyard));

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Praetor's Counsel Effect"), 61027, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlightwidowCard::CBlightwidowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blightwidow"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
COculusCard::COculusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oculus"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMyrTurbineCard::CMyrTurbineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Myr Turbine"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)

	, m_CardFilter1(_T("a Myr card"), _T("Myr cards"), new CreatureTypeComparer(CREATURE_TYPE(Myr), false))
{
	m_CardFilter2.SetFilterName(_T("a Myr creature card"), _T("Myr creature cards"));
	m_CardFilter2.AddComparer(new AnyCreatureComparer);
	m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Myr), false));

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Myr B"), 62008,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				&m_CardFilter2,
				ZoneId::Battlefield, TRUE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBurnTheImpureCard::CBurnTheImpureCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Burn the Impure"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBurnTheImpureCard::BeforeResolution1));
}

bool CBurnTheImpureCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	CPlayer* pController = pCard->GetController();
	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (pCard->GetZone()->GetZoneId() != ZoneId::Battlefield) return false;

	if (pCard->GetCardKeyword()->HasInfect()) pModifier.ApplyTo(pController); 

	return true;
}

//____________________________________________________________________________
//
CMirranMettleCard::CMirranMettleCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Mirran Mettle"), CardType::Instant, nID, AbilityType::Instant,
	    GREEN_MANA_TEXT,
		Power(2), Life(2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMirranMettleCard::BeforeResolution));
}

bool CMirranMettleCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 2)
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 4;
		Context.nValue2 = 4;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return TRUE;
	}
	return TRUE;
}

//____________________________________________________________________________
//
CPlaguemawBeastCard::CPlaguemawBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plaguemaw Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CPlaguemawBeastCard::OnResolutionCompleted1))
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CPlaguemawBeastCard::OnProliferateSelected))
{	
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		cpAbility->SetAbilityName(_T("Proliferate."));
		cpAbility->SetAbilityText(_T("Proliferate."));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());			
	}
	{
	typedef
		TTriggeredSubjectAbility< CTriggeredProliferateAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);
		
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}
void CPlaguemawBeastCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(target);	

	std::vector<SelectionEntry> entries;

	if (opponent->GetPoisonCounters() > 0) 
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("choose opponent to put a poison counter"));		
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && !target->IsComputer())
	{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("choose yourself to put a poison counter"));		
			entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && opponent->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("choose yourself and opponent to put poison counters"));		
		entries.push_back(selectionEntry);
	}
	//else return;

	SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("don't select players"));		
		entries.push_back(selectionEntry);

	m_ProliferateSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());
}
void CPlaguemawBeastCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int i = (int)it->dwContext;
			if (i == 1)
			{
				CPoisonModifier pModifier = CPoisonModifier(m_pGame, 1);
				pModifier.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			}
			else
				if (i == 2)
				{
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(pSelectionPlayer);
				}
				else
				if(i==3)
				{
					CPoisonModifier pModifier = CPoisonModifier(m_pGame,1);
					pModifier.ApplyTo(pSelectionPlayer);
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
				}
			return;
		}
}

//____________________________________________________________________________
//
CMirrorworksCard::CMirrorworksCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirrorworks"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->GetCardModifiers().push_back(new CCardCopyModifier(GetGame(), this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMirrorworksCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	cpAbility->SetResolutionCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}

bool CMirrorworksCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CContestedWarZoneCard::CContestedWarZoneCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Contested War Zone"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1"),
				Power(+1), Life(+0),
				new AttackingCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		//cpAbility->GetMoveCardModifier().SetToPlayer(m_pGame->GetNextPlayer(GetController()));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CContestedWarZoneCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CContestedWarZoneCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CContestedWarZoneCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) 
{
	triggerContext.m_MoveCardModifier.SetToPlayer(pCard->GetController()); 
	triggerContext.m_pCard = pCard;

	return true;
}

bool CContestedWarZoneCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
//	SetControlledBy(((CCard*)triggerContext.m_pCard)->GetInstanceID());
	triggerContext.m_pCard = this;

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CQuilledSlagwurmCard::CQuilledSlagwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quilled Slagwurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
}

//____________________________________________________________________________
//
CConcussiveBoltCard::CConcussiveBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Concussive Bolt"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CConcussiveBoltCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CConcussiveBoltCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = m_pGame->GetNextPlayer(pAbilityAction->GetAssociatedPlayer());

	if (bResult && CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 2)
	{
		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::UnblockableCreatures);	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

		pmodifier->LinkPlayerModifier(pModifier2);

		pmodifier->ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CBanishmentDecreeCard::CBanishmentDecreeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Banishment Decree"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CBlisterstickShamanCard::CBlisterstickShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blisterstick Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CPistonSledgeCard::CPistonSledgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Piston Sledge"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPistonSledgeCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPistonSledgeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetAssociatedCard();
	if (pCard->GetCardType().IsCreature())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)pCard);
			}
		}
	}
	return true;
}

//____________________________________________________________________________
//
CSerumRakerCard::CSerumRakerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serum Raker"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDiscardCount(1);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTineShrikeCard::CTineShrikeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tine Shrike"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CShriekhornCard::CShriekhornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shriekhorn"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 2));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMagneticMineCard::CMagneticMineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magnetic Mine"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);	// From zone's controller
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGustSkimmerCard::CGustSkimmerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Gust-Skimmer"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("2"), Power(2), Life(1),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CHexplateGolemCard::CHexplateGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hexplate Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(5), Life(7))
{
}

//____________________________________________________________________________
//
CSpireSerpentCard::CSpireSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spire Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->SetConditionValue(3);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COgreResisterCard::COgreResisterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Resister"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CLumengridGargoyleCard::CLumengridGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lumengrid Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("6"), Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CFleshEaterImpCard::CFleshEaterImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flesh-Eater Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);

	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+1), Life(+1)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGnathosaurCard::CGnathosaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gnathosaur"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0), CreatureKeyword::Trample));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CMyrSireCard::CMyrSireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Sire"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Myr B"), 62008, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnnaturalPredationCard::CUnnaturalPredationCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Unnatural Predation"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+1), Life(+1), 
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTurnTheTideCard::CTurnTheTideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Turn the Tide"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-2), Life(+0), CreatureKeyword::Null));

	cpSpell->SetAffectOpponentCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRallyTheForcesCard::CRallyTheForcesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rally the Forces"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+1), Life(+0), CreatureKeyword::FirstStrike));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonPartisanCard::CLoxodonPartisanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Partisan"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->SetAbilityName(_T("Battle Cry ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChokingFumesCard::CChokingFumesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Choking Fumes"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChokingFumesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CChokingFumesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AttackingCreatureComparer);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("-1/-1"), +1)));

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CDrossRipperCard::CDrossRipperCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dross Ripper"), CardType::_ArtifactCreature, CREATURE_TYPE(Hound), nID,
		_T("4"), Power(3), Life(3),
		_T("2") BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CFranticSalvageCard::CFranticSalvageCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Frantic Salvage"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CFranticSalvageCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT, 1));

		cpSpell->SetAbilityText(_T("Choose zero targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CFranticSalvageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CDrawCardModifier pmodifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pmodifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CQuicksilverGeyserCard::CQuicksilverGeyserCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Quicksilver Geyser"), CardType::Instant, nID,
		_T("4") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CRustedSlasherCard::CRustedSlasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rusted Slasher"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("4"), Power(4), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCausticHoundCard::CCausticHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caustic Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCopperCarapaceCard::CCopperCarapaceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Copper Carapace"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTangleHulkCard::CTangleHulkCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Tangle Hulk"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("5"), Power(5), Life(3),
		_T("2") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CNestedGhoulCard::CNestedGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nested Ghoul"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Zombie G"), 2889, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPistusStrikeCard::CPistusStrikeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Pistus Strike"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CPistusStrikeCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	//m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CPoisonModifier(GetGame(), +1));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CPistusStrikeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CPoisonModifier pModifier = CPoisonModifier(m_pGame, 1);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CBladedSentinelCard::CBladedSentinelCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Bladed Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(4),
		WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CMortarpodCard::CMortarpodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mortarpod"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMortarpodCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMortarpodCard::CreateEquipmentAbility)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Germ"), TOKEN_ID_BY_NAME, 1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
}

counted_ptr<CAbility> CMortarpodCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpEquipAbility->AddSacrificeCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

void CMortarpodCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// Find the token we just created and attach equipment

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter.GetIncluded(*pBattlefield, tokens) && pAbilityAction->GetAbility()->GetCard()->GetZoneId() == ZoneId::Battlefield)
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)tokens.GetAt(0));
			}
		}
	}
}

//____________________________________________________________________________
//
CMassacreWurmCard::CMassacreWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Massacre Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);	// From zone's controller

		cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTangleMantisCard::CTangleMantisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tangle Mantis"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CRotWolfCard::CRotWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rot Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKuldothaRingleaderCard::CKuldothaRingleaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kuldotha Ringleader"), CardType::Creature, CREATURE_TYPE2(Giant, Berserker), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->SetAbilityName(_T("Battle Cry ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelPlateCard::CDarksteelPlateCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Plate"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Indestructible);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHorrifyingRevelationCard::CHorrifyingRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Horrifying Revelation"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	CZoneModifier* pmodifier = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
	CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);

	pmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pmodifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStrandwalkerCard::CStrandwalkerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Strandwalker"), CardType::Artifact | CardType::Equipment, nID, 
		_T("5"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CStrandwalkerCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+4), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Reach);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Germ"), TOKEN_ID_BY_NAME, 1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->FlagTokens(TRUE, true);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell
	}
}

void CStrandwalkerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// Find the token we just created and attach equipment

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter.GetIncluded(*pBattlefield, tokens) && pAbilityAction->GetAbility()->GetCard()->GetZoneId() == ZoneId::Battlefield)
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			{
				pEquipAbility->Unequip();
				pEquipAbility->Equip((CCreatureCard*)tokens.GetAt(0));
			}
		}
	}
}

//____________________________________________________________________________
//
CMorbidPlunderCard::CMorbidPlunderCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Morbid Plunder"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CViridianClawCard::CViridianClawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Viridian Claw"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorruptedConscienceCard::CCorruptedConscienceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Corrupted Conscience"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlPumpEnchant> cpSpell(
		::CreateObject<CControlPumpEnchant>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(0), Life(0),
			CardKeyword::Infect));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMitoticManipulationCard::CMitoticManipulationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mitotic Manipulation"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->SetAbilityText(_T("Look at the top seven cards of your library. Casts"));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMitoticManipulationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMitoticManipulationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pCont = pAction->GetController();
	CPlayer* pOpp = m_pGame->GetNextPlayer(pAction->GetController());
	CZone* pContInPlay = pCont->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInPlay = pOpp->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;

	for (int i = 0; i < pContInPlay->GetSize(); ++i)
	{
		CCard* pCard = pContInPlay->GetAt(i);
		m_CardFilter_temp.AddChildFilter(new CCardFilter(new CardNameComparer(pCard->GetPrintedCardName())));	
	}

	for (int i = 0; i < pOppInPlay->GetSize(); ++i)
	{
		CCard* pCard = pOppInPlay->GetAt(i);
		m_CardFilter_temp.AddChildFilter(new CCardFilter(new CardNameComparer(pCard->GetPrintedCardName())));	
	}

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 7, CZoneModifier::RoleType::PrimaryPlayer);

	pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		&m_CardFilter_temp, // any cards
		ZoneId::Battlefield, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::NotApplicable, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Bottom);

	pModifier->ApplyTo(pCont);

	return true;
}

//____________________________________________________________________________
//
CDistantMemoriesCard::CDistantMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Distant Memories"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDistantMemoriesSearchLibrarySpell> cpSpell(
			::CreateObject<CDistantMemoriesSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				CCardFilter::GetFilter(_T("cards")), 
				ZoneId::Exile, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(1), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
 	}
}
//____________________________________________________________________________
//
CSilverskinArmorCard::CSilverskinArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Silverskin Armor"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"),
			new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCardTypeModifier* pModifier1 = new CCardTypeModifier(CardType::Artifact);
		
	cpAbility->AddCardModifier(pModifier1);	

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CSpreadTheSicknessCard::CSpreadTheSicknessCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Spread the Sickness"), CardType::Sorcery, nID,
	_T("4") BLACK_MANA_TEXT, AbilityType::Sorcery,
	new AnyCreatureComparer,
	ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
	&CSpreadTheSicknessCard::OnResolutionCompleted))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CSpreadTheSicknessCard::OnProliferateSelected))
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

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
			TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
		cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CSpreadTheSicknessCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(target); 

	std::vector<SelectionEntry> entries;

	if (opponent->GetPoisonCounters() > 0) 
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("choose opponent to put a poison counter")); 
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("choose yourself to put a poison counter")); 
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && opponent->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("choose yourself and opponent to put poison counters")); 
		entries.push_back(selectionEntry);
	}

	SelectionEntry selectionEntry;

	selectionEntry.dwContext = 0;
	selectionEntry.strText.Format(_T("don't select players")); 
	entries.push_back(selectionEntry);

	if (bResult) m_ProliferateSelection.AddSelectionRequest(
		entries, 1, 1, NULL, GetController());
}

void CSpreadTheSicknessCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int i = (int)it->dwContext;
			if (i == 1)
			{
				CPoisonModifier pModifier = CPoisonModifier(m_pGame, 1);
				pModifier.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			}
			else
				if (i == 2)
				{
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(pSelectionPlayer);
				}
				else
					if(i==3)
					{
						CPoisonModifier pModifier = CPoisonModifier(m_pGame,1);
						pModifier.ApplyTo(pSelectionPlayer);
						CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
						pModifier1.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
					}
					return;
		}
}

//____________________________________________________________________________
//
CFuelfortheCauseCard::CFuelfortheCauseCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Fuel for the Cause"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
	&CFuelfortheCauseCard::OnResolutionCompleted))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CFuelfortheCauseCard::OnProliferateSelected))
{
	m_pCounterSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

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
			TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
		cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CFuelfortheCauseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(target); 

	std::vector<SelectionEntry> entries;

	if (opponent->GetPoisonCounters() > 0) 
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("choose opponent to put a poison counter")); 
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("choose yourself to put a poison counter")); 
		entries.push_back(selectionEntry);
	}
	if(target->GetPoisonCounters() > 0 && opponent->GetPoisonCounters() > 0 && !target->IsComputer())
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("choose yourself and opponent to put poison counters")); 
		entries.push_back(selectionEntry);
	}

	SelectionEntry selectionEntry;

	selectionEntry.dwContext = 0;
	selectionEntry.strText.Format(_T("don't select players")); 
	entries.push_back(selectionEntry);

	if (bResult) m_ProliferateSelection.AddSelectionRequest(
		entries, 1, 1, NULL, GetController());
}

void CFuelfortheCauseCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int i = (int)it->dwContext;
			if (i == 1)
			{
				CPoisonModifier pModifier = CPoisonModifier(m_pGame, 1);
				pModifier.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			}
			else
				if (i == 2)
				{
					CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
					pModifier1.ApplyTo(pSelectionPlayer);
				}
				else
					if(i==3)
					{
						CPoisonModifier pModifier = CPoisonModifier(m_pGame,1);
						pModifier.ApplyTo(pSelectionPlayer);
						CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
						pModifier1.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
					}
					return;
		}
}


//____________________________________________________________________________
//
CRedSunsZenithCard::CRedSunsZenithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Red Sun's Zenith"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(0), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::NonCombatDamage | DamageType::SpellDamage |  DamageType::ToExileDamage);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetToZoneIfSuccess(ZoneId::Library, 
		TRUE,	// owner's zone?
		CardPlacement::Top, 
		TRUE);	// shuffle?

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CBrassSquireCard::CBrassSquireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brass Squire"), CardType::Creature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(1), Life(3))
{
	{
	counted_ptr<CActivatedAbility<CEquipSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CEquipSpell>>(this,
			_T("")));

	cpAbility->GetTargeting1()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting2()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMetallicMasteryCard::CMetallicMasteryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Metallic Mastery"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CMetallicMasteryCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CMetallicMasteryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier;
	pModifier.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier.GetModifier().SetOneTurnOnly(TRUE);

	if (target->GetCardType().IsCreature()) pModifier.ApplyTo((CCreatureCard*)target);

	CCardKeywordModifier pModifier1;
	pModifier1.GetModifier().SetToAdd(CardKeyword::CardHaste);
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);

	pModifier1.ApplyTo(target);

	CCardOrientationModifier pModifier3 = CCardOrientationModifier(0);

	pModifier3.ApplyTo(target);
}
//____________________________________________________________________________
//
CSpinEngineCard::CSpinEngineCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Spin Engine"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(3), Life(1), &m_CardFilter)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSpinEngineCard::OnResolutionCompleted))
	,m_WhenNodeChanged(this, NodeId::CleanupStep1, FALSE)
{
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CSpinEngineCard::OnNodeChanged));
	m_CardFilter.AddNegateComparer(new  ContainedinComparer(&m_AffectedCards));

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CSpinEngineCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	m_AffectedCards.AddCard(pAbilityAction->GetAssociatedCard(),CardPlacement::Top);
}
void CSpinEngineCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
}
//____________________________________________________________________________
//
CMelirasKeepersCard::CMelirasKeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Melira's Keepers"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddCantGetCounters(FALSE);
}

//____________________________________________________________________________
//
CPhyrexianRebirthCard::CPhyrexianRebirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phyrexian Rebirth"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CPhyrexianRebirthCard::OnResolutionCompleted))
	, m_nCards(0)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianRebirthCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CPhyrexianRebirthCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;
	m_nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CPhyrexianRebirthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();

	CZone* pInplay;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Horror C"), 62027));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62027); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Horror C")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(m_nCards));
		pCreature->SetPrintedToughness(Life(m_nCards));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}
}

//____________________________________________________________________________
//
CVirulentWoundCard::CVirulentWoundCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Virulent Wound"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVirulentWoundCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CVirulentWoundCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("-1/-1"), +1);
		pModifier1.ApplyTo(pTarget);

		pSubjects.AddCard(pTarget, CardPlacement::Top);
	}

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("Virulent Wound Effect"), 61055, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGruesomeEncoreCard::CGruesomeEncoreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gruesome Encore"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGruesomeEncoreCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGruesomeEncoreCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
	pModifier1.ApplyTo(pTarget);

	CReplacementKeywordModifier pModifier2 = CReplacementKeywordModifier();
		pModifier2.GetModifier().SetToAdd(ReplacementKeyword::PseudoUnearth);
		pModifier2.GetModifier().SetOneTurnOnly(FALSE);
	pModifier2.ApplyTo(pTarget);

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier3.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
