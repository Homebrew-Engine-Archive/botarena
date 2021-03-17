#include "stdafx.h"
#include "CardGuildpact.h"

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

		DEFINE_CARD(CAbsolverThrullCard);
		DEFINE_CARD(CAbyssalNocturnusCard);
		DEFINE_CARD(CAgentOfMasksCard);
		DEFINE_CARD(CAngelOfDespairCard);
		DEFINE_CARD(CBatteringWurmCard);
		DEFINE_CARD(CBelfrySpiritCard);
		DEFINE_CARD(CBenedictionOfMoonsCard);
		DEFINE_CARD(CBioplasmCard);
		DEFINE_CARD(CBlindHunterCard);
		DEFINE_CARD(CBloodscaleProwlerCard);
		DEFINE_CARD(CBorborygmosCard);
		DEFINE_CARD(CCastigateCard);
		DEFINE_CARD(CCausticRainCard);
		DEFINE_CARD(CCerebralVortexCard);
		DEFINE_CARD(CCrashLandingCard);
		DEFINE_CARD(CCryptwailingCard);
		DEFINE_CARD(CCrystalSeerCard);
		DEFINE_CARD(CCryOfContritionCard);
		DEFINE_CARD(CCullingSunCard);
		DEFINE_CARD(CDaggerclawImpCard);
		DEFINE_CARD(CDebtorsKnellCard);
		DEFINE_CARD(CDrownedRusalkaCard);
		DEFINE_CARD(CDryadSophisticateCard);
		DEFINE_CARD(CDouseInGloomCard);
		DEFINE_CARD(CDuneBroodNephilimCard);
		DEFINE_CARD(CElectrolyzeCard);
		DEFINE_CARD(CExhumerThrullCard);
		DEFINE_CARD(CFeralAnimistCard);
		DEFINE_CARD(CFrazzleCard);
		DEFINE_CARD(CGathererOfGracesCard);
		DEFINE_CARD(CGelectrodeCard);
		DEFINE_CARD(CGhorClanBloodscaleCard);
		DEFINE_CARD(CGhorClanSavageCard);
		DEFINE_CARD(CGhostCouncilOfOrzhovaCard);
		DEFINE_CARD(CGhostwayCard);
		DEFINE_CARD(CGiantSolifugeCard);
		DEFINE_CARD(CGlintEyeNephilimCard);
		DEFINE_CARD(CGodlessShrineCard);
		DEFINE_CARD(CGravenDominatorCard);
		DEFINE_CARD(CGristlebackCard);
		DEFINE_CARD(CGruulGuildmageCard);
		DEFINE_CARD(CGruulNodorogCard);
		DEFINE_CARD(CGruulScrapperCard);
		DEFINE_CARD(CGruulSignetCard);
		DEFINE_CARD(CGruulTurfCard);
		DEFINE_CARD(CGruulWarPlowCard);
		DEFINE_CARD(CHarrierGriffinCard);
		DEFINE_CARD(CHatchingPlansCard);
		DEFINE_CARD(CHissingMiasmaCard);
		DEFINE_CARD(CHypervoltGraspCard);
		DEFINE_CARD(CInvokeTheFiremindCard);
		DEFINE_CARD(CIzzetBoilerworksCard);
		DEFINE_CARD(CIzzetChronarchCard);
		DEFINE_CARD(CIzzetGuildmageCard);
		DEFINE_CARD(CIzzetSignetCard);
		DEFINE_CARD(CKillerInstinctCard);
		DEFINE_CARD(CLeylineOfLifeforceCard);
		DEFINE_CARD(CLeylineOfLightningCard);
		DEFINE_CARD(CLeylineOfSingularityCard);
		DEFINE_CARD(CLeylineOfTheMeekCard);
		DEFINE_CARD(CLionheartMaverickCard);
		//DEFINE_CARD(CLivingInfernoCard);
		DEFINE_CARD(CMartyredRusalkaCard);
		DEFINE_CARD(CMoratoriumStoneCard);
		DEFINE_CARD(CMortifyCard);
		DEFINE_CARD(CMourningThrullCard);
		DEFINE_CARD(CNivMizzettheFiremindCard);
		DEFINE_CARD(COgreSavantCard);
		DEFINE_CARD(COrderOfTheStarsCard);
		DEFINE_CARD(COrzhovaTheChurchOfDealsCard);
		DEFINE_CARD(COrzhovBasilicaCard);
		DEFINE_CARD(COrzhovEuthanistCard);
		DEFINE_CARD(COrzhovGuildmageCard);
		DEFINE_CARD(COrzhovPontiffCard);
		DEFINE_CARD(COrzhovSignetCard);
		DEFINE_CARD(COstiaryThrullCard);
		DEFINE_CARD(CParallectricFeedbackCard);
		DEFINE_CARD(CPetrahydroxCard);
		DEFINE_CARD(CPetrifiedWoodKinCard);
		DEFINE_CARD(CPilloryOfTheSleeplessCard);
		DEFINE_CARD(CPlaguedRusalkaCard);
		DEFINE_CARD(CPoisonbellyOgreCard);
		DEFINE_CARD(CPredatoryFocusCard);
		DEFINE_CARD(CPrimevalLightCard);
		DEFINE_CARD(CQuickenCard);
		DEFINE_CARD(CRepealCard);
		DEFINE_CARD(CRestlessBonesCard);
		DEFINE_CARD(CRevenantPatriarchCard);
		DEFINE_CARD(CRumblingSlumCard);
		DEFINE_CARD(CRuneboggleCard);
		DEFINE_CARD(CSanguinePraetorCard);
		DEFINE_CARD(CScabClanMaulerCard);
		DEFINE_CARD(CSchismotivateCard);
		DEFINE_CARD(CScorchedRusalkaCard);
		DEFINE_CARD(CSeizeTheSoulCard);
		DEFINE_CARD(CShadowLanceCard);
		DEFINE_CARD(CShriekingGrotesqueCard);
		DEFINE_CARD(CSilhanaLedgewalkerCard);
		DEFINE_CARD(CSilhanaStarfletcherCard);
		DEFINE_CARD(CSinstrikersWillCard);
		DEFINE_CARD(CSkarrganFirebirdCard);
		DEFINE_CARD(CSkarrganPitSkulkCard);
		DEFINE_CARD(CSkarrganSkybreakerCard);
		DEFINE_CARD(CSkarrgTheRagePitsCard);
		DEFINE_CARD(CSkeletalVampireCard);
		DEFINE_CARD(CSkyriderTraineeCard);
		DEFINE_CARD(CSkySwallowerCard);
		DEFINE_CARD(CSmogsteedRiderCard);
		//DEFINE_CARD(CSoulsOfTheFaultlessCard);
		DEFINE_CARD(CStarvedRusalkaCard);
		DEFINE_CARD(CSteamcoreWeirdCard);
		DEFINE_CARD(CSteamVentsCard);
		DEFINE_CARD(CStitchInTimeCard);
		DEFINE_CARD(CStompingGroundCard);
		DEFINE_CARD(CStormHerdCard);
		DEFINE_CARD(CStratozeppelidCard);
		DEFINE_CARD(CStreetbreakerWurmCard);
		DEFINE_CARD(CTeysaOrzhovScionCard);
		DEFINE_CARD(CTiborAndLumiaCard);
		DEFINE_CARD(CTinStreetHooliganCard);
		DEFINE_CARD(CToArmsCard);
		DEFINE_CARD(CTorchDrakeCard);
		DEFINE_CARD(CUlashttheHateSeedCard);
		DEFINE_CARD(CVedalkenPlotterCard);
		DEFINE_CARD(CWeeDragonautsCard);
		DEFINE_CARD(CWildCantorCard);
		DEFINE_CARD(CWildsizeCard);
		DEFINE_CARD(CWitchMawNephilimCard);
		DEFINE_CARD(CWithstandCard);
		DEFINE_CARD(CWreakHavocCard);
		DEFINE_CARD(CWurmweaverCoilCard);
		DEFINE_CARD(CYoreTillerNephilimCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAbyssalNocturnusCard::CAbyssalNocturnusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abyssal Nocturnus"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelOfDespairCard::CAngelOfDespairCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Despair"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
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

//____________________________________________________________________________
//
CGruulTurfCard::CGruulTurfCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gruul Turf"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CIzzetBoilerworksCard::CIzzetBoilerworksCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Izzet Boilerworks"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CNivMizzettheFiremindCard::CNivMizzettheFiremindCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niv-Mizzet, the Firemind"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Wizard), nID, 
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrzhovBasilicaCard::COrzhovBasilicaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Orzhov Basilica"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CGodlessShrineCard::CGodlessShrineCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Godless Shrine"), nID, 
		CardType::Plains | CardType::Swamp | CardType::NonbasicLand, 
		WHITE_MANA_TEXT, BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CSteamVentsCard::CSteamVentsCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Steam Vents"), nID, 
		CardType::Island | CardType::Mountain | CardType::NonbasicLand, 
		BLUE_MANA_TEXT, RED_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CStompingGroundCard::CStompingGroundCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Stomping Ground"), nID, 
		CardType::Mountain | CardType::Forest | CardType::NonbasicLand, 
		RED_MANA_TEXT, GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CDebtorsKnellCard::CDebtorsKnellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Debtors' Knell"), CardType::GlobalEnchantment, nID, 
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));

        AddSpell(cpSpell.GetPointer());
    }
	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));

        AddSpell(cpSpell.GetPointer());
    }
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));

        AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

		cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSilhanaLedgewalkerCard::CSilhanaLedgewalkerCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Silhana Ledgewalker"), CardType::Creature, CREATURE_TYPE2(Elf, Rogue), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		CCardFilter::GetFilter(_T("flying creatures"))) //can't be blocked except by "this"
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CBorborygmosCard::CBorborygmosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borborygmos"), CardType::_LegendaryCreature, CREATURE_TYPE(Cyclops), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(7))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBorborygmosCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		//cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		/*cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);*/

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CBorborygmosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pOppCard = pBattle->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
			pModifier.ApplyTo(pOppCard);
	}
}

//____________________________________________________________________________
//
CCrystalSeerCard::CCrystalSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crystal Seer"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
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
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("4") BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaggerclawImpCard::CDaggerclawImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Daggerclaw Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CDrownedRusalkaCard::CDrownedRusalkaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drowned Rusalka"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDrownedRusalkaCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDiscardCardSpell>>(this,
			BLUE_MANA_TEXT,
			1, MoveType::Discard, 
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Graveyard, TRUE)); //Discard a card.

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDrownedRusalkaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	pModifier.ApplyTo(cont);
}

//____________________________________________________________________________
//
CGelectrodeCard::CGelectrodeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Gelectrode"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(0), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGelectrodeCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGelectrodeCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CGhorClanBloodscaleCard::CGhorClanBloodscaleCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ghor-Clan Bloodscale"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(1),
		_T("3") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);

	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CGiantSolifugeCard::CGiantSolifugeCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Giant Solifuge"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddShroud(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGruulGuildmageCard::CGruulGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gruul Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("3") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGruulNodorogCard::CGruulNodorogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Gruul Nodorog"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1)
{
}

//____________________________________________________________________________
//
CHarrierGriffinCard::CHarrierGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Harrier Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIzzetChronarchCard::CIzzetChronarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Izzet Chronarch"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLionheartMaverickCard::CLionheartMaverickCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Lionheart Maverick"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		_T("4") WHITE_MANA_TEXT, Power(+1), Life(+2), CreatureKeyword::Null)
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
//
//"Living Inferno\n{6RR}\nCreature - Elemental\nGPT,R\n{T}: Living Inferno deals damage equal to its power divided as you choose among any number of target creatures. Each of those creatures deals damage equal to its power to Living Inferno.\n8/5"
//
//CLivingInfernoCard::CLivingInfernoCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Living Inferno"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
//		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(8), Life(5))
//{
//	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
//		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
//			_T(""),
//			new AnyCreatureComparer, FALSE,
//			PreventableType::Preventable));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//	cpAbility->SetReceiveDamageFromTargetedCreature();
//
//	cpAbility->GetTargeting()->SetDistributeValues(); //With it the ability can't be used.
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CMartyredRusalkaCard::CMartyredRusalkaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Martyred Rusalka"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantAttack, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMourningThrullCard::CMourningThrullCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mourning Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));

        AddSpell(cpSpell.GetPointer());
    }
    {
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::DamageEventCallback, 
								&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMourningThrullCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
    }
}

bool CMourningThrullCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
COrzhovGuildmageCard::COrzhovGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orzhov Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(+1), PreventableType::NotPreventable));

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
  }
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Life(-1),	// life delta
				FALSE_CARD_COMPARER, TRUE, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->SetAbilityText(_T("Each player loses 1 life. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COstiaryThrullCard::COstiaryThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ostiary Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
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
CPetrahydroxCard::CPetrahydroxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Petrahydrox"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
{
    {
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("casts"));

        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPlaguedRusalkaCard::CPlaguedRusalkaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plagued Rusalka"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPoisonbellyOgreCard::CPoisonbellyOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Poisonbelly Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

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
CRestlessBonesCard::CRestlessBonesCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Restless Bones"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Swampwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRumblingSlumCard::CRumblingSlumCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rumbling Slum"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScorchedRusalkaCard::CScorchedRusalkaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scorched Rusalka"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkeletalVampireCard::CSkeletalVampireCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skeletal Vampire"), CardType::Creature, CREATURE_TYPE2(Vampire, Skeleton), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3),
		_T(""))

	, m_CardFilter(_T("a Bat"), _T("Bats"), new CreatureTypeComparer(CREATURE_TYPE(Bat), false))
{
	m_pRegenerationAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	GetCreatureKeyword()->AddFlying(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Bat A"), 2803, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				_T("Bat A"), 2803,
				2));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkyriderTraineeCard::CSkyriderTraineeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyrider Trainee"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSmogsteedRiderCard::CSmogsteedRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Smogsteed Rider"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
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

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStarvedRusalkaCard::CStarvedRusalkaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Starved Rusalka"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			GREEN_MANA_TEXT,
			Life(+1), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStratozeppelidCard::CStratozeppelidCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stratozeppelid"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CStreetbreakerWurmCard::CStreetbreakerWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Streetbreaker Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CTeysaOrzhovScionCard::CTeysaOrzhovScionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teysa, Orzhov Scion"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("white creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spirit J"), 2944, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTiborAndLumiaCard::CTiborAndLumiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tibor and Lumia"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTorchDrakeCard::CTorchDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Torch Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeeDragonautsCard::CWeeDragonautsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wee Dragonauts"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildCantorCard::CWildCantorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Cantor"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		RED_MANA_TEXT, Power(1), Life(1))
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
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this,
				WHITE_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this,
				BLUE_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this,
				BLACK_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this,
				RED_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this,
				GREEN_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrzhovaTheChurchOfDealsCard::COrzhovaTheChurchOfDealsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Orzhova, the Church of Deals"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetReverseLifeDeltaToController();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkarrgTheRagePitsCard::CSkarrgTheRagePitsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Skarrg, the Rage Pits"), nID)
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
				RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGruulSignetCard::CGruulSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gruul Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CGruulWarPlowCard::CGruulWarPlowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gruul War Plow"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				_T("Juggernaut AA"), 64062));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIzzetSignetCard::CIzzetSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Izzet Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
COrzhovSignetCard::COrzhovSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orzhov Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CHatchingPlansCard::CHatchingPlansCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hatching Plans"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetDrawCount(3);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHissingMiasmaCard::CHissingMiasmaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hissing Miasma"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHissingMiasmaCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CHissingMiasmaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	return (pCreature->GetAttackedPlayer() == GetController()); //Does the creature attack defending player (and not a planeswalker)?
}

//____________________________________________________________________________
//
CHypervoltGraspCard::CHypervoltGraspCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hypervolt Grasp"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("2") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CHypervoltGraspCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CHypervoltGraspCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
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
CSinstrikersWillCard::CSinstrikersWillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sinstriker's Will"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSinstrikersWillCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSinstrikersWillCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpEnchantAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(pEnchantedCard, 
			_T(""),
			new AttackingBlockingCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	//cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDouseInGloomCard::CDouseInGloomCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Douse in Gloom"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CElectrolyzeCard::CElectrolyzeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Electrolyze"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CFrazzleCard::CFrazzleCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Frazzle"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::Blue, false)))
{
}

//____________________________________________________________________________
//
CMortifyCard::CMortifyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Mortify"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CRuneboggleCard::CRuneboggleCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Runeboggle"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));

	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CToArmsCard::CToArmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("To Arms!"), CardType::Instant, nID)
{
	counted_ptr<CGlobalUntapSpell> cpSpell(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWildsizeCard::CWildsizeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wildsize"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CWithstandCard::CWithstandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Withstand"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(3), SourceColor::Null));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCastigateCard::CCastigateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Castigate"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT BLACK_MANA_TEXT,
			1, MoveType::Others, ZoneId::Exile, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			CCardFilter::GetFilter(_T("non-lands"))));	// Exclude land cards

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCausticRainCard::CCausticRainCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Caustic Rain"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CCullingSunCard::CCullingSunCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Culling Sun"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInvokeTheFiremindCard::CInvokeTheFiremindCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Invoke the Firemind"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, 0));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetExtraActionValueVector();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPredatoryFocusCard::CPredatoryFocusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Predatory Focus"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CanAssignCombatDamageToDefPlayer));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPrimevalLightCard::CPrimevalLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Primeval Light"), CardType::Sorcery, nID)
{
	{
		//Opponent
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAffectOpponentCardsOnly();
		cpSpell->SetAbilityText(_T("Destroy all enchantments your opponent controls with"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Controller
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Destroy all enchantments you control with"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWreakHavocCard::CWreakHavocCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wreak Havoc"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CAgentOfMasksCard::CAgentOfMasksCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agent of Masks"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAgentOfMasksCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CAgentOfMasksCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			PrevLife = (int)pPlayer->GetLife();
			pModifier1.ApplyTo(pPlayer);
			NewLife = (int)pPlayer->GetLife();
			if (NewLife < PrevLife)
				LifeGain += PrevLife - NewLife;
		}
	}

	if (LifeGain > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(+LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CCryptwailingCard::CCryptwailingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cryptwailing"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("1"),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDuneBroodNephilimCard::CDuneBroodNephilimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dune-Brood Nephilim"), CardType::Creature, CREATURE_TYPE(Nephilim), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDuneBroodNephilimCard::BeforeResolution));
	cpAbility->SetCreateTokenOption(TRUE, _T("Sand"), 2839, 0); 

	AddAbility(cpAbility.GetPointer());
}

bool CDuneBroodNephilimCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;

	for (int i = 0; i < pContBattle->GetSize(); ++i)
	{
		CCard* pCard = pContBattle->GetAt(i);
		if (pCard->GetCardType().IsLand()) 
		++nCount;
	}
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CWitchMawNephilimCard::CWitchMawNephilimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Witch-Maw Nephilim"), CardType::Creature, CREATURE_TYPE(Nephilim), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWitchMawNephilimCard::SetTriggerContextL));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWitchMawNephilimCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWitchMawNephilimCard::SetTriggerContextL(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											   AttackSubject attacked) const
{
	return (GET_INTEGER(GetLastKnownPower())>=10);
}

bool CWitchMawNephilimCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GET_INTEGER(GetLastKnownPower())>=10);
}

//____________________________________________________________________________
//
CGruulScrapperCard::CGruulScrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gruul Scrapper"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGruulScrapperCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGruulScrapperCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Red);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
COgreSavantCard::COgreSavantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Savant"), CardType::Creature, CREATURE_TYPE2(Ogre, Wizard), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COgreSavantCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool COgreSavantCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CShriekingGrotesqueCard::CShriekingGrotesqueCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shrieking Grotesque"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShriekingGrotesqueCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CShriekingGrotesqueCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Black);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CSteamcoreWeirdCard::CSteamcoreWeirdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steamcore Weird"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSteamcoreWeirdCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSteamcoreWeirdCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Red);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CTinStreetHooliganCard::CTinStreetHooliganCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tin Street Hooligan"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTinStreetHooliganCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CTinStreetHooliganCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CGlintEyeNephilimCard::CGlintEyeNephilimCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Glint-Eye Nephilim"), CardType::Creature, CREATURE_TYPE(Nephilim), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		_T("1"), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlintEyeNephilimCard::SetTriggerContextL));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CGlintEyeNephilimCard::SetTriggerContextL(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CBloodscaleProwlerCard::CBloodscaleProwlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodscale Prowler"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBloodscaleProwlerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CBloodscaleProwlerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGhorClanSavageCard::CGhorClanSavageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghor-Clan Savage"), CardType::Creature, CREATURE_TYPE2(Centaur, Berserker), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGhorClanSavageCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CGhorClanSavageCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +3, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CScabClanMaulerCard::CScabClanMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scab-Clan Mauler"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CScabClanMaulerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
}

void CScabClanMaulerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +2, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSkarrganSkybreakerCard::CSkarrganSkybreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skarrgan Skybreaker"), CardType::Creature, CREATURE_TYPE2(Giant, Shaman), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkarrganSkybreakerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		m_CardFilter.AddComparer(new SpecificCardComparer(this));

		counted_ptr<CActivatedAbility<CTargetChgLifeSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell2>>(this,
				_T("1"),
				new AnyCreatureComparer, TRUE,
				&m_CardFilter,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

void CSkarrganSkybreakerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +3, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSkarrganFirebirdCard::CSkarrganFirebirdCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skarrgan Firebird"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkarrganFirebirdCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();		

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSkarrganFirebirdCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSkarrganFirebirdCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +3, true);
		modifier.ApplyTo(this);
	}
}

BOOL CSkarrganFirebirdCard::CanPlay(BOOL bIncludeTricks)
{
	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	return bBloodthirst;
}

//____________________________________________________________________________
//
CUlashttheHateSeedCard::CUlashttheHateSeedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ulasht, the Hate Seed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Hellion, Hydra), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CUlashttheHateSeedCard::OnZoneChanged))
	, m_CardFilter1(_T("a red creature"), _T("red creatures"), new CardTypeComparer(CardType::Red | CardType::Creature, true))
	, m_CardFilter2(_T("a green creature"), _T("green creatures"), new CardTypeComparer(CardType::Green | CardType::Creature, true))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFilter1.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	m_CardFilter2.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Saproling B"), 2712, 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CUlashttheHateSeedCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);

		int red = m_CardFilter1.CountIncluded(pBat->GetCardContainer());
		int green = m_CardFilter2.CountIncluded(pBat->GetCardContainer());
		int summ = red+green;

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +summ, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CPilloryOfTheSleeplessCard::CPilloryOfTheSleeplessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Pillory of the Sleepless"), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPilloryOfTheSleeplessCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CPilloryOfTheSleeplessCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhostCouncilOfOrzhovaCard::CGhostCouncilOfOrzhovaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghost Council of Orzhova"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
    , m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGhostCouncilOfOrzhovaCard::OnResolutionCompleted1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("1"),
				new SpecificCardComparer(this),
				ZoneId::Exile, TRUE, MoveType::Others));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CGhostCouncilOfOrzhovaCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;

	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CStormHerdCard::CStormHerdCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Storm Herd"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("8") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Pegasus A"), 2741,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStormHerdCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CStormHerdCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nLifeTotal = GET_INTEGER(GetController()->GetLife());

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nLifeTotal;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CGristlebackCard::CGristlebackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gristleback"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGristlebackCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+0), PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGristlebackCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CGristlebackCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

bool CGristlebackCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

	CLifeModifier modifier(Life(+nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CSchismotivateCard::CSchismotivateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Schismotivate"), CardType::Instant, nID)
//{
//		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
//			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
//				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT,
//				Power(+4), Life(+0),
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
//		cpAbility->GetPowerModifier().SetPowerDelta(Power(-0));
//		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
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
{
	{
		counted_ptr<CDoubleTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CDoubleTargetChgPwrTghAttrSpell>(this,
			AbilityType::Instant,
			_T("1") RED_MANA_TEXT BLUE_MANA_TEXT,
			Power(+4), Life(0),
			Power(-4), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeylineOfLifeforceCard::CLeylineOfLifeforceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Lifeforce"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
			PlayerEffectType::SpellsCantBeCountered,
			reinterpret_cast<int>(CCardFilter::GetFilter(_T("creatures")))));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeylineOfLightningCard::CLeylineOfLightningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Lightning"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeylineOfSingularityCard::CLeylineOfSingularityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Singularity"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			CardType::Legendary, CardType::Null));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeylineOfTheMeekCard::CLeylineOfTheMeekCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of the Meek"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrderOfTheStarsCard::COrderOfTheStarsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the Stars"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(0), Life(1))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &COrderOfTheStarsCard::OnSelectionDone))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

void COrderOfTheStarsCard::Move(CZone* pToZone,
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

void COrderOfTheStarsCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CBioplasmCard::CBioplasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bioplasm"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CBioplasmCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CBioplasmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* lib=GetController()->GetZoneById(ZoneId::Library);
	if (lib->GetSize()>0)
	{
		CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

		CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
		pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier.GetSelection(0).moveType = MoveType::Others;
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(GetController());

		if (pNextDraw->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pNextDraw;
			int nPower = GET_INTEGER(pCreature->GetLastKnownPower());
			int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());
			
			CPowerModifier pModifier1 = CPowerModifier(Power(+nPower), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			pModifier1.ApplyTo(this);
			pModifier2.ApplyTo(this);
		}
	}
}

//____________________________________________________________________________
//
CFeralAnimistCard::CFeralAnimistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Feral Animist"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("3"),
			Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeralAnimistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFeralAnimistCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPowerModifier pModifier1 = CPowerModifier(Power(this->GetLastKnownPower()));

	pModifier1.ApplyTo((CCreatureCard*)this);

	return true;
}

//____________________________________________________________________________
//
CPetrifiedWoodKinCard::CPetrifiedWoodKinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Petrified Wood-Kin"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("6") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPetrifiedWoodKinCard::OnZoneChanged))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("instant cards")));
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CPetrifiedWoodKinCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	int nDamage = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) != GetController())
			nDamage += GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nDamage > 0)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +nDamage, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSanguinePraetorCard::CSanguinePraetorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanguine Praetor"), CardType::Creature, CREATURE_TYPE2(Avatar, Praetor), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CSanguinePraetorCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			BLACK_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CSanguinePraetorCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		int converted = pCreature->GetConvertedManaCost();

		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
		m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(converted));

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

		pModifier.ApplyTo(GetController());
		pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
}

//____________________________________________________________________________
//
//"Souls of the Faultless\n{WBB}\nCreature - Spirit\nGPT,U\nDefender\rWhenever Souls of the Faultless is dealt combat damage, you gain that much life and attacking player loses that much life.\n0/4"
//CSoulsOfTheFaultlessCard::CSoulsOfTheFaultlessCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Souls of the Faultless"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
//		WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(4))
//{
//	//GetCreatureKeyword()->AddDefender(FALSE);
//
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
//									 CWhenDamageDealt::CreatureEventCallback, 
//									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
//		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulsOfTheFaultlessCard::SetTriggerContext1));
//
//		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
//		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
//									 CWhenDamageDealt::CreatureEventCallback, 
//									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
//
//		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
//		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulsOfTheFaultlessCard::SetTriggerContext2));
//		
//		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
//		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
//		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//bool CSoulsOfTheFaultlessCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
//										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
//{
//	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
//	return true;
//}
//
//bool CSoulsOfTheFaultlessCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
//										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
//{
//	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
//	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
//	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
//	return true;
//}
//
////____________________________________________________________________________
////
CShadowLanceCard::CShadowLanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Shadow Lance"), nID, 
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CShadowLanceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CShadowLanceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+2), Life(+2), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrashLandingCard::CCrashLandingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crash Landing"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CCrashLandingCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Flying,
			TRUE, PreventableType::NotPreventable,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false)));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCrashLandingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Forest, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier(Life(-nDomainCount), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CParallectricFeedbackCard::CParallectricFeedbackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Parallectric Feedback"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new TrueCardComparer));

	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParallectricFeedbackCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CParallectricFeedbackCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier=CLifeModifier(Life(-converted), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	pModifier.ApplyTo(target->GetController());

	return true;
}

//____________________________________________________________________________
//
CRepealCard::CRepealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Repeal"), CardType::Instant, nID)
{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AlsoCardTypeComparer(CardType::_Land, false));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CQuickenCard::CQuickenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Quicken"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Quicken Effect"), 2908, 1, FALSE, ZoneId::_Effects));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CYoreTillerNephilimCard::CYoreTillerNephilimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yore-Tiller Nephilim"), CardType::Creature, CREATURE_TYPE(Nephilim), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{	
	{
	typedef
		TTriggeredTargetAbility< CMoveAttackingAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->SetFromZoneId(ZoneId::Graveyard);	

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGathererOfGracesCard::CGathererOfGracesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gatherer of Graces"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantmentCount> cpAbility(
			::CreateObject<CPwrTghAttrEnchantmentCount>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("aura cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkySwallowerCard::CSkySwallowerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sky Swallower"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(8))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(
		this, &CSkySwallowerCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	cpAbility->SetAbilityName(_T("gain control ability"));

	AddAbility(cpAbility.GetPointer());
}

// This is not perfect, auras get unattached while moving if they have controller restriction
bool CSkySwallowerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility* pAbility = (TriggeredAbility*)pAction->GetAbility();
	CZone* pContInPlay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	
	pAbility->GetTriggeredPlayerModifiers().Clear();
	
	if(pAbility)
	{
		for (int i = 0; i < pContInPlay->GetSize(); ++i)
		{
			CCard* pCard = pContInPlay->GetAt(i);
			if (pCard == this)
				continue;
			pAbility->GetTriggeredPlayerModifiers().push_back(
				new CTransferControlModifier(GetGame(), pCard, (CCard*)this));
    }
  }

	return true;
}

//____________________________________________________________________________
//
CRevenantPatriarchCard::CRevenantPatriarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Revenant Patriarch"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CRevenantPatriarchCard::OnResolutionCompleted))
{

	GetCreatureKeyword()->AddCantBlock(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->SetDiscardCount(0);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetAbilityName(_T("skip next combat phase ability"));
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRevenantPatriarchCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CRevenantPatriarchCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast) return false;

	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::White);

	return (nColorCount!=0);
}

void CRevenantPatriarchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::SkipNextCombatPhase);	
	
	if (bResult) pmodifier.ApplyTo(target);
}
//____________________________________________________________________________
//
CVedalkenPlotterCard::CVedalkenPlotterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Plotter"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredDoubleTargetAbility< CTriggeredExchangeControlAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting1().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Negative);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDryadSophisticateCard::CDryadSophisticateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dryad Sophisticate"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	GetCreatureKeyword()->AddNonBasicWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CWurmweaverCoilCard::CWurmweaverCoilCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Wurmweaver Coil"), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+6), Life(+6))
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().SetComparer(new CardTypeComparer(CardType::Creature | CardType::Green, true));

    counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
            GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
            _T("Wurm B"), 2767, 1));

    cpAbility->AddSacrificeCost();

    AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkarrganPitSkulkCard::CSkarrganPitSkulkCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Skarrgan Pit-Skulk"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		&m_CardFilter)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkarrganPitSkulkCard::OnZoneChanged))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureCreaturePowerComparer<std::greater_equal<int>>(this));	

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CSkarrganPitSkulkCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________________
//
CBatteringWurmCard::CBatteringWurmCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Battering Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT, Power(4), Life(3),
		&m_CardFilter)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBatteringWurmCard::OnZoneChanged))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureCreaturePowerComparer<std::greater_equal<int>>(this));	

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CBatteringWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________________
//
CIzzetGuildmageCard::CIzzetGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Izzet Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
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
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("2") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Instant, false),
				ZoneId::Stack));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery, false),
				ZoneId::Stack));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStitchInTimeCard::CStitchInTimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stitch in Time"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CStitchInTimeCard::OnFlipSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStitchInTimeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CStitchInTimeCard::BeforeResolution(CAbilityAction* pAction)
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
		CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);
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

void CStitchInTimeCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);
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
CCerebralVortexCard::CCerebralVortexCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cerebral Vortex"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CCerebralVortexCard::OnResolutionCompleted))
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, 2));


	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CCerebralVortexCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer = pAbilityAction->GetAssociatedPlayer();

	int nDamage = pPlayer->GetTurnDrawCount();

	CLifeModifier pModifier = CLifeModifier(Life(-nDamage), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CSilhanaStarfletcherCard::CSilhanaStarfletcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silhana Starfletcher"), CardType::Creature, CREATURE_TYPE3(Elf, Druid, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSilhanaStarfletcherCard::OnSelectionDone))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
	    counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSilhanaStarfletcherCard::CanPlayW)));

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
				&CSilhanaStarfletcherCard::CanPlayU)));

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
				&CSilhanaStarfletcherCard::CanPlayB)));

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
				&CSilhanaStarfletcherCard::CanPlayR)));

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
				&CSilhanaStarfletcherCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSilhanaStarfletcherCard::Move(CZone* pToZone,
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

void CSilhanaStarfletcherCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

BOOL CSilhanaStarfletcherCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CSilhanaStarfletcherCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CSilhanaStarfletcherCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CSilhanaStarfletcherCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CSilhanaStarfletcherCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CMoratoriumStoneCard::CMoratoriumStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moratorium Stone"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoratoriumStoneCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer()); 
	}
}

bool CMoratoriumStoneCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardFilter m_CardFilter1;
	m_CardFilter1.AddComparer(new CardNameComparer(pTarget->GetPrintedCardName()));
	m_CardFilter1.AddNegateComparer(new SpecificCardComparer(pTarget));
	CCardFilter m_CardFilter2;
	m_CardFilter2.AddComparer(new CardNameComparer(pTarget->GetPrintedCardName()));

	CCountedCardContainer cardsGraveyard;
	
	cardsGraveyard.AddCard(pTarget, CardPlacement::Top);
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pGraveyard = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard);
		m_CardFilter1.GetIncluded(*pGraveyard, cardsGraveyard);
	}

	CCardFilter m_FinalFilterGraveyard;
	m_FinalFilterGraveyard.SetComparer(new ContainedinComparer(&cardsGraveyard));

	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Graveyard, &m_FinalFilterGraveyard,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController())));
	CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter2,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
		pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
	}
	return false;
}

//____________________________________________________________________________
//
CBlindHunterCard::CBlindHunterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blind Hunter"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlindHunterCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
		
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlindHunterCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlindHunterCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlindHunterCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CBlindHunterCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CBlindHunterCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CCryOfContritionCard::CCryOfContritionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cry of Contrition"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CCryOfContritionCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Graveyard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCryOfContritionCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCryOfContritionCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCryOfContritionCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

void CCryOfContritionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, 1);
	pModifier.ApplyTo(this);
}

bool CCryOfContritionCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CCryOfContritionCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CCryOfContritionCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CExhumerThrullCard::CExhumerThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Exhumer Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExhumerThrullCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
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
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, false, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExhumerThrullCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExhumerThrullCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CExhumerThrullCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CExhumerThrullCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CExhumerThrullCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CAbsolverThrullCard::CAbsolverThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Absolver Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAbsolverThrullCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAbsolverThrullCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAbsolverThrullCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAbsolverThrullCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CAbsolverThrullCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CAbsolverThrullCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CBelfrySpiritCard::CBelfrySpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Belfry Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBelfrySpiritCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Bat A"), 2803, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Bat A"), 2803, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelfrySpiritCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelfrySpiritCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBelfrySpiritCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CBelfrySpiritCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CBelfrySpiritCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CBenedictionOfMoonsCard::CBenedictionOfMoonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Benediction of Moons"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CBenedictionOfMoonsCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Graveyard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBenedictionOfMoonsCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBenedictionOfMoonsCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBenedictionOfMoonsCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBenedictionOfMoonsCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

void CBenedictionOfMoonsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CLifeModifier pModifier1 = CLifeModifier(Life(GetGame()->GetPlayerCount()), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pModifier2 = CSpecialEffectModifier(this, 1);
	pModifier2.ApplyTo(this);
}

bool CBenedictionOfMoonsCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CBenedictionOfMoonsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CBenedictionOfMoonsCard::BeforeResolution2(CAbilityAction* pAction)
{
	CLifeModifier pModifier = CLifeModifier(Life(GetGame()->GetPlayerCount()), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CBenedictionOfMoonsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CGravenDominatorCard::CGravenDominatorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Graven Dominator"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGravenDominatorCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGravenDominatorCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGravenDominatorCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGravenDominatorCard::BeforeResolution3));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGravenDominatorCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CGravenDominatorCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CGravenDominatorCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	CPowerModifier* pModifier1 = new CPowerModifier(Power(1), TRUE, TRUE);
	pModifier1->SetReplacement(TRUE);

	CLifeModifier* pModifier2 = new CLifeModifier(Life(1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE, TRUE);
	pModifier2->SetReplacement(TRUE);

	CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier1));
	CZoneCreatureModifier pModifier4 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier2));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier3.ApplyTo(GetGame()->GetPlayer(ip));
		pModifier4.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

bool CGravenDominatorCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CGravenDominatorCard::BeforeResolution3(CAbilityAction* pAction)
{
	CPowerModifier* pModifier1 = new CPowerModifier(Power(1), TRUE, TRUE);
	pModifier1->SetReplacement(TRUE);

	CLifeModifier* pModifier2 = new CLifeModifier(Life(1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE, TRUE);
	pModifier2->SetReplacement(TRUE);

	CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier1));
	CZoneCreatureModifier pModifier4 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier2));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier3.ApplyTo(GetGame()->GetPlayer(ip));
		pModifier4.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

bool CGravenDominatorCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
COrzhovEuthanistCard::COrzhovEuthanistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orzhov Euthanist"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovEuthanistCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrzhovEuthanistCard::SetTriggerContext1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrzhovEuthanistCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool COrzhovEuthanistCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool COrzhovEuthanistCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool COrzhovEuthanistCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
COrzhovPontiffCard::COrzhovPontiffCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orzhov Pontiff"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &COrzhovPontiffCard::OnModeSelected))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovPontiffCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrzhovPontiffCard::SetTriggerContextAux1));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrzhovPontiffCard::SetTriggerContextAux2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrzhovPontiffCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->SetAbilityName(_T("Mode 1 - +1/+1"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Exile);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->SetAbilityName(_T("Mode 1 - +1/+1"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovPontiffCard::BeforeResolution2));

		cpAbility->SetAbilityName(_T("Mode 2 - -1/-1"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Exile);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovPontiffCard::BeforeResolution2));

		cpAbility->SetAbilityName(_T("Mode 2 - -1/-1"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		AddAbility(cpAbility.GetPointer());
	}	
}

bool COrzhovPontiffCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool COrzhovPontiffCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: Creatures you control get +1/+1 until end of turn"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: Creatures you don't control get -1/-1 until end of turn"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return false;
}

bool COrzhovPontiffCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
	
	if (Haunt)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("%s: Creatures you control get +1/+1 until end of turn"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("%s: Creatures you don't control get -1/-1 until end of turn"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	return false;
}

bool COrzhovPontiffCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

void COrzhovPontiffCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_2_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

bool COrzhovPontiffCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPowerModifier* pModifier1 = new CPowerModifier(Power(-1));
	CLifeModifier* pModifier2 = new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier1));
	CZoneCreatureModifier pModifier4 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier2));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) != pAction->GetController())
		{
			pModifier3.ApplyTo(GetGame()->GetPlayer(ip));
			pModifier4.ApplyTo(GetGame()->GetPlayer(ip));
		}

	return true;
}

//____________________________________________________________________________
//
CSeizeTheSoulCard::CSeizeTheSoulCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seize the Soul"), CardType::Instant, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSeizeTheSoulCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSeizeTheSoulCard::OnResolutionCompleted2))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::White | CardType::Black, false));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Graveyard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeizeTheSoulCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::White | CardType::Black, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeizeTheSoulCard::SetTriggerContext1));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeizeTheSoulCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

void CSeizeTheSoulCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Spirit J"), 2944, 1);
	pModifier1.ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pModifier2 = CSpecialEffectModifier(this, 1);
	pModifier2.ApplyTo(this);
}

void CSeizeTheSoulCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit J"), 2944, 1);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

bool CSeizeTheSoulCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);

		pHaunting.RemoveAll();
		pHaunting.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	}

	return true;
}

bool CSeizeTheSoulCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;

	bool Haunt = false;
	if ((pHaunting.GetSize() > 0) && (pHaunting.GetAt(0) == pCard))
	{
		if (pToZone->GetZoneId() == ZoneId::Graveyard)
			Haunt = true;
		pHaunting.RemoveAll();
	}
		
	return Haunt;
}

bool CSeizeTheSoulCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	pHaunting.RemoveAll();
		
	return false;
}

//____________________________________________________________________________
//
CGhostwayCard::CGhostwayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghostway"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGhostwayCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGhostwayCard::BeforeResolution(CAbilityAction* pAction) const
{	
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others, pController);
	CCountedCardContainer pSubjects;

	for (int i = pBattlefield->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			pModifier1.ApplyTo(pCard);
			if (pCard->GetZoneId() == ZoneId::Exile)
				pSubjects.AddCard(pCard, CardPlacement::Top);
		}
	}

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CKillerInstinctCard::CKillerInstinctCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Killer Instinct"), CardType::GlobalEnchantment, nID, 
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);	

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKillerInstinctCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKillerInstinctCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	
	if (pLibrary->GetSize() == 0) return true;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pController);

	CCard* pCard = pLibrary->GetTopCard();

	if (pCard->GetCardType().IsCreature())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, true, MoveType::Others, pController);
		pModifier1.ApplyTo(pCard);

		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
		pModifier2.ApplyTo((CCreatureCard*)pCard);

		CCountedCardContainer pSubjects;
		if (pCard->IsInplay())
			pSubjects.AddCard(pCard, CardPlacement::Top);

		CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
		pModifier3.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//