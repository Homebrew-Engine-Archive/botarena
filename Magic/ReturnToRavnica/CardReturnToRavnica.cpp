#include "stdafx.h"
#include "CardReturnToRavnica.h"

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
		
		DEFINE_CARD(CAbruptDecayCard);
		DEFINE_CARD(CAerialPredationCard);
		DEFINE_CARD(CAngelofSerenityCard);
		DEFINE_CARD(CAnnihilatingFireCard);
		DEFINE_CARD(CAquusSteedCard);
		DEFINE_CARD(CArchonOfTheTriumvirateCard);
		DEFINE_CARD(CArchweaverCard);
		DEFINE_CARD(CArmadaWurmCard);
		DEFINE_CARD(CArmoryGuardCard);
		DEFINE_CARD(CAshZealotCard);
		DEFINE_CARD(CAssassinsStrikeCard);
		DEFINE_CARD(CAugerSpreeCard);
		DEFINE_CARD(CAxebaneGuardianCard);
		DEFINE_CARD(CAxebaneStagCard);
		DEFINE_CARD(CAvengingArrowCard);
		DEFINE_CARD(CAzorsElocutorsCard);
		DEFINE_CARD(CAzoriusArresterCard);
		DEFINE_CARD(CAzoriusCharmCard);
		DEFINE_CARD(CAzoriusGuildgateCard);
		DEFINE_CARD(CAzoriusJusticiarCard);
		DEFINE_CARD(CAzoriusKeyruneCard);
		DEFINE_CARD(CBatterhornCard);
		DEFINE_CARD(CBazaarKrovodCard);
		DEFINE_CARD(CBellowsLizardCard);
		DEFINE_CARD(CBlistercoilWeirdCard);
		DEFINE_CARD(CBloodfrayGiantCard);
		DEFINE_CARD(CBlustersquallCard);
		DEFINE_CARD(CBrushstriderCard);
		DEFINE_CARD(CCallOfTheConclaveCard);
		DEFINE_CARD(CCarnivalHellsteedCard);
		DEFINE_CARD(CCatacombSlugCard);
		DEFINE_CARD(CCentaurHealerCard);
		DEFINE_CARD(CCentaursHeraldCard);
		DEFINE_CARD(CChaosImpsCard);
		DEFINE_CARD(CChemistersTrickCard);
		DEFINE_CARD(CChorusOfMightCard);
		DEFINE_CARD(CChromaticLanternCard);
		DEFINE_CARD(CCobblebruteCard);
		DEFINE_CARD(CCodexShredderCard);
		DEFINE_CARD(CCollectiveBlessingCard);
		DEFINE_CARD(CCommonBondCard);
		DEFINE_CARD(CConcordiaPegasusCard);
		DEFINE_CARD(CConjuredCurrencyCard);
		DEFINE_CARD(CCorpsejackMenaceCard);
		DEFINE_CARD(CCounterfluxCard);
		DEFINE_CARD(CCoursersAccordCard);
		DEFINE_CARD(CCrosstownCourierCard);
		DEFINE_CARD(CCryptbornHorrorCard);
		DEFINE_CARD(CCyclonicRiftCard);
		DEFINE_CARD(CDaggerdromeImpCard);
		DEFINE_CARD(CDarkRevenantCard);
		DEFINE_CARD(CDeadRevelerCard);
		DEFINE_CARD(CDeadbridgeGoliathCard);
		DEFINE_CARD(CDeathsPresenceCard);
		DEFINE_CARD(CDeathriteShamanCard);
		DEFINE_CARD(CDesecrationDemonCard);
		DEFINE_CARD(CDestroyTheEvidenceCard);
		DEFINE_CARD(CDetentionSphereCard);
		DEFINE_CARD(CDeviantGleeCard);
		DEFINE_CARD(CDoorkeeperCard);
		DEFINE_CARD(CDownsizeCard);
		DEFINE_CARD(CDrainpipeVerminCard);
		DEFINE_CARD(CDramaticRescueCard);
		DEFINE_CARD(CDreadboreCard);
		DEFINE_CARD(CDregManglerCard);
		DEFINE_CARD(CDruidsDeliveranceCard);
		DEFINE_CARD(CDrudgeBeetleCard);
		DEFINE_CARD(CDryadMilitantCard);
		DEFINE_CARD(CDynachargeCard);
		DEFINE_CARD(CElectrickeryCard);
		DEFINE_CARD(CEpicExperimentCard);
		DEFINE_CARD(CEssenceBacklashCard);
		DEFINE_CARD(CEtherealArmorCard);
		DEFINE_CARD(CExplosiveImpactCard);
		DEFINE_CARD(CEyesInTheSkiesCard);
		DEFINE_CARD(CFaerieImpostorCard);
		DEFINE_CARD(CFallOfTheGavelCard);
		DEFINE_CARD(CFencingAceCard);
		DEFINE_CARD(CFiremindsForesightCard);
		DEFINE_CARD(CFrostburnWeirdCard);
		DEFINE_CARD(CGatecreeperVineCard);
		DEFINE_CARD(CGobblingOozeCard);
		DEFINE_CARD(CGoblinElectromancerCard);
		DEFINE_CARD(CGoblinRallyCard);
		DEFINE_CARD(CGolgariCharmCard);
		DEFINE_CARD(CGolgariDecoyCard);
		DEFINE_CARD(CGolgariGuildgateCard);
		DEFINE_CARD(CGolgariKeyruneCard);
		DEFINE_CARD(CGolgariLonglegsCard);
		DEFINE_CARD(CGoreHouseChainwalkerCard);
		DEFINE_CARD(CGraveBetrayalCard);
		DEFINE_CARD(CGrimRoustaboutCard);
		DEFINE_CARD(CGrislySalvageCard);
		DEFINE_CARD(CGroveOfTheGuardianCard);
		DEFINE_CARD(CGrowingRanksCard);
		DEFINE_CARD(CGuildFeudCard);
		DEFINE_CARD(CGuttersnipeCard);
		DEFINE_CARD(CHavocFestivalCard);
		DEFINE_CARD(CHellholeFlailerCard);
		DEFINE_CARD(CHorncallersChantCard);
		DEFINE_CARD(CHoverBarrierCard);
		DEFINE_CARD(CHussarPatrolCard);
		DEFINE_CARD(CHypersonicDragonCard);
		DEFINE_CARD(CInactionInjunctionCard);
		DEFINE_CARD(CIsperiasSkywatchCard);
		DEFINE_CARD(CIsperiaSupremeJudgeCard);
		DEFINE_CARD(CIzzetCharmCard);
		DEFINE_CARD(CIzzetGuildgateCard);
		DEFINE_CARD(CIzzetKeyruneCard);
		DEFINE_CARD(CIzzetStaticasterCard);
		DEFINE_CARD(CJaceArchitectOfThoughtCard);
		DEFINE_CARD(CJaradsOrdersCard);
		DEFINE_CARD(CJaradGolgariLichLordCard);
		DEFINE_CARD(CJudgesFamiliarCard);
		DEFINE_CARD(CKeeningApparitionCard);
		DEFINE_CARD(CKnightlyValorCard);
		DEFINE_CARD(CKorozdaGuildmageCard);
		DEFINE_CARD(CKorozdaMonitorCard);
		DEFINE_CARD(CLaunchPartyCard);
		DEFINE_CARD(CLobberCrewCard);
		DEFINE_CARD(CLotlethTrollCard);
		DEFINE_CARD(CLoxodonSmiterCard);
		DEFINE_CARD(CLyevSkyknightCard);
		DEFINE_CARD(CManaBloomCard);
		DEFINE_CARD(CMartialLawCard);
		DEFINE_CARD(CMercurialChemisterCard);
		DEFINE_CARD(CMinotaurAggressorCard);
		DEFINE_CARD(CMizziumMortarsCard);
		DEFINE_CARD(CMizziumSkinCard);
		DEFINE_CARD(CNecropolisRegentCard);
		DEFINE_CARD(CNewPrahvGuildmageCard);
		DEFINE_CARD(CNivMizzetDracogeniusCard);
		DEFINE_CARD(CNivixGuildmageCard);
		DEFINE_CARD(CNivmagusElementalCard);
		DEFINE_CARD(COgreJailbreakerCard);
		DEFINE_CARD(CPackRatCard);
		DEFINE_CARD(CPerilousShadowCard);
		DEFINE_CARD(CPhantomGeneralCard);
		DEFINE_CARD(CPrecinctCaptainCard);
		DEFINE_CARD(CPsychicSpiralCard);
		DEFINE_CARD(CPursuitOfFlightCard);
		DEFINE_CARD(CPyroconvergenceCard);
		DEFINE_CARD(CRacecourseFuryCard);
		DEFINE_CARD(CRakdosCacklerCard);
		DEFINE_CARD(CRakdosCharmCard);
		DEFINE_CARD(CRakdosGuildgateCard);
		DEFINE_CARD(CRakdosKeyruneCard);
		DEFINE_CARD(CRakdosLordofRiotsCard);
		DEFINE_CARD(CRakdosRagemuttCard);
		DEFINE_CARD(CRakdosRingleaderCard);
		DEFINE_CARD(CRakdosShredFreakCard);
		DEFINE_CARD(CRakdossReturnCard);
		DEFINE_CARD(CRestInPeaceCard);
		DEFINE_CARD(CRisenSanctuaryCard);
		DEFINE_CARD(CRitesOfReapingCard);
		DEFINE_CARD(CRixMaadiGuildmageCard);
		DEFINE_CARD(CRoguesPassageCard);
		DEFINE_CARD(CRootbornDefensesCard);
		DEFINE_CARD(CRubblebackRhinoCard);
		DEFINE_CARD(CRunewingCard);
		DEFINE_CARD(CSavageSurgeCard);
		DEFINE_CARD(CSearchWarrantCard);
		DEFINE_CARD(CSecurityBlockadeCard);
		DEFINE_CARD(CSelesnyaCharmCard);
		DEFINE_CARD(CSelesnyaGuildgateCard);
		DEFINE_CARD(CSelesnyaKeyruneCard);
		DEFINE_CARD(CSelesnyaSentryCard);
		DEFINE_CARD(CSellerOfSongbirdsCard);
		DEFINE_CARD(CSewerShamblerCard);
		DEFINE_CARD(CShriekingAfflictionCard);
		DEFINE_CARD(CSkullRendCard);
		DEFINE_CARD(CSkylinePredatorCard);
		DEFINE_CARD(CSkymarkRocCard);
		DEFINE_CARD(CSlaughterGamesCard);
		DEFINE_CARD(CSlimeMoldingCard);
		DEFINE_CARD(CSlitherheadCard);
		DEFINE_CARD(CSluicewayScorpionCard);
		DEFINE_CARD(CSlumReaperCard);
		DEFINE_CARD(CSoulswornSpiritCard);
		DEFINE_CARD(CSpawnOfRixMaadiCard);
		DEFINE_CARD(CSphinxsRevelationCard);
		DEFINE_CARD(CSplatterThugCard);
		DEFINE_CARD(CStabWoundCard);
		DEFINE_CARD(CStealerOfSecretsCard);
		DEFINE_CARD(CStonefareCrocodileCard);
		DEFINE_CARD(CStreetSpasmCard);
		DEFINE_CARD(CStreetSweeperCard);
		DEFINE_CARD(CSunderingGrowthCard);
		DEFINE_CARD(CSunspireGriffinCard);
		DEFINE_CARD(CSupremeVerdictCard);
		DEFINE_CARD(CSurveyTheWreckageCard);
		DEFINE_CARD(CSwiftJusticeCard);
		DEFINE_CARD(CTabletOfTheGuildsCard);
		DEFINE_CARD(CTavernSwindlerCard);
		DEFINE_CARD(CTeleportalCard);
		DEFINE_CARD(CTenementCrasherCard);
		DEFINE_CARD(CTerrusWurmCard);
		DEFINE_CARD(CThoughtflareCard);
		DEFINE_CARD(CThrillKillAssassinCard);
		DEFINE_CARD(CToweringIndrikCard);
		DEFINE_CARD(CTrainedCaracalCard);
		DEFINE_CARD(CTransguildPromenadeCard);
		DEFINE_CARD(CTreasuredFindCard);
		DEFINE_CARD(CTrestleTrollCard);
		DEFINE_CARD(CTrostanisJudgmentCard);
		DEFINE_CARD(CTrostaniSelesnyasVoiceCard);
		DEFINE_CARD(CUltimatePriceCard);
		DEFINE_CARD(CUnderworldConnectionsCard);
		DEFINE_CARD(CUtvaraHellkiteCard);
		DEFINE_CARD(CVandalblastCard);
		DEFINE_CARD(CVassalSoulCard);
		DEFINE_CARD(CViashinoRacketeerCard);
		DEFINE_CARD(CVituGhaziGuildmageCard);
		DEFINE_CARD(CVoidwielderCard);
		DEFINE_CARD(CVolatileRigCard);
		DEFINE_CARD(CVraskatheUnseenCard);
		DEFINE_CARD(CWayfaringTempleCard);
		DEFINE_CARD(CWildBeastmasterCard);
		DEFINE_CARD(CWorldspineWurmCard);
		DEFINE_CARD(CZanikevLocustCard);
		
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CGoblinElectromancerCard::CGoblinElectromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Electromancer"), CardType::Creature, CREATURE_TYPE2(Goblin, Wizard), nID,
		BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDregManglerCard::CDregManglerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Dreg Mangler"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +3));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIzzetCharmCard::CIzzetCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Izzet Charm"), CardType::Instant, nID)
{
	{
		//Counter target noncreature spell unless its controller pays {2}.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT RED_MANA_TEXT,
				new NegateCardComparer(new AnyCreatureComparer)));

		cpSpell->SetCanBeDenied();
		cpSpell->GetDenialCost().SetManaCost(_T("2"));
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Counter target noncreature spell unless its controller pays {2}. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Izzet Charm deals 2 damage to target creature.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Izzet Charm deals 2 damage to target creature. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Draw two cards, then discard two cards.
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT RED_MANA_TEXT, 2));

		cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Draw two cards, then discard two cards. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CJaradGolgariLichLordCard::CJaradGolgariLichLordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jarad, Golgari Lich Lord"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Elf), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter_c.AddComparer(new AnyCreatureComparer);
	m_CardFilter_c.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter_s.AddComparer(new CardTypeComparer(CardType::Swamp, false));
	m_CardFilter_s.AddNegateComparer(new CardTypeComparer(CardType::Forest, false));
	m_CardFilter_f.AddComparer(new CardTypeComparer(CardType::Forest, false));
	m_CardFilter_f.AddNegateComparer(new CardTypeComparer(CardType::Swamp, false));
	m_CardFilter_sf.AddComparer(new CardTypeComparer(CardType::Swamp | CardType::Forest, true));
	
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Life(-0),
				FALSE_CARD_COMPARER,
				true,
				PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_c);
		cpAbility->SetTargetOpponentPlayerOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJaradGolgariLichLordCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_s);
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_f);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_sf);
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_f);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_s);
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter_sf);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		cpAbility->GetCost().AddSacrificeCardCost(2, &m_CardFilter_sf);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CJaradGolgariLichLordCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -GET_INTEGER(pCreature->GetLastKnownPower());

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CKorozdaGuildmageCard::CKorozdaGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Korozda Guildmage"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Intimidate, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				_T("Saproling M"), 62004, 0));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKorozdaGuildmageCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKorozdaGuildmageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = GET_INTEGER(pCreature->GetLastKnownToughness());

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CStreetSpasmCard::CStreetSpasmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Street Spasm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				false,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT, Life(-0),
				new AnyCreatureComparer,
				false,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpSpell);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeadbridgeGoliathCard::CDeadbridgeGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadbridge Goliath"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +5));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CAugerSpreeCard::CAugerSpreeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Auger Spree"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
		Power(+4), Life(-4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CAzoriusCharmCard::CAzoriusCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Azorius Charm"), CardType::Instant, nID)
{
	{
		//Creatures you control gain lifelink until end of turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Creatures you control gain lifelink until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Draw a card.
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant, 
				WHITE_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Draw a card. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Put target attacking or blocking creature on top of its owner's library.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Put target attacking or blocking creature on top of its owner's library. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CChromaticLanternCard::CChromaticLanternCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chromatic Lantern"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CChromaticLanternCard::CreateAbility1)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CChromaticLanternCard::CreateAbility2)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CChromaticLanternCard::CreateAbility3)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CChromaticLanternCard::CreateAbility4)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CChromaticLanternCard::CreateAbility5)));

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
}

counted_ptr<CAbility> CChromaticLanternCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CChromaticLanternCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CChromaticLanternCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CChromaticLanternCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CChromaticLanternCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorpsejackMenaceCard::CCorpsejackMenaceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpsejack Menace"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::Doublep11Counters, 1, TRUE));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreadboreCard::CDreadboreCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dreadbore"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CEyesInTheSkiesCard::CEyesInTheSkiesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Eyes in the Skies"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEyesInTheSkiesCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CEyesInTheSkiesCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT,
			_T("Bird G"), 2732,
			1));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CEyesInTheSkiesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CEyesInTheSkiesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CAxebaneGuardianCard::CAxebaneGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Axebane Guardian"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CAxebaneGuardianCard::OnResolutionCompleted))
	, m_NumberSelectionW(pGame,CSelectionSupport::SelectionCallback(this, &CAxebaneGuardianCard::OnNumberSelectedW))
	, m_NumberSelectionU(pGame,CSelectionSupport::SelectionCallback(this, &CAxebaneGuardianCard::OnNumberSelectedU))
	, m_NumberSelectionB(pGame,CSelectionSupport::SelectionCallback(this, &CAxebaneGuardianCard::OnNumberSelectedB))
	, m_NumberSelectionR(pGame,CSelectionSupport::SelectionCallback(this, &CAxebaneGuardianCard::OnNumberSelectedR))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add mana to your mana pool for each creature with defender you control with"));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CAxebaneGuardianCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, true));
	
	Remaining = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	if (Remaining > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < Remaining + 1; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i + 1;
			selectionEntry.strText.Format(_T("%d white mana"), i);

			entries.push_back(selectionEntry);
		}
		if (bResult) m_NumberSelectionW.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
}

void CAxebaneGuardianCard::OnNumberSelectedW(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d blue mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionU.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CAxebaneGuardianCard::OnNumberSelectedU(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d black mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionB.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CAxebaneGuardianCard::OnNumberSelectedB(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d red mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionR.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CAxebaneGuardianCard::OnNumberSelectedR(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier1 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = Remaining - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CFencingAceCard::CFencingAceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fencing Ace"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CGatecreeperVineCard::CGatecreeperVineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gatecreeper Vine"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::BasicLand, true));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::_GateLand, true)));

	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzoriusGuildgateCard::CAzoriusGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Azorius Guildgate"), nID, CardType::_GateLand)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariGuildgateCard::CGolgariGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Golgari Guildgate"), nID, CardType::_GateLand)
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
CIzzetGuildgateCard::CIzzetGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Izzet Guildgate"), nID, CardType::_GateLand)
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
CRakdosGuildgateCard::CRakdosGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rakdos Guildgate"), nID, CardType::_GateLand)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSelesnyaGuildgateCard::CSelesnyaGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Selesnya Guildgate"), nID, CardType::_GateLand)
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
CGrislySalvageCard::CGrislySalvageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grisly Salvage"), CardType::Instant, nID)
	, m_CardFilter(_T("a land or creature"), _T("lands or creatures"), new CardTypeComparer(CardType::Creature | CardType::_Land, false))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT GREEN_MANA_TEXT,
			5));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, 
		&m_CardFilter);

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGroveOfTheGuardianCard::CGroveOfTheGuardianCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grove of the Guardian"), nID)
	, m_CardFilter(_T("an untapped creature"), _T("untapped creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new TappedComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Elemental K"), 2966,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGuttersnipeCard::CGuttersnipeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guttersnipe"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHypersonicDragonCard::CHypersonicDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hypersonic Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Sorcery, false),
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
CJudgesFamiliarCard::CJudgesFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Judge's Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false)));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();
		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMizziumMortarsCard::CMizziumMortarsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mizzium Mortars"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				false,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Life(-4),
				new AnyCreatureComparer,
				false,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CNivixGuildmageCard::CNivixGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nivix Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("2") BLUE_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COgreJailbreakerCard::COgreJailbreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Jailbreaker"), CardType::Creature, CREATURE_TYPE2(Ogre, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Gate, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPackRatCard::CPackRatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pack Rat"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Rat), false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") BLACK_MANA_TEXT));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPackRatCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPackRatCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	return true;
}

//____________________________________________________________________________
//
CRakdossReturnCard::CRakdossReturnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rakdos's Return"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT RED_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetExtraActionValueVector(ContextValue(1));
	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRakdossReturnCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());	
}

bool CRakdossReturnCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nDamage = pAction->GetCostConfigEntry().GetExtraValue();

	CLifeModifier pModifier = CLifeModifier(Life(-nDamage), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTarget);

	return true;
}
//____________________________________________________________________________
//
CRakdosShredFreakCard::CRakdosShredFreakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakdos Shred-Freak"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSelesnyaCharmCard::CSelesnyaCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Selesnya Charm"), CardType::Instant, nID)
{
	{
		//Target creature gets +2/+2 and gains trample until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+2), 
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Target creature gets +2/+2 and gains trample until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile target creature with power 5 or greater.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new CreaturePowerComparer<std::greater<int>>(4),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Exile target creature with power 5 or greater. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Put a 2/2 white Knight creature token with vigilance onto the battlefield.
		counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT WHITE_MANA_TEXT,
			_T("Knight D"), 2967,
			1));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Put a 2/2 white Knight creature token with vigilance onto the battlefield. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSluicewayScorpionCard::CSluicewayScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sluiceway Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));
	GetCardKeyword()->AddDeathtouch(FALSE);

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootbornDefensesCard::CRootbornDefensesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rootborn Defenses"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRootbornDefensesCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CRootbornDefensesCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CRootbornDefensesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CRootbornDefensesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier1 = CCardCopyModifier(GetGame(), this);
			pModifier1.ApplyTo((CCard*)it->dwContext);

			CPlayerEffectModifier* pModifier2 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
			CScheduledPlayerModifier* pModifier3 = new CScheduledPlayerModifier(
				GetGame(), pModifier2, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

			pModifier2->ApplyTo(pSelectionPlayer);
			pModifier3->ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CTransguildPromenadeCard::CTransguildPromenadeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Transguild Promenade"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}

	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CTransguildPromenadeCard::CreateTemporaryAbility), _T("1"),
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CTransguildPromenadeCard::PreRemoveAbilityCallback));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

CCard* CTransguildPromenadeCard::CreateTemporaryAbility()
{
	return this;
}

void CTransguildPromenadeCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield,	ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CWayfaringTempleCard::CWayfaringTempleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wayfaring Temple"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWayfaringTempleCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CWayfaringTempleCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CWayfaringTempleCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CWayfaringTempleCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier1 = CCardCopyModifier(GetGame(), this);
			pModifier1.ApplyTo((CCard*)it->dwContext);

			CPlayerEffectModifier* pModifier2 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
			CScheduledPlayerModifier* pModifier3 = new CScheduledPlayerModifier(
				GetGame(), pModifier2, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

			pModifier3->ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CDeathsPresenceCard::CDeathsPresenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Death's Presence"), CardType::GlobalEnchantment, nID,
		_T("5") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathsPresenceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathsPresenceCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDeathsPresenceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CDeathsPresenceCard::BeforeResolution(CDeathsPresenceCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nValue = GET_INTEGER(pCreature->GetLastKnownPower());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nValue, false);
	
	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return false;
}

//____________________________________________________________________________
//
CNivMizzetDracogeniusCard::CNivMizzetDracogeniusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niv-Mizzet, Dracogenius"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDryadMilitantCard::CDryadMilitantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dryad Militant"), CardType::Creature, CREATURE_TYPE2(Dryad, Soldier), nID,
		GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ISExileInsteadGraveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHavocFestivalCard::CHavocFestivalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Havoc Festival"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantGainLife));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(SpecialNumber::DivideBy2RoundUp));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWorldspineWurmCard::CWorldspineWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Worldspine Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("8") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(15), Life(15))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Wurm F"), 2750, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetAbilityName(_T("Token creation ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		cpAbility->SetAbilityName(_T("Shuffle ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLotlethTrollCard::CLotlethTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Lotleth Troll"), CardType::Creature, CREATURE_TYPE2(Zombie, Troll), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1), BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);
	
	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlaughterGamesCard::CSlaughterGamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slaughter Games"), CardType::Sorcery, nID)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT RED_MANA_TEXT,
			ZoneId::Exile, TRUE, TRUE));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSupremeVerdictCard::CSupremeVerdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Supreme Verdict"), CardType::Sorcery, nID)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSlitherheadCard::CSlitherheadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slitherhead"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));
	
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Scavenge ability
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->SetGraveyardOnly();
		cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetAbilityText(_T("Scavenge -"));
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbruptDecayCard::CAbruptDecayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abrupt Decay"), CardType::Instant, nID)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new ConvertedManaCostComparer<std::less<int>>(4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCollectiveBlessingCard::CCollectiveBlessingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Collective Blessing"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+3), Life(+3)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonSmiterCard::CLoxodonSmiterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Smiter"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
}
	void CLoxodonSmiterCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Hand) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) && (moveType == MoveType::Discard ) && (pByPlayer == m_pGame->GetNextPlayer(GetController())))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Battlefield);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSkylinePredatorCard::CSkylinePredatorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyline Predator"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CDesecrationDemonCard::CDesecrationDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Desecration Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDesecrationDemonCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDesecrationDemonCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDesecrationDemonCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	PunisherFunction(pActivePlayerID);

	return true;
}

void CDesecrationDemonCard::PunisherFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);

	if (pPlayer != GetController() && m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
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

void CDesecrationDemonCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer);
	else if ((bSomeonePaid > 0) && IsInplay())
	{
		CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
		CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

		pModifier1.ApplyTo(this);
		pModifier2.ApplyTo(this);
	}
}

void CDesecrationDemonCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				bSomeonePaid = 1;
				Advance(dwContext1);

				return;
			}
		}
}

//____________________________________________________________________________
//
CRixMaadiGuildmageCard::CRixMaadiGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rix Maadi Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new BlockingCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE, new CRixMaadiGuildmageTargeting));
		ATLASSERT(cpAbility);

		cpAbility->GetTargetModifier().CPlayerModifiers::Add(
			new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRixMaadiGuildmageCard::CRixMaadiGuildmageTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	return pPlayer->GetLifeLossTakenThisTurn() > 0;
}

BOOL CRixMaadiGuildmageCard::CRixMaadiGuildmageTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
CTrostaniSelesnyasVoiceCard::CTrostaniSelesnyasVoiceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trostani, Selesnya's Voice"), CardType::_LegendaryCreature, CREATURE_TYPE(Dryad), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTrostaniSelesnyasVoiceCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTrostaniSelesnyasVoiceCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTrostaniSelesnyasVoiceCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTrostaniSelesnyasVoiceCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());			
	}
}

bool CTrostaniSelesnyasVoiceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CTrostaniSelesnyasVoiceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
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

void CTrostaniSelesnyasVoiceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CTrostaniSelesnyasVoiceCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CNivmagusElementalCard::CNivmagusElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nivmagus Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		BLUE_MANA_TEXT, Power(1), Life(2))
	, m_CardFilter(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddExileStackCardCost(1, &m_CardFilter);

		cpAbility->SetAbilityText(_T("Put two +1/+1 counters on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnderworldConnectionsCard::CUnderworldConnectionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Underworld Connections"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CUnderworldConnectionsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CUnderworldConnectionsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pEnchantedCard,
			_T(""), 1));

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->AddPayLifeDeltaCost(Life(-1));

	cpEnchantAbility->SetAbilityText(_T("Draw a card. Activates"));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaerieImpostorCard::CFaerieImpostorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Impostor"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJaradsOrdersCard::CJaradsOrdersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jarad's Orders"), CardType::Sorcery, nID)
{
	counted_ptr<CJaradsOrdersSpell> cpSpell(
		::CreateObject<CJaradsOrdersSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures")), ZoneId::Library, ZoneId::Library, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpSpell->SetRevealCards(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCyclonicRiftCard::CCyclonicRiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cyclonic Rift"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("6") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Hand, TRUE, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCryptbornHorrorCard::CCryptbornHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cryptborn Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCryptbornHorrorCard::OnZoneChanged))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

void CCryptbornHorrorCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		int nCounterCount = 0;
		CPlayer* pController = GetController();

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			if (pController != pPlayer)
				nCounterCount += pPlayer->GetLifeLossTakenThisTurn();
		}
		
		CCardCounterModifier modifier(_T("+1/+1"), nCounterCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGrowingRanksCard::CGrowingRanksCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Growing Ranks"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGrowingRanksCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGrowingRanksCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CGrowingRanksCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CGrowingRanksCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier1 = CCardCopyModifier(GetGame(), this);
			pModifier1.ApplyTo((CCard*)it->dwContext);

			CPlayerEffectModifier* pModifier2 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
			CScheduledPlayerModifier* pModifier3 = new CScheduledPlayerModifier(
				GetGame(), pModifier2, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

			pModifier3->ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CPrecinctCaptainCard::CPrecinctCaptainCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Precinct Captain"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier M"), 2908, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyroconvergenceCard::CPyroconvergenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyroconvergence"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildBeastmasterCard::CWildBeastmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Beastmaster"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWildBeastmasterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWildBeastmasterCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter = CCardFilter(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	int nPower = GetLastKnownPower();

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nPower));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nPower));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSphinxsRevelationCard::CSphinxsRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sphinx's Revelation"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			0));

	cpSpell->SetExtraActionValueVector(ContextValue(1));
	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSphinxsRevelationCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());	
}

bool CSphinxsRevelationCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nLife = pAction->GetCostConfigEntry().GetExtraValue();

	CLifeModifier pModifier = CLifeModifier(Life(+nLife), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CStealerOfSecretsCard::CStealerOfSecretsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stealer of Secrets"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMercurialChemisterCard::CMercurialChemisterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mercurial Chemister"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT, 2));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, false));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddTapCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercurialChemisterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMercurialChemisterCard::BeforeResolution(CAbilityAction* pAction)
{
	int nValue = pAction->GetCostConfigEntry().GetDiscardCards()->GetAt(0)->GetConvertedManaCost();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CLifeModifier pModifier = CLifeModifier(Life(-nValue), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	pModifier.ApplyTo(pTarget);
	return true;
}

//____________________________________________________________________________
//
CCentaurHealerCard::CCentaurHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Healer"), CardType::Creature, CREATURE_TYPE2(Centaur, Cleric), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
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
CAshZealotCard::CAshZealotCard(CGame* pGame, UINT nID)
: CFirstStrikeCreatureCard(pGame, _T("Ash Zealot"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
	RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Stack));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshZealotCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAshZealotCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAshZealotCard::SetTriggerContext(TriggeredAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)(pCard->GetController());
	return true;
}

bool CAshZealotCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{	
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CPlayer* pPlayer = (CPlayer*)triggerContext.nValue1;

	CLifeModifier modifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(pPlayer);
	return true;
}

//____________________________________________________________________________
//
CPsychicSpiralCard::CPsychicSpiralCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Spiral"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPsychicSpiralCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CPsychicSpiralCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	int nCount = CCardFilter::GetFilter(_T("cards"))->CountIncluded(pGraveyard->GetCardContainer());

	if (nCount > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)));
	
		pModifier1.ApplyTo(pController);
		pController->GetZoneById(ZoneId::Library)->Shuffle();

		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCount , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier2.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier2.ApplyTo(pTarget);
	}
	return true;
}

//____________________________________________________________________________
//
CUltimatePriceCard::CUltimatePriceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ultimate Price"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards));
}

//____________________________________________________________________________
//
CGolgariDecoyCard::CGolgariDecoyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Decoy"), CardType::Creature, CREATURE_TYPE2(Elf, Rogue), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));
	GetCreatureKeyword()->AddLure(FALSE);

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlistercoilWeirdCard::CBlistercoilWeirdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blistercoil Weird"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRakdosCharmCard::CRakdosCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rakdos Charm"), CardType::Instant, nID)
{
	{
		//Exile all cards from target player's graveyard.
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT RED_MANA_TEXT,
				ZoneId::Graveyard,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->AddCardModifier(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Exile all cards from target player's graveyard. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Destroy target artifact. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Each creature deals 1 damage to its controller.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRakdosCharmCard::BeforeResolution));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Each creature deals 1 damage to its controller. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CRakdosCharmCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer creatures;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)), creatures);

	if (creatures.GetSize() == 0) return false;

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(creatures.GetAt(ic));
		
		CLifeModifier* pModifier = new CLifeModifier(Life(-1), pCreature,
										PreventableType::Preventable, DamageType::NonCombatDamage);

		pModifier->ApplyTo(pCreature->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CDeadRevelerCard::CDeadRevelerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Dead Reveler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDeadRevelerCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CDeadRevelerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGrimRoustaboutCard::CGrimRoustaboutCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Grim Roustabout"), CardType::Creature, CREATURE_TYPE2(Skeleton, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGrimRoustaboutCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);

	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("1") BLACK_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

void CGrimRoustaboutCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CNecropolisRegentCard::CNecropolisRegentCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Necropolis Regent"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecropolisRegentCard::SetTriggerContext));

	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CNecropolisRegentCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage d_damage) const
{
	int nValue = GET_INTEGER(-d_damage.m_nLifeDelta);
	triggerContext.m_pCard = pCard;
	triggerContext.m_CardModifiers.Add(new CCardCounterModifier(_T("+1/+1"), nValue));

	return true;
}

//____________________________________________________________________________
//
CChaosImpsCard::CChaosImpsCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Chaos Imps"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(5), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CChaosImpsCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

void CChaosImpsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CFallOfTheGavelCard::CFallOfTheGavelCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Fall of the Gavel"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+5), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CSearchWarrantCard::CSearchWarrantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Search Warrant"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT BLUE_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSearchWarrantCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSearchWarrantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	int nCount = CCardFilter::GetFilter(_T("cards"))->CountIncluded(pHand->GetCardContainer());

	CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1->ApplyTo(pTarget);
	
	if (nCount > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(nCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}
	return true;
}

//____________________________________________________________________________
//
CHussarPatrolCard::CHussarPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hussar Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CDramaticRescueCard::CDramaticRescueCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dramatic Rescue"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDramaticRescueCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CDramaticRescueCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CSkymarkRocCard::CSkymarkRocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skymark Roc"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureToughnessComparer<std::less_equal<int>>(2));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhantomGeneralCard::CPhantomGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom General"), CardType::Creature, CREATURE_TYPE2(Spirit, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(+1), Life(+1)));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRestInPeaceCard::CRestInPeaceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rest in Peace"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		// Not optional
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ExileInsteadGraveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::TokensExileInsteadGraveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKeeningApparitionCard::CKeeningApparitionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keening Apparition"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
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
CCrosstownCourierCard::CCrosstownCourierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crosstown Courier"), CardType::Creature, CREATURE_TYPE(Vedalken), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrosstownCourierCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCrosstownCourierCard::BeforeResolution));

	cpAbility->SetRevealCount(0);
	
	AddAbility(cpAbility.GetPointer());
}

bool CCrosstownCourierCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-d_damage.m_nLifeDelta);
	triggerContext.nValue2 = (int)pPlayer;
	return true;
}

bool CCrosstownCourierCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nValue = triggerContext.nValue1;
	CPlayer* pPlayer = (CPlayer*)triggerContext.nValue2;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nValue, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(pPlayer);

	return false;
}

//____________________________________________________________________________
//
CDoorkeeperCard::CDoorkeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doorkeeper"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT, 0));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetRevealCardsToOthers(true);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDoorkeeperCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDoorkeeperCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, false));
	
	Context.nValue1 = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CDownsizeCard::CDownsizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Downsize"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(-4), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(-4), Life(0)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAquusSteedCard::CAquusSteedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aquus Steed"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			Power(-2), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CBlustersquallCard::CBlustersquallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blustersquall"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				TRUE, FALSE,
				new CardTypeComparer(CardType::Creature, false)));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVoidwielderCard::CVoidwielderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voidwielder"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRunewingCard::CRunewingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Runewing"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLobberCrewCard::CLobberCrewCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lobber Crew"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T(""),
				Life(-1),
				FALSE_CARD_COMPARER,
				TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddTapCost();

		cpAbility->SetTargetOpponentPlayerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMinotaurAggressorCard::CMinotaurAggressorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Minotaur Aggressor"), CardType::Creature, CREATURE_TYPE2(Minotaur, Berserker), nID,
		_T("6") RED_MANA_TEXT, Power(6), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CPursuitOfFlightCard::CPursuitOfFlightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Pursuit of Flight"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPursuitOfFlightCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CPursuitOfFlightCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pCard,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Flying));
	ATLASSERT(cpEnchantAbility);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CExplosiveImpactCard::CExplosiveImpactCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Explosive Impact"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CGoblinRallyCard::CGoblinRallyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Goblin Rally"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			_T("Goblin M"), 62024,
			4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________________
//
CGoreHouseChainwalkerCard::CGoreHouseChainwalkerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Gore-House Chainwalker"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGoreHouseChainwalkerCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CGoreHouseChainwalkerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVassalSoulCard::CVassalSoulCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vassal Soul"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunderingGrowthCard::CSunderingGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sundering Growth"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSunderingGrowthCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingGrowthCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CSunderingGrowthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CSunderingGrowthCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CTrostanisJudgmentCard::CTrostanisJudgmentCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Trostani's Judgment"), CardType::Instant, nID,
		_T("5") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTrostanisJudgmentCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTrostanisJudgmentCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTrostanisJudgmentCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CTrostanisJudgmentCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CTrainedCaracalCard::CTrainedCaracalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Caracal"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);
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
CTerrusWurmCard::CTerrusWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terrus Wurm"), CardType::Creature, CREATURE_TYPE2(Zombie, Wurm), nID,
		_T("6") BLACK_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("6") BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +5));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrillKillAssassinCard::CThrillKillAssassinCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Thrill-Kill Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CThrillKillAssassinCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCardKeyword()->AddDeathtouch(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CThrillKillAssassinCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CZanikevLocustCard::CZanikevLocustCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zanikev Locust"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +3));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShriekingAfflictionCard::CShriekingAfflictionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrieking Affliction"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,&CShriekingAfflictionCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShriekingAfflictionCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CShriekingAfflictionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 1;
}

bool CShriekingAfflictionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 1;
}

//____________________________________________________________________________
//
CSlumReaperCard::CSlumReaperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slum Reaper"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(2))
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
CTavernSwindlerCard::CTavernSwindlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tavern Swindler"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTavernSwindlerCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->AddPayLifeDeltaCost(Life(-3));
	
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTavernSwindlerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTavernSwindlerCard::BeforeResolution(CAbilityAction* pAction)
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
		CLifeModifier* pModifier = new CLifeModifier(Life(+6), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->ApplyTo(pController);
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

void CTavernSwindlerCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier = new CLifeModifier(Life(+6), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier->ApplyTo(pSelectionPlayer);
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
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CBazaarKrovodCard::CBazaarKrovodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bazaar Krovod"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBazaarKrovodCard::BeforeResolution));
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	AddAbility(cpAbility.GetPointer());
}

bool CBazaarKrovodCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* target = (CCreatureCard*)pAction->GetAssociatedCard();
	CLifeModifier pModifier1 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);;
	CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

	pModifier1.ApplyTo(target);
	pModifier2.ApplyTo(target);

	return false;
}

//____________________________________________________________________________
//
CConcordiaPegasusCard::CConcordiaPegasusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Concordia Pegasus"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CEtherealArmorCard::CEtherealArmorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ethereal Armor"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CEtherealArmorCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CEtherealArmorCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Enchantment, false)));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArmoryGuardCard::CArmoryGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armory Guard"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Gate, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToweringIndrikCard::CToweringIndrikCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Towering Indrik"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}
//____________________________________________________________________________
//
CPerilousShadowCard::CPerilousShadowCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Perilous Shadow"), CardType::Creature, CREATURE_TYPE2(Insect, Shade), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(4),
		_T("1") BLACK_MANA_TEXT, Power(+2), Life(+2))
{
}

//____________________________________________________________________________
//
CSewerShamblerCard::CSewerShamblerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sewer Shambler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Swampwalk)
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrainpipeVerminCard::CDrainpipeVerminCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drainpipe Vermin"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(BLACK_MANA_TEXT);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLaunchPartyCard::CLaunchPartyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Launch Party"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CGobblingOozeCard::CGobblingOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gobbling Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			GREEN_MANA_TEXT));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHorncallersChantCard::CHorncallersChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Horncaller's Chant"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHorncallersChantCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CHorncallersChantCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("7") GREEN_MANA_TEXT,
			_T("Rhino"), 2749,
			1));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CHorncallersChantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CHorncallersChantCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CDrudgeBeetleCard::CDrudgeBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drudge Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("5") GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDruidsDeliveranceCard::CDruidsDeliveranceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Druid's Deliverance"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDruidsDeliveranceCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDruidsDeliveranceCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT));

	CPlayerEffectModifier* pmodifier1 = new CPlayerEffectModifier(PlayerEffectType::PreventAllPlayerDamage);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier1, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pmodifier1->LinkPlayerModifier(pModifier2);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier1);		

	cpSpell->SetAbilityName(_T("Prevent all damage that would be dealt to you this turn, then populate. Casts"));
	cpSpell->SetAbilityText(_T("Prevent all damage that would be dealt to you this turn, then populate. Casts"));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDruidsDeliveranceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CDruidsDeliveranceCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CCarnivalHellsteedCard::CCarnivalHellsteedCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Carnival Hellsteed"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horse), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCarnivalHellsteedCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CCarnivalHellsteedCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSpawnOfRixMaadiCard::CSpawnOfRixMaadiCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Spawn of Rix Maadi"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSpawnOfRixMaadiCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CSpawnOfRixMaadiCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CRakdosRagemuttCard::CRakdosRagemuttCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Rakdos Ragemutt"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CHellholeFlailerCard::CHellholeFlailerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Hellhole Flailer"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHellholeFlailerCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			_T("2") BLACK_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

void CHellholeFlailerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSkullRendCard::CSkullRendCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skull Rend"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT RED_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkullRendCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSkullRendCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pController != pPlayer)
			pModifier1.ApplyTo(pPlayer);
	}

	CRandomDiscardModifier pModifier2 = CRandomDiscardModifier(2);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pController != pPlayer)
			pModifier2.ApplyTo(pPlayer);
	}

	return false;
}

//____________________________________________________________________________
//
CRisenSanctuaryCard::CRisenSanctuaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Risen Sanctuary"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCommonBondCard::CCommonBondCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Common Bond"), CardType::Instant, nID)
{
	counted_ptr<CCommonBondSpell> cpSpell(
		::CreateObject <CCommonBondSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CCommonBondCard::CCommonBondSpell::CCommonBondSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
}

void CCommonBondCard::CCommonBondSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() && (!pContainer2.GetSize())) return;

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 1);

	if (pContainer1.GetSize())
	{
		CCreatureCard* pCreature1 = dynamic_cast<CCreatureCard*>(pContainer1.GetAt(0));
		if (pCreature1) pModifier.ApplyTo(pCreature1);
	}
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		if (pCreature2) pModifier.ApplyTo(pCreature2);
	}
}

//____________________________________________________________________________
//
CCallOfTheConclaveCard::CCallOfTheConclaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Call of the Conclave"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT WHITE_MANA_TEXT,
			_T("Centaur A"), 2790,
			1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________________
//
CVituGhaziGuildmageCard::CVituGhaziGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vitu-Ghazi Guildmage"), CardType::Creature, CREATURE_TYPE2(Dryad, Shaman), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CVituGhaziGuildmageCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CVituGhaziGuildmageCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Centaur A"), 2790,
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());			
	}
}

void CVituGhaziGuildmageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CVituGhaziGuildmageCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CCoursersAccordCard::CCoursersAccordCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coursers' Accord"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCoursersAccordCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCoursersAccordCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT,
			_T("Centaur A"), 2790,
			1));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CCoursersAccordCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nTokens = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (nTokens > 0)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
				if (m_CardFilter.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for populate"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
				NULL,
		pController); 
	}
}

void CCoursersAccordCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
			pModifier.ApplyTo((CCard*)it->dwContext);
		}
}

//____________________________________________________________________________
//
CSavageSurgeCard::CSavageSurgeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Savage Surge"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
}

//____________________________________________________________________________
//
CStonefareCrocodileCard::CStonefareCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonefare Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2") BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorozdaMonitorCard::CKorozdaMonitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Korozda Monitor"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	GetCreatureKeyword()->AddTrample(FALSE);

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->SetGraveyardOnly();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +3));

	cpAbility->SetAbilityText(_T("Scavenge -"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManaBloomCard::CManaBloomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Bloom"), CardType::GlobalEnchantment, nID, 
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CManaBloomCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CManaBloomCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility1 = cpAbility.GetPointer();
		AddAbility(m_pAbility1);
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

        cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CManaBloomCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility2 = cpAbility.GetPointer();
		AddAbility(m_pAbility2);
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CManaBloomCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility3 = cpAbility.GetPointer();
		AddAbility(m_pAbility3);
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CManaBloomCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility4 = cpAbility.GetPointer();
		AddAbility(m_pAbility4);
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CManaBloomCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		m_pAbility5 = cpAbility.GetPointer();
		AddAbility(m_pAbility5);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaBloomCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaBloomCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

void CManaBloomCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, +nColorCount, true);

		pModifier.ApplyTo(this);
	}
}

BOOL CManaBloomCard::CanPlay(BOOL bIncludeTricks)
{
	if (m_pAbility1->GetTurnUsageCount() + m_pAbility2->GetTurnUsageCount() + m_pAbility3->GetTurnUsageCount() + m_pAbility4->GetTurnUsageCount() + m_pAbility5->GetTurnUsageCount() > 0) return FALSE;

	return TRUE;
}

bool CManaBloomCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	return (GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount() == 0);
}

bool CManaBloomCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount() > 0) return false;
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, GetController());

	pModifier.ApplyTo(this);

	return true;
}

//_______________________________________________________________________________________
//
CRubblebackRhinoCard::CRubblebackRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rubbleback Rhino"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CSunspireGriffinCard::CSunspireGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sunspire Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CSwiftJusticeCard::CSwiftJusticeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Swift Justice"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
}

//____________________________________________________________________________
//
CSecurityBlockadeCard::CSecurityBlockadeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Security Blockade"), CardType::EnchantLand, nID)
{
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
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CSecurityBlockadeCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CSecurityBlockadeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(pEnchantedCard,
			_T(""),
			Life(1), SourceColor::_AllSources,
			TRUE));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSelesnyaSentryCard::CSelesnyaSentryCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Selesnya Sentry"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2),
		_T("5") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSellerOfSongbirdsCard::CSellerOfSongbirdsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seller of Songbirds"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Bird G"), 2732, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChemistersTrickCard::CChemistersTrickCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chemister's Trick"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT RED_MANA_TEXT,
				Power(-2), Life(0),
				CreatureKeyword::MustAttack, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(-2), Life(0), CreatureKeyword::MustAttack));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIzzetStaticasterCard::CIzzetStaticasterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Izzet Staticaster"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(0), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CIzzetStaticasterCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));

	cpAbility->SetAbilityText(_T("Izzet Staticaster deals 1 damage to target creature and each other creature with the same name. Activates"));
	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIzzetStaticasterCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	AddAbility(cpAbility.GetPointer());
}

bool CIzzetStaticasterCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CIzzetStaticasterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CLifeModifier modifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage, TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo((CCreatureCard*)cards.GetAt(ic));
}

//____________________________________________________________________________
//
CThoughtflareCard::CThoughtflareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughtflare"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, 4));

	cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTeleportalCard::CTeleportalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Teleportal"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT RED_MANA_TEXT,
				Power(+1), Life(0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(0)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::UnblockableCreatures);	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

		pModifier1->LinkPlayerModifier(pModifier2);
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier1);		

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarkRevenantCard::CDarkRevenantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dark Revenant"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDestroyTheEvidenceCard::CDestroyTheEvidenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Destroy the Evidence"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDestroyTheEvidenceCard::BeforeResolution));


	AddSpell(cpSpell.GetPointer());
}

bool CDestroyTheEvidenceCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
	pModifier1.ApplyTo(pTarget);

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{		
		if (!bSearch)
			break;
		else
		{
			++n;
			if (pLibrary->GetAt(i)->GetCardType().IsLand())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
	pModifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CDeviantGleeCard::CDeviantGleeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Deviant Glee"), nID,
		BLACK_MANA_TEXT,
		Power(+2), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CDeviantGleeCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CDeviantGleeCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::Trample));
	ATLASSERT(cpEnchantAbility);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CAssassinsStrikeCard::CAssassinsStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Assassin's Strike"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAssassinsStrikeCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CAssassinsStrikeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, GetController());
	pModifier1.ApplyTo(pTarget);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier2.ApplyTo(pPlayer);
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
CDaggerdromeImpCard::CDaggerdromeImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Daggerdrome Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CSelesnyaKeyruneCard::CSelesnyaKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Selesnya Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Wolf AA"), 64081));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStreetSweeperCard::CStreetSweeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Street Sweeper"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(4), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CStreetSweeperCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CStreetSweeperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	CCountedCardContainer pAuras;

	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetEnchantedOn() == pTarget)
			pAuras.AddCard(pCard, CardPlacement::Top);
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);

	for (int i = 0; i < pAuras.GetSize(); ++i)
		pModifier.ApplyTo(pAuras.GetAt(i));

	return;
}

//____________________________________________________________________________
//
CRakdosKeyruneCard::CRakdosKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rakdos Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				_T("Devil AA"), 64029));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariKeyruneCard::CGolgariKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golgari Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				_T("Insect AA"), 64060));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMizziumSkinCard::CMizziumSkinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mizzium Skin"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(0), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(0), Life(+1)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHoverBarrierCard::CHoverBarrierCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hover Barrier"), CardType::Creature, CREATURE_TYPE2(Illusion, Wall), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CTrestleTrollCard::CTrestleTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Trestle Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(4), _T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CTreasuredFindCard::CTreasuredFindCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Treasured Find"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CRitesOfReapingCard::CRitesOfReapingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rites of Reaping"), CardType::Sorcery, nID)
{
	counted_ptr<CDoubleTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CDoubleTargetChgPwrTghAttrSpell>(this,
		AbilityType::Instant,
		_T("4") BLACK_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		Power(-3), Life(-3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
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
CDynachargeCard::CDynachargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dynacharge"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				Power(+2), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(0)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CElectrickeryCard::CElectrickeryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Electrickery"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new AnyCreatureComparer,
				FALSE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage)); //No regeneration

		cpSpell->SetAffectOpponentCardsOnly();
		
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAnnihilatingFireCard::CAnnihilatingFireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Annihilating Fire"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::ToExileDamage);
}

//____________________________________________________________________________
//
CBatterhornCard::CBatterhornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Batterhorn"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
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
CBloodfrayGiantCard::CBloodfrayGiantCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Bloodfray Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBloodfrayGiantCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CBloodfrayGiantCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CTenementCrasherCard::CTenementCrasherCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Tenement Crasher"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CVandalblastCard::CVandalblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vandalblast"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
		
		cpSpell->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Overload cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CViashinoRacketeerCard::CViashinoRacketeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Racketeer"), CardType::Creature, CREATURE_TYPE2(Viashino, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CViashinoRacketeerCard::OnCardSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViashinoRacketeerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CViashinoRacketeerCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Discard %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CViashinoRacketeerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't discard anything"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s discards %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
				CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

				pModifier1.ApplyTo(pCard);
				pModifier2.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CRacecourseFuryCard::CRacecourseFuryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Racecourse Fury"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CRacecourseFuryCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRacecourseFuryCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(0), Life(0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSplatterThugCard::CSplatterThugCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Splatter Thug"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSplatterThugCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CSplatterThugCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSurveyTheWreckageCard::CSurveyTheWreckageCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Survey the Wreckage"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Goblin M"), 62024, 1));
}

//____________________________________________________________________________
//
CGolgariLonglegsCard::CGolgariLonglegsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Longlegs"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CRakdosCacklerCard::CRakdosCacklerCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Rakdos Cackler"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		BLACK_MANA_TEXT, Power(1), Life(1), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRakdosCacklerCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddUnleash(FALSE);

	//hybrid mana cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			RED_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

void CRakdosCacklerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CAerialPredationCard::CAerialPredationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Aerial Predation"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CArchweaverCard::CArchweaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archweaver"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CArmadaWurmCard::CArmadaWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armada Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Wurm F"), 2750, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAxebaneStagCard::CAxebaneStagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Axebane Stag"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("6") GREEN_MANA_TEXT, Power(6), Life(7))
{
}

//____________________________________________________________________________
//
CAzoriusKeyruneCard::CAzoriusKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Azorius Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Bird AB"), 64004));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAzorsElocutorsCard::CAzorsElocutorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azor's Elocutors"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAzorsElocutorsCard::BeforeResolution1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAzorsElocutorsCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAzorsElocutorsCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(FILIBUSTER_COUNTER, 1, false);

	pModifier.ApplyTo(this);
	
	if (GetCounterContainer()->GetCount(FILIBUSTER_COUNTER) >= 5)
		return true;
	else
		return false;
}

bool CAzorsElocutorsCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(FILIBUSTER_COUNTER, -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CBrushstriderCard::CBrushstriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brushstrider"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCentaursHeraldCard::CCentaursHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur's Herald"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			_T("Centaur A"), 2790,
			1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChorusOfMightCard::CChorusOfMightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Chorus of Might"), CardType::Instant, nID, AbilityType::Instant,
	    _T("3") GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChorusOfMightCard::BeforeResolution));
}

bool CChorusOfMightCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	if (nCreatures == 0) return false;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatures;
	Context.nValue2 = nCreatures;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CCodexShredderCard::CCodexShredderCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Codex Shredder"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 1));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("5"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConjuredCurrencyCard::CConjuredCurrencyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conjured Currency"), CardType::GlobalEnchantment, nID,
		_T("5") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardOwnerComparer(this));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConjuredCurrencyCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CConjuredCurrencyCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController1 = this->GetController();
	CPlayer* pController2 = pTarget->GetController();
		
	if (this->IsInplay() && (pController1 != pController2))
	{
		CZone* pBattlefield1 = pController1->GetZoneById(ZoneId::Battlefield);
		CZone* pBattlefield2 = pController2->GetZoneById(ZoneId::Battlefield);
		
		this->Move(pBattlefield2, pController1, MoveType::Others);
		pTarget->Move(pBattlefield1, pController2, MoveType::Others);
	}
	return true;
}

//____________________________________________________________________________
//
CDeathriteShamanCard::CDeathriteShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathrite Shaman"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(2))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDeathriteShamanCard::OnResolutionCompleted1))
		, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDeathriteShamanCard::OnResolutionCompleted2))
		, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CDeathriteShamanCard::OnColorSelected))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDeathriteShamanCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

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
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CDeathriteShamanCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
	
}

void CDeathriteShamanCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();
	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pController != pPlayer)
			pModifier.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CFiremindsForesightCard::CFiremindsForesightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Firemind's Foresight"), CardType::Instant, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(1));

	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Instant,
			_T("5") BLUE_MANA_TEXT RED_MANA_TEXT, 
			&m_CardFilter, 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpSpell->SetAbilityText(_T("Search your library for instant cards with converted mana costs 3, 2 and 1. Casts"));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFiremindsForesightCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFiremindsForesightCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;

	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Instant, false));
	m_CardFilter1.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(3));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Instant, false));
	m_CardFilter2.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(2));

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		&m_CardFilter1,
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		&m_CardFilter2,
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CFrostburnWeirdCard::CFrostburnWeirdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frostburn Weird"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(4))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLUE_MANA_TEXT, Power(+1), Life(-1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+1), Life(-1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariCharmCard::CGolgariCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Golgari Charm"), CardType::Instant, nID)
{
	{
		//All creatures get -1/-1 until end of turn.
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
			Power(-1), Life(-1),
			new AnyCreatureComparer));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("All creatures get -1/-1 until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target enchantment.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Destroy target enchantment. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regenerate each creature you control.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(
			new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CRegenerateModifier())));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Regenerate each creature you control."));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIsperiaSupremeJudgeCard::CIsperiaSupremeJudgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Isperia, Supreme Judge"), CardType::_LegendaryCreature, CREATURE_TYPE(Sphinx), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIzzetKeyruneCard::CIzzetKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Izzet Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT,
				_T("Elemental AJ"), 64040));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt,
								CWhenDamageDealt::PlayerEventCallback, 
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIzzetKeyruneCard::SetTriggerContext));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CIzzetKeyruneCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{	
	return (pFromCard->GetIsAlsoOf() == this);
}

//____________________________________________________________________________
//
CRakdosRingleaderCard::CRakdosRingleaderCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Rakdos Ringleader"), CardType::Creature, CREATURE_TYPE2(Skeleton, Warrior), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1), BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUtvaraHellkiteCard::CUtvaraHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Utvara Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenAttackedBlocked,
						   CWhenAttackedBlocked::PlayerEventCallback,
						   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUtvaraHellkiteCard::SetTriggerContext));
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon D"), 2974, 1);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

    AddAbility(cpAbility.GetPointer());
}

bool CUtvaraHellkiteCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	return (pCreature->GetCreatureType().HasType(SingleCreatureType::Dragon) || pCreature->GetCardKeyword()->HasChangeling());
}

//____________________________________________________________________________
//
CVolatileRigCard::CVolatileRigCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Volatile Rig"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(4), Life(4))
	, m_FlipSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CVolatileRigCard::OnFlipSelected1))
	, m_FlipSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CVolatileRigCard::OnFlipSelected2))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVolatileRigCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVolatileRigCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CVolatileRigCard::BeforeResolution1(CAbilityAction* pAction)
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
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
		pModifier.ApplyTo(this);
		
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
		m_FlipSelection1.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	return true;
}

void CVolatileRigCard::OnFlipSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}

bool CVolatileRigCard::BeforeResolution2(CAbilityAction* pAction)
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
		CLifeModifier* pModifier1 = new CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier1));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
		}
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
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
		m_FlipSelection2.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	return true;
}

void CVolatileRigCard::OnFlipSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier1 = new CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCreatureModifier>(pModifier1));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
				}
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
				}

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CVraskatheUnseenCard::CVraskatheUnseenCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Vraska the Unseen"), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT,
		PlaneswalkerType::Vraska, 5)	
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
 		&CVraskatheUnseenCard::OnResolutionCompleted1))
	,pOwner(TRUE)
	,m_WhenNodeChanged(this, NodeId::BeforeBeginningStep, TRUE)
	,m_WhenSelfMoved(this)
{
	m_CardFlagModifier1 = new CCardFlagModifier;

	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CVraskatheUnseenCard::OnNodeChanged));

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CVraskatheUnseenCard::OnZoneChanged));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CVraskatheUnseenCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());		

		m_CardFlagModifier1->GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1->GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

		cpAbility->GetResolutionModifier().CCardModifiers::Add(m_CardFlagModifier1);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Assassin"), 2975,
				3)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);	

		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
			CWhenDamageDealt::PlaneswalkerEventCallback, &CWhenDamageDealt::SetPlaneswalkerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVraskatheUnseenCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
}
void CVraskatheUnseenCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetController() == GetOwner()) pOwner = TRUE;
	else
	pOwner = FALSE;
}
void CVraskatheUnseenCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1->GetModifier().GetAdditionData() && ((pOwner == TRUE && pToNode->GetGraph()->GetPlayer() == GetOwner())
		|| (pOwner != TRUE && pToNode->GetGraph()->GetPlayer() != GetOwner())) )
	{
			m_CardFlagModifier1->RemoveFrom(this);
	}


	return;
}
void CVraskatheUnseenCard::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	if ((pFromZone->GetZoneId()  == ZoneId::Battlefield) && (pToZone->GetZoneId()  != ZoneId::Battlefield))
	{
		m_CardFlagModifier1->RemoveFrom(this);
	}
}
bool CVraskatheUnseenCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlaneswalkerCard* pWalker, Damage pDamage) 
{
	if (!pCard->GetCardType().IsCreature() || pWalker != this || 
		GetCardFlag()->GetData(CardFlag::AbilityFlag) != m_CardFlagModifier1->GetModifier().GetAdditionData()) return FALSE;

	else triggerContext.m_pCard = pCard;

	return TRUE;
}

//____________________________________________________________________________
//
CRakdosLordofRiotsCard::CRakdosLordofRiotsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakdos, Lord of Riots"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		RED_MANA_TEXT RED_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddFlying(FALSE);
	
	{
	counted_ptr<CTriggeredLostLifeAffinityAbility> cpAbility(
		::CreateObject<CTriggeredLostLifeAffinityAbility>(this,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CRakdosLordofRiotsCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
	}
}

BOOL CRakdosLordofRiotsCard::CanPlay(BOOL bIncludeTricks)
{
	if ((m_pGame->GetNextPlayer(GetController())->GetLifeLossTakenThisTurn() == 0))
	return false;
	else return true;
}

//____________________________________________________________________________
//
CIsperiasSkywatchCard::CIsperiasSkywatchCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Isperia's Skywatch"), CardType::Creature, CREATURE_TYPE2(Vedalken, Knight), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArchonOfTheTriumvirateCard::CArchonOfTheTriumvirateCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archon of the Triumvirate"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetSubjectCount(0, 2);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CAzoriusArresterCard::CAzoriusArresterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azorius Arrester"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzoriusJusticiarCard::CAzoriusJusticiarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azorius Justiciar"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetSubjectCount(0, 2);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInactionInjunctionCard::CInactionInjunctionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inaction Injunction"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			false));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CDetainModifier());
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLyevSkyknightCard::CLyevSkyknightCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lyev Skyknight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMartialLawCard::CMartialLawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Martial Law"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNewPrahvGuildmageCard::CNewPrahvGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("New Prahv Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
		
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CDetainModifier());

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulswornSpiritCard::CSoulswornSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulsworn Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddUnblockable(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CDetainModifier());

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJaceArchitectOfThoughtCard::CJaceArchitectOfThoughtCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Jace, Architect of Thought"), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		PlaneswalkerType::Jace, 4)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CJaceArchitectOfThoughtCard::OnResolutionCompleted))
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJaceArchitectOfThoughtCard::OnTargetZoneSelected))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Jace, Architect of Thought Effect"), 61025, 1, FALSE, ZoneId::_Effects));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());			
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					_T("")));	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchFreeCastAbility>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchFreeCastAbility>>(this,
				_T(""), CCardFilter::GetFilter(_T("non-lands"))));		

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);
		
		AddAbility(cpAbility.GetPointer());	
	}
}

void CJaceArchitectOfThoughtCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	if (bResult)
	{
		int size = 5;
		CPlayer* target =  pAbilityAction->GetController();
		CPlayer* opponent =  m_pGame->GetNextPlayer(target);
		CZone* pLibrary = target->GetZoneById(ZoneId::Library);	

		if (pLibrary->GetSize()<3) 
			size=pLibrary->GetSize();

		CCountedCardContainer SelectFrom;
		//CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

		for (int i = pLibrary->GetSize() - 1; i >= 0 && (pLibrary->GetSize() - i) < 4; --i)
		{
			SelectFrom.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
		}

		if(SelectFrom.GetSize())

			if (m_pGame->IsThinking() || opponent->IsComputer())
			{
				SelectFrom.Sort(TRUE);

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
					else
						m_SelectedCards1.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				if (!target->IsComputer() && !m_pGame->IsThinking())
				{
						for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				}

				ProcessPiling(target, pAbilityAction->GetController());
			}
			else
			{
				SelectCardsData selectCardData;

				selectCardData.pCardContainer = &SelectFrom;
				selectCardData.nMinSelect = MinimumValue(0);
				selectCardData.nMaxSelect = MaximumValue(SelectFrom.GetSize());
				selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

				opponent->GetInterface()->SelectCard(&selectCardData);
				m_SelectedCards1 = selectCardData.SelectedCards;

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (!m_SelectedCards1.HasCard(SelectFrom.GetAt(i)))
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				ProcessPiling(target, pAbilityAction->GetController());
			}

	}
}
void CJaceArchitectOfThoughtCard::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
{	
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Select pile 1"));

		entries.push_back(selectionEntry);
	}

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Select pile 2"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL,  pPlayer1);
}

void CJaceArchitectOfThoughtCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards1.GetAt(i));
				}
			
				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CPlayer* pController = GetController();
					m_SelectedCards2.GetAt(i)->Move(pController->GetZoneById(ZoneId::Library), pController, MoveType::Others, CardPlacement::Bottom);
				}

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards2.GetAt(i));
				}
				
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CPlayer* pController = GetController();
					m_SelectedCards1.GetAt(i)->Move(pController->GetZoneById(ZoneId::Library), pController, MoveType::Others, CardPlacement::Bottom);
				}

				return;
			}
			return;
		}
}

//____________________________________________________________________________
//
CTabletOfTheGuildsCard::CTabletOfTheGuildsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tablet of the Guilds"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CTabletOfTheGuildsCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTabletOfTheGuildsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTabletOfTheGuildsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

void CTabletOfTheGuildsCard::Move(CZone* pToZone,
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
			entry.strText.Format(_T("choose %s"), _T("white/blue"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("white/black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("blue/black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("blue/red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("black/red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 6;
			entry.strText.Format(_T("choose %s"), _T("black/green"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 7;
			entry.strText.Format(_T("choose %s"), _T("red/green"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 8;
			entry.strText.Format(_T("choose %s"), _T("red/white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 9;
			entry.strText.Format(_T("choose %s"), _T("green/white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 10;
			entry.strText.Format(_T("choose %s"), _T("green/blue"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CTabletOfTheGuildsCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				cBlue = true;

				return;
			}
			if (nSelectedIndex == 2)
			{
				cWhite = true;
				cBlack = true;

				return;
			}
			if (nSelectedIndex == 3)
			{
				cBlue = true;
				cBlack = true;

				return;
			}
			if (nSelectedIndex == 4)
			{
				cBlue = true;
				cRed = true;

				return;
			}
			if (nSelectedIndex == 5)
			{
				cBlack = true;
				cRed = true;

				return;
			}
			if (nSelectedIndex == 6)
			{
				cBlack = true;
				cGreen = true;

				return;
			}
			if (nSelectedIndex == 7)
			{
				cRed = true;
				cGreen = true;

				return;
			}
			if (nSelectedIndex == 8)
			{
				cRed = true;
				cWhite = true;

				return;
			}
			if (nSelectedIndex == 9)
			{
				cGreen = true;
				cWhite = true;

				return;
			}
			if (nSelectedIndex == 10)
			{
				cGreen = true;
				cBlue = true;

				return;
			}
		}
}

bool CTabletOfTheGuildsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.nValue1 = (int)pCard;

	return (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) ||
		(cBlue && pCard->IsColor(CManaPoolBase::Color::Blue)) ||
		(cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) ||
		(cRed && pCard->IsColor(CManaPoolBase::Color::Red)) ||
		(cGreen && pCard->IsColor(CManaPoolBase::Color::Green));
}

bool CTabletOfTheGuildsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = (CCard*)triggerContext.nValue1;

	int nLife = 0;

	if (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) nLife++;
	if (cBlue && pCard->IsColor(CManaPoolBase::Color::Blue)) nLife++;
	if (cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) nLife++;
	if (cRed && pCard->IsColor(CManaPoolBase::Color::Red)) nLife++;
	if (cGreen && pCard->IsColor(CManaPoolBase::Color::Green)) nLife++;
	
	if (nLife > Life(0))
	{
		CLifeModifier pModifier = CLifeModifier(Life(nLife), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAction->GetController());
	}

	return nLife > Life(0);
}

//____________________________________________________________________________
//
CEssenceBacklashCard::CEssenceBacklashCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Essence Backlash"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CEssenceBacklashCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CEssenceBacklashCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	int nPower = pTarget->GetLastKnownPower();
	CPlayer* pPlayer = pTarget->GetController();
	
	CLifeModifier pModifier = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CAngelofSerenityCard::CAngelofSerenityCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Serenity"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(6))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);
		cpAbility->GetTargeting().SetMultiZones(TRUE);
		cpAbility->GetTargeting().SetSubjectCount(0,3);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield | ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false)); // non-land and...
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

	//	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield | ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDetentionSphereCard::CDetentionSphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Detention Sphere"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDetentionSphereCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardNameComparer(_T("Detention Sphere")));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDetentionSphereCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDetentionSphereCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CDetentionSphereCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CDetentionSphereCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CDetentionSphereCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CDetentionSphereCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CDetentionSphereCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);

	pExiled.AddCard(pTarget, CardPlacement::Top);
	CString sName = pTarget->GetPrintedCardName();

	pModifier.ApplyTo(pTarget);

	CCountedCardContainer pToExile;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetPrintedCardName() == sName)
			{
				pExiled.AddCard(pCard, CardPlacement::Top);
				pToExile.AddCard(pCard, CardPlacement::Top);
			}
		}
	}

	for (int i = 0; i < pToExile.GetSize(); ++i)
		pModifier.ApplyTo(pToExile.GetAt(i));

	return true;
}

bool CDetentionSphereCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}
	
	return true;
}

void CDetentionSphereCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CEpicExperimentCard::CEpicExperimentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Epic Experiment"), CardType::Sorcery, nID)
{
	counted_ptr<CEpicExperimentSpell> cpSpell(
		::CreateObject<CEpicExperimentSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT RED_MANA_TEXT,
			CCardFilter::GetFilter(_T("instant cards or sorcery cards"))));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCounterfluxCard::CCounterfluxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Counterflux"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCounterfluxCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetCounterspellCardFilter().SetNotThisCardsControllerOnly(this);

		AddSpell(cpSpell.GetPointer());
	}
	
	{
		// overload cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityName(_T("Overload"));
		cpSpell->SetAbilityText(_T("Overload. Casts"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

void CCounterfluxCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CStack& stack = m_pGame->GetStack();
	
	CCountedCardContainer cards;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetController() != pAbilityAction->GetController())
			&& stack.CanCounterSpell(pAbilityAction->GetController(), pStackAction->GetAbility()->GetCard(), TRUE, ZoneId::Graveyard, CardPlacement::Top))
		{
			cards.AddCard(pStackAction->GetAbility()->GetCard(), CardPlacement::Top);
		}
	}

	for (int k = 0; k < cards.GetSize(); ++k)
	{
		stack.CounterSpell(pAbilityAction->GetController(),cards.GetAt(k), TRUE, ZoneId::Graveyard, CardPlacement::Top);
	}
}

//____________________________________________________________________________
//
CGuildFeudCard::CGuildFeudCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Guild Feud"), CardType::GlobalEnchantment, nID,
		_T("5") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_CardSelectionOpponent(pGame, CSelectionSupport::SelectionCallback(this, &CGuildFeudCard::OnCardSelectedOpponent))
	, m_CardSelectionController(pGame, CSelectionSupport::SelectionCallback(this, &CGuildFeudCard::OnCardSelectedController))
{
	typedef 
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Graveyard));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGuildFeudCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGuildFeudCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	pOpponentsCreature = NULL;

	int n = pLibrary->GetSize();

	if (n > 3) n = 3;

	if (n > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pModifier.ApplyTo(pTarget);

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't put anything onto the battlefield"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= n; ++i)
		{
			CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);

			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelectionOpponent.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController, n);
	}
	else ProcessController(pController);
	
	return true;
}

void CGuildFeudCard::OnCardSelectedOpponent(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything onto the battlefield"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, dwContext2, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);

				ProcessController((CPlayer*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s onto the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pOpponentsCreature = (CCreatureCard*)pCard;

				pModifier1.ApplyTo(pCard);

				if (dwContext2 > 1)
				{
					CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, dwContext2 - 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					pModifier2.SetReorderInformation(true, ZoneId::Graveyard);

					pModifier2.ApplyTo(pSelectionPlayer);
				}

				ProcessController((CPlayer*)dwContext1);
				
				return;
			}
		}
}

void CGuildFeudCard::ProcessController(CPlayer* pController)
{
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int n = pLibrary->GetSize();

	if (n > 3) n = 3;

	if (n > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pModifier.ApplyTo(pController);

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't put anything onto the battlefield"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= n; ++i)
		{
			CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);

			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelectionController.AddSelectionRequest(entries, 1, 1, NULL, pController, n);
	}
}

void CGuildFeudCard::OnCardSelectedController(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything onto the battlefield"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, dwContext1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s onto the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier1.ApplyTo(pCard);

				if (dwContext1 > 1)
				{
					CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, dwContext1 - 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					pModifier2.SetReorderInformation(true, ZoneId::Graveyard);

					pModifier2.ApplyTo(pSelectionPlayer);
				}

				if (pOpponentsCreature)
				{
					CCreatureCard* pMyCreature = (CCreatureCard*)pCard;
					Power MyPower = pMyCreature->GetPower();
					Power OpponentsPower = pOpponentsCreature->GetPower();

					CLifeModifier pModifier3 = CLifeModifier(Life(-OpponentsPower), pOpponentsCreature, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
					CLifeModifier pModifier4 = CLifeModifier(Life(-MyPower), pMyCreature, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

					if (OpponentsPower > 0) pModifier3.ApplyTo(pMyCreature);
					if (MyPower > 0) pModifier4.ApplyTo(pOpponentsCreature);
				}
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSlimeMoldingCard::CSlimeMoldingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slime Molding"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSlimeMoldingCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSlimeMoldingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int n = pAction->GetCostConfigEntry().GetExtraValue();

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Ooze D"), 2863));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2863); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Ooze D")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(n));
		pCreature->SetPrintedToughness(Life(n));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CAvengingArrowCard::CAvengingArrowCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Avenging Arrow"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardFlagComparer(CardFlag::_DealtDamage, false));
}

//____________________________________________________________________________
//
CStabWoundCard::CStabWoundCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Stab Wound"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(-2), Life(-2))
{
	m_pEnchantSpell = m_pChgPwrTghAttrEnchant;

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStabWoundCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStabWoundCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CGraveBetrayalCard::CGraveBetrayalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grave Betrayal"), CardType::GlobalEnchantment, nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraveBetrayalCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGraveBetrayalCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGraveBetrayalCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CGraveBetrayalCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInGraveyard())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Grave Betrayal Effect"), 61069, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//