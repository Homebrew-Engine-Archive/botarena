#include "stdafx.h"
#include "CardOnslaught.h"

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

		DEFINE_CARD(CAEtherChargeCard);
		DEFINE_CARD(CAccursedCentaurCard);
		DEFINE_CARD(CAggravatedAssaultCard);
		DEFINE_CARD(CAirborneAidCard);
		DEFINE_CARD(CAirdropCondorCard);
		DEFINE_CARD(CAkromasBlessingCard);
		DEFINE_CARD(CAkromasVengeanceCard);
		DEFINE_CARD(CAncestorsProphetCard);
		DEFINE_CARD(CAnimalMagnetismCard);
		DEFINE_CARD(CAnuridMurkdiverCard);
		DEFINE_CARD(CAphettoAlchemistCard);
		DEFINE_CARD(CAphettoGrifterCard);
		DEFINE_CARD(CAphettoVultureCard);
		DEFINE_CARD(CAscendingAvenCard);
		DEFINE_CARD(CAstralSlideCard);
		DEFINE_CARD(CAuraExtractionCard);
		DEFINE_CARD(CAvaraxCard);
		DEFINE_CARD(CAvenBrigadierCard);
		DEFINE_CARD(CAvenFateshaperCard);
		DEFINE_CARD(CBarkhideMaulerCard);
		DEFINE_CARD(CBarrenMoorCard);
		DEFINE_CARD(CBatteringCraghornCard);
		DEFINE_CARD(CBattlefieldMedicCard);
		DEFINE_CARD(CBirchloreRangersCard);
		DEFINE_CARD(CBlatantThieveryCard);
		DEFINE_CARD(CBlisteringFirecatCard);
		DEFINE_CARD(CBloodstainedMireCard);
		DEFINE_CARD(CBoneknitterCard);
		DEFINE_CARD(CBrightstoneRitualCard);
		DEFINE_CARD(CBroodhatchNantukoCard);
		DEFINE_CARD(CCabalArchonCard);
		DEFINE_CARD(CCabalExecutionerCard);
		DEFINE_CARD(CCabalSlaverCard);
		DEFINE_CARD(CCatapultMasterCard);
		DEFINE_CARD(CCatapultSquadCard);
		DEFINE_CARD(CCentaurGladeCard);
		DEFINE_CARD(CChargingSlatebackCard);
		DEFINE_CARD(CChokingTethersCard);
		//DEFINE_CARD(CCommandoRaidCard);
		DEFINE_CARD(CComplicateCard);
		DEFINE_CARD(CContestedCliffsCard);
		DEFINE_CARD(CConvalescentCareCard);
		DEFINE_CARD(CCoverOfDarknessCard);
		DEFINE_CARD(CCrowdFavoritesCard);
		DEFINE_CARD(CCrudeRampartCard);
		DEFINE_CARD(CCruelRevivalCard);
		DEFINE_CARD(CDaruCavalierCard);
		DEFINE_CARD(CDaruEncampmentCard);
		DEFINE_CARD(CDaruHealerCard);
		DEFINE_CARD(CDaruLancerCard)
		DEFINE_CARD(CDawningPuristCard);
		DEFINE_CARD(CDeathMatchCard);
		DEFINE_CARD(CDeathPulseCard);
		DEFINE_CARD(CDirgeOfDreadCard);
		DEFINE_CARD(CDiscipleOfMaliceCard);
		DEFINE_CARD(CDispersingOrbCard);
		DEFINE_CARD(CDisruptivePitmageCard);
		DEFINE_CARD(CDiveBomberCard);
		DEFINE_CARD(CDoomCannonCard);
		DEFINE_CARD(CDoubtlessOneCard);
		DEFINE_CARD(CDwarvenBlastminerCard);
		DEFINE_CARD(CElvishPathcutterCard);
		DEFINE_CARD(CElvishVanguardCard);
		DEFINE_CARD(CEmbermageGoblinCard);
		DEFINE_CARD(CEnchantresssPresenceCard);
		DEFINE_CARD(CEntrailsFeasterCard);
		DEFINE_CARD(CErraticExplosionCard);
		DEFINE_CARD(CEssenceFractureCard);
		DEFINE_CARD(CExaltedAngelCard);
		DEFINE_CARD(CExplosiveVegetationCard);
		DEFINE_CARD(CFadeFromMemoryCard);
		DEFINE_CARD(CFallenClericCard);
		DEFINE_CARD(CFeedingFrenzyCard);
		DEFINE_CARD(CFeverCharmCard);
		DEFINE_CARD(CFloodedStrandCard);
		DEFINE_CARD(CFoothillGuideCard);
		DEFINE_CARD(CForgottenCaveCard);
		DEFINE_CARD(CFutureSightCard);
		DEFINE_CARD(CGangrenousGoliathCard);
		DEFINE_CARD(CGigapedeCard);
		DEFINE_CARD(CGoblinBurrowsCard);
		DEFINE_CARD(CGoblinMachinistCard);
		DEFINE_CARD(CGoblinPiledriverCard);
		DEFINE_CARD(CGoblinPyromancerCard);
		DEFINE_CARD(CGoblinSharpshooterCard);
		DEFINE_CARD(CGoblinSledderCard);
		DEFINE_CARD(CGoblinTaskmasterCard);
		DEFINE_CARD(CGrandColiseumCard);
		DEFINE_CARD(CGrasslandCrusaderCard);
		DEFINE_CARD(CGravelSlingerCard);
		DEFINE_CARD(CGravespawnSovereignCard);
		DEFINE_CARD(CGraxiplonCard);
		DEFINE_CARD(CGrinningDemonCard);
		DEFINE_CARD(CGustcloakHarrierCard);
		DEFINE_CARD(CGustcloakRunnerCard);
		DEFINE_CARD(CGustcloakSaviorCard);
		DEFINE_CARD(CGustcloakSentinelCard);
		DEFINE_CARD(CGustcloakSkirmisherCard);
		DEFINE_CARD(CHauntedCadaverCard);
		DEFINE_CARD(CHeadhunterCard);
		DEFINE_CARD(CHeedlessOneCard);
		DEFINE_CARD(CHystrodonCard);
		DEFINE_CARD(CImprovisedArmorCard);
		DEFINE_CARD(CInfestCard);
		DEFINE_CARD(CInformationDealerCard);
		DEFINE_CARD(CInsurrectionCard);
		DEFINE_CARD(CIronfistCrusherCard);
		DEFINE_CARD(CIxidorsWillCard);
		DEFINE_CARD(CJarethLeonineTitanCard);
		DEFINE_CARD(CKaboomCard);
		DEFINE_CARD(CKamahlsSummonsCard);
		DEFINE_CARD(CKamahlFistOfKrosaCard);
		DEFINE_CARD(CKrosanColossusCard);
		DEFINE_CARD(CKrosanGroundshakerCard);
		DEFINE_CARD(CKrosanTuskerCard);
		DEFINE_CARD(CLeeryFogbeastCard);
		DEFINE_CARD(CLightningRiftCard);
		DEFINE_CARD(CLonelySandbarCard);
		DEFINE_CARD(CMagesGuileCard);
		DEFINE_CARD(CManaEchoesCard);
		DEFINE_CARD(CMiseryCharmCard);
		DEFINE_CARD(CMythicProportionsCard);
		//DEFINE_CARD(CNamelessOneCard);
		DEFINE_CARD(CNosyGoblinCard);
		DEFINE_CARD(CNovaClericCard);
		DEFINE_CARD(COblationCard);
		DEFINE_CARD(COversoldCemeteryCard);
		DEFINE_CARD(CPietyCharmCard);
		DEFINE_CARD(CPinpointAvalancheCard);
		DEFINE_CARD(CPollutedDeltaCard);
		DEFINE_CARD(CPrimalBoostCard);
		DEFINE_CARD(CProfanePrayersCard);
		DEFINE_CARD(CProwlingPangolinCard);
		DEFINE_CARD(CPsychicTranceCard);
		DEFINE_CARD(CRavenousBalothCard);
		DEFINE_CARD(CRecklessOneCard);
		DEFINE_CARD(CReadTheRunesCard);
		DEFINE_CARD(CRenewedFaithCard);
		DEFINE_CARD(CRighteousCauseCard);
		DEFINE_CARD(CRiptideBiologistCard);
		DEFINE_CARD(CRiptideLaboratoryCard);
		DEFINE_CARD(CRiptideReplicatorCard);
		DEFINE_CARD(CRiptideShapeshifterCard);
		DEFINE_CARD(CRorixBladewingCard);
		DEFINE_CARD(CRotlungReanimatorCard);
		DEFINE_CARD(CRummagingWizardCard);
		DEFINE_CARD(CRunWildCard);
		DEFINE_CARD(CSandskinCard);
		DEFINE_CARD(CScreamingSeahawkCard);
		DEFINE_CARD(CScreechingBuzzardCard);
		DEFINE_CARD(CSearingFleshCard);
		DEFINE_CARD(CSeasideHavenCard);
		DEFINE_CARD(CSecludedSteppeCard);
		DEFINE_CARD(CSerpentineBasiliskCard);
		DEFINE_CARD(CShaleskinBruiserCard);
		DEFINE_CARD(CSharedTriumphCard);
		DEFINE_CARD(CShepherdOfRotCard);
		DEFINE_CARD(CSigilOfTheNewDawnCard);
		DEFINE_CARD(CSilentSpecterCard);
		DEFINE_CARD(CSilvosRogueElementalCard);
		DEFINE_CARD(CSkirkFireMarshalCard);
		DEFINE_CARD(CSkirkProspectorCard);
		DEFINE_CARD(CSliceAndDiceCard);
		DEFINE_CARD(CSlipstreamEelCard);
		DEFINE_CARD(CSmotherCard);
		DEFINE_CARD(CSnarlingUndorakCard);
		DEFINE_CARD(CSolarBlastCard);
		DEFINE_CARD(CSoullessOneCard);
		DEFINE_CARD(CSparksmithCard);
		DEFINE_CARD(CSpinedBasherCard);
		DEFINE_CARD(CSpittingGournaCard);
		DEFINE_CARD(CSpurredWolverineCard);
		DEFINE_CARD(CStagBeetleCard);
		DEFINE_CARD(CStarlitSanctumCard);
		DEFINE_CARD(CStarstormCard);
		DEFINE_CARD(CSteelyResolveCard);
		DEFINE_CARD(CSunfireBalmCard);
		DEFINE_CARD(CSupremeInquisitorCard);
		DEFINE_CARD(CSymbioticBeastCard);
		DEFINE_CARD(CSymbioticElfCard);
		DEFINE_CARD(CSymbioticWurmCard);
		DEFINE_CARD(CSyphonMindCard);
		DEFINE_CARD(CTemptingWurmCard);
		DEFINE_CARD(CThunderOfHoovesCard);
		DEFINE_CARD(CThoughtboundPrimocCard);
		DEFINE_CARD(CToweringBalothCard);
		DEFINE_CARD(CTranquilThicketCard);
		DEFINE_CARD(CTreespringLorianCard);
		DEFINE_CARD(CUndeadGladiatorCard);
		DEFINE_CARD(CUnholyGrottoCard);
		DEFINE_CARD(CUnifiedStrikeCard);
		DEFINE_CARD(CVenomspoutBrackusCard);
		DEFINE_CARD(CVitalityCharmCard);
		DEFINE_CARD(CVisaraTheDreadfulCard);
		DEFINE_CARD(CVoiceOfTheWoodsCard);
		DEFINE_CARD(CVoidmageProdigyCard);
		DEFINE_CARD(CWaveOfIndifferenceCard);
		DEFINE_CARD(CWellwisherCard);
		DEFINE_CARD(CWhipcorderCard);
		DEFINE_CARD(CWindsweptHeathCard);
		DEFINE_CARD(CWirewoodElfCard);
		DEFINE_CARD(CWirewoodHeraldCard);
		DEFINE_CARD(CWirewoodLodgeCard);
		DEFINE_CARD(CWirewoodPrideCard);
		DEFINE_CARD(CWirewoodSavageCard);
		DEFINE_CARD(CWoodedFoothillsCard);
		DEFINE_CARD(CWretchedAnuridCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CPollutedDeltaCard::CPollutedDeltaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Polluted Delta"), nID)

	, m_CardFilter(_T("a Swamp or an Island"), _T("Swamps or Islands"), new CardTypeComparer(CardType::Swamp | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFloodedStrandCard::CFloodedStrandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Flooded Strand"), nID)

	, m_CardFilter(_T("a Plains or an Island"), _T("Plains or Islands"), new CardTypeComparer(CardType::Plains | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodstainedMireCard::CBloodstainedMireCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bloodstained Mire"), nID)

	, m_CardFilter(_T("a Swamp or a Mountain"), _T("Swamps or Mountains"), new CardTypeComparer(CardType::Swamp | CardType::Mountain, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWindsweptHeathCard::CWindsweptHeathCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Windswept Heath"), nID)

	, m_CardFilter(_T("a Forest or a Plains"), _T("Forests or Plains"), new CardTypeComparer(CardType::Forest | CardType::Plains, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWoodedFoothillsCard::CWoodedFoothillsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wooded Foothills"), nID)

	, m_CardFilter(_T("a Mountain or a Forest"), _T("Mountains or Forests"), new CardTypeComparer(CardType::Mountain | CardType::Forest, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnuridMurkdiverCard::CAnuridMurkdiverCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Anurid Murkdiver"), CardType::Creature, CREATURE_TYPE3(Zombie, Frog, Beast), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CCabalArchonCard::CCabalArchonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Archon"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-2), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCatapultMasterCard::CCatapultMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Catapult Master"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Soldier"), _T("Soldiers"), new CreatureTypeComparer(CREATURE_TYPE(Soldier), false))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDoubtlessOneCard::CDoubtlessOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doubtless One"), CardType::Creature, CREATURE_TYPE2(Cleric, Avatar), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Cleric), false)));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::DamageEventCallback, 
								&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDoubtlessOneCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDoubtlessOneCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CNovaClericCard::CNovaClericCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nova Cleric"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("2") WHITE_MANA_TEXT, 
			new CardTypeComparer(CardType::_Enchantment, false), 
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRotlungReanimatorCard::CRotlungReanimatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotlung Reanimator"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);//Vital part of the filter, need the next line to work
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Cleric), false));//This allow only clerics to trigger the effect

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Zombie D"), 2882, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilvosRogueElementalCard::CSilvosRogueElementalCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Silvos, Rogue Elemental"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(5),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWellwisherCard::CWellwisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wellwisher"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))

	, m_ElfCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	counted_ptr<CActivatedAbility<CChgLifeBySurveySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeBySurveySpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->GetPlayerFilter().SetIncludes(
		TRUE,  // opponents
		TRUE); // controller

	cpAbility->SetCardsMultiplier(1, &m_ElfCardFilter, ZoneId::Battlefield);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAphettoGrifterCard::CAphettoGrifterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aphetto Grifter"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, // tap
			FALSE, // untap
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCatapultSquadCard::CCatapultSquadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Catapult Squad"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("a Soldier"), _T("Soldiers"), new CreatureTypeComparer(CREATURE_TYPE(Soldier), false))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AttackingBlockingCreatureComparer,
			FALSE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpurredWolverineCard::CSpurredWolverineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spurred Wolverine"), CardType::Creature, CREATURE_TYPE2(Wolverine, Beast), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("a Beast"), _T("Beasts"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncestorsProphetCard::CAncestorsProphetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancestor's Prophet"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(5))

	, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+10), PreventableType::NotPreventable));

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravespawnSovereignCard::CGravespawnSovereignCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravespawn Sovereign"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkirkFireMarshalCard::CSkirkFireMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirk Fire Marshal"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-10),	// life delta
			new AnyCreatureComparer,
			TRUE,	// target players?
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSupremeInquisitorCard::CSupremeInquisitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Supreme Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	counted_ptr<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>>(this,
			_T(""),
			MinimumValue(0), MaximumValue(5),
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoiceOfTheWoodsCard::CVoiceOfTheWoodsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voice of the Woods"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Elemental A"), 2747,
			1));

	cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWretchedAnuridCard::CWretchedAnuridCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wretched Anurid"), CardType::Creature, CREATURE_TYPE3(Zombie, Frog, Beast), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJarethLeonineTitanCard::CJarethLeonineTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jareth, Leonine Titan"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Giant), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(7))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJarethLeonineTitanCard::OnColorSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+7));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Gain protection from color of your choice. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJarethLeonineTitanCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJarethLeonineTitanCard::BeforeResolution(CAbilityAction* pAction)
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
	
		m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}
	return true;
}

void CJarethLeonineTitanCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
		}
}

//____________________________________________________________________________
//
CRavenousBalothCard::CRavenousBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravenous Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a Beast"), _T("Beasts"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+4), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRorixBladewingCard::CRorixBladewingCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Rorix Bladewing"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CGrasslandCrusaderCard::CGrasslandCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grassland Crusader"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf) | CREATURE_TYPE(Soldier), false));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVisaraTheDreadfulCard::CVisaraTheDreadfulCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Visara the Dreadful"), CardType::_LegendaryCreature, CREATURE_TYPE(Gorgon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinSharpshooterCard::CGoblinSharpshooterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Goblin Sharpshooter"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInfestCard::CInfestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Infest"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-2),	// power delta
			Life(-2)));	// life delta

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAkromasVengeanceCard::CAkromasVengeanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Akroma's Vengeance"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAkromasVengeanceCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CAkromasVengeanceCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
COversoldCemeteryCard::COversoldCemeteryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oversold Cemetery"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COversoldCemeteryCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COversoldCemeteryCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool COversoldCemeteryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 4)
			return true;
		}
	}

	return false;
}

bool COversoldCemeteryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 4)
			return true;
		}
	}

	return false;
}

//______________________________________________________________________________
//
CEnchantresssPresenceCard::CEnchantresssPresenceCard(CGame* pGame, UINT nID)
    : CInPlaySpellCard(pGame, _T("Enchantress's Presence"), CardType::GlobalEnchantment, nID,
        _T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//______________________________________________________________________________
//
CSoullessOneCard::CSoullessOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulless One"), CardType::Creature, CREATURE_TYPE2(Zombie, Avatar), nID,
		_T("3") BLACK_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAccursedCentaurCard::CAccursedCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Accursed Centaur"), CardType::Creature, CREATURE_TYPE2(Zombie, Centaur), nID,
		BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAirdropCondorCard::CAirdropCondorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Airdrop Condor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell2>>(this,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			&m_CardFilter,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAphettoVultureCard::CAphettoVultureCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aphetto Vulture"), CardType::Creature, CREATURE_TYPE2(Zombie, Bird), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvaraxCard::CAvaraxCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Avarax"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		_T("1") RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Avarax")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenBrigadierCard::CAvenBrigadierCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Brigadier"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Bird), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenFateshaperCard::CAvenFateshaperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Fateshaper"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("6") BLUE_MANA_TEXT, Power(4), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(4);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("4") BLUE_MANA_TEXT, 4));

		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarkhideMaulerCard::CBarkhideMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barkhide Mauler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CBarkhideMaulerCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CBarkhideMaulerCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CCabalSlaverCard::CCabalSlaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Slaver"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::PlayerEventCallback, 
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrowdFavoritesCard::CCrowdFavoritesCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Crowd Favorites"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("6") WHITE_MANA_TEXT, Power(4), Life(4),
		_T("3") WHITE_MANA_TEXT, Power(+0), Life(+5))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("3") WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CDaruCavalierCard::CDaruCavalierCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Daru Cavalier"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Daru Cavalier")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiscipleOfMaliceCard::CDiscipleOfMaliceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Malice"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CDiscipleOfMaliceCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CDiscipleOfMaliceCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CDiveBomberCard::CDiveBomberCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Dive Bomber"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2),
		_T(""),
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-2),	// life delta
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->AddSacrificeCost();

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CElvishPathcutterCard::CElvishPathcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Pathcutter"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Forestwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishVanguardCard::CElvishVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Vanguard"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmbermageGoblinCard::CEmbermageGoblinCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Embermage Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Embermage Goblin")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGangrenousGoliathCard::CGangrenousGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gangrenous Goliath"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID, 
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddTapCardCost(3, &m_CardFilter);

	cpAbility->SetGraveyardOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinPyromancerCard::CGoblinPyromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Pyromancer"), CardType::Creature, CREATURE_TYPE2(Goblin, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));

		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinSledderCard::CGoblinSledderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Sledder"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHeedlessOneCard::CHeedlessOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heedless One"), CardType::Creature, CREATURE_TYPE2(Elf, Avatar), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Elf), false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanGroundshakerCard::CKrosanGroundshakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Groundshaker"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanTuskerCard::CKrosanTuskerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Tusker"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
	{
		// Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") GREEN_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKrosanTuskerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
		cpAbility->SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CKrosanTuskerCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CLeeryFogbeastCard::CLeeryFogbeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leery Fogbeast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::PreventAllCombatDamage, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRecklessOneCard::CRecklessOneCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Reckless One"), CardType::Creature, CREATURE_TYPE2(Goblin, Avatar), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRummagingWizardCard::CRummagingWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rummaging Wizard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			1));

	cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Graveyard, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);
	cpAbility->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScreamingSeahawkCard::CScreamingSeahawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Screaming Seahawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Screaming Seahawk")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScreechingBuzzardCard::CScreechingBuzzardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Screeching Buzzard"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkirkProspectorCard::CSkirkProspectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirk Prospector"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSlipstreamEelCard::CSlipstreamEelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slipstream Eel"), CardType::Creature, CREATURE_TYPE2(Fish, Beast), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSlipstreamEelCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CSlipstreamEelCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CSlipstreamEelCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

BOOL CSlipstreamEelCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CSymbioticBeastCard::CSymbioticBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Symbiotic Beast"), CardType::Creature, CREATURE_TYPE2(Insect, Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Insect G"), 62011, 4);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSymbioticElfCard::CSymbioticElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Symbiotic Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Insect G"), 62011, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSymbioticWurmCard::CSymbioticWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Symbiotic Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Insect G"), 62011, 7);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTemptingWurmCard::CTemptingWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tempting Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("1") GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment | CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUndeadGladiatorCard::CUndeadGladiatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Gladiator"), CardType::Creature, CREATURE_TYPE2(Zombie, Barbarian), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(1))
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLACK_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLACK_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CUndeadGladiatorCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CUndeadGladiatorCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CWirewoodElfCard::CWirewoodElfCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Wirewood Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CWirewoodHeraldCard::CWirewoodHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Herald"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWirewoodSavageCard::CWirewoodSavageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Savage"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarrenMoorCard::CBarrenMoorCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Barren Moor"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Black Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLACK_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBarrenMoorCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBarrenMoorCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CDaruEncampmentCard::CDaruEncampmentCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Daru Encampment"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CForgottenCaveCard::CForgottenCaveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Forgotten Cave"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Red Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				RED_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CForgottenCaveCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CForgottenCaveCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CGoblinBurrowsCard::CGoblinBurrowsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Goblin Burrows"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrandColiseumCard::CGrandColiseumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grand Coliseum"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLonelySandbarCard::CLonelySandbarCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lonely Sandbar"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Blue Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLonelySandbarCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CLonelySandbarCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRiptideLaboratoryCard::CRiptideLaboratoryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Riptide Laboratory"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Wizard), false),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeasideHavenCard::CSeasideHavenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seaside Haven"), nID)
	, m_CardFilter(_T("a Bird"), _T("Birds"), new CreatureTypeComparer(CREATURE_TYPE(Bird), false))
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				WHITE_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpAbility->AddTapCost();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSecludedSteppeCard::CSecludedSteppeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Secluded Steppe"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//White Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				WHITE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSecludedSteppeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSecludedSteppeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CTranquilThicketCard::CTranquilThicketCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tranquil Thicket"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Green Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				GREEN_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTranquilThicketCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CTranquilThicketCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CUnholyGrottoCard::CUnholyGrottoCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Unholy Grotto"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWirewoodLodgeCard::CWirewoodLodgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wirewood Lodge"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				GREEN_MANA_TEXT,
				FALSE, TRUE,
				new CreatureTypeComparer(CREATURE_TYPE(Elf), false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CCentaurGladeCard::CCentaurGladeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Centaur Glade"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			_T("Centaur B"), 2791,
			1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDispersingOrbCard::CDispersingOrbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dispersing Orb"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("permanents")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImprovisedArmorCard::CImprovisedArmorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Improvised Armor"), nID,
		_T("3") WHITE_MANA_TEXT,
		Power(+2), Life(+5))
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("3")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CImprovisedArmorCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CImprovisedArmorCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CMythicProportionsCard::CMythicProportionsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mythic Proportions"), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+8), Life(+8), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CRighteousCauseCard::CRighteousCauseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Righteous Cause"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSandskinCard::CSandskinCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sandskin"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage)
{
}

//____________________________________________________________________________
//
CSharedTriumphCard::CSharedTriumphCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shared Triumph"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSharedTriumphCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CSharedTriumphCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(1), Life(1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
		
	cpAbility->SetAbilityName(_T("Shared Triumph boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CSharedTriumphCard::Move(CZone* pToZone,
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

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
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
				&CSharedTriumphCard::CreateAdditionAbility));

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

void CSharedTriumphCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CSharedTriumphCard::CreateAdditionAbility));

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
CSigilOfTheNewDawnCard::CSigilOfTheNewDawnCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sigil of the New Dawn"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionCost(_T("1") WHITE_MANA_TEXT);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSigilOfTheNewDawnCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CSigilOfTheNewDawnCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//____________________________________________________________________________
//
CAkromasBlessingCard::CAkromasBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Akroma's Blessing"), CardType::Instant, nID)
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAkromasBlessingCard::OnColorSelected))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAkromasBlessingCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//White Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				WHITE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAkromasBlessingCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAkromasBlessingCard::BeforeResolution(CAbilityAction* pAction)
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
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CAkromasBlessingCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
		}
}

BOOL CAkromasBlessingCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CAuraExtractionCard::CAuraExtractionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Aura Extraction"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CAuraExtractionCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CAuraExtractionCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CChokingTethersCard::CChokingTethersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Choking Tethers"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				TRUE,
				FALSE,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, 4);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CChokingTethersCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CChokingTethersCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CComplicateCard::CComplicateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Complicate"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("3"));

	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CComplicateCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability and counter target spell with 1 mana denial cost
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("2") BLUE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CComplicateCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpAbility->AddAbilityTag(AbilityTag::Cycling);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CComplicateCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
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
CDeathPulseCard::CDeathPulseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death Pulse"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(-4), Life(-4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDeathPulseCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDeathPulseCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CFadeFromMemoryCard::CFadeFromMemoryCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Fade from Memory"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	//Black Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			BLACK_MANA_TEXT));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CFadeFromMemoryCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CFadeFromMemoryCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CFeverCharmCard::CFeverCharmCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fever Charm"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Wizard), false),
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagesGuileCard::CMagesGuileCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Mage's Guile"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	{
		//Blue Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMagesGuileCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMagesGuileCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CMiseryCharmCard::CMiseryCharmCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Misery Charm"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Cleric), false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Cleric), false), 
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPietyCharmCard::CPietyCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Piety Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::EnchantCreature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Creatures you control gain vigilance until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrimalBoostCard::CPrimalBoostCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Primal Boost"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") GREEN_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPrimalBoostCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CPrimalBoostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRenewedFaithCard::CRenewedFaithCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Renewed Faith"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Life(+6), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") WHITE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRenewedFaithCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRenewedFaithCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CSmotherCard::CSmotherCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Smother"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new ConvertedManaCostComparer<std::less<int>>(4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSolarBlastCard::CSolarBlastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Solar Blast"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSolarBlastCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;

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
}

BOOL CSolarBlastCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CStarstormCard::CStarstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Starstorm"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT RED_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStarstormCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CStarstormCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CSunfireBalmCard::CSunfireBalmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sunfire Balm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT, 
				new AnyCreatureComparer, TRUE,
				Life(4), SourceColor::Null));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") WHITE_MANA_TEXT, 1));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSunfireBalmCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability and prevent the next 1 damage that would be dealt to target creature or player this turn
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSunfireBalmCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpAbility->AddAbilityTag(AbilityTag::Cycling);

		AddAbility(cpAbility.GetPointer()); 
	}
}

BOOL CSunfireBalmCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CVitalityCharmCard::CVitalityCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vitality Charm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this,	AbilityType::Instant,
				GREEN_MANA_TEXT,
				_T("Insect G"), 62011,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetRegenerationSpell> cpSpell(
			::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Beast), false)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAirborneAidCard::CAirborneAidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Airborne Aid"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			ZoneId::Battlefield,
			TRUE, TRUE)); //count cards in your zone? (and) count cards in opponents zone?

	cpSpell->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Bird), false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDirgeOfDreadCard::CDirgeOfDreadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dirge of Dread"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Fear));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLACK_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDirgeOfDreadCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDirgeOfDreadCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CEssenceFractureCard::CEssenceFractureCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Essence Fracture"), CardType::Sorcery, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);

	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CEssenceFractureCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CEssenceFractureCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
//____________________________________________________________________________
//
CExplosiveVegetationCard::CExplosiveVegetationCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Explosive Vegetation"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
}

//____________________________________________________________________________
//
CSearingFleshCard::CSearingFleshCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Searing Flesh"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("6") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-7),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
}

//____________________________________________________________________________
//
CSliceAndDiceCard::CSliceAndDiceCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Slice and Dice"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-4),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	{
		//Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") RED_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSliceAndDiceCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSliceAndDiceCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CWaveOfIndifferenceCard::CWaveOfIndifferenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wave of Indifference"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGigapedeCard::CGigapedeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gigapede"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetDiscardResolutionCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGigapedeCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGigapedeCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGigapedeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CGigapedeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CConvalescentCareCard::CConvalescentCareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Convalescent Care"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConvalescentCareCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CConvalescentCareCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CConvalescentCareCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();

	return pPlayer->GetLife() <= Life(5);
}

bool CConvalescentCareCard::BeforeResolution(CConvalescentCareCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();

	return pPlayer->GetLife() <= Life(5);
}

//____________________________________________________________________________
//
CPsychicTranceCard::CPsychicTranceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Trance"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
			new CreatureTypeComparer(CREATURE_TYPE(Wizard), false),
			Power(+0), Life(+0),
			CreatureKeyword::Null));
	cpSpell->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPsychicTranceCard::CreateAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPsychicTranceCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(pCard,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
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
CShaleskinBruiserCard::CShaleskinBruiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shaleskin Bruiser"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") RED_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a Beast"), _T("Beasts"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Beast"), _T("other attacking Beasts"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShaleskinBruiserCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShaleskinBruiserCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	//triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	//triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount*3));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSparksmithCard::CSparksmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sparksmith"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSparksmithCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSparksmithCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));

	CLifeModifier pmodifier1 = CLifeModifier(
	Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
	);

	CLifeModifier pmodifier2 = CLifeModifier(
		Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage, // Damage Type
	TRUE , FALSE);

	CCard* target = pAction->GetAssociatedCard();

	if (target->GetCardType().IsCreature()) 
	{ CCreatureCard* pTargetCreature = (CCreatureCard*)target;
	  pmodifier2.ApplyTo(pTargetCreature);
	}

	pmodifier1.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CDeathMatchCard::CDeathMatchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Death Match"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStarlitSanctumCard::CStarlitSanctumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Starlit Sanctum"), nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CStarlitSanctumCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CStarlitSanctumCard::OnResolutionCompleted2))
	, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				WHITE_MANA_TEXT,
				Life(+0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::NotPreventable)); //Life(-1) is a fake. See following 3 lines.

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); //This line reverses the fake.
		// -1 life & "GetTargetModifier().CPlayerModifiers" line needed to make it a non-"All Actions" required ability... :(

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CStarlitSanctumCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(pCreature->GetLastKnownToughness()), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NonCombatDamage // Damage Type
		);
		pmodifier1.ApplyTo(GetController());
	}
}

void CStarlitSanctumCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();

	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(GET_INTEGER(-pCreature->GetLastKnownPower())), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NotDealingDamage // Damage Type
		);
		pmodifier1.ApplyTo(target);
	}
}

//____________________________________________________________________________
//
CPinpointAvalancheCard::CPinpointAvalancheCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Pinpoint Avalanche"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-4),
		PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CEntrailsFeasterCard::CEntrailsFeasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Entrails Feaster"), CardType::Creature, CREATURE_TYPE2(Zombie, Cat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightningRiftCard::CLightningRiftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lightning Rift"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardCycled > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAstralSlideCard::CAstralSlideCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Astral Slide"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
	,m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAstralSlideCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardCycled > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CAstralSlideCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
//"Commando Raid\n{2R}\nInstant\nONS,U\nUntil end of turn, target creature you control gains "When this creature deals combat damage to a player, you may have it deal damage equal to its power to target creature that player controls.""
//I don't know how to use the targeted creature in BeforeResolution.
//CCommandoRaidCard::CCommandoRaidCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Commando Raid"), CardType::Instant, nID)
//{
//	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//			_T("2") RED_MANA_TEXT,
//			Power(+0), Life(+0), 
//			CreatureKeyword::Null, CreatureKeyword::Null,
//			TRUE, PreventableType::NotPreventable,
//			new AnyCreatureComparer));
//	
//	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
//
//	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
//				&CCommandoRaidCard::CreateAdditionalAbility));
//
//	cpSpell->GetTargetModifier().CCardModifiers::push_back(
//		new CScheduledCardModifier(GetGame(),
//			pModifier,
//			TurnNumberDelta(-1),
//			NodeId::EndStep,
//			true, // in-play only
//			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));
//
//	AddSpell(cpSpell.GetPointer());
//}
//
//counted_ptr<CAbility> CCommandoRaidCard::CreateAdditionalAbility(CCard* pCard)
//{
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
//
//	cpAbility->GetTrigger().SetCombatDamageOnly();
//
//	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
//	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
//	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
//
//	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCommandoRaidCard::BeforeResolution));
//	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//bool CCommandoRaidCard::BeforeResolution(CCommandoRaidCard::TriggeredAbility::TriggeredActionType* pAction) const
//{
//	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
//
//	int nPower = GET_INTEGER(GetLastKnownPower());
//
//	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nPower));
//
//	pAction->SetTriggerContext(triggerContext);
//
//	return true;
//}
//
////____________________________________________________________________________
////
CFutureSightCard::CFutureSightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Future Sight"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFutureSightCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromLibraryTop,
			(int)CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void CFutureSightCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !GetGame()->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			GetController()->GetPlayerName(),
			GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}

//____________________________________________________________________________
//
CWirewoodPrideCard::CWirewoodPrideCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wirewood Pride"), CardType::Instant, nID, AbilityType::Instant,
	    GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
		, m_CardFilter(_T("an Elf card"), _T("Elf cards"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWirewoodPrideCard::BeforeResolution));
}
bool CWirewoodPrideCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) +
		m_CardFilter.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = n;
	Context.nValue2 = n;


	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return TRUE;
}

//____________________________________________________________________________
//
COblationCard::COblationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Oblation"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&COblationCard::OnResolutionCompleted))

{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::_Land, false));

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void COblationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pCard->GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	if (bResult) pLibrary->Shuffle();

	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));

	if (bResult) pModifier->ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CRunWildCard::CRunWildCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Run Wild"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRunWildCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRunWildCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("") GREEN_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAphettoAlchemistCard::CAphettoAlchemistCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Aphetto Alchemist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2), BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

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
CBirchloreRangersCard::CBirchloreRangersCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Birchlore Rangers"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1), GREEN_MANA_TEXT)
		, m_ElfCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	this->AddCreatureType(SingleCreatureType::Elf);
	this->AddCreatureType(SingleCreatureType::Druid);

	{
			counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));		

		cpAbility->GetCost().AddTapCardCost(2, &m_ElfCardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
	{
			counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));		

		cpAbility->GetCost().AddTapCardCost(2, &m_ElfCardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
	{
			counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));		

		cpAbility->GetCost().AddTapCardCost(2, &m_ElfCardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
	{
			counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));		

		cpAbility->GetCost().AddTapCardCost(2, &m_ElfCardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
	{
			counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));		

		cpAbility->GetCost().AddTapCardCost(2, &m_ElfCardFilter);

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
CExaltedAngelCard::CExaltedAngelCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Exalted Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(5), _T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(false);

	this->AddCreatureType(SingleCreatureType::Angel);	
	this->AddCreatureKeyword(CreatureKeyword::Flying);


	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExaltedAngelCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
}

bool CExaltedAngelCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return !this->GetOrientation()->IsMorphed();
}
//____________________________________________________________________________
//
CNosyGoblinCard::CNosyGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nosy Goblin"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new FaceDownMorphComparer(),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAscendingAvenCard::CAscendingAvenCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Ascending Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2), _T("2") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Soldier);

	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CBatteringCraghornCard::CBatteringCraghornCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Battering Craghorn"), CardType::Creature, CREATURE_TYPE2(Goat, Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1), _T("1") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Goat);
	this->AddCreatureType(SingleCreatureType::Beast);

	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CBlisteringFirecatCard::CBlisteringFirecatCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Blistering Firecat"), CardType::Creature, CREATURE_TYPE2(Elemental, Cat), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(1), _T("") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elemental);
	this->AddCreatureType(SingleCreatureType::Cat);

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlisteringFirecatCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlisteringFirecatCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return !this->GetOrientation()->IsMorphed();
}
//____________________________________________________________________________
//
CBoneknitterCard::CBoneknitterCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Boneknitter"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1), _T("2") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Zombie);
	this->AddCreatureType(SingleCreatureType::Cleric);

	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));

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
CBroodhatchNantukoCard::CBroodhatchNantukoCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Broodhatch Nantuko"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1), _T("2") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Insect);
	this->AddCreatureType(SingleCreatureType::Druid);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect G"), 62011, 0);

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBroodhatchNantukoCard::SetTriggerContextL));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation); 

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CBroodhatchNantukoCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
		return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CCabalExecutionerCard::CCabalExecutionerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Cabal Executioner"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2), _T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback,
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCabalExecutionerCard::SetTriggerContext));
		
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCabalExecutionerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}
//____________________________________________________________________________
//
CChargingSlatebackCard::CChargingSlatebackCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Charging Slateback"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(3), _T("4") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);

	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CCrudeRampartCard::CCrudeRampartCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Crude Rampart"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(4), Life(5), _T("4") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Wall);

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CDaruHealerCard::CDaruHealerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Daru Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2), _T("") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		cpAbility->AddTapCost();

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
CDaruLancerCard::CDaruLancerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Daru Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4), _T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Soldier);

	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CDawningPuristCard::CDawningPuristCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Dawning Purist"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
	_T("2") WHITE_MANA_TEXT, Power(2), Life(2), _T("1") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDawningPuristCard::SetTriggerContext));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDawningPuristCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CDisruptivePitmageCard::CDisruptivePitmageCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Disruptive Pitmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1), _T("") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T(""),
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

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
CDwarvenBlastminerCard::CDwarvenBlastminerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Dwarven Blastminer"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1), _T("") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Dwarf);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
		cpAbility->AddTapCost();

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
CFallenClericCard::CFallenClericCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Fallen Cleric"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2), _T("4") BLACK_MANA_TEXT)
		, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	this->AddCreatureType(SingleCreatureType::Zombie);
	this->AddCreatureType(SingleCreatureType::Cleric);

	GetCardKeyword()->AddSpecialProtection(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CFoothillGuideCard::CFoothillGuideCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Foothill Guide"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("") WHITE_MANA_TEXT, Power(1), Life(1), _T("") WHITE_MANA_TEXT)
		, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	GetCardKeyword()->AddSpecialProtection(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CGoblinTaskmasterCard::CGoblinTaskmasterCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Goblin Taskmaster"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("") RED_MANA_TEXT, Power(1), Life(1), _T("") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Goblin);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT,
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable, new AnyCreatureComparer));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

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
CGravelSlingerCard::CGravelSlingerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Gravel Slinger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(3), _T("1") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Soldier);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

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
CGrinningDemonCard::CGrinningDemonCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Grinning Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6), _T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Demon);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrinningDemonCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrinningDemonCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
								CNode* pToNode) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CHauntedCadaverCard::CHauntedCadaverCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Haunted Cadaver"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2), _T("1") BLACK_MANA_TEXT)
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	this->AddCreatureType(SingleCreatureType::Zombie);

	{
		typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHauntedCadaverCard::SetTriggerContext));
		cpAbility->SetPickerIsTriggeredPlayer(true);
		cpAbility->SetDiscardCount(3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHauntedCadaverCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CHeadhunterCard::CHeadhunterCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Headhunter"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1), _T("") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Cleric);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeadhunterCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHeadhunterCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CHystrodonCard::CHystrodonCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Hystrodon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4), _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);

	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHystrodonCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHystrodonCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CIronfistCrusherCard::CIronfistCrusherCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Ironfist Crusher"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(4), _T("3") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Soldier);

	this->SetMaxBlockingCount(SpecialNumber::Any);
}

//____________________________________________________________________________
//
CKrosanColossusCard::CKrosanColossusCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Krosan Colossus"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9), _T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
}

//____________________________________________________________________________
//
//Nameless One\n{3U}\nCreature - Wizard Avatar\nONS,U\nNameless One's power and toughness are each equal to the number of Wizards on the battlefield.\rMorph {2U}\n*/*

//CNamelessOneCard::CNamelessOneCard(CGame* pGame, UINT nID)
//	: CMorphCreatureCard(pGame, _T("Nameless One"), CardType::Creature, CREATURE_TYPE2(Wizard, Avatar), nID,
//		_T("3") BLUE_MANA_TEXT, Power(0), Life(0), _T("2") BLUE_MANA_TEXT)
//{
//	this->AddCreatureType(SingleCreatureType::Wizard);
//	this->AddCreatureType(SingleCreatureType::Avatar);
//
//	{
//		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
//			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
//				ZoneId::Battlefield,
//				new CreatureTypeComparer(CREATURE_TYPE(Wizard), false)));
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNamelessOneCard::SetTriggerContext));
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//bool CNamelessOneCard::SetTriggerContext(CTriggeredChgPwrTghWhenCardPlayedAbility::TriggerContextType& triggerContext,
//													CPlayer* pPlayer, Damage damage) const //no template for it
//{
//	return !this->GetOrientation()->IsMorphed();
//}
//____________________________________________________________________________
//
CRiptideBiologistCard::CRiptideBiologistCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Riptide Biologist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2), _T("2") BLUE_MANA_TEXT)
		, m_CardFilter(_T("a beast"), _T("Beast"), new CreatureTypeComparer(CREATURE_TYPE(Beast), false))
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

	GetCardKeyword()->AddSpecialProtection(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CSerpentineBasiliskCard::CSerpentineBasiliskCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Serpentine Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3), _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Basilisk);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSerpentineBasiliskCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSerpentineBasiliskCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSerpentineBasiliskCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return !this->GetOrientation()->IsMorphed();
}

bool CSerpentineBasiliskCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSilentSpecterCard::CSilentSpecterCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Silent Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4), _T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Specter);

	GetCreatureKeyword()->AddFlying(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetDiscardCount(2);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilentSpecterCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSilentSpecterCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CPlayer* pPlayer, Damage damage) const
{
	return !this->GetOrientation()->IsMorphed();
}

//____________________________________________________________________________
//
CSnarlingUndorakCard::CSnarlingUndorakCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Snarling Undorak"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3), _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Beast), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

			counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpinedBasherCard::CSpinedBasherCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Spined Basher"), CardType::Creature, CREATURE_TYPE2(Zombie, Beast), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1), _T("2") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Zombie);
	this->AddCreatureType(SingleCreatureType::Beast);

}

//____________________________________________________________________________
//
CSpittingGournaCard::CSpittingGournaCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Spitting Gourna"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4), _T("4") GREEN_MANA_TEXT)
{
		this->AddCreatureType(SingleCreatureType::Beast);

		GetCreatureKeyword()->AddReach(FALSE);

}

//____________________________________________________________________________
//
CToweringBalothCard::CToweringBalothCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Towering Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6), _T("6") GREEN_MANA_TEXT)
{
		this->AddCreatureType(SingleCreatureType::Beast);

}

//____________________________________________________________________________
//
CTreespringLorianCard::CTreespringLorianCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Treespring Lorian"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(4), _T("5") GREEN_MANA_TEXT)
{
		this->AddCreatureType(SingleCreatureType::Beast);

}

//____________________________________________________________________________
//
CVenomspoutBrackusCard::CVenomspoutBrackusCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Venomspout Brackus"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT, Power(5), Life(5), _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
		this->AddCreatureType(SingleCreatureType::Beast);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				FALSE,
				Life(-5), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
						new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->AddTapCost();

			counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
		
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}

}

//____________________________________________________________________________
//
CVoidmageProdigyCard::CVoidmageProdigyCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Voidmage Prodigy"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1), _T("") BLUE_MANA_TEXT)
		, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
		this->AddCreatureType(SingleCreatureType::Human);
		this->AddCreatureType(SingleCreatureType::Wizard);

	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("")  BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

			counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhipcorderCard::CWhipcorderCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Whipcorder"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Rebel), nID,
		_T("") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2), _T("") WHITE_MANA_TEXT)
{
		this->AddCreatureType(SingleCreatureType::Human);
		this->AddCreatureType(SingleCreatureType::Soldier);
		this->AddCreatureType(SingleCreatureType::Rebel);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				WHITE_MANA_TEXT,
				TRUE, // tap
				FALSE, // untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));

		AddAbility(cpAbility.GetPointer());
	}

}

//____________________________________________________________________________
//
CBattlefieldMedicCard::CBattlefieldMedicCard(CGame* pGame, UINT nID)
	 : CCreatureCard(pGame, _T("Battlefield Medic"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
	 , m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""), new AnyCreatureComparer, FALSE, Life(0), SourceColor::Null));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBattlefieldMedicCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBattlefieldMedicCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue context(nCreatures);

	const CCard* pCard = pTargetAction->GetTargetGroup().GetFirstCardSubject();
	pTargetAction->GetTargetGroup().SetValue(pCard, context);

	return true;
}

//____________________________________________________________________________
//
CProfanePrayersCard::CProfanePrayersCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Profane Prayers"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-0),
		PreventableType::Preventable)
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfanePrayersCard::BeforeResolution));
}

bool CProfanePrayersCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue context(-nCreatures);

	if (pTargetAction->GetTargetGroup().GetPlayerSubjectCount())
	{
		const CPlayer* pPlayer = pTargetAction->GetTargetGroup().GetFirstPlayerSubject();
		pTargetAction->GetTargetGroup().SetValue(pPlayer, context);
	}

	if (pTargetAction->GetTargetGroup().GetCardSubjectCount())
	{
		const CCard* pCard = pTargetAction->GetTargetGroup().GetFirstCardSubject();
		pTargetAction->GetTargetGroup().SetValue(pCard, context);
	}

	return true;
}

//____________________________________________________________________________
//
CContestedCliffsCard::CContestedCliffsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Contested Cliffs"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CContestedCliffsSpell>> cpAbility(
			::CreateObject <CActivatedAbility<CContestedCliffsSpell>>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT));
	
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

CContestedCliffsCard::CContestedCliffsSpell::CContestedCliffsSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CContestedCliffsCard::CContestedCliffsSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
	
}

//____________________________________________________________________________
//
CThoughtboundPrimocCard::CThoughtboundPrimocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thoughtbound Primoc"), CardType::Creature, CREATURE_TYPE2(Bird, Beast), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CThoughtboundPrimocCard::OnResolutionCompleted))
	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThoughtboundPrimocCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CThoughtboundPrimocCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) != 
			m_CardFilter.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer()));
}

void CThoughtboundPrimocCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nContWizards = m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	int nOppWizards = m_CardFilter.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nContWizards == nOppWizards) return;
	CTransferControlModifier* pModifier = new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this);
	
	if (nContWizards > nOppWizards)
	{
		pModifier->ApplyTo(GetController());
		return;
	}

	if (nContWizards < nOppWizards)
	{
		pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
}

//____________________________________________________________________________
//
CInsurrectionCard::CInsurrectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Insurrection"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			Power(+0), Life(+0),
			new AnyCreatureComparer));
	
	cpSpell->GetSubjectModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
	
	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	
	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier();
	pModifier3->GetModifier().SetOneTurnOnly(TRUE);
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	
	cpSpell->GetSubjectModifier().CCardModifiers::push_back(pModifier1);
	cpSpell->GetSubjectModifier().CCardModifiers::push_back(pModifier2);
	cpSpell->GetSubjectModifier().CCreatureModifiers::push_back(pModifier3);
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnifiedStrikeCard::CUnifiedStrikeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unified Strike"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnifiedStrikeCard::BeforeResolution));
}

bool CUnifiedStrikeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	CCreatureCard* target = (CCreatureCard*)pCard;

	int nTargetPower = GET_INTEGER(target->GetLastKnownPower());
	
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));
	
	int n = m_CardFilter_temp.CountIncluded(pContInplay->GetCardContainer()) + m_CardFilter_temp.CountIncluded(pOppInplay->GetCardContainer());

	return nTargetPower <= n;
}

//____________________________________________________________________________
//
CAEtherChargeCard::CAEtherChargeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("AEther Charge"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEtherChargeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAEtherChargeCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CAEtherChargeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CAEtherChargeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-4));
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CBrightstoneRitualCard::CBrightstoneRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brightstone Ritual"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrightstoneRitualCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBrightstoneRitualCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	int nCards = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pBattle = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCards += m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	}

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (nCards>0) for (int i=0; i<nCards; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CShepherdOfRotCard::CShepherdOfRotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shepherd of Rot"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Each player loses life. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShepherdOfRotCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CShepherdOfRotCard::BeforeResolution(CAbilityAction* pAction) const
{

	int nZombies = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nZombies += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	CLifeModifier pModifier = CLifeModifier(Life(-nZombies), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CFeedingFrenzyCard::CFeedingFrenzyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Feeding Frenzy"), CardType::Instant, nID, AbilityType::Instant,
	    _T("2") BLACK_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeedingFrenzyCard::BeforeResolution));
}

bool CFeedingFrenzyCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nZombieCount = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nZombieCount += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -nZombieCount;
	Context.nValue2 = -nZombieCount;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
	it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CGustcloakHarrierCard::CGustcloakHarrierCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gustcloak Harrier"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakHarrierCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGustcloakHarrierCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(this);
	RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CGustcloakRunnerCard::CGustcloakRunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gustcloak Runner"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakRunnerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGustcloakRunnerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(this);
	RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CGustcloakSaviorCard::CGustcloakSaviorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gustcloak Savior"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGustcloakSaviorCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakSaviorCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGustcloakSaviorCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CGustcloakSaviorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCreatureCard* pCreature = triggerContext.m_pCreature;

	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(pCreature);
	pCreature->RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CGustcloakSentinelCard::CGustcloakSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gustcloak Sentinel"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakSentinelCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGustcloakSentinelCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(this);
	RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CGustcloakSkirmisherCard::CGustcloakSkirmisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gustcloak Skirmisher"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakSkirmisherCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGustcloakSkirmisherCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(this);
	RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CProwlingPangolinCard::CProwlingPangolinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prowling Pangolin"), CardType::Creature, CREATURE_TYPE2(Anteater, Beast), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CProwlingPangolinCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProwlingPangolinCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CProwlingPangolinCard::BeforeResolution(CAbilityAction* pAction)
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
	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CProwlingPangolinCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Sacrifice two creatures"));

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}

void CProwlingPangolinCard::Advance(int PlayerID, CPlayer* pController)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer, pController);
	else if (bSomeonePaid == 0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
		pModifier.ApplyTo(this);
	}
}

void CProwlingPangolinCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices two creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
			
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new AnyCreatureComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
															CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier.ApplyTo(pSelectionPlayer);

				bSomeonePaid = 1;
				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}
//____________________________________________________________________________
//
CSyphonMindCard::CSyphonMindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Syphon Mind"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSyphonMindCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSyphonMindCard::BeforeResolution(CAbilityAction* pAction) const
{
	int PrevCards = 0;
	int NewCards = 0;
	int DrawCards = 0;
	CPlayer* pController = pAction->GetController();

	CCardFilter temp;
	temp.SetComparer(new TrueCardComparer);

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&temp, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
		if (pPlayer != pController)
		{
			PrevCards = pHand->GetSize();
			pModifier1.ApplyTo(pPlayer);
			NewCards = pHand->GetSize();
			if (NewCards < PrevCards)
				DrawCards += PrevCards - NewCards;
		}
	}

	if (DrawCards > 0)
	{
		CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(DrawCards), MaximumValue(DrawCards));
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CReadTheRunesCard::CReadTheRunesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Read the Runes"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CReadTheRunesCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadTheRunesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CReadTheRunesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nPrevDraw = pController->GetTurnDrawCount();
	int nX = pAction->GetCostConfigEntry().GetExtraValue();

	if (nX > 0)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nX), MaximumValue(nX));
		pModifier.ApplyTo(pController);

		int nNextDraw = pController->GetTurnDrawCount();
		int nNewDraws = nNextDraw - nPrevDraw;

		if (nNewDraws > 0)
		{
			int nDiscard = nNewDraws;
			int nPermanents = pController->GetZoneById(ZoneId::Battlefield)->GetSize();

			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't sacrifice anything (and discard %d cards)"), nDiscard);

				entries.push_back(selectionEntry);
			}
			for (int i = 1; (i <= nPermanents) && (i <= nNewDraws) ; ++i)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)i;
				nDiscard = nNewDraws - i;

				if (i == 1)
					if (nDiscard == 0)
						entry.strText.Format(_T("Sacrifice %d permanent"),
							i);
					else if (nDiscard == 1)
						entry.strText.Format(_T("Sacrifice %d permanent (and discard %d card)"),
							i, nDiscard);
					else
						entry.strText.Format(_T("Sacrifice %d permanent (and discard %d cards)"),
							i, nDiscard);
				else
					if (nDiscard == 0)
						entry.strText.Format(_T("Sacrifice %d permanents"),
							i);
					else if (nDiscard == 1)
						entry.strText.Format(_T("Sacrifice %d permanents (and discard %d card)"),
							i, nDiscard);
					else
						entry.strText.Format(_T("Sacrifice %d permanents (and discard %d cards)"),
							i, nDiscard);
				entries.push_back(entry);
			}

			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, nNewDraws);
		}
	}
	return true;
}

void CReadTheRunesCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				int nDiscard = dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nDiscard == 1)
						strMessage.Format(_T("%s discards %d card"), pSelectionPlayer->GetPlayerName(), nDiscard);
					else
						strMessage.Format(_T("%s discards %d cards"), pSelectionPlayer->GetPlayerName(), nDiscard);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(nDiscard), MaximumValue(nDiscard),  // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer,								// select by 
					CZoneModifier::RoleType::AllPlayers,								// reveal to
					&temp,																// what cards
					ZoneId::Graveyard,													// if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer,								// select by this player
					CardPlacement::Top,													// put selected cards on 
					MoveType::Discard,													// move type
					CZoneModifier::RoleType::PrimaryPlayer);							// order selected cards by this player
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			else
			{
				int nValue = it->dwContext;
				int nDiscard = dwContext1 - nValue;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						if (nDiscard == 0)
							strMessage.Format(_T("%s sacrifices %d permanent"), pSelectionPlayer->GetPlayerName(), nValue);
						else if (nDiscard == 1)
							strMessage.Format(_T("%s sacrifices %d permanent and discards %d card"), pSelectionPlayer->GetPlayerName(), nValue, nDiscard);
						else
							strMessage.Format(_T("%s sacrifices %d permanent and discards %d cards"), pSelectionPlayer->GetPlayerName(), nValue, nDiscard);
					else
						if (nDiscard == 0)
							strMessage.Format(_T("%s sacrifices %d permanents"), pSelectionPlayer->GetPlayerName(), nValue);
						else if (nDiscard == 1)
							strMessage.Format(_T("%s sacrifices %d permanents and discards %d card"), pSelectionPlayer->GetPlayerName(), nValue, nDiscard);
						else
							strMessage.Format(_T("%s sacrifices %d permanents and discards %d cards"), pSelectionPlayer->GetPlayerName(), nValue, nDiscard);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier1.ApplyTo(pSelectionPlayer);

				if (nDiscard > 0)
				{
					CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier2.AddSelection(MinimumValue(nDiscard), MaximumValue(nDiscard), // select cards to reorder
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&temp, // what cards
						ZoneId::Graveyard, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on 
						MoveType::Discard, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
					pModifier2.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CDoomCannonCard::CDoomCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Doom Cannon"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CDoomCannonCard::OnSelectionDone))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T("3"),
			new AnyCreatureComparer, true,
			Life(-3), PreventableType::Preventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

void CDoomCannonCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

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
}

void CDoomCannonCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;
			m_CardFilter.SetFilterName(_T("a creature of the chosen type"), _T("creatures of the chosen type"));
			m_CardFilter.AddComparer(new CreatureTypeComparer(SelectedType, false));
			m_CardFilter.AddComparer(new AnyCreatureComparer);

			return;
		}
}

//____________________________________________________________________________
//

CErraticExplosionCard::CErraticExplosionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Erratic Explosion"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CErraticExplosionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CErraticExplosionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

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

		CLifeModifier pModifier1 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

		if (pTargetCreature)
			pModifier1.ApplyTo(pTargetCreature);
		else
			pModifier1.ApplyTo(pTargetPlayer);
	}

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CGoblinMachinistCard::CGoblinMachinistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Machinist"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("4") RED_MANA_TEXT, Power(0), Life(5))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
			_T("2") RED_MANA_TEXT));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinMachinistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGoblinMachinistCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

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

		pModifier1.ApplyTo(this);
	}

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CKaboomCard::CKaboomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kaboom!"), CardType::Sorcery, nID)
	, m_PlayerSelection(pGame, CSelectionSupport::SelectionCallback(this, &CKaboomCard::OnPlayerSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKaboomCard::BeforeResolution));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

	AddSpell(cpSpell.GetPointer());
}

bool CKaboomCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	pTargetAction->GetTargetGroup().GetPlayerSubjects(pTargets);

	if (pTargets.GetSize() > 0)
		SelectPlayer(pAction->GetController());
	return true;
}

void CKaboomCard::SelectPlayer(CPlayer* pController)
{
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pTargets.GetSize(); ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)pTargets.GetAt(i);
		selectionEntry.strText.Format(_T("Select %s"), pTargets.GetAt(i)->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	m_PlayerSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CKaboomCard::OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;

			int n = 0;
			bool bSearch = true;
			CCard* pFound;
				
			CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

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

				CLifeModifier pModifier1 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier1.ApplyTo(pPlayer);
			}

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
			pModifier2.ApplyTo(pSelectionPlayer);

			pTargets.Remove(pPlayer);
			if (pTargets.GetSize() > 0)
				SelectPlayer(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CRiptideShapeshifterCard::CRiptideShapeshifterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riptide Shapeshifter"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
	, m_CreatureTypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRiptideShapeshifterCard::OnCreatureTypeSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiptideShapeshifterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRiptideShapeshifterCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;

	for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
	{
		SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

		SelectionEntry entry;
		entry.dwContext = creatureType;
		entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
		entries.push_back(entry);
	}
	m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CRiptideShapeshifterCard::OnCreatureTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			int n = 0;
			bool bSearch = true;
				
			CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

			for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
			{		
				if (!bSearch)
					break;
				else
				{
					++n;
					if (pLibrary->GetAt(i)->GetCardType().IsCreature())
					{
						CCreatureCard* pCreature = (CCreatureCard*)pLibrary->GetAt(i);
						if (pCreature->GetCreatureType().HasType(creatureType) || pCreature->GetCardKeyword()->HasChangeling())
							bSearch = false;
					}
				}
			}

			CCardFilter m_CardFilter;
			m_CardFilter.AddComparer(new CreatureTypeComparer(creatureType, false));
			m_CardFilter.AddComparer(new AnyCreatureComparer);

			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer,			 // select by 
					CZoneModifier::RoleType::AllPlayers,			 // reveal to
					&m_CardFilter,									 // any cards
					ZoneId::Battlefield,							 // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer,			 // select by this player
					CardPlacement::Top,								 // put selected cards on top
					MoveType::Others,								 // move type
					CZoneModifier::RoleType::PrimaryPlayer);		 // order selected cards by this player
		
			pModifier.ApplyTo(pSelectionPlayer);

			pLibrary->Shuffle();
			return;
		}
}

//____________________________________________________________________________
//
CKamahlsSummonsCard::CKamahlsSummonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kamahl's Summons"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CKamahlsSummonsCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKamahlsSummonsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CKamahlsSummonsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	pRevealedCards.RemoveAll();
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	RevealCards(pActivePlayerID);

	return true;
}

void CKamahlsSummonsCard::RevealCards(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);

	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);

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
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)PlayerID);
}

void CKamahlsSummonsCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Advance(dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(dwContext1);
				
				return;
			}
		}
}

void CKamahlsSummonsCard::Advance(int PlayerID)
{
	int NextPlayer = (PlayerID + 1) % GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		RevealCards(NextPlayer);
	else
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
					strMessage.Format(_T("%s reveals %s"), pCard->GetController()->GetPlayerName(), pCard->GetCardName(TRUE));

					m_pGame->Message(
						strMessage,
						pCard->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

					for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
					{
						m_pGame->GetPlayer(j)->MemorizeCard(pCard);
					}
				}
			}

			for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardControllerComparer(GetGame()->GetPlayer(ip)));

				int nTokens = m_CardFilter.CountIncluded(pRevealedCards);

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Bear A"), 2830, nTokens);
				pModifier.ApplyTo(GetGame()->GetPlayer(ip));
			}
		}
	}
}

//____________________________________________________________________________
//
CCoverOfDarknessCard::CCoverOfDarknessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cover of Darkness"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CCoverOfDarknessCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CCoverOfDarknessCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0),
			CreatureKeyword::Fear));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
		
	cpAbility->SetAbilityName(_T("Cover of Darkness boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CCoverOfDarknessCard::Move(CZone* pToZone,
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

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
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
				&CCoverOfDarknessCard::CreateAdditionAbility));

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

void CCoverOfDarknessCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CCoverOfDarknessCard::CreateAdditionAbility));

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
CSteelyResolveCard::CSteelyResolveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Steely Resolve"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSteelyResolveCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CSteelyResolveCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
			
	cpAbility->SetAbilityName(_T("Steely Resolve boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CSteelyResolveCard::Move(CZone* pToZone,
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

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
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
				&CSteelyResolveCard::CreateAdditionAbility));

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

void CSteelyResolveCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CSteelyResolveCard::CreateAdditionAbility));

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
CInformationDealerCard::CInformationDealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Information Dealer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInformationDealerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CInformationDealerCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nSize = 0;

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nSize += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	if (nSize > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nSize,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.SetReorderInformation(true, ZoneId::Library);
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CThunderOfHoovesCard::CThunderOfHoovesCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Thunder of Hooves"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pGlobalChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThunderOfHoovesCard::BeforeResolution));
}

bool CThunderOfHoovesCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nBeasts = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nBeasts += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nBeasts == 0) 
		return false;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nBeasts;
	pAction->SetValue(Context);	
	
	return true;
}


//____________________________________________________________________________
//
CStagBeetleCard::CStagBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stag Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CStagBeetleCard::OnZoneChanged))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CStagBeetleCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		int nCreatures = 0;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			
			nCreatures += m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
		}

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nCreatures);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CKamahlFistOfKrosaCard::CKamahlFistOfKrosaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kamahl, Fist of Krosa"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Druid), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), false));
		ATLASSERT(cpAbility);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKamahlFistOfKrosaCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+3), Life(+3),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetOneTurnOnly(TRUE);
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Trample);

		CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier1));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKamahlFistOfKrosaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land C"), 64009, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CIxidorsWillCard::CIxidorsWillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ixidor's Will"), CardType::Instant, nID)
{
	{
		counted_ptr<CIxidorsWillAbility> cpSpell(
		::CreateObject<CIxidorsWillAbility>(this, _T("2") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}
CIxidorsWillCard::CIxidorsWillAbility::CIxidorsWillAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CIxidorsWillCard::CIxidorsWillAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	int nWizards = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nWizards += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 2*nWizards);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CBlatantThieveryCard::CBlatantThieveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blatant Thievery"), CardType::Sorcery, nID)
{
	// Will need an update if/when we get multiplayer.
	counted_ptr<CTargetMoveCardSpell> cpSpell(::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, false, MoveType::Others));		

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CAggravatedAssaultCard::CAggravatedAssaultCard(CGame* pGame, UINT nID)
    : CInPlaySpellCard(pGame, _T("Aggravated Assault"), CardType::GlobalEnchantment, nID,
        _T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CExtraCombatSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CExtraCombatSpell>>(this,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			FALSE,
			1, TRUE));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAggravatedAssaultCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

bool CAggravatedAssaultCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//______________________________________________________________________________
//
CRiptideReplicatorCard::CRiptideReplicatorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Riptide Replicator"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRiptideReplicatorCard::OnColorSelected))
	, m_CreatureTypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRiptideReplicatorCard::OnCreatureTypeSelected))
	, m_cpAListener1(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRiptideReplicatorCard::OnZoneChanged))
	, m_cpAListener2(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CRiptideReplicatorCard::OnCounterMoved))
	, m_nCounterCount(0)
{
	GetMovedEventSource()->AddListener(m_cpAListener1.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiptideReplicatorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

void CRiptideReplicatorCard::Move(CZone* pToZone,
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
		SelectedType = SingleCreatureType::Null;

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
		m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CRiptideReplicatorCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cWhite = true;

				std::vector<SelectionEntry> entries;
				for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
				{
					SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
					entries.push_back(entry);
				}

				m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	

				return;
			}
			if (nSelectedIndex == 2)
			{
				cBlue = true;

				std::vector<SelectionEntry> entries;
				for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
				{
					SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
					entries.push_back(entry);
				}

				m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	

				return;
			}
			if (nSelectedIndex == 3)
			{
				cBlack = true;

				std::vector<SelectionEntry> entries;
				for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
				{
					SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
					entries.push_back(entry);
				}

				m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	

				return;
			}
			if (nSelectedIndex == 4)
			{
				cRed = true;

				std::vector<SelectionEntry> entries;
				for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
				{
					SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
					entries.push_back(entry);
				}

				m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	

				return;
			}
			if (nSelectedIndex == 5)
			{
				cGreen = true;

				std::vector<SelectionEntry> entries;
				for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
				{
					SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
					entries.push_back(entry);
				}

				m_CreatureTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	

				return;
			}
		}
}

void CRiptideReplicatorCard::OnCreatureTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			return;
		}
}

bool CRiptideReplicatorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nUID = 62043;
	CString strTokenName = _T("Blank L");

	if (cWhite)
	{
		nUID = 62038;
		strTokenName = _T("Blank G");
	}
	if (cBlue)
	{
		nUID = 62039;
		strTokenName = _T("Blank H");
	}
	if (cBlack)
	{
		nUID = 62040;
		strTokenName = _T("Blank I");
	}
	if (cRed)
	{
		nUID = 62041;
		strTokenName = _T("Blank J");
	}
	if (cGreen)
	{
		nUID = 62042;
		strTokenName = _T("Blank K");
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	
	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, strTokenName, nUID));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(nUID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(strTokenName); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CVariableTokenCreature* pCreature = (CVariableTokenCreature*)cpToken.GetPointer();
		pCreature->pCreatureType = SelectedType;

		pCreature->SetPrintedCardName(SelectedType.ToString());
		
		CCreatureTypeModifier pModifier = CCreatureTypeModifier(SelectedType, true)	;
		pModifier.ApplyTo(pCreature);

		pCreature->SetPrintedPower(Power(m_nCounterCount));
		pCreature->SetPrintedToughness(Life(m_nCounterCount));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

void CRiptideReplicatorCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, +nColorCount);
		pModifier.ApplyTo(this);

		m_nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();
	}
}

void CRiptideReplicatorCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CAnimalMagnetismCard::CAnimalMagnetismCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Animal Magnetism"), CardType::Sorcery, nID)
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAnimalMagnetismCard::OnOpponentSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAnimalMagnetismCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnimalMagnetismCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAnimalMagnetismCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int n = pLibrary->GetSize();
	if (n > 5) n = 5;

	if (n == 0) return true;

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.ApplyTo(pController);

	pCreatures.RemoveAll();
	for (int i = 1; i <= n; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);
		if (pCard->GetCardType().IsCreature())
			pCreatures.AddCard(pCard, CardPlacement::Top);
	}

	if (pCreatures.GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (GetGame()->GetPlayer(ip) != pController)
			{
				SelectionEntry entry;

				entry.dwContext = ip;
									
				entry.strText.Format(_T("Choose %s"),
					GetGame()->GetPlayer(ip)->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, n);
	}
	else
	{
		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.SetReorderInformation(true, ZoneId::Graveyard);

		pModifier2.ApplyTo(pController);
	}
	return true;
}

void CAnimalMagnetismCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(it->dwContext);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pPlayer->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pCreatures.GetSize(); ++i)
			{
				CCard* pCard = pCreatures.GetAt(i);

				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield under %s's control"),
					pCard->GetCardName(TRUE), pSelectionPlayer->GetPlayerName());

				entries.push_back(entry);
			}
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, dwContext1);
				
			return;
		}
}

void CAnimalMagnetismCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, true, MoveType::Others, pCard->GetOwner());
			pModifier1.ApplyTo(pCard);

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, dwContext1 - 1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.SetReorderInformation(true, ZoneId::Graveyard);

			pModifier2.ApplyTo(pCard->GetOwner());
				
			return;
		}
}

//____________________________________________________________________________
//
CManaEchoesCard::CManaEchoesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Echoes"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
		, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CManaEchoesCard::OnSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaEchoesCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CManaEchoesCard::BeforeResolution));
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CManaEchoesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CManaEchoesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetTriggerContext().nValue1;

	if (pCreature->GetCreatureType().GetSize() == 0) return true;

	int nMatching = 0;

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature2 = (CCreatureCard*)pCard;

			if (pCreature2->GetCreatureType().HasCommonTypes(pCreature->GetCreatureType()) ||
				pCreature2->GetCardKeyword()->HasChangeling() ||
				(pCreature->GetCardKeyword()->HasChangeling() && (pCreature2->GetCreatureType().GetSize() > 0)))
				nMatching += 1;
		}
	}

	if (nMatching > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;

			entry.dwContext = 0;
									
			entry.strText.Format(_T("Don't add mana"));

			entries.push_back(entry);
		}
		{
			SelectionEntry entry;

			entry.dwContext = nMatching;
									
			entry.strText.Format(_T("Add mana")); //I tried writing number here, but it shows weird values in-game

			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}


void CManaEchoesCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't add mana"), pSelectionPlayer->GetPlayerName());
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
				int nValue = (int)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s adds mana to his mana pool"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));

				for (int i = 0; i < nValue; ++i) pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
	}
}

//______________________________________________________________________________
//
CGraxiplonCard::CGraxiplonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graxiplon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::GraxiplonEffect));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
