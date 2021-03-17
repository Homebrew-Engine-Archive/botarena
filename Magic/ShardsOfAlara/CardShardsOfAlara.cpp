#include "stdafx.h"
#include "CardShardsOfAlara.h"

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

		DEFINE_CARD(CAdNauseamCard);
		DEFINE_CARD(CAgonyWarpCard);
		DEFINE_CARD(CAjaniVengeantCard);
		DEFINE_CARD(CAkrasanSquireCard);
		DEFINE_CARD(CAlgaeGharialCard);
		DEFINE_CARD(CAngelsHeraldCard);
		DEFINE_CARD(CAngelsongCard);
		DEFINE_CARD(CArcaneSanctumCard);
		DEFINE_CARD(CArchdemonOfUnxCard);
		DEFINE_CARD(CBanewaspAfflictionCard);
		DEFINE_CARD(CBantBattlemageCard);
		DEFINE_CARD(CBantCharmCard);
		DEFINE_CARD(CBantPanoramaCard);
		DEFINE_CARD(CBattlegraceAngelCard);
		DEFINE_CARD(CBehemothsHeraldCard);
		DEFINE_CARD(CBlightningCard);
		DEFINE_CARD(CBlisterBeetleCard);
		DEFINE_CARD(CBloodCultistCard);
		DEFINE_CARD(CBloodpyreElementalCard);
		DEFINE_CARD(CBloodthornTaunterCard);
		DEFINE_CARD(CBoneSplintersCard);
		DEFINE_CARD(CBranchingBoltCard);
		DEFINE_CARD(CBrilliantUltimatumCard);
		DEFINE_CARD(CBroodmateDragonCard);
		DEFINE_CARD(CBullCerodonCard);
		DEFINE_CARD(CCalderaHellionCard);
		DEFINE_CARD(CCallToHeelCard);
		DEFINE_CARD(CCarrionThrashCard);
		DEFINE_CARD(CCatharticAdeptCard);
		DEFINE_CARD(CCavernThoctarCard);
		DEFINE_CARD(CClarionUltimatumCard);
		DEFINE_CARD(CCloudheathDrakeCard);
		DEFINE_CARD(CComaVeilCard);
		DEFINE_CARD(CCorpseConnoisseurCard);
		DEFINE_CARD(CCouriersCapsuleCard);
		DEFINE_CARD(CCourtArchersCard);
		DEFINE_CARD(CCovenantOfMindsCard);
		DEFINE_CARD(CCradleOfVitalityCard);
		DEFINE_CARD(CCrucibleOfFireCard);
		DEFINE_CARD(CCruelUltimatumCard);
		DEFINE_CARD(CCrumblingNecropolisCard);
		DEFINE_CARD(CCunningLethemancerCard);
		DEFINE_CARD(CCylianElfCard);
		DEFINE_CARD(CDawnrayArcherCard);
		DEFINE_CARD(CDeathBaronCard);
		DEFINE_CARD(CDeathgreeterCard);
		DEFINE_CARD(CDeftDuelistCard);
		DEFINE_CARD(CDemonsHeraldCard);
		DEFINE_CARD(CDispellersCapsuleCard);
		DEFINE_CARD(CDragonFodderCard);
		DEFINE_CARD(CDragonsHeraldCard);
		DEFINE_CARD(CDregReaverCard);
		DEFINE_CARD(CDregscapeZombieCard);
		DEFINE_CARD(CDrumhunterCard);
		DEFINE_CARD(CDruidOfTheAnimaCard);
		DEFINE_CARD(CElspethKnightErrantCard);
		DEFINE_CARD(CEmpyrialArchangelCard);
		DEFINE_CARD(CEsperBattlemageCard);
		DEFINE_CARD(CEsperCharmCard);
		DEFINE_CARD(CEsperPanoramaCard);
		DEFINE_CARD(CEtheriumAstrolabeCard);
		DEFINE_CARD(CEtheriumSculptorCard);
		DEFINE_CARD(CEtherswornCanonistCard);
		DEFINE_CARD(CExecutionersCapsuleCard);
		DEFINE_CARD(CExuberantFirestokerCard);
		DEFINE_CARD(CFatestitcherCard);
		DEFINE_CARD(CFiligreeSagesCard);
		DEFINE_CARD(CFireFieldOgreCard);
		DEFINE_CARD(CFleshbagMarauderCard);
		DEFINE_CARD(CGiftOfTheGargantuanCard);
		DEFINE_CARD(CGlazeFiendCard);
		DEFINE_CARD(CGoblinAssaultCard);
		DEFINE_CARD(CGoblinDeathraidersCard);
		DEFINE_CARD(CGodsireCard);
		DEFINE_CARD(CGodtoucherCard);
		DEFINE_CARD(CGrixisBattlemageCard);
		DEFINE_CARD(CGrixisCharmCard);
		DEFINE_CARD(CGrixisPanoramaCard);
		DEFINE_CARD(CGustriderExuberantCard);
		DEFINE_CARD(CHellkiteOverlordCard);
		DEFINE_CARD(CHellsThunderCard);
		DEFINE_CARD(CHinderingLightCard);
		DEFINE_CARD(CHissingIguanarCard);
		DEFINE_CARD(CImmortalCoilCard);
		DEFINE_CARD(CIncurableOgreCard);
		DEFINE_CARD(CInvincibleHymnCard);
		DEFINE_CARD(CJhessianInfiltratorCard);
		DEFINE_CARD(CJhessianLookoutCard);
		DEFINE_CARD(CJundBattlemageCard);
		DEFINE_CARD(CJundCharmCard);
		DEFINE_CARD(CJundPanoramaCard);
		DEFINE_CARD(CJungleShrineCard);
		DEFINE_CARD(CJungleWeaverCard);
		DEFINE_CARD(CKathariScreecherCard);
		DEFINE_CARD(CKederektCreeperCard);
		DEFINE_CARD(CKederektLeviathanCard);
		DEFINE_CARD(CKeeperOfProgenitusCard);
		DEFINE_CARD(CKissOfTheAmeshaCard);
		DEFINE_CARD(CKnightCaptainOfEosCard);
		DEFINE_CARD(CKnightOfTheSkywardEyeCard);
		DEFINE_CARD(CKnightOfTheWhiteOrchidCard);
		DEFINE_CARD(CKreshTheBloodbraidedCard);
		DEFINE_CARD(CLightningTalonsCard);
		DEFINE_CARD(CMagmaSprayCard);
		DEFINE_CARD(CManaplasmCard);
		DEFINE_CARD(CMarbleChaliceCard);
		DEFINE_CARD(CMasterOfEtheriumCard);
		DEFINE_CARD(CMayaelTheAnimaCard);
		DEFINE_CARD(CMemoryErosionCard);
		DEFINE_CARD(CMetallurgeonCard);
		DEFINE_CARD(CMightyEmergenceCard);
		DEFINE_CARD(CMinionReflectorCard);
		DEFINE_CARD(CMosstodonCard);
		DEFINE_CARD(CMycolothCard);
		DEFINE_CARD(CNayaBattlemageCard);
		DEFINE_CARD(CNayaCharmCard);
		DEFINE_CARD(CNayaPanoramaCard);
		DEFINE_CARD(CNecrogenesisCard);
		DEFINE_CARD(CObeliskOfBantCard);
		DEFINE_CARD(CObeliskOfEsperCard);
		DEFINE_CARD(CObeliskOfGrixisCard);
		DEFINE_CARD(CObeliskOfJundCard);
		DEFINE_CARD(CObeliskOfNayaCard);
		DEFINE_CARD(COnyxGobletCard);
		DEFINE_CARD(COozeGardenCard);
		DEFINE_CARD(COutriderOfJhessCard);
		DEFINE_CARD(CPredatorDragonCard);
		//DEFINE_CARD(CPrinceOfThrallsCard);
		DEFINE_CARD(CProtomatterPowderCard);
		DEFINE_CARD(CPunishIgnoranceCard);
		DEFINE_CARD(CPuppetConjurerCard);
		DEFINE_CARD(CQasaliAmbusherCard);
		DEFINE_CARD(CQuietusSpikeCard);
		DEFINE_CARD(CRafiqOfTheManyCard);
		DEFINE_CARD(CRakeclawGargantuanCard);
		DEFINE_CARD(CRangerOfEosCard);
		DEFINE_CARD(CRealmRazerCard);
		DEFINE_CARD(CRelicofProgenitusCard);
		DEFINE_CARD(CResoundingRoarCard);
		DEFINE_CARD(CResoundingScreamCard);
		DEFINE_CARD(CResoundingSilenceCard);
		DEFINE_CARD(CResoundingThunderCard);
		DEFINE_CARD(CResoundingWaveCard);
		DEFINE_CARD(CRhoxChargerCard);
		DEFINE_CARD(CRhoxWarMonkCard);
		DEFINE_CARD(CRidgeRannetCard);
		DEFINE_CARD(CRipClanCrasherCard);
		DEFINE_CARD(CRockcasterPlatoonCard);
		DEFINE_CARD(CRockslideElementalCard);
		DEFINE_CARD(CSacellumGodspeakerCard);
		DEFINE_CARD(CSalvageTitanCard);
		DEFINE_CARD(CSanctumGargoyleCard);
		DEFINE_CARD(CSangriteSurgeCard);
		DEFINE_CARD(CSarkhanVolCard);
		DEFINE_CARD(CSavageHungerCard);
		DEFINE_CARD(CSavageLandsCard);
		DEFINE_CARD(CScavengerDrakeCard);
		DEFINE_CARD(CScourgeDevilCard);
		DEFINE_CARD(CScourglassCard);
		DEFINE_CARD(CSeasideCitadelCard);
		DEFINE_CARD(CSedraxisSpecterCard);
		DEFINE_CARD(CShadowfeedCard);
		DEFINE_CARD(CShardingSphinxCard);
		DEFINE_CARD(CSharuumTheHegemonCard);
		DEFINE_CARD(CShoreSnapperCard);
		DEFINE_CARD(CSightedCasteSorcererCard);
		DEFINE_CARD(CSigilBlessingCard);
		DEFINE_CARD(CSigiledPaladinCard);
		DEFINE_CARD(CSigilofDistinctionCard);
		DEFINE_CARD(CSkeletalKathariCard);
		DEFINE_CARD(CSkeletonizeCard);
		DEFINE_CARD(CSkullmulcherCard);
		DEFINE_CARD(CSoulsGraceCard);
		DEFINE_CARD(CSoulsFireCard);
		DEFINE_CARD(CSoulsMightCard);
		DEFINE_CARD(CSpearbreakerBehemothCard);
		DEFINE_CARD(CSpellSnipCard);
		DEFINE_CARD(CSphinxsHeraldCard);
		DEFINE_CARD(CSphinxSovereignCard);
		DEFINE_CARD(CSproutingThrinaxCard);
		DEFINE_CARD(CSteelcladSerpentCard);
		DEFINE_CARD(CStewardOfValeronCard);
		DEFINE_CARD(CStoicAngelCard);
		DEFINE_CARD(CSunseedNurturerCard);
		DEFINE_CARD(CSwerveCard);
		DEFINE_CARD(CTarFiendCard);
		DEFINE_CARD(CTezzeretTheSeekerCard);
		DEFINE_CARD(CThornThrashViashinoCard);
		DEFINE_CARD(CThoughtcutterAgentCard);
		DEFINE_CARD(CThunderthrashElderCard);
		DEFINE_CARD(CTidehollowScullerCard);
		DEFINE_CARD(CTidehollowStrixCard);
		DEFINE_CARD(CTitanicUltimatumCard);
		DEFINE_CARD(CTopanAsceticCard);
		DEFINE_CARD(CTortoiseFormationCard);
		DEFINE_CARD(CTowerGargoyleCard);
		DEFINE_CARD(CUndeadLeotauCard);
		DEFINE_CARD(CVectisSilencersCard);
		DEFINE_CARD(CVeinDrinkerCard);
		DEFINE_CARD(CViashinoSkeletonCard);
		DEFINE_CARD(CViciousShadowsCard);
		DEFINE_CARD(CViolentUltimatumCard);
		DEFINE_CARD(CVisceraDraggerCard);
		DEFINE_CARD(CVithianStingerCard);
		DEFINE_CARD(CVolcanicSubmersionCard);
		DEFINE_CARD(CWaveskimmerAvenCard);
		DEFINE_CARD(CWelkinGuideCard);
		DEFINE_CARD(CWhereAncientsTreadCard);
		DEFINE_CARD(CWildNacatlCard);
		DEFINE_CARD(CWindwrightMageCard);
		DEFINE_CARD(CWoollyThoctarCard);
		DEFINE_CARD(CYokedPlowbeastCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
/*CPrinceOfThrallsCard::CPrinceOfThrallsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prince of Thralls"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetPlayerLifeCost(NULL, Life (-3));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrinceOfThrallsCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CPrinceOfThrallsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController());
	return true;
}
*/
//____________________________________________________________________________
//
CTezzeretTheSeekerCard::CTezzeretTheSeekerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Tezzeret the Seeker"), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		PlaneswalkerType::Tezzeret, 4)
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),	FALSE, TRUE,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->GetTargeting()->SetSubjectCount(0, 2);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		m_CardFilter0.AddComparer(new CardTypeComparer(CardType::Artifact, false));
		m_CardFilter0.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(0));
		m_CardFilter0.SetFilterName(_T("an artifact card with converted mana cost 0"), _T("artifact cards with converted mana cost 0"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter0, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -0);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilterX.AddComparer(new CardTypeComparer(CardType::Artifact, false)); // Just ot make it initialized
		m_CardFilterX.SetFilterName(_T("an artifact card with converted mana cost X or less"), _T("artifact cards with converted mana cost X or less"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilterX, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), SpecialNumber::AnyNegative);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretTheSeekerCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -5);

		cpAbility->SetAbilityText(_T("Artifacts you control becomes 5/5 artifact creatures. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretTheSeekerCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTezzeretTheSeekerCard::BeforeResolution2(CAbilityAction* pAction)
{
	int nCount = -pAction->GetCostConfigEntry().GetExtraValue();
	m_CardFilterX.SetComparer(new CardTypeComparer(CardType::Artifact, false));
	m_CardFilterX.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(nCount));

	return true;
}

bool CTezzeretTheSeekerCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter cardfilterC;
	cardfilterC.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature, true));

	CCardFilter cardfilterNC;
	cardfilterNC.SetComparer(new CardTypeComparer(CardType::Artifact, false));
	cardfilterNC.AddNegateComparer(new AnyCreatureComparer);

	CPowerModifier powerModifier;
		powerModifier.SetPowerDelta(Power(5));
		powerModifier.SetToBase(TRUE);
		powerModifier.SetReplacement(TRUE);
		powerModifier.SetOneTurnOnly(TRUE);

	CLifeModifier lifeModifier;
		lifeModifier.SetLifeDelta(Life(5));
		lifeModifier.SetToBase(TRUE);
		lifeModifier.SetReplacement(TRUE);
		lifeModifier.SetOneTurnOnly(TRUE);

	CScheduledCardModifier animationModifier = CScheduledCardModifier(GetGame(),
		new CCardIsAlsoAModifier(_T("Animated Artifact A"), 64000, GetController()),
		TurnNumberDelta(-1), NodeId::EndStep,
		true, CScheduledCardModifier::Operation::ApplyToNowRemoveLater);

	CCountedCardContainer artifact_creatures;
	if (cardfilterC.GetIncluded(*pZone, artifact_creatures))			
		for (int i = 0; i < artifact_creatures.GetSize(); ++i)
		{
			CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(artifact_creatures.GetAt(i));
			if (!pCreature) continue;

			powerModifier.ApplyTo(pCreature);
			lifeModifier.ApplyTo(pCreature);
		}

	CCountedCardContainer artifacts;
	if (cardfilterNC.GetIncluded(*pZone, artifacts))
		for (int i = 0; i < artifacts.GetSize(); ++i)
			animationModifier.ApplyTo(artifacts.GetAt(i));	

	return true;
}

//____________________________________________________________________________
//
CAkrasanSquireCard::CAkrasanSquireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akrasan Squire"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkrasanSquireCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAkrasanSquireCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CDeathBaronCard::CDeathBaronCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death Baron"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Skeleton), false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Skeleton), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CHellkiteOverlordCard::CHellkiteOverlordCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Hellkite Overlord"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8),
		BLACK_MANA_TEXT GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeinDrinkerCard::CVeinDrinkerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vein Drinker"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetReceiveDamageFromTargetedCreature();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWildNacatlCard::CWildNacatlCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Nacatl"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		//Plains pump
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
	{
		//Mountain pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Mountain, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJhessianInfiltratorCard::CJhessianInfiltratorCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Jhessian Infiltrator"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CAlgaeGharialCard::CAlgaeGharialCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Algae Gharial"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArcaneSanctumCard::CArcaneSanctumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Arcane Sanctum"), nID)
{
	SetIntoPlayTapped();

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
}

//____________________________________________________________________________
//
CBantBattlemageCard::CBantBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bant Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBantCharmCard::CBantCharmCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Bant Charm"), CardType::Instant, nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Instant, false))
{
	{
		//put target creature on top of its owner's library
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->SetCardPlacement(CardPlacement::Bottom);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target artifact
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlisterBeetleCard::CBlisterBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blister Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodCultistCard::CBloodCultistCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Blood Cultist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		FALSE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodpyreElementalCard::CBloodpyreElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodpyre Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-4), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodthornTaunterCard::CBloodthornTaunterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Bloodthorn Taunter"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::greater<int>>(4)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoneSplintersCard::CBoneSplintersCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Bone Splinters"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CBroodmateDragonCard::CBroodmateDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Broodmate Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon A"), 2735, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBullCerodonCard::CBullCerodonCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Bull Cerodon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCarrionThrashCard::CCarrionThrashCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carrion Thrash"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetResolutionCost(_T("2"));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCatharticAdeptCard::CCatharticAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cathartic Adept"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CCavernThoctarCard::CCavernThoctarCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cavern Thoctar"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(5),
		_T("1") RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CCloudheathDrakeCard::CCloudheathDrakeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cloudheath Drake"), CardType::_ArtifactCreature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CComaVeilCard::CComaVeilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coma Veil"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("4") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
			CardKeyword::NoUntapInUntapPhase));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCouriersCapsuleCard::CCouriersCapsuleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Courier's Capsule"), CardType::Artifact, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT, 2));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCourtArchersCard::CCourtArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Court Archers"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCourtArchersCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCourtArchersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CCrucibleOfFireCard::CCrucibleOfFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crucible of Fire"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
			Power(+3), Life(+3)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrumblingNecropolisCard::CCrumblingNecropolisCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Crumbling Necropolis"), nID)
{
	SetIntoPlayTapped();

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
}

//____________________________________________________________________________
//
CCunningLethemancerCard::CCunningLethemancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cunning Lethemancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetDiscardCount(1);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCylianElfCard::CCylianElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cylian Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		 _T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CDawnrayArcherCard::CDawnrayArcherCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Dawnray Archer"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1),
		WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDawnrayArcherCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDawnrayArcherCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CDeathgreeterCard::CDeathgreeterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathgreeter"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeftDuelistCard::CDeftDuelistCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Deft Duelist"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CDispellersCapsuleCard::CDispellersCapsuleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dispeller's Capsule"), CardType::Artifact, nID,
		WHITE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") WHITE_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
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
CDregReaverCard::CDregReaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreg Reaver"), CardType::Creature, CREATURE_TYPE2(Zombie, Beast), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CDruidOfTheAnimaCard::CDruidOfTheAnimaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Druid of the Anima"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmpyrialArchangelCard::CEmpyrialArchangelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Empyrial Archangel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(8))
{
	GetCardKeyword()->AddShroud(FALSE);

	counted_ptr<CDamageRedirectionEnchantment> cpAbility(
		::CreateObject<CDamageRedirectionEnchantment>(this, 
			DamageType::CombatDamage | DamageType::NonCombatDamage,
			this));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEsperBattlemageCard::CEsperBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Esper Battlemage"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT,
			Life(2),
			SourceColor::_AllSources, 
			TRUE)); // prevent damage to this card's controller

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEsperCharmCard::CEsperCharmCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Esper Charm"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	{
		//draw two cards
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target player discards two cards
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEtheriumAstrolabeCard::CEtheriumAstrolabeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Etherium Astrolabe"), CardType::Artifact, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Artifact)
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			BLACK_MANA_TEXT, 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExecutionersCapsuleCard::CExecutionersCapsuleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Executioner's Capsule"), CardType::Artifact, nID,
		BLACK_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFiligreeSagesCard::CFiligreeSagesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Filigree Sages"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			FALSE, TRUE,
			new CardTypeComparer(CardType::Artifact, false)));

	AddAbility(cpAbility.GetPointer());
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
CGlazeFiendCard::CGlazeFiendCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glaze Fiend"), CardType::_ArtifactCreature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinAssaultCard::CGoblinAssaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Assault"), CardType::GlobalEnchantment, nID, 
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin A"), 2736, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinDeathraidersCard::CGoblinDeathraidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Deathraiders"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CGodsireCard::CGodsireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godsire"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Beast E"), 2737,
			1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGodtoucherCard::CGodtoucherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godtoucher"), CardType::Creature, CREATURE_TYPE2(Elf, Cleric), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CreaturePowerComparer<std::greater<int>>(4),
			FALSE,
			Life(PreventionType::PreventAllDamage),
			SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CGrixisBattlemageCard::CGrixisBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grixis Battlemage"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT, 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrixisCharmCard::CGrixisCharmCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Grixis Charm"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	{
		//target creature gets -4/-4
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				Power(-4), Life(-4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
 	}
	{
		//creatures you control get +2/+0
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Creatures you control get +2/+0 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//

CGustriderExuberantCard::CGustriderExuberantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gustrider Exuberant"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
		::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
			_T(""),
			new CreaturePowerComparer<std::greater<int>>(4),
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CHissingIguanarCard::CHissingIguanarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hissing Iguanar"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIncurableOgreCard::CIncurableOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Incurable Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Mutant), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(1))
{
}

//____________________________________________________________________________
//
CJhessianLookoutCard::CJhessianLookoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhessian Lookout"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CJundBattlemageCard::CJundBattlemageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Jund Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1), // life delta
		PreventableType::NotPreventable)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			GREEN_MANA_TEXT,
			_T("Saproling J"), 62001,
			1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJundCharmCard::CJundCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Jund Charm"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	{
		//exile target player's graveyard
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
				ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards"))));

		cpSpell->AddCardModifier(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Exile all cards from target player's graveyard. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//pyroclasm part
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Jund Charm deals 2 damage to each creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CJungleShrineCard::CJungleShrineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Jungle Shrine"), nID)
{
	SetIntoPlayTapped();

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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKederektCreeperCard::CKederektCreeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kederekt Creeper"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
}

//____________________________________________________________________________
//
CKnightOfTheSkywardEyeCard::CKnightOfTheSkywardEyeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of the Skyward Eye"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("3") GREEN_MANA_TEXT,
			Power(+3), Life(+3)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightCaptainOfEosCard::CKnightCaptainOfEosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight-Captain of Eos"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Soldier"), _T("Soldiers"), new CreatureTypeComparer(CREATURE_TYPE(Soldier), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Soldier I"), 2953, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
				WHITE_MANA_TEXT, PlayerEffectType::PreventAllCombatDamage, TRUE));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLightningTalonsCard::CLightningTalonsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lightning Talons"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+3), Life(0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CMarbleChaliceCard::CMarbleChaliceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Marble Chalice"), CardType::Artifact, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMasterOfEtheriumCard::CMasterOfEtheriumCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of Etherium"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//pump other artifact creatures
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMayaelTheAnimaCard::CMayaelTheAnimaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mayael the Anima"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Shaman), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(_T("a creature with power 5 or greater"), _T("creatures with power 5 or greater"), new CreaturePowerComparer<std::greater_equal<int>>(5))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("3") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
			5));

	cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Battlefield, CardPlacement::NotApplicable, &m_CardFilter);
	cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpAbility->SetRevealCardsToOthers(TRUE, TRUE);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMetallurgeonCard::CMetallurgeonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Metallurgeon"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMosstodonCard::CMosstodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mosstodon"), CardType::Creature, CREATURE_TYPE2(Plant, Elephant), nID,
		_T("4") GREEN_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::greater<int>>(4)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNayaBattlemageCard::CNayaBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Naya Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
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
}

//____________________________________________________________________________
//
CNayaCharmCard::CNayaCharmCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Naya Charm"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, 
				ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->AddCardModifier(new CCardOrientationModifier(TRUE));

		cpSpell->SetAbilityText(_T("Tap all creatures target player controls. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CObeliskOfBantCard::CObeliskOfBantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Bant"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

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
}

//____________________________________________________________________________
//
CObeliskOfEsperCard::CObeliskOfEsperCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Esper"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
}

//____________________________________________________________________________
//
CObeliskOfGrixisCard::CObeliskOfGrixisCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Grixis"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
}

//____________________________________________________________________________
//
CObeliskOfJundCard::CObeliskOfJundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Jund"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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

//____________________________________________________________________________
//
CObeliskOfNayaCard::CObeliskOfNayaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Naya"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COnyxGobletCard::COnyxGobletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Onyx Goblet"), CardType::Artifact, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Artifact)
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

//____________________________________________________________________________
//
COutriderOfJhessCard::COutriderOfJhessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Outrider of Jhess"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COutriderOfJhessCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool COutriderOfJhessCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CProtomatterPowderCard::CProtomatterPowderCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Protomatter Powder"), CardType::Artifact, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("4") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPuppetConjurerCard::CPuppetConjurerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Puppet Conjurer"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLUE_MANA_TEXT,
				_T("Homunculus"), 2738,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Homunculus), false));
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
CRakeclawGargantuanCard::CRakeclawGargantuanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakeclaw Gargantuan"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::greater<int>>(4)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRhoxChargerCard::CRhoxChargerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Charger"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRhoxChargerCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CRhoxChargerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CRipClanCrasherCard::CRipClanCrasherCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Rip-Clan Crasher"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CRockcasterPlatoonCard::CRockcasterPlatoonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rockcaster Platoon"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(7))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("4") GREEN_MANA_TEXT,	// Cost
			Life(-2),		// life delta
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),	// Affects creatures
			TRUE,	// Affects players
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));	// Preventable

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRockslideElementalCard::CRockslideElementalCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Rockslide Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSanctumGargoyleCard::CSanctumGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sanctum Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
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
CSavageLandsCard::CSavageLandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Savage Lands"), nID)
{
	SetIntoPlayTapped();

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

//____________________________________________________________________________
//
CScavengerDrakeCard::CScavengerDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scavenger Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScourglassCard::CScourglassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scourglass"), CardType::Artifact, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T(""), 
			new NegateCardComparer(new CardTypeComparer(CardType::Artifact | CardType::_Land, false)), 
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeasideCitadelCard::CSeasideCitadelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seaside Citadel"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

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
}

//____________________________________________________________________________
//
CShadowfeedCard::CShadowfeedCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Shadowfeed"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CShardingSphinxCard::CShardingSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sharding Sphinx"), CardType::_ArtifactCreature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))

	, m_ArtifactCreatureCardFilter(new CardTypeComparer(CardType::_ArtifactCreature, true))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_ArtifactCreatureCardFilter);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetCreateTokenOption(TRUE, _T("Thopter A"), 2709, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSharuumTheHegemonCard::CSharuumTheHegemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sharuum the Hegemon"), CardType::_LegendaryCreature | CardType::Artifact, CREATURE_TYPE(Sphinx), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShoreSnapperCard::CShoreSnapperCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Shore Snapper"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CSightedCasteSorcererCard::CSightedCasteSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sighted-Caste Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSightedCasteSorcererCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSightedCasteSorcererCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSigiledPaladinCard::CSigiledPaladinCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Sigiled Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSigiledPaladinCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSigiledPaladinCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSkeletalKathariCard::CSkeletalKathariCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skeletal Kathari"), CardType::Creature, CREATURE_TYPE2(Bird, Skeleton), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSproutingThrinaxCard::CSproutingThrinaxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sprouting Thrinax"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling J"), 62001, 3);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStewardOfValeronCard::CStewardOfValeronCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Steward of Valeron"), CardType::Creature, CREATURE_TYPE3(Human, Druid, Knight), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CSwerveCard::CSwerveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swerve"), CardType::Instant, nID)
{
	counted_ptr<CDeflectionSpell> cpSpell(
		::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
			BLUE_MANA_TEXT RED_MANA_TEXT, 
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTidehollowStrixCard::CTidehollowStrixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tidehollow Strix"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CTopanAsceticCard::CTopanAsceticCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Topan Ascetic"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CTortoiseFormationCard::CTortoiseFormationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tortoise Formation"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTowerGargoyleCard::CTowerGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tower Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CVectisSilencersCard::CVectisSilencersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vectis Silencers"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2") BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashinoSkeletonCard::CViashinoSkeletonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Skeleton"), CardType::Creature, CREATURE_TYPE2(Viashino, Skeleton), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("1") BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViolentUltimatumCard::CViolentUltimatumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Violent Ultimatum"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
		BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->SetSubjectCount(3, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWaveskimmerAvenCard::CWaveskimmerAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Waveskimmer Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWaveskimmerAvenCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CWaveskimmerAvenCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CWelkinGuideCard::CWelkinGuideCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Welkin Guide"), CardType::Creature, CREATURE_TYPE2(Bird, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhereAncientsTreadCard::CWhereAncientsTreadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Where Ancients Tread"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(4));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWoollyThoctarCard::CWoollyThoctarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woolly Thoctar"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CAngelsongCard::CAngelsongCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Angelsong"), CardType::Instant, nID)
{
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBantPanoramaCard::CBantPanoramaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bant Panorama"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Forest | CardType::Plains | CardType::Island, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_CardFilter.SetFilterName(_T("a basic Forest, Plains, or Island card"), _T("basic Forest, Plains, or Island cards"));

	//Add colorless mana
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	//search basic lands
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEsperPanoramaCard::CEsperPanoramaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Esper Panorama"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains | CardType::Island | CardType::Swamp, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_CardFilter.SetFilterName(_T("a basic Plains, Island, or Swamp card"), _T("basic Plains, Island, or Swamp cards"));

	//Add colorless mana
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	//search basic lands
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrixisPanoramaCard::CGrixisPanoramaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grixis Panorama"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Island | CardType::Swamp | CardType::Mountain, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_CardFilter.SetFilterName(_T("a basic Island, Swamp, or Mountain card"), _T("basic Island, Swamp, or Mountain cards"));

	//Add colorless mana
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	//search basic lands
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJundPanoramaCard::CJundPanoramaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Jund Panorama"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Swamp | CardType::Mountain | CardType::Forest, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_CardFilter.SetFilterName(_T("a basic Swamp, Mountain, or Forest card"), _T("basic Swamp, Mountain, or Forest cards"));

	//Add colorless mana
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	//search basic lands
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNayaPanoramaCard::CNayaPanoramaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Naya Panorama"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Mountain | CardType::Forest | CardType::Plains, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::BasicLand, false));
	m_CardFilter.SetFilterName(_T("a basic Mountain, Forest, or Plains card"), _T("basic Mountain, Forest, or Plains cards"));

	//Add colorless mana
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	//search basic lands
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlightningCard::CBlightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blightning"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
															 DamageType::SpellDamage | DamageType::NonCombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRangerOfEosCard::CRangerOfEosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ranger of Eos"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
	m_CardFilter.SetFilterName(_T("a creature card with converted mana cost 1 or less"), _T("creature cards with converted mana cost 1 or less"));

	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYokedPlowbeastCard::CYokedPlowbeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yoked Plowbeast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpellSnipCard::CSpellSnipCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Snip"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
	
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSteelcladSerpentCard::CSteelcladSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steelclad Serpent"), CardType::_ArtifactCreature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(5))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CSteelcladSerpentCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CSteelcladSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard == this)
			continue;

		if (pCard->GetCardType().IsArtifact())
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CRidgeRannetCard::CRidgeRannetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ridge Rannet"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVolcanicSubmersionCard::CVolcanicSubmersionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Volcanic Submersion"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJungleWeaverCard::CJungleWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jungle Weaver"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSavageHungerCard::CSavageHungerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Savage Hunger"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+1), Life(+0), CreatureKeyword::Trample)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKissOfTheAmeshaCard::CKissOfTheAmeshaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kiss of the Amesha"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT, 
			2));

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+7), this, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThoughtcutterAgentCard::CThoughtcutterAgentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thoughtcutter Agent"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Rogue), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this, 
			BLUE_MANA_TEXT BLACK_MANA_TEXT, 
			0, MoveType::Others, ZoneId::Graveyard, TRUE,
			FALSE,	// targeted player chooses?
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetShowHandBeforeDiscards();
	cpAbility->AddTapCost();
	cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuietusSpikeCard::CQuietusSpikeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quietus Spike"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		CCardKeywordModifier* pDeathtouchModifier = new CCardKeywordModifier;
		pDeathtouchModifier->GetModifier().SetToAdd(CardKeyword::Deathtouch);
		pDeathtouchModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pDeathtouchModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(SpecialNumber::DivideBy2RoundUp));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CCallToHeelCard::CCallToHeelCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Call to Heel"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CDrawCardModifier(pGame, MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CMemoryErosionCard::CMemoryErosionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Memory Erosion"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDregscapeZombieCard::CDregscapeZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dregscape Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	//Unearth ability
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLACK_MANA_TEXT));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetAbilityText(_T("Unearth"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDregscapeZombieCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
	AddAbility(cpAbility.GetPointer());
}

bool CDregscapeZombieCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CCradleOfVitalityCard::CCradleOfVitalityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cradle of Vitality"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetResolutionCost(_T("1") WHITE_MANA_TEXT);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCradleOfVitalityCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCradleOfVitalityCard::BeforeResolution1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCradleOfVitalityCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife)
	{
		triggerContext.nValue1 = GET_INTEGER(nToLife - nFromLife);
		
		return true;
	}

	return false;
}
bool CCradleOfVitalityCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);

	CCard* target = pAction->GetAssociatedCard();

	if (target->GetCardType().IsCreature() && !target->HasProtectionFrom(this, FALSE) && !target->GetCardKeyword()->HasShroud(this))
		pModifier.ApplyTo(this);
	
	return true;
}
//____________________________________________________________________________
//
CSunseedNurturerCard::CSunseedNurturerCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Sunseed Nurturer"), CardType::Creature, CREATURE_TYPE3(Human, Druid, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1),
		_T("1"))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunseedNurturerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSunseedNurturerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSunseedNurturerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

bool CSunseedNurturerCard::BeforeResolution(CSunseedNurturerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CExuberantFirestokerCard::CExuberantFirestokerCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Exuberant Firestoker"), CardType::Creature, CREATURE_TYPE3(Human, Druid, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		_T("1"))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExuberantFirestokerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CExuberantFirestokerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CExuberantFirestokerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

bool CExuberantFirestokerCard::BeforeResolution(CExuberantFirestokerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CDrumhunterCard::CDrumhunterCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Drumhunter"), CardType::Creature, CREATURE_TYPE3(Human, Druid, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2),
		_T("1"))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDrumhunterCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDrumhunterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDrumhunterCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

bool CDrumhunterCard::BeforeResolution(CDrumhunterCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetLastKnownPower() > Power(4))
				return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CCalderaHellionCard::CCalderaHellionCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Caldera Hellion"), CardType::Creature, CREATURE_TYPE(Hellion), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCalderaHellionCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

void CCalderaHellionCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CArchdemonOfUnxCard::CArchdemonOfUnxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archdemon of Unx"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie E"), 2879, 1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArchdemonOfUnxCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArchdemonOfUnxCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter temp;
	temp.AddComparer(new AnyCreatureComparer);
	temp.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&temp, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier1.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CFatestitcherCard::CFatestitcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fatestitcher"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),	TRUE, TRUE,
				new NegateCardComparer(new SpecificCardComparer(this))));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLUE_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFatestitcherCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFatestitcherCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKathariScreecherCard::CKathariScreecherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kathari Screecher"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKathariScreecherCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
}

bool CKathariScreecherCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKederektLeviathanCard::CKederektLeviathanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kederekt Leviathan"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("6") BLUE_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKederektLeviathanCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKederektLeviathanCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CCorpseConnoisseurCard::CCorpseConnoisseurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Connoisseur"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") BLACK_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorpseConnoisseurCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCorpseConnoisseurCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CUndeadLeotauCard::CUndeadLeotauCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Undead Leotau"), CardType::Creature, CREATURE_TYPE2(Zombie, Cat), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(4),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
	//Unearth ability
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") BLACK_MANA_TEXT));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetAbilityText(_T("Unearth"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUndeadLeotauCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
	AddAbility(cpAbility.GetPointer());
}

bool CUndeadLeotauCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CVisceraDraggerCard::CVisceraDraggerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viscera Dragger"), CardType::Creature, CREATURE_TYPE3(Zombie, Ogre, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLACK_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVisceraDraggerCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CVisceraDraggerCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CHellsThunderCard::CHellsThunderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hell's Thunder"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);

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
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4") RED_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHellsThunderCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHellsThunderCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CPredatorDragonCard::CPredatorDragonCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Predator Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPredatorDragonCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddFlying(FALSE);
}

void CPredatorDragonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CScourgeDevilCard::CScourgeDevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scourge Devil"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
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

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") RED_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScourgeDevilCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CScourgeDevilCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CThornThrashViashinoCard::CThornThrashViashinoCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Thorn-Thrash Viashino"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CThornThrashViashinoCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		AddAbility(cpAbility.GetPointer());
	}
}

void CThornThrashViashinoCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVithianStingerCard::CVithianStingerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Vithian Stinger"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(1),
		_T(""),	new AnyCreatureComparer, TRUE, Life(-1), PreventableType::Preventable)
{
	//Unearth ability
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") RED_MANA_TEXT));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetAbilityText(_T("Unearth"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVithianStingerCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
	AddAbility(cpAbility.GetPointer());
}

bool CVithianStingerCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CFireFieldOgreCard::CFireFieldOgreCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Fire-Field Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Mutant), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(2))
{
	//Unearth ability
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetAbilityText(_T("Unearth"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFireFieldOgreCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
	AddAbility(cpAbility.GetPointer());
}

bool CFireFieldOgreCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSedraxisSpecterCard::CSedraxisSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sedraxis Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
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
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLACK_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSedraxisSpecterCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSedraxisSpecterCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKreshTheBloodbraidedCard::CKreshTheBloodbraidedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kresh the Bloodbraided"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKreshTheBloodbraidedCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKreshTheBloodbraidedCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKreshTheBloodbraidedCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());
	return true;
}

bool CKreshTheBloodbraidedCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);
	pModifier.ApplyTo(this);
	return true;
}

//____________________________________________________________________________
//
CNecrogenesisCard::CNecrogenesisCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necrogenesis"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this, 
			_T("2"),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Saproling J"), 62001, 1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CResoundingSilenceCard::CResoundingSilenceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Resounding Silence"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetTargeting().SetSubjectCount(0, 2, FALSE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CResoundingRoarCard::CResoundingRoarCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Resounding Roar"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+6));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CResoundingThunderCard::CResoundingThunderCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Resounding Thunder"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT, new AnyCreatureComparer,	TRUE,
		Life(-3), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-6));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CResoundingWaveCard::CResoundingWaveCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Resounding Wave"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetSubjectCount(2, 2, FALSE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CResoundingScreamCard::CResoundingScreamCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Resounding Scream"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAtRandom();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetDiscardCount(2);
		cpAbility->SetPickerIsTriggeredPlayer(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTarFiendCard::CTarFiendCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Tar Fiend"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CTarFiendCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTarFiendCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTarFiendCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CTarFiendCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_nDiscardCount = GetDevouredCount();

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSkullmulcherCard::CSkullmulcherCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Skullmulcher"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkullmulcherCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkullmulcherCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CSkullmulcherCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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

bool CSkullmulcherCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.nValue1 = GetDevouredCount();

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CThunderthrashElderCard::CThunderthrashElderCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Thunder-Thrash Elder"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CThunderthrashElderCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);
}

void CThunderthrashElderCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 3;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CViciousShadowsCard::CViciousShadowsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vicious Shadows"), CardType::GlobalEnchantment, nID,
		_T("6")	RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CViciousShadowsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CViciousShadowsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(-pHand->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CRafiqOfTheManyCard::CRafiqOfTheManyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rafiq of the Many"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRafiqOfTheManyCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRafiqOfTheManyCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRafiqOfTheManyCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSangriteSurgeCard::CSangriteSurgeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sangrite Surge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSphinxSovereignCard::CSphinxSovereignCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx Sovereign"), CardType::_ArtifactCreature, CREATURE_TYPE(Sphinx), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSphinxSovereignCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSphinxSovereignCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain | AbilityTag::LifeLost);

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CSphinxSovereignCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											 CNode* pToNode) const
{
	if (GetOrientation()->IsTapped() == TRUE)
	{
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		return true;
	}

	m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	return true;
}

bool CSphinxSovereignCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
		CPlayer* pController = GetController();
		CPlayer* pOpponent = m_pGame->GetNextPlayer(GetController());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (GetOrientation()->IsTapped() == TRUE)
	{
		triggerContext.m_LifeModifier.SetLifeDelta(Life(-3));
		pAction->SetTriggerContext(triggerContext);
		return true;
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(+3));
	pAction->SetTriggerContext(triggerContext);
	return true;
}

//____________________________________________________________________________
//
CMightyEmergenceCard::CMightyEmergenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mighty Emergence"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(4));

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMightyEmergenceCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CMightyEmergenceCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
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
CImmortalCoilCard::CImmortalCoilCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Immortal Coil"), CardType::Artifact, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantLoseGame));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImmortalCoilCard::SetTriggerContext3));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CImmortalCoilCard::SetTriggerContext4));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		
		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Tokens);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImmortalCoilCard::SetTriggerContext5));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImmortalCoilCard::SetTriggerContext6));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredPlayerEffectAbility, CWhenSelfOrientationChanged, 
										CWhenSelfOrientationChanged::EventCallback,
										&CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CImmortalCoilCard::SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

bool CImmortalCoilCard::SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, Damage damage) const
{
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(-GET_INTEGER(damage.m_nLifeDelta), -GET_INTEGER(damage.m_nLifeDelta), TRUE); 
	return true;
}

bool CImmortalCoilCard::SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return pFromZone->GetSize() == 0;
}

bool CImmortalCoilCard::SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer) const
{
	return GetController()->GetZoneById(ZoneId::Library)->GetSize() == 0;
}

//____________________________________________________________________________
//
CManaplasmCard::CManaplasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Manaplasm"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaplasmCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CManaplasmCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	int nCMC = pCard->GetConvertedManaCost();

	triggerContext.m_LifeModifier.SetLifeDelta(Life(+nCMC));
	triggerContext.m_PowerModifier.SetPowerDelta(Power(+nCMC));

	return true;
}

//____________________________________________________________________________
//
COozeGardenCard::COozeGardenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ooze Garden"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") GREEN_MANA_TEXT));

	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Ooze), false));
	m_CardFilter.SetFilterName(_T("a non-Ooze creature"), _T("non-Ooze creatures"));
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COozeGardenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool COozeGardenCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nPower = 0;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetSacrificeCards()->GetAt(0));
	if (pCreature) nPower = GET_INTEGER(pCreature->GetLastKnownPower());
	
	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Ooze A"), 2772));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2772); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Ooze A")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nPower));
		pCreature->SetPrintedToughness(Life(nPower));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CRhoxWarMonkCard::CRhoxWarMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox War Monk"), CardType::Creature, CREATURE_TYPE2(Rhino, Monk), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CWindwrightMageCard::CWindwrightMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Windwright Mage"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}
/* 
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWindwrightMageCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWindwrightMageCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWindwrightMageCard::SetTriggerContext2));
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
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWindwrightMageCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pContGraveyard->GetAt(i);
		if (CCardFilter::GetFilter(_T("artifact cards"))->IsCardIncluded(pCard))
			return true;
	}

	return false;
}

bool CWindwrightMageCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pContGraveyard->GetAt(i);
		if (CCardFilter::GetFilter(_T("artifact cards"))->IsCardIncluded(pCard))
			return false;
	}

	return true;
}

bool CWindwrightMageCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pContGraveyard->GetAt(i);
		if (CCardFilter::GetFilter(_T("artifact cards"))->IsCardIncluded(pCard))
			return true;
	}

	return false;
} */

//____________________________________________________________________________
//
CAngelsHeraldCard::CAngelsHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Angel's Herald"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(::CreateObject<CPumpAbility>(this,
			_T("2") WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Null));

		//cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::SplitSecond);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("green creatures")));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetAbilityText(_T("Sacrifice a green creature, a white creature, and a blue creature to search for an Empyrial Archangel with"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAngelsHeraldCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CAngelsHeraldCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CAngelsHeraldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelsHeraldCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelsHeraldCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Empyrial Archangel")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CAngelsHeraldCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CAngelsHeraldCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

template<const CardType::Enum COLOR1, const CardType::Enum COLOR2>
inline BOOL CanSac2( CZone* pInplay, CPlayer* pMe)
{
//	CPlayer* pMe=GetController();
//	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nColor1 = 0;
	int nColor2 = 0;
	int nBothColors = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature() && pCard->GetController()==pMe)
		{
			if ((pCard->GetCardType() & COLOR1).Any())
			{
				if ((pCard->GetCardType() & COLOR2).Any())
					++nBothColors;
				else ++nColor1;
			}
			else if ((pCard->GetCardType() & COLOR2).Any())
				++nColor2;
		}
		if(nBothColors>1 || (nColor1 && nColor2) || (nBothColors==1 && (nColor1 || nColor2)))
			return true;
	}

	return false;
}

template<const CardType::Enum COLOR1, 
		 const CardType::Enum COLOR2, 
		 const CardType::Enum COLOR3>
inline BOOL CanSac3( CCard* pThisCard, CZone* pInplay, CPlayer* pMe )
{
	static const CardType ALLCOLORS=(COLOR1 | COLOR2 | COLOR3);
//	CPlayer* pMe=GetController();
//	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CardType  mycolor=pThisCard->GetCardType() & ALLCOLORS;
		 if(mycolor == COLOR1) return CanSac2<COLOR2, COLOR3>(pInplay,pMe);
	else if(mycolor == COLOR2) return CanSac2<COLOR1, COLOR3>(pInplay,pMe);
	else if(mycolor == COLOR3) return CanSac2<COLOR1, COLOR2>(pInplay,pMe);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature() &&
			pCard->GetController()==pMe &&
			pCard != pThisCard)
		{
			CardType color=pCard->GetCardType() & ALLCOLORS;
			if(color.Any())
				 if(color == COLOR1) return CanSac2<COLOR2, COLOR3>(pInplay,pMe);
			else if(color == COLOR2) return CanSac2<COLOR1, COLOR3>(pInplay,pMe);
			else if(color == COLOR3) return CanSac2<COLOR1, COLOR2>(pInplay,pMe);
			else if(!mycolor.Any()) mycolor=color;
			else
			{
				color=color|mycolor;		   //searching any color by default
				if(color!=ALLCOLORS) color=(~color)&ALLCOLORS; //searching 1 color
				for(++i; i < pInplay->GetSize(); ++i)
				{
					pCard = pInplay->GetAt(i);
					if(pCard->GetCardType().IsCreature() &&
							pCard->GetController()==pMe &&
							(pCard->GetCardType() & color).Any())
						return true;
				}
				return false;
			}
		}
	}
	return false;
}

BOOL CAngelsHeraldCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pMe=GetController();
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CanSac3<CardType::White,CardType::Blue,CardType::Green>(this, pInplay, pMe);
}

bool CAngelsHeraldCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (pCard != this)
		return false;

	return ((fromCardKeyword == CardKeyword::Null) && (toCardKeyword == CardKeyword::Flash));
}

bool CAngelsHeraldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CAngelsHeraldCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((fromCardKeyword == CardKeyword::Flash) && (toCardKeyword == CardKeyword::Null) &&
			(GetCardKeyword()->CantBeCountered() == FALSE));
}

bool CAngelsHeraldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CAngelsHeraldCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CSphinxsHeraldCard::CSphinxsHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sphinx's Herald"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(::CreateObject<CPumpAbility>(this,
			_T("2") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Null));

		//cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::SplitSecond);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("white creatures")));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetAbilityText(_T("Sacrifice a white creature, a blue creature, and a black creature to search for a Sphinx Sovereign with"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSphinxsHeraldCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSphinxsHeraldCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSphinxsHeraldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSphinxsHeraldCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSphinxsHeraldCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Sphinx Sovereign")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSphinxsHeraldCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSphinxsHeraldCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSphinxsHeraldCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pMe=GetController();
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CanSac3<CardType::Blue,CardType::Black,CardType::White>(this, pInplay, pMe);
}

bool CSphinxsHeraldCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (pCard != this)
		return false;

	return ((fromCardKeyword == CardKeyword::Null) && (toCardKeyword == CardKeyword::Flash));
}

bool CSphinxsHeraldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CSphinxsHeraldCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((fromCardKeyword == CardKeyword::Flash) && (toCardKeyword == CardKeyword::Null) &&
			(GetCardKeyword()->CantBeCountered() == FALSE));
}

bool CSphinxsHeraldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CSphinxsHeraldCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CDemonsHeraldCard::CDemonsHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Demon's Herald"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(::CreateObject<CPumpAbility>(this,
			_T("2") BLACK_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Null));

		//cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::SplitSecond);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("blue creatures")));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetAbilityText(_T("Sacrifice a blue creature, a black creature, and a red creature to search for a Prince of Thralls with"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CDemonsHeraldCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDemonsHeraldCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CDemonsHeraldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDemonsHeraldCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDemonsHeraldCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Prince of Thralls")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CDemonsHeraldCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CDemonsHeraldCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDemonsHeraldCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pMe=GetController();
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CanSac3<CardType::Black,CardType::Red,CardType::Blue>(this, pInplay, pMe);
			}

bool CDemonsHeraldCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (pCard != this)
		return false;

	return ((fromCardKeyword == CardKeyword::Null) && (toCardKeyword == CardKeyword::Flash));
}

bool CDemonsHeraldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CDemonsHeraldCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((fromCardKeyword == CardKeyword::Flash) && (toCardKeyword == CardKeyword::Null) &&
			(GetCardKeyword()->CantBeCountered() == FALSE));
}

bool CDemonsHeraldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CDemonsHeraldCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CDragonsHeraldCard::CDragonsHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragon's Herald"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(::CreateObject<CPumpAbility>(this,
			_T("2") RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Null));

		//cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::SplitSecond);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("black creatures")));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetAbilityText(_T("Sacrifice a black creature, a red creature, and a green creature to search for a Hellkite Overlord with"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CDragonsHeraldCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDragonsHeraldCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CDragonsHeraldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonsHeraldCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonsHeraldCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Hellkite Overlord")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CDragonsHeraldCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CDragonsHeraldCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDragonsHeraldCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pMe=GetController();
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CanSac3<CardType::Red,CardType::Green,CardType::Black>(this, pInplay, pMe);
			}

bool CDragonsHeraldCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (pCard != this)
		return false;

	return ((fromCardKeyword == CardKeyword::Null) && (toCardKeyword == CardKeyword::Flash));
}

bool CDragonsHeraldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CDragonsHeraldCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((fromCardKeyword == CardKeyword::Flash) && (toCardKeyword == CardKeyword::Null) &&
			(GetCardKeyword()->CantBeCountered() == FALSE));
}

bool CDragonsHeraldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CDragonsHeraldCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CBehemothsHeraldCard::CBehemothsHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Behemoth's Herald"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(::CreateObject<CPumpAbility>(this,
			_T("2") GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Null));

		//cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::SplitSecond);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("red creatures")));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetAbilityText(_T("Sacrifice a red creature, a green creature, and a white creature to search for a Godsire with"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CBehemothsHeraldCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CBehemothsHeraldCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CBehemothsHeraldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(pModifier);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Creature, true));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBehemothsHeraldCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBehemothsHeraldCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Godsire")));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CBehemothsHeraldCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBehemothsHeraldCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBehemothsHeraldCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pMe=GetController();
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CanSac3<CardType::Green,CardType::White,CardType::Red>(this, pInplay, pMe);
			}

bool CBehemothsHeraldCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (pCard != this)
		return false;

	return ((fromCardKeyword == CardKeyword::Null) && (toCardKeyword == CardKeyword::Flash));
}

bool CBehemothsHeraldCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CBehemothsHeraldCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((fromCardKeyword == CardKeyword::Flash) && (toCardKeyword == CardKeyword::Null) &&
			(GetCardKeyword()->CantBeCountered() == FALSE));
}

bool CBehemothsHeraldCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return GetCardKeyword()->CantBeCountered() == FALSE;
}

bool CBehemothsHeraldCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CInvincibleHymnCard::CInvincibleHymnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Invincible Hymn"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
				_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Life(+0), PreventableType::NotPreventable));
		
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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInvincibleHymnCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInvincibleHymnCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
									 		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nLibrarySize = GetController()->GetZoneById(ZoneId::Library)->GetSize();

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nLibrarySize));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_LifeModifier.SetReplacement(TRUE);

	return true;
}

//____________________________________________________________________________
//
CAdNauseamCard::CAdNauseamCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ad Nauseam"), CardType::Instant, nID)
{
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, 0));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Exile));
		
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::Exile, ZoneId::Graveyard, TRUE, MoveType::Others));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Tokens);
		cpAbility->SetAbilityName(_T("repeat the process"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAdNauseamCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAdNauseamCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAdNauseamCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
								 	   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(-nCost));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);

	return true;
}

bool CAdNauseamCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pContLibrary = GetController()->GetZoneById(ZoneId::Library);

	if (pContLibrary->GetSize() > 0)
	{
		triggerContext.m_MoveCardModifier.SetFromZone(ZoneId::_Tokens);
		triggerContext.m_MoveCardModifier.SetToZone(ZoneId::Exile);
	}

	if (pContLibrary->GetSize() == 0)
	{
		triggerContext.m_MoveCardModifier.SetFromZone(ZoneId::_Tokens);
		triggerContext.m_MoveCardModifier.SetToZone(ZoneId::Graveyard);
	}

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAgonyWarpCard::CAgonyWarpCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Agony Warp"), CardType::Instant, nID)
{
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAgonyWarpCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
}

bool CAgonyWarpCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CPowerModifier* pModifier1 = new CPowerModifier(Power(-3));
	if (pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()->GetCardType().IsCreature())
			pModifier1->ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CLifeModifier* pModifier2 = new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	if (pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()->GetCardType().IsCreature())
			pModifier2->ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CBranchingBoltCard::CBranchingBoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Branching Bolt"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose both.
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, false, 
				new AnyCreatureComparer, false, _T("")));

		cpSpell->GetTargeting2()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpSpell->GetTargeting1()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBranchingBoltCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CBranchingBoltCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCreatureCard* pTarget1 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCreatureCard* pTarget2 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTarget1);
	pModifier.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
CSigilBlessingCard::CSigilBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sigil Blessing"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);
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
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCruelUltimatumCard::CCruelUltimatumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cruel Ultimatum"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(3);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetDiscardCount(3);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGiftOfTheGargantuanCard::CGiftOfTheGargantuanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gift of the Gargantuan"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			4));

	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);

	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(1), CZoneModifier::RoleType::PrimaryPlayer,
		CZoneModifier::RoleType::AllPlayers, CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Hand, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::NotApplicable,
		MoveType::Others, CZoneModifier::RoleType::PrimaryPlayer);

	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(1), CZoneModifier::RoleType::PrimaryPlayer,
		CZoneModifier::RoleType::AllPlayers, CCardFilter::GetFilter(_T("lands")),
		ZoneId::Hand, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::NotApplicable,
		MoveType::Others, CZoneModifier::RoleType::PrimaryPlayer);

	cpSpell->GetZoneModifier().SetReorderInformation(true, ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSalvageTitanCard::CSalvageTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Salvage Titan"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature, _T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("artifact cards")));
		cpSpell->SetAbilityText(_T("Casts"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSalvageTitanCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("artifact cards")));

		cpAbility->SetGraveyardOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSalvageTitanCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CStoicAngelCard::CStoicAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stoic Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::UntapLimit, 1));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgUntapCardTypeWhenNodeChangedAbility> cpAbility(
			::CreateObject<CTriggeredChgUntapCardTypeWhenNodeChangedAbility>(this));

		cpAbility->SetOptionalType(CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OptionalType::Required);
		cpAbility->AddCardTypeSelection(CardType::Creature, _T("creature"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));	

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::NoUntapInUntapPhase, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPunishIgnoranceCard::CPunishIgnoranceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Punish Ignorance"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false))));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		// for when counters can target "can't be countered" spells
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new CardKeywordComparer(CardKeyword::CantBeCountered, false)));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);		// mustn't be necessary
		cpSpell->SetToZoneIfFailed(ZoneId::_Tokens);

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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQasaliAmbusherCard::CQasaliAmbusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Qasali Ambusher"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this,
				AbilityType::Creature | AbilityType::AsInstant, _T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CQasaliAmbusherCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CQasaliAmbusherCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nForestCount = 0;
	int nPlainsCount = 0;
	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Forest).Any())
			++nForestCount;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			++nPlainsCount;
	}

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pOppCard;
			if (pCreature->IsAttacking() == TRUE &&
				pCreature->GetAttackedPlayer() == GetController() &&
				nForestCount>0 && nPlainsCount>0)
				return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CCovenantOfMindsCard::CCovenantOfMindsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Covenant of Minds"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT, 3));

		cpSpell->SetReorder(TRUE, ZoneId::_Tokens);
		cpSpell->SetRevealCardsToOthers(TRUE, TRUE);
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("reveals the top three cards of his/her library (opponent must ignore after to discard this cards) with"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::_Tokens, ZoneId::Exile, TRUE, MoveType::Others));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetAbilityName(_T("select this 3 cards"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::_Tokens, ZoneId::Graveyard));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, FALSE));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Exile));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(5);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Exile));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, FALSE));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSacellumGodspeakerCard::CSacellumGodspeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sacellum Godspeaker"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSacellumGodspeakerCard::OnCardSelected))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSacellumGodspeakerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSacellumGodspeakerCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController());
	return true;
}

void CSacellumGodspeakerCard::RevealCards(CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->GetCardType().IsCreature() && !pRevealedCards.HasCard(pCard))
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetPower() >= 5)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Reveal %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CSacellumGodspeakerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer);
				
				return;
			}
		}
}

void CSacellumGodspeakerCard::Finale(CPlayer* pController)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

		for (int i = 0; i < nSize; i++) pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CSoulsGraceCard::CSoulsGraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul's Grace"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSoulsGraceCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("You gain life equal to target creature's power. Casts"));

	AddSpell(cpSpell.GetPointer());
}

void CSoulsGraceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CLifeModifier modifier = CLifeModifier(Life(GET_INTEGER(pCreature->GetPower())), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CSoulsMightCard::CSoulsMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul's Might"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSoulsMightCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Put X +1/+1 counters on target creature, where X is that creature's power. Casts"));

	AddSpell(cpSpell.GetPointer());
}

void CSoulsMightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), GET_INTEGER(pCreature->GetPower()));
	modifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CSarkhanVolCard::CSarkhanVolCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Sarkhan Vol"), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT,
		PlaneswalkerType::Sarkhan, 4)
{
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::Haste));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this, 
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpAbility->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Dragon A"), 2735, 5));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMycolothCard::CMycolothCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Mycoloth"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
			&m_CardFilter)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMycolothCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMycolothCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetCreateTokenOption(TRUE, _T("Saproling J"), 62001, 0);	

		AddAbility(cpAbility.GetPointer());
	}
}

void CMycolothCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CMycolothCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	int nCounterCount = 0;
	if (IsInplay())
		nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	else
		nCounterCount = GetLastKnownp11Counters();
	if (nCounterCount<0) return false;	
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCounterCount;
	pAction->SetTriggerContext(triggerContext);	
	return true;
}

//____________________________________________________________________________
//
CAjaniVengeantCard::CAjaniVengeantCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Ajani Vengeant"), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Ajani, 3)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new TrueCardComparer, FALSE));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->SetReverseLifeDeltaToController();

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTargetPlayerCardsSpell> cpAbility(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Activated,
				_T(""),
				ZoneId::Battlefield,
				CCardFilter::GetFilter(_T("lands"))));
		
		cpAbility->SetToActivatedAbility();

		cpAbility->AddCardModifier(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTidehollowScullerCard::CTidehollowScullerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tidehollow Sculler"), CardType::_ArtifactCreature, CREATURE_TYPE(Zombie), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTidehollowScullerCard::OnResolutionCompleted1))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().SetIncludeNonControllerCardsOnly();
	
		/* cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer( new CardTypeComparer(CardType::Sorcery | CardType::Instant
																	|  CardType::_Enchantment |CardType::Creature | CardType::Planeswalker | CardType::Artifact, false)); */
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer( new CardTypeComparer(CardType::_Land, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTidehollowScullerCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTidehollowScullerCard::BeforeResolveSelection));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand); // to owner's Hand

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTidehollowScullerCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										         CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const
{
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());	
	return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));
}

bool CTidehollowScullerCard::BeforeResolveSelection(CTidehollowScullerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));
}

void CTidehollowScullerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CZoneModifier pmodifier_opp = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier_opp.ApplyTo(opponent);
}

//____________________________________________________________________________
//
CElspethKnightErrantCard::CElspethKnightErrantCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Elspeth, Knight-Errant"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Elspeth, 4)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Soldier I"), 2953,
				1)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+3), Life(+3),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);

		CPlayerEffectModifier* pmodifier1 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleArtifacts);	
		CPlayerEffectModifier* pmodifier2 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
		CPlayerEffectModifier* pmodifier3 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleEnchantments);	
		CPlayerEffectModifier* pmodifier4 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleLands);	

		pmodifier3->LinkPlayerModifier(pmodifier4);
		pmodifier2->LinkPlayerModifier(pmodifier3);
		pmodifier1->LinkPlayerModifier(pmodifier2);
		
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier1);

		cpAbility->SetAbilityName(_T("For the rest of the game, artifacts, creatures, enchantments, and lands you control are indestructible. Activates"));
		cpAbility->SetAbilityText(_T("For the rest of the game, artifacts, creatures, enchantments, and lands you control are indestructible. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpearbreakerBehemothCard::CSpearbreakerBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spearbreaker Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1"),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreaturePowerComparer<std::greater<int>>(4)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CRealmRazerCard::CRealmRazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Realm Razer"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->GetMoveCardModifier().SetTapped(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRelicofProgenitusCard::CRelicofProgenitusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Relic of Progenitus"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("1"), 
				new TrueCardComparer, 
				ZoneId::Exile, TRUE, MoveType::Others, ZoneId::Graveyard));

		cpAbility->AddExileCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));
	
		CZoneModifier* pmodifier = new CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);

		pmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pmodifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulsFireCard::CSoulsFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul's Fire"), CardType::Instant, nID)
{
	counted_ptr<CSoulsFireSpell> cpSpell(
		::CreateObject <CSoulsFireSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CSoulsFireCard::CSoulsFireSpell::CSoulsFireSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, true,
		_T(""))
{
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CSoulsFireCard::CSoulsFireSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	CLifeModifier modifier = CLifeModifier(Life(-GET_INTEGER(pCreature1->GetPower())),
								pCreature1, PreventableType::Preventable, DamageType::NonCombatDamage);

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		if (pCreature2) modifier.ApplyTo(pCreature2);
	}
	else if (pPContainer2.GetSize()) modifier.ApplyTo(pPContainer2.GetAt(0));
}

//____________________________________________________________________________
//
CEtherswornCanonistCard::CEtherswornCanonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ethersworn Canonist"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter (_T("No Artifact Spell") , _T("No Artifact Spells"),
			new NegateCardComparer(new CardTypeComparer(CardType::Artifact, false)))
{
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, TRUE, (int)&m_CardFilter);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, TRUE, (int)&m_CardFilter);	

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEtherswornCanonistCard::SetTriggerContext1));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, TRUE, (int)&m_CardFilter);	

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEtherswornCanonistCard::SetTriggerContext2));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEtherswornCanonistCard::SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{	
	return GetController()->GetCertainAntiTypeCastedCount(CardType::Artifact) > 0;
}

bool CEtherswornCanonistCard::SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	return GetGame()->GetNextPlayer(GetController())->GetCertainAntiTypeCastedCount(CardType::Artifact) > 0;
}

//____________________________________________________________________________
//
CBattlegraceAngelCard::CBattlegraceAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battlegrace Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBattlegraceAngelCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);			
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBattlegraceAngelCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBattlegraceAngelCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CTitanicUltimatumCard::CTitanicUltimatumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Titanic Ultimatum"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+5), Life(+5), CreatureKeyword::FirstStrike | CreatureKeyword::Trample));

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEtheriumSculptorCard::CEtheriumSculptorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etherium Sculptor"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Artificer), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHinderingLightCard::CHinderingLightCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Hindering Light"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)

	, m_CardFilter (_T("card you control") , _T("card you control"),
	new CardControllerComparer(this))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter, this, TRUE));
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CBanewaspAfflictionCard::CBanewaspAfflictionCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Banewasp Affliction"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)		
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanewaspAfflictionCard::SetTriggerContext));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CBanewaspAfflictionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pEnchantedCard);
	if (!pCreature) return false;

	triggerContext.m_LifeModifier.SetLifeDelta(-pCreature->GetLastKnownToughness());
	return true;
}

//____________________________________________________________________________
//
CMinionReflectorCard::CMinionReflectorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Minion Reflector"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));

	CScheduledCardModifier* pModifier1 = new CScheduledCardModifier(GetGame(),
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE,MoveType::Sacrifice),
		TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCardModifier::Operation::ApplyToLater);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier(CreatureKeyword::Haste, true);

	cpAbility->GetCardModifiers().Add(new CCardCopyModifier(GetGame(), this, pModifier1, pModifier2));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMinionReflectorCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	cpAbility->SetResolutionCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}

bool CMinionReflectorCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CMagmaSprayCard::CMagmaSprayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magma Spray"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2), PreventableType::Preventable));

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();

		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::GraveyardToExile);
		
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CKeeperOfProgenitusCard::CKeeperOfProgenitusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keeper of Progenitus"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Forest | CardType::Mountain | CardType::Plains, false));

	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKeeperOfProgenitusCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}
	
bool CKeeperOfProgenitusCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Colorless))
	{m_pTriggeredAbility->SetProduceColorless(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceColorless(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}
bool CKeeperOfProgenitusCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CSigilofDistinctionCard::CSigilofDistinctionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sigil of Distinction"), CardType::Artifact | CardType::Equipment, nID, 
		_T(""), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSigilofDistinctionCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, CHARGE_COUNTER));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));		
		cpAbility->SetEquipment();


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T(""),
				new AnyCreatureComparer));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}

}
void CSigilofDistinctionCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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

//_______________________________________________________________________________________
//
CBrilliantUltimatumCard::CBrilliantUltimatumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brilliant Ultimatum"), CardType::Sorcery, nID)
{
	counted_ptr<CBrilliantUltimatumSpell> cpSpell(::CreateObject<CBrilliantUltimatumSpell>(this, AbilityType::Sorcery,
		WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, CCardFilter::GetFilter(_T("cards")), 5));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CClarionUltimatumCard::CClarionUltimatumCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Clarion Ultimatum"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CClarionUltimatumCard::OnCardSelected))
	, m_QuerySelection(pGame, CSelectionSupport::SelectionCallback(this, &CClarionUltimatumCard::OnQuerySelected))
{
	counted_ptr<CGenericSpell> cpSpell(::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
		GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClarionUltimatumCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CClarionUltimatumCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	pSelectedPermanents.RemoveAll();

	if (pBattlefield->GetSize() > 0)
		SelectPermanent(pController);

	return true;
}

void CClarionUltimatumCard::SelectPermanent(CPlayer* pController)
{
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (!pSelectedPermanents.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Select %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CClarionUltimatumCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pSelectedPermanents.AddCard(pCard, CardPlacement::Top);

			if ((pSelectedPermanents.GetSize() < 5) && (pSelectedPermanents.GetSize() < pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetSize()))
				SelectPermanent(pSelectionPlayer);
			else
				LibrarySearchQuery(pSelectionPlayer);
				
			return;
		}
}

void CClarionUltimatumCard::LibrarySearchQuery(CPlayer* pController)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Search your library"));

		entries.push_back(entry);
	}
	{
		SelectionEntry entry;

		entry.dwContext = 1;
									
		entry.strText.Format(_T("Don't search your library"));

		entries.push_back(entry);
	}
	m_QuerySelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CClarionUltimatumCard::OnQuerySelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
				LibrarySearch(pSelectionPlayer);
				
			return;
		}
}

void CClarionUltimatumCard::LibrarySearch(CPlayer* pController)
{
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	CCountedCardContainer pRemove;
	pRemove.RemoveAll();
	for (int i = 0; i < pSelectedPermanents.GetSize(); ++i)
	{
		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new CardNameComparer(pSelectedPermanents.GetAt(i)->GetPrintedCardName()));
		if (m_CardFilter.CountIncluded(pLibrary->GetCardContainer()) == 0)
			pRemove.AddCard(pSelectedPermanents.GetAt(i), CardPlacement::Top);
	}
	for (int i = 0; i < pRemove.GetSize(); ++i)
		pSelectedPermanents.RemoveCard(pRemove.GetAt(i));

	if (pSelectedPermanents.GetSize() == 0)
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(0), pController);
		pModifier.ApplyTo(pController);
	}
	else
	{
		pSelectedCards.RemoveAll();
		for (int i = 0; i < pSelectedPermanents.GetSize(); ++i)
		{
			CCardFilter m_CardFilter;
			m_CardFilter.AddComparer(new CardNameComparer(pSelectedPermanents.GetAt(i)->GetPrintedCardName()));
			m_CardFilter.AddNegateComparer(new ContainedinComparer(&pSelectedCards));
			CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController,
															 ZoneId::Library, &m_CardFilter, ZoneId::Library, TRUE, CardPlacement::Top,
															 FALSE, FALSE, FALSE, &pSelectedCards, FALSE);
			pModifier.ApplyTo(pController);
		}
		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new ContainedinComparer(&pSelectedCards));

		CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier1->SetTapped(TRUE);
		CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Library, &m_CardFilter,
			std::auto_ptr<CCardModifier>(pModifier1));

		pModifier2.ApplyTo(pController);

		pController->GetZoneById(ZoneId::Library)->Shuffle();
	}
}
//____________________________________________________________________________
//
CSkeletonizeCard::CSkeletonizeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Skeletonize"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkeletonizeCard::BeforeResolution));
}

bool CSkeletonizeCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (GetZoneId() == ZoneId::Stack)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Skeletonize Effect"), 61054, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//