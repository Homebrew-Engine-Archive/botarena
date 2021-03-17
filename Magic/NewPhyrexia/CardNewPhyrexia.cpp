#include "stdafx.h"
#include "CardNewPhyrexia.h"

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

		DEFINE_CARD(CActOfAggressionCard);
		DEFINE_CARD(CAlloyMyrCard);
		DEFINE_CARD(CApostlesBlessingCard);
		DEFINE_CARD(CArgentMutationCard);
		DEFINE_CARD(CArtillerizeCard);
		DEFINE_CARD(CBatterskullCard);
		DEFINE_CARD(CBeastWithinCard);
		DEFINE_CARD(CBirthingPodCard);
		DEFINE_CARD(CBladeSplicerCard);
		DEFINE_CARD(CBlightedAgentCard);
		DEFINE_CARD(CBlindZealotCard);
		DEFINE_CARD(CBlindingSouleaterCard);
		DEFINE_CARD(CBrutalizerExarchCard);
		DEFINE_CARD(CCagedSunCard);
		DEFINE_CARD(CCaressOfPhyrexiaCard);
		DEFINE_CARD(CChainedThroatseekerCard);
		DEFINE_CARD(CConversionChamberCard);
		DEFINE_CARD(CCorrosiveGaleCard);
		DEFINE_CARD(CCorruptedResolveCard);
		DEFINE_CARD(CDarksteelRelicCard);
		DEFINE_CARD(CDeathHoodCobraCard);
		DEFINE_CARD(CDeceiverExarchCard);
		DEFINE_CARD(CDefensiveStanceCard);
		DEFINE_CARD(CDementiaBatCard);
		DEFINE_CARD(CDespiseCard);
		DEFINE_CARD(CDismemberCard);
		DEFINE_CARD(CDispatchCard);
		DEFINE_CARD(CDueRespectCard);
		DEFINE_CARD(CEleshNornGrandCenobiteCard);
		DEFINE_CARD(CEntomberExarchCard);
		DEFINE_CARD(CEtchedMonstrosityCard);
		DEFINE_CARD(CFallenFerromancerCard);
		DEFINE_CARD(CFlamebornVironCard);
		DEFINE_CARD(CForcedWorshipCard);
		DEFINE_CARD(CFreshMeatCard);
		DEFINE_CARD(CFurnaceScampCard);
		DEFINE_CARD(CGethsVerdictCard);
		DEFINE_CARD(CGitaxianProbeCard);
		DEFINE_CARD(CGlissasScornCard);
		DEFINE_CARD(CGlistenerElfCard);
		DEFINE_CARD(CGlisteningOilCard);
		DEFINE_CARD(CGrimAfflictionCard);
		DEFINE_CARD(CGutShotCard);
		DEFINE_CARD(CHexParasiteCard);
		DEFINE_CARD(CHovermyrCard);
		DEFINE_CARD(CIchorExplosionCard);
		DEFINE_CARD(CImmolatingSouleaterCard);
		DEFINE_CARD(CImpalerShrikeCard);
		DEFINE_CARD(CInsatiableSouleaterCard);
		DEFINE_CARD(CInvaderParasiteCard);
		DEFINE_CARD(CIsolationCellCard);
		DEFINE_CARD(CJinGitaxiasCoreAugurCard);
		DEFINE_CARD(CJorKadeenThePrevailerCard);
		DEFINE_CARD(CKarnLiberatedCard);
		DEFINE_CARD(CKilnWalkerCard);
		DEFINE_CARD(CLashwritheCard);
		DEFINE_CARD(CLeechingBiteCard);
		DEFINE_CARD(CLifesFinaleCard);
		DEFINE_CARD(CLostleoninCard);
		DEFINE_CARD(CLoxodonConvertCard);
		DEFINE_CARD(CMasterSplicerCard);
		DEFINE_CARD(CMarrowShardsCard);
		DEFINE_CARD(CMaulSplicerCard);
		DEFINE_CARD(CMeliraSylvokOutcastCard);
		DEFINE_CARD(CMentalMisstepCard);
		DEFINE_CARD(CMindcullingCard);
		DEFINE_CARD(CMoltensteelDragonCard);
		DEFINE_CARD(CMortisDogsCard);
		DEFINE_CARD(CMutagenicGrowthCard);
		DEFINE_CARD(CMycosynthWellspringCard);
		DEFINE_CARD(CNecropouncerCard);
		DEFINE_CARD(CNoxiousRevivalCard);
		DEFINE_CARD(CNumbingDoseCard);
		DEFINE_CARD(COgreMenialCard);
		DEFINE_CARD(CPestilentSouleaterCard);
		DEFINE_CARD(CPhyrexianObliteratorCard);
		DEFINE_CARD(CPhyrexianSwarmlordCard);
		DEFINE_CARD(CPhyrexiasCoreCard);
		DEFINE_CARD(CPithDrillerCard);
		DEFINE_CARD(CPorcelainLegionnaireCard);
		DEFINE_CARD(CPriestOfUrabraskCard);
		DEFINE_CARD(CPristineTalismanCard);
		DEFINE_CARD(CPsychicBarrierCard);
		DEFINE_CARD(CPuresteelPaladinCard);
		DEFINE_CARD(CRageExtractorCard);
		DEFINE_CARD(CRazorSwineCard);
		DEFINE_CARD(CRememberTheFallenCard);
		DEFINE_CARD(CRottedHystrixCard);
		DEFINE_CARD(CRuthlessInvasionCard);
		DEFINE_CARD(CScrapyardSalvoCard);
		DEFINE_CARD(CSensorSplicerCard);
		DEFINE_CARD(CShatteredAngelCard);
		DEFINE_CARD(CSheoldredWhisperingOneCard);
		DEFINE_CARD(CShriekRaptorCard);
		DEFINE_CARD(CShrineOfBoundlessGrowthCard);
		DEFINE_CARD(CShrineOfBurningRageCard);
		DEFINE_CARD(CShrineOfLimitlessPowerCard);
		DEFINE_CARD(CShrineOfLoyalLegionsCard);
		DEFINE_CARD(CShrineOfPiercingVisionCard);
		DEFINE_CARD(CSickleslicerCard);
		DEFINE_CARD(CSlagFiendCard);
		DEFINE_CARD(CSlashPantherCard);
		DEFINE_CARD(CSoulConduitCard);
		DEFINE_CARD(CSpinebiterCard);
		DEFINE_CARD(CSpinedThopterCard);
		DEFINE_CARD(CSpireMonitorCard);
		DEFINE_CARD(CSurgeNodeCard);
		DEFINE_CARD(CSurgicalExtractionCard);
		DEFINE_CARD(CSuturePriestCard);
		DEFINE_CARD(CSwordofWarandPeaceCard);
		DEFINE_CARD(CTezzeretsGambitCard);
		DEFINE_CARD(CThunderingTanadonCard);
		DEFINE_CARD(CToxicNimCard);
		DEFINE_CARD(CTrespassingSouleaterCard);
		DEFINE_CARD(CTriumphOfTheHordesCard);
		DEFINE_CARD(CUnwindingClockCard);
		DEFINE_CARD(CUrabraskTheHiddenCard);
		DEFINE_CARD(CVaporSnagCard);
		DEFINE_CARD(CVaultSkirgeCard);
		DEFINE_CARD(CVictoriousDestructionCard);
		DEFINE_CARD(CViralDrakeCard);
		DEFINE_CARD(CViridianHarvestCard);
		DEFINE_CARD(CVitalSplicerCard);
		DEFINE_CARD(CVoltChargeCard);
		DEFINE_CARD(CVorinclexVoiceofHungerCard);
		DEFINE_CARD(CVulshokRefugeeCard);		
		DEFINE_CARD(CWarReportCard);
		DEFINE_CARD(CWhipflareCard);
		DEFINE_CARD(CWingSplicerCard);
		DEFINE_CARD(CXenograftCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CSuturePriestCard::CSuturePriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Suture Priest"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetGatherer().SetIncludeOpponentPlayersOnly();

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEleshNornGrandCenobiteCard::CEleshNornGrandCenobiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elesh Norn, Grand Cenobite"), CardType::_LegendaryCreature, CREATURE_TYPE(Praetor), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(7))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(-2), Life(-2)));

		cpAbility->SetAffectOpponentCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPristineTalismanCard::CPristineTalismanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pristine Talisman"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));


	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianObliteratorCard::CPhyrexianObliteratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Obliterator"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianObliteratorCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CPhyrexianObliteratorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(GET_INTEGER(-damage.m_nLifeDelta), GET_INTEGER(-damage.m_nLifeDelta), TRUE);
	return true;
}

//____________________________________________________________________________
//
CUrabraskTheHiddenCard::CUrabraskTheHiddenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urabrask the Hidden"), CardType::_LegendaryCreature, CREATURE_TYPE(Praetor), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::InPlayTapped,
				(int)CCardFilter::GetFilter(_T("creatures")),	
				TRUE));

		cpEnchantment->SetAffectOpponentsOnly();

		AddSpell(cpEnchantment.GetPointer());
	}
}
//____________________________________________________________________________
//
CSheoldredWhisperingOneCard::CSheoldredWhisperingOneCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sheoldred, Whispering One"), CardType::_LegendaryCreature, CREATURE_TYPE(Praetor), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6),
		CreatureKeyword::Swampwalk)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		//cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArgentMutationCard::CArgentMutationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Argent Mutation"), CardType::Instant, nID)

{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant, 
			_T("2") BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->AddCardTypeToSelection(CardType::Artifact, CardType::Null, false, _T("artifact permanent"));	

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CBlightedAgentCard::CBlightedAgentCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Blighted Agent"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CDefensiveStanceCard::CDefensiveStanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Defensive Stance"), nID,
		 BLUE_MANA_TEXT,
		Power(-1), Life(+1))
{
}

//____________________________________________________________________________
//
CGitaxianProbeCard::CGitaxianProbeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gitaxian Probe"), CardType::Sorcery, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT, 
				0, MoveType::Others, ZoneId::Null, FALSE,
				FALSE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{ //phyrexian mana cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T(""), 
				0, MoveType::Others, ZoneId::Null, FALSE,
				FALSE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->AddPayLifeDeltaCost(Life(-2));

		cpSpell->SetMainSpell(FALSE);

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CMentalMisstepCard::CMentalMisstepCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mental Misstep"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant, 
		new ConvertedManaCostComparer<std::equal_to<int>>(1))

{ //phyrexian mana cost
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
		_T(""),
		new ConvertedManaCostComparer<std::equal_to<int>>(1)));

	cpSpell->AddPayLifeDeltaCost(Life(-2));

	cpSpell->SetMainSpell(FALSE);
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMindcullingCard::CMindcullingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mindculling"), CardType::Sorcery, nID)
{
	{
	
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT, 2));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Effects, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetDiscardCount(2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPsychicBarrierCard::CPsychicBarrierCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Psychic Barrier"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new AnyCreatureComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPsychicBarrierCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CPsychicBarrierCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* spell_controller=pAbilityAction->GetAssociatedCard()->GetController();

	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(spell_controller);
}

//____________________________________________________________________________
//
CSpinedThopterCard::CSpinedThopterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spined Thopter"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CSpireMonitorCard::CSpireMonitorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spire Monitor"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CTezzeretsGambitCard::CTezzeretsGambitCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Tezzeret's Gambit"), CardType::Sorcery, nID)		
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CTezzeretsGambitCard::OnProliferateSelected))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT, 2));

		cpSpell->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretsGambitCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());		
	}
	{ //phyrexian mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
				::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
					_T("3"), 2));

		cpSpell->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTezzeretsGambitCard::BeforeResolution));

		cpSpell->AddPayLifeDeltaCost(Life(-2));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
	typedef
		TTriggeredSubjectAbility< CTriggeredProliferateAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 2));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);
		
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetTriggerIndex(2);                                                // Certain index activated by modifier
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

	//cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}
bool CTezzeretsGambitCard::BeforeResolution(CAbilityAction* pAction)
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

	return TRUE;
}
void CTezzeretsGambitCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CVaporSnagCard::CVaporSnagCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vapor Snag"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CViralDrakeCard::CViralDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Viral Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CViralDrakeCard::OnResolutionCompleted1))
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CViralDrakeCard::OnProliferateSelected))
{
	GetCardKeyword()->AddInfect(false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3") BLUE_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		cpAbility->SetAbilityName(_T("Proliferate."));
		cpAbility->SetAbilityText(_T("Proliferate."));

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
void CViralDrakeCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
void CViralDrakeCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CWingSplicerCard::CWingSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wing Splicer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBladeSplicerCard::CBladeSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blade Splicer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMasterSplicerCard::CMasterSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Splicer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSensorSplicerCard::CSensorSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sensor Splicer"), CardType::Creature, CREATURE_TYPE(Artificer), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false),
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaulSplicerCard::CMaulSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maul Splicer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("6") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false),
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVitalSplicerCard::CVitalSplicerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vital Splicer"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Golem A"), 2798, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("1"),
				new CreatureTypeComparer(CREATURE_TYPE(Golem), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CForcedWorshipCard::CForcedWorshipCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Forced Worship"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::CantAttack)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("2") WHITE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLostleoninCard::CLostleoninCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lost leonin"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CLoxodonConvertCard::CLoxodonConvertCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Convert"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CMarrowShardsCard::CMarrowShardsCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Marrow Shards"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Life(-1),
		new AttackingCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
			_T(""),
			Life(-1),
			new AttackingCreatureComparer,
			false,
			PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->AddPayLifeDeltaCost(Life(-2));

	cpSpell->SetMainSpell(FALSE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPorcelainLegionnaireCard::CPorcelainLegionnaireCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Porcelain Legionnaire"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CRememberTheFallenCard::CRememberTheFallenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Remember the Fallen"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		//cpSpell->GetTargeting()->SetSubjectCount(0, 1, FALSE);

		cpSpell->SetAbilityText(_T("Choose both - Select an artifact. Cast"));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetToZoneIfFailed(ZoneId::_Tokens);

		/*counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRememberTheFallenCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());*/

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
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

/*BOOL CRememberTheFallenCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	int nCountArtifact = 0;
	int nCountCreature = 0;

	for (int i = 0; i < pContGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pContGraveyard->GetAt(i);
		if (pCard->GetCardType().IsArtifact())
			++nCountArtifact;
		if (pCard->GetCardType().IsCreature())
			++nCountCreature;
	}

	return (nCountArtifact > 0 && nCountCreature > 0);
}*/
//____________________________________________________________________________
//
CShatteredAngelCard::CShatteredAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shattered Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);	// To zone's controller
	//cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	//cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	//cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));

	//cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShriekRaptorCard::CShriekRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shriek Raptor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CWarReportCard::CWarReportCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("War Report"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("artifacts or creatures")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CActOfAggressionCard::CActOfAggressionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Act of Aggression"), CardType::Instant, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

		cpSpell->AddPayLifeDeltaCost(Life(-2));

		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3"),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

		cpSpell->AddPayLifeDeltaCost(Life(-4));

		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CArtillerizeCard::CArtillerizeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Artillerize"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifacts or creatures"))); 
}

//____________________________________________________________________________
//
CFallenFerromancerCard::CFallenFerromancerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Fallen Ferromancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1),
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CFlamebornVironCard::CFlamebornVironCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flameborn Viron"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CGutShotCard::CGutShotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gut Shot"), CardType::Instant, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Phyrexian cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				TRUE,
				Life(-1), PreventableType::Preventable));
		
		cpSpell->AddPayLifeDeltaCost(Life(-2));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CMoltensteelDragonCard::CMoltensteelDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moltensteel Dragon"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-4));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{ // pump ability
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{ // phyrexian pump ability
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COgreMenialCard::COgreMenialCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ogre Menial"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(4),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CPriestOfUrabraskCard::CPriestOfUrabraskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Priest of Urabrask"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRazorSwineCard::CRazorSwineCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Razor Swine"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CScrapyardSalvoCard::CScrapyardSalvoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scrapyard Salvo"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			ZoneId::Graveyard, TRUE,
			new CardTypeComparer(CardType::Artifact, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSlagFiendCard::CSlagFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slag Fiend"), CardType::Creature, CREATURE_TYPE(Construct), nID,
		RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlashPantherCard::CSlashPantherCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Slash Panther"), CardType::_ArtifactCreature, CREATURE_TYPE(Cat), nID,
		_T("4") RED_MANA_TEXT , Power(4), Life(2))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CVictoriousDestructionCard::CVictoriousDestructionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Victorious Destruction"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land | CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CVoltChargeCard::CVoltChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volt Charge"), CardType::Instant, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVoltChargeCard::OnResolutionCompleted1))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CVoltChargeCard::OnProliferateSelected))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Effects, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Effects, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
		cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CVoltChargeCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CVoltChargeCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CVulshokRefugeeCard::CVulshokRefugeeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vulshok Refugee"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CWhipflareCard::CWhipflareCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Whipflare"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		Life(-2),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
}

//____________________________________________________________________________
//
CDementiaBatCard::CDementiaBatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dementia Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
{
	
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("4") BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	
}

//____________________________________________________________________________
//
CDespiseCard::CDespiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Despise"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("creatures or planeswalkers"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDismemberCard::CDismemberCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dismember"), CardType::Instant, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(-5), Life(-5),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(-5), Life(-5),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1"),
			Power(-5), Life(-5),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		cpSpell->AddPayLifeDeltaCost(Life(-4));
        
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGethsVerdictCard::CGethsVerdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Geth's Verdict"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGethsVerdictCard::OnResolutionCompleted))
	
{
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Instant,					
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}

void CGethsVerdictCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target=pAbilityAction->GetAssociatedPlayer();
	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CGrimAfflictionCard::CGrimAfflictionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grim Affliction"), CardType::Instant, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGrimAfflictionCard::OnResolutionCompleted1))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CGrimAfflictionCard::OnProliferateSelected))
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Effects, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Effects, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
		cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CGrimAfflictionCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CGrimAfflictionCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CPithDrillerCard::CPithDrillerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pith Driller"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT , Power(2), Life(4))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("-1/-1"), +1));
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CToxicNimCard::CToxicNimCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Toxic Nim"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(1),
		BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CVaultSkirgeCard::CVaultSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vault Skirge"), CardType::_ArtifactCreature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT , Power(1), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
		cpSpell->AddAbilityTag(AbilityTag::LifeLost);
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}
//____________________________________________________________________________
//
CBeastWithinCard::CBeastWithinCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Beast Within"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Beast K"), 2898, 1));
}

//____________________________________________________________________________
//
CCorrosiveGaleCard::CCorrosiveGaleCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Corrosive Gale"), CardType::Sorcery, nID, AbilityType::Sorcery,
		GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, false,
		PreventableType::Preventable)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	
		m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	}
	{
		//Phyrexian cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T(""),
				Life(0),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpSpell);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);


		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathHoodCobraCard::CDeathHoodCobraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death-Hood Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T("1") GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Reach));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());	
	}
	{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T("1") GREEN_MANA_TEXT, Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGlissasScornCard::CGlissasScornCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Glissa's Scorn"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CGlistenerElfCard::CGlistenerElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glistener Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CLeechingBiteCard::CLeechingBiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Leeching Bite"), CardType::Instant, nID)
{
	{
		counted_ptr<CDoubleTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CDoubleTargetChgPwrTghAttrSpell>(this,
			AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+1), Life(+1),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMutagenicGrowthCard::CMutagenicGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mutagenic Growth"), CardType::Instant, nID)

{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{ //Phyrexian cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNoxiousRevivalCard::CNoxiousRevivalCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Noxious Revival"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{ //Phyrexian cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T(""),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRottedHystrixCard::CRottedHystrixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotted Hystrix"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(6))
{
}

//____________________________________________________________________________
//
CSpinebiterCard::CSpinebiterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spinebiter"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddInfect(false);
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CThunderingTanadonCard::CThunderingTanadonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thundering Tanadon"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT , Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-4));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CTriumphOfTheHordesCard::CTriumphOfTheHordesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Triumph of the Hordes"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1), CreatureKeyword::Trample));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Infect);
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJorKadeenThePrevailerCard::CJorKadeenThePrevailerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Jor Kadeen, the Prevailer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT , Power(5), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+3), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CPhyrexiasCoreCard::CPhyrexiasCoreCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Phyrexia's Core"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAlloyMyrCard::CAlloyMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alloy Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(2), Life(2))
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
CBatterskullCard::CBatterskullCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Batterskull"), CardType::Artifact | CardType::Equipment, nID, 
		_T("5"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CBatterskullCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("5")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+4), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+4), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::Lifelink);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pModifier2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("3"),
				ZoneId::Hand, TRUE, MoveType::Others));

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


void CBatterskullCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CBlindingSouleaterCard::CBlindingSouleaterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blinding Souleater"), CardType::_ArtifactCreature, CREATURE_TYPE(Cleric), nID,
		_T("3"), Power(1), Life(3))
{
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
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarksteelRelicCard::CDarksteelRelicCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Relic"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);
}

//____________________________________________________________________________
//
CEtchedMonstrosityCard::CEtchedMonstrosityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etched Monstrosity"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5") , Power(10), Life(10))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 5, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
				ALL_MANA_TEXT, 3));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -5);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHovermyrCard::CHovermyrCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hovermyr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2") , Power(1), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CImmolatingSouleaterCard::CImmolatingSouleaterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Immolating Souleater"), CardType::_ArtifactCreature, CREATURE_TYPE(Hound), nID,
		_T("2"), Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+1), Life(+0), CreatureKeyword::Null));
		ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CInsatiableSouleaterCard::CInsatiableSouleaterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Insatiable Souleater"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("4"), Power(5), Life(1),
		GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Trample)
{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0), CreatureKeyword::Trample));
		ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPestilentSouleaterCard::CPestilentSouleaterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pestilent Souleater"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("5"), Power(3), Life(3))
{	
	{			
		counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Infect);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
	{			
		counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Infect);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKilnWalkerCard::CKilnWalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiln Walker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(0), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMycosynthWellspringCard::CMycosynthWellspringCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mycosynth Wellspring"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
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
	{
		typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
		cpAbility->SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNecropouncerCard::CNecropouncerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necropouncer"), CardType::Artifact | CardType::Equipment, nID, 
		_T("6"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CNecropouncerCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

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


void CNecropouncerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CSickleslicerCard::CSickleslicerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sickleslicer"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CSickleslicerCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		
		//cpAbility->AddCreatureModifier(pModifier);

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


void CSickleslicerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CSoulConduitCard::CSoulConduitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soul Conduit"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CExchangeLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CExchangeLifeSpell>>(this,
			_T("6"),
			32767));

	cpAbility->AddTapCost();
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSurgeNodeCard::CSurgeNodeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Surge Node"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 6, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact, false), FALSE));
		
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(
			new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnwindingClockCard::CUnwindingClockCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Unwinding Clock"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UntapStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSwordofWarandPeaceCard::CSwordofWarandPeaceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of War and Peace"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"),
			new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCardModifier(pModifier1);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}

	{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, 
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSwordofWarandPeaceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSwordofWarandPeaceCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
}
bool CSwordofWarandPeaceCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage d_damage)
{
	triggerContext.nValue1 = (DWORD)pPlayer;
	return (TRUE);
}
bool CSwordofWarandPeaceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CPlayer* pPlayer = (CPlayer*)triggerContext.nValue1;
	CPlayer* pOpp = m_pGame->GetNextPlayer(pPlayer);

	CLifeModifier pModifier1 = CLifeModifier(Life(-1*pPlayer->GetZoneById(ZoneId::Hand)->GetSize()), this);
	CLifeModifier pModifier2 = CLifeModifier(Life(pOpp->GetZoneById(ZoneId::Hand)->GetSize()), this);

	pModifier1.ApplyTo(pPlayer);
	pModifier2.ApplyTo(pOpp);

	return true;
}
//____________________________________________________________________________
//
CDeceiverExarchCard::CDeceiverExarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deceiver Exarch"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDeceiverExarchCard::OnModeSelected))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeceiverExarchCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->SetAbilityName(_T("Mode 1 - untap your permanent"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

		cpAbility->SetAbilityName(_T("Mode 2 - tap opponent's permanent"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		AddAbility(cpAbility.GetPointer());
	}	
}

BOOL CDeceiverExarchCard::TargetCheck(CCard* pCard)
{
	if (pCard->HasProtectionFrom(this, FALSE))
		return FALSE;

	if (pCard->GetCardKeyword()->HasShroud(this))
		return FALSE;

	if (pCard->GetCardKeyword()->HasHexproof() && (GetController() != pCard->GetController()))
	{
		if (!pCard->GetCardType().IsCreature()) return FALSE;
		if (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IgnoreHexproofOnCreatures)) return FALSE;
	}

	return TRUE;
}

bool CDeceiverExarchCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	bool bFirstModeAllowed = false;
	bool bSecondModeAllowed = false;
		
	CZone* pControllersBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pControllersBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pControllersBattlefield->GetAt(i);
		if (TargetCheck(pCard))
		{
			bFirstModeAllowed = true;
			break;
		}
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != GetController())
		{
			CZone* pOpponentsBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int i = 0; i < pOpponentsBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pOpponentsBattlefield->GetAt(i);

				if (TargetCheck(pCard))
				{
					bSecondModeAllowed = true;
					break;
				}
			}
		}

		if (bSecondModeAllowed) break;
	}

	if (bFirstModeAllowed || bSecondModeAllowed)
	{
		std::vector<SelectionEntry> entries;
		if (bFirstModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("%s: Untap target permanent you control"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		if (bSecondModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("%s: Tap target permanent an opponent controls"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}

	return false;
}

void CDeceiverExarchCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

//____________________________________________________________________________
//
CShrineOfBurningRageCard::CShrineOfBurningRageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrine of Burning Rage"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));		

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpellCounter>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpellCounter>>(this,
			_T("3"),
			new AnyCreatureComparer, TRUE, 
			PreventableType::Preventable, CHARGE_COUNTER, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*CPuresteelPaladinCard::CPuresteelPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Puresteel Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPuresteelPaladinEnchantment> cpAbility(
			::CreateObject<CPuresteelPaladinEnchantment>(this,
			new CardTypeComparer(CardType::Equipment, false)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);

		AddAbility(cpAbility.GetPointer());
	}
}*/
//____________________________________________________________________________
//
CHexParasiteCard::CHexParasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hex Parasite"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("1"), Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetCounterPumpSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCounterPumpSpell>>(this,
			BLACK_MANA_TEXT, new TrueCardComparer));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	   cpAbility->SetExtraActionValueVector(ContextValue(1));
		
		AddAbility(cpAbility.GetPointer());			
	}
	{
		counted_ptr<CActivatedAbility<CTargetCounterPumpSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCounterPumpSpell>>(this,
			_T(""), new TrueCardComparer));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	    cpAbility->SetExtraActionValueVector(ContextValue(1));
		cpAbility->AddPayLifeDeltaCost(Life(-2));
		
		AddAbility(cpAbility.GetPointer());			
	}
}

//____________________________________________________________________________
//
CSurgicalExtractionCard::CSurgicalExtractionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Surgical Extraction"), CardType::Instant, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
	counted_ptr<CSurgicalExtractionSpell> cpSpell(
		::CreateObject<CSurgicalExtractionSpell>(this, AbilityType::Instant, 
			BLACK_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand,false));
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CSurgicalExtractionSpell> cpSpell(
		::CreateObject<CSurgicalExtractionSpell>(this, AbilityType::Instant, 
			_T(""),
			new TrueCardComparer));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand,false));
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
	cpSpell->AddPayLifeDeltaCost(Life(-2));

	cpSpell->SetMainSpell(FALSE);

	AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CLashwritheCard::CLashwritheCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lashwrithe"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CLashwritheCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CLashwritheCard::CreateEquipmentAbility)));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLashwritheCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CLashwritheCard::CreateEquipmentAbility)));

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLashwritheCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CLashwritheCard::CreateEquipmentAbility)));

		cpAbility->AddPayLifeDeltaCost(Life(-4));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLashwritheCard::BeforeResolution));

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

counted_ptr<CAbility> CLashwritheCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));	

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CLashwritheCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;
		{
			pEquipAbility->Unequip();
		}
	}

	return true;
}

void CLashwritheCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
				return;
			}
		}
	}
}

//____________________________________________________________________________
//
CBirthingPodCard::CBirthingPodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Birthing Pod"), CardType::Artifact, nID, 
		_T("3") GREEN_MANA_TEXT, AbilityType::Artifact)
	, m_CardFilter(_T("a creature card with converted mana cost equal to X"), _T("creature cards with converted mana cost equal to X"), new TrueCardComparer)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, true, true, false));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures"))); 

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBirthingPodCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1"),
				&m_CardFilter,
				ZoneId::Battlefield, true, true, false));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures"))); 
		cpAbility->AddPayLifeDeltaCost(Life(-2));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBirthingPodCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBirthingPodCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCMC = 1 + pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)->GetConvertedManaCost();

	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));

	return true;
}

//____________________________________________________________________________
//
CMeliraSylvokOutcastCard::CMeliraSylvokOutcastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Melira, Sylvok Outcast"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));
	
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Battlefield | ZoneId::Exile | ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Stack);

	CCardCounterStopModifier* pModifier = new CCardCounterStopModifier(_T("-1/-1"));

	cpAbility->GetCardKeywordMod().LinkCardModifier(pModifier);
	

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->SetAffectOpponentCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Infect);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
		PlayerEffectType::CantGetPoisonCounters));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlindZealotCard::CBlindZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blind Zealot"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
				, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CCaressOfPhyrexiaCard::CCaressOfPhyrexiaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Caress of Phyrexia"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CCaressOfPhyrexiaCard::OnResolutionCompleted))
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
		3));

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(
		new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCaressOfPhyrexiaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target=pAbilityAction->GetAssociatedPlayer();

	CPoisonModifier pModifier = CPoisonModifier(m_pGame, 3);

	if (bResult) pModifier.ApplyTo(target);
}
//____________________________________________________________________________
//
CImpalerShrikeCard::CImpalerShrikeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Impaler Shrike"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))

			, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

	cpAbility->SetDrawCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDueRespectCard::CDueRespectCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Due Respect"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpSpell(
		::CreateObject<CPlayerEffectEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			PlayerEffectType::InPlayTapped, (int)CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFurnaceScampCard::CFurnaceScampCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Furnace Scamp"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFurnaceScampCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFurnaceScampCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFurnaceScampCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
	CPlayer* pPlayer, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pPlayer;
	return true;
}

bool CFurnaceScampCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{	
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CPlayer* pPlayer = (CPlayer*)triggerContext.nValue1;

	CLifeModifier modifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(pPlayer);
	return true;
}

//____________________________________________________________________________
//
CTrespassingSouleaterCard::CTrespassingSouleaterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Trespassing Souleater"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Unblockable)
{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0), CreatureKeyword::Unblockable));
		ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CVorinclexVoiceofHungerCard::CVorinclexVoiceofHungerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vorinclex, Voice of Hunger"), CardType::_LegendaryCreature, CREATURE_TYPE(Praetor), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVorinclexVoiceofHungerCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVorinclexVoiceofHungerCard::SetTriggerContext1));

	
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetCardModifiers().push_back(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

    m_pTriggeredAbility1 = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility1);
	}
}
bool CVorinclexVoiceofHungerCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
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
bool CVorinclexVoiceofHungerCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}
//____________________________________________________________________________
//
CJinGitaxiasCoreAugurCard::CJinGitaxiasCoreAugurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jin-Gitaxias, Core Augur"), CardType::_LegendaryCreature, CREATURE_TYPE(Praetor), nID,
		_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
	{	
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this,
			-7));

	cpAbility->SetAffectOpponentsOnly();
	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(
			::CreateObject<TriggeredAbility2>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetDrawCount(7);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CApostlesBlessingCard::CApostlesBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Apostle's Blessing"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CApostlesBlessingCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CTargetGainKeywordSpell> cpSpell(
			::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Casts (color)"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetGainKeywordSpell> cpSpell(
			::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
				_T("1"),
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->AddPayLifeDeltaCost(Life(-2));
		cpSpell->SetAbilityText(_T("Casts (color)"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Casts (artifacts)"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1"),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->AddPayLifeDeltaCost(Life(-2));
		cpSpell->SetAbilityText(_T("Casts (artifacts)"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CApostlesBlessingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	if (bResult) pCard->GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CMortisDogsCard::CMortisDogsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mortis Dogs"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMortisDogsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMortisDogsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	int nLifeDelta;

	nLifeDelta = GET_INTEGER(GetLastKnownPower());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nLifeDelta));	
	pAction->SetTriggerContext(triggerContext);

	return (nLifeDelta > 0);
}

//____________________________________________________________________________
//
CShrineOfLoyalLegionsCard::CShrineOfLoyalLegionsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrine of Loyal Legions"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CShrineOfLoyalLegionsCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Myr"), 2795, 0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShrineOfLoyalLegionsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CShrineOfLoyalLegionsCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CShrineOfLoyalLegionsCard::BeforeResolution(CAbilityAction* pAction) const
{
	ContextValue Context(pAction->GetValue());
	Context.nValue1 = m_nCounterCount;
	pAction->SetValue(Context);

	return true;
}

void CShrineOfLoyalLegionsCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CFreshMeatCard::CFreshMeatCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fresh Meat"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT,
			_T("Beast K"), 2898, 0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFreshMeatCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFreshMeatCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetController()->GetCertainTypeDiedCount(CardType::Creature);

	ContextValue context(nCount);
	pAction->SetValue(context);

	return true;
}

//____________________________________________________________________________
//
CDispatchCard::CDispatchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dispatch"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDispatchCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDispatchCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nMetalcraft = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	if (nMetalcraft < 3) return true;

	CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others);
	pModifier->ApplyTo(pAction->GetAssociatedCard());

	return false;
}

//____________________________________________________________________________
//
CIchorExplosionCard::CIchorExplosionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ichor Explosion"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(-0), Life(-0),
			new AnyCreatureComparer));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIchorExplosionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CIchorExplosionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	int nCount = GET_INTEGER(pCreature->GetLastKnownPower());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -nCount;
	Context.nValue2 = -nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CViridianHarvestCard::CViridianHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Viridian Harvest"), CardType::EnchantArtifact, nID)
{
	{
		counted_ptr<CEnchant> cpSpell(
			::CreateObject<CEnchant>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConversionChamberCard::CConversionChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conversion Chamber"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2"),
				_T("Golem A"), 2798,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNumbingDoseCard::CNumbingDoseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Numbing Dose"), CardType::EnchantPermanent, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
				CardKeyword::NoUntapInUntapPhase));
		
		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNumbingDoseCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNumbingDoseCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CChainedThroatseekerCard::CChainedThroatseekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chained Throatseeker"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddInfect(FALSE);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CChainedThroatseekerCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CChainedThroatseekerCard::CanAttack(BOOL bIncludeTricks)
{
	return (m_pGame->GetNextPlayer(GetController())->GetPoisonCounters() > 0);
}

//____________________________________________________________________________
//
CCorruptedResolveCard::CCorruptedResolveCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Corrupted Resolve"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorruptedResolveCard::BeforeResolution));
}

bool CCorruptedResolveCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (pAction->GetAssociatedCard()->GetController()->GetPoisonCounters() > 0);
}

//____________________________________________________________________________
//
CPhyrexianSwarmlordCard::CPhyrexianSwarmlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Swarmlord"), CardType::Creature, CREATURE_TYPE2(Insect, Horror), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddInfect(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhyrexianSwarmlordCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect (D)"), TOKEN_ID_BY_NAME, 0);	

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhyrexianSwarmlordCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = m_pGame->GetNextPlayer(pAction->GetController())->GetPoisonCounters();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCounterCount;
	pAction->SetTriggerContext(triggerContext);	

	return (nCounterCount>0);
}

//____________________________________________________________________________
//
CLifesFinaleCard::CLifesFinaleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Life's Finale"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			MinimumValue(0), MaximumValue(3),
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->SetSearchLibraryData(ZoneId::Graveyard, TRUE, TRUE, FALSE, TRUE);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLifesFinaleCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLifesFinaleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}
//____________________________________________________________________________
//
CPuresteelPaladinCard::CPuresteelPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Puresteel Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
	WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
		{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Equipment, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CPuresteelPaladinCard::CreateAdditionalAbility1)));	

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
		{
			typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));

	AddAbility(cpAbility.GetPointer());
		}
}
counted_ptr<CAbility> CPuresteelPaladinCard::CreateAdditionalAbility1(CCard* pCard)
{

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(pCard,
			_T(""),
			new EquipFitComparer(pCard), FALSE));
	ATLASSERT(cpAbility);	

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(new  CEquipModifier(pCard, FALSE));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery | AbilityType::Equipment);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CIsolationCellCard::CIsolationCellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Isolation Cell"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRageExtractorCard::CRageExtractorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rage Extractor"), CardType::Artifact, nID, 
		_T("4") RED_MANA_TEXT, AbilityType::Artifact)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		//phyrexian mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("4")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->AddPayLifeDeltaCost(Life(-2));
        
		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardKeywordComparer(CardKeyword::PhyrexianMana, false));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRageExtractorCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRageExtractorCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	int Damage = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-Damage));
	return true;
}

//____________________________________________________________________________
//
CRuthlessInvasionCard::CRuthlessInvasionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ruthless Invasion"), CardType::Sorcery, nID)
{
	GetCardKeyword()->AddPhyrexianMana(FALSE);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Ruthless Invasion Effect"), 2977, 1, FALSE, ZoneId::_Effects));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3")));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Ruthless Invasion Effect"), 2977, 1, FALSE, ZoneId::_Effects));

		cpSpell->AddPayLifeDeltaCost(Life(-2));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CInvaderParasiteCard::CInvaderParasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Invader Parasite"), CardType::Creature, CREATURE_TYPE(Insect), nID,
	_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CInvaderParasiteCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInvaderParasiteCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInvaderParasiteCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInvaderParasiteCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInvaderParasiteCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CInvaderParasiteCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pImprinted.GetSize() == 0) return false;
	if (pCard != pImprinted.GetAt(0)) return false;
	return true;
}

bool CInvaderParasiteCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pImprinted.RemoveAll();
	return true;
}

bool CInvaderParasiteCard::BeforeResolution(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(pAction->GetAssociatedCard());

	pImprinted.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	return false;
}

void CInvaderParasiteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pImprinted.RemoveAll();
	}
}

bool CInvaderParasiteCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pImprinted.GetSize() == 0) return false;
	if (pCard->GetPrintedCardName() != pImprinted.GetAt(0)->GetPrintedCardName()) return false;
	return true;
}

//____________________________________________________________________________
//
CCagedSunCard::CCagedSunCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Caged Sun"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CCagedSunCard::OnSelectionDone))
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCagedSunCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}

counted_ptr<CAbility> CCagedSunCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CardTypeComparer(SelectedColor, false));

	cpAbility->SetAffectControllerCardsOnly();
		
	cpAbility->SetAbilityName(_T("Caged Sun boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CCagedSunCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedColor = CardType::Null;

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
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CCagedSunCard::CreateAdditionAbility));

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

void CCagedSunCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedColor = CardType::White;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCagedSunCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 2)
			{
				SelectedColor = CardType::Blue;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCagedSunCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 3)
			{
				SelectedColor = CardType::Black;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCagedSunCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 4)
			{
				SelectedColor = CardType::Red;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCagedSunCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 5)
			{
				SelectedColor = CardType::Green;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CCagedSunCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
		}
}

bool CCagedSunCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	if (pManaAction->GetOriginatingCard()->GetController() != GetController()) return false;

	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red) && (SelectedColor == CardType::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green) && (SelectedColor == CardType::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue) && (SelectedColor == CardType::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black) && (SelectedColor == CardType::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White) && (SelectedColor == CardType::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}
bool CCagedSunCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CXenograftCard::CXenograftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Xenograft"), CardType::GlobalEnchantment, nID,
		_T("4") BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CXenograftCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CXenograftCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0)));

	cpAbility->GetOtherCardModifiers().Add((CCardModifier*)(new CCreatureTypeModifier(SelectedType)));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Xenograft add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CXenograftCard::Move(CZone* pToZone,
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
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CXenograftCard::CreateAdditionAbility));

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

void CXenograftCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CXenograftCard::CreateAdditionAbility));

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
CCommanderCard::CCommanderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Commander"), CardType::Null,nID)
	,CastingTimes(0)
	,DamageDealtByOtherCommander(0)	
	,m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCommanderCard::OnZoneChanged))
	,m_cpPListener(VAR_NAME(m_cpPListener), CastSpellEventSource::Listener::EventCallback(
					this, &CCommanderCard::OnSpellCasted))
	,m_cpDListener(VAR_NAME(m_cpDListener), 
					DamageDealEventSource::Listener::EventCallback(this, &CCommanderCard::OnDamageDealt))
	,m_cpZListener(VAR_NAME(m_cpAListener), 
					CardMovementEventSource::Listener::EventCallback(this, &CCommanderCard::OnCardMoved))
	,m_cpMListener(VAR_NAME(m_cpMListener), 
					ManaAddEventSource::Listener::EventCallback(this, &CCommanderCard::OnManaAdd))
	,set(FALSE)
	,black(FALSE)
	,green(FALSE)
	,red(FALSE)
	,white(FALSE)
	,blue(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

/*{
		counted_ptr<CCommanderCastEnchantment> cpAbility(
			::CreateObject<CCommanderCastEnchantment>(this,
			new CardReplacementKeywordComparer(ReplacementKeyword::Commander, false)));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAffectCardsInTheseZones(ZoneId::_Effects | ZoneId::Stack);

		AddAbility(cpAbility.GetPointer());
	}*/
	{
		counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardReplacementKeywordComparer(ReplacementKeyword::Commander, false),
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectCardsInTheseZones(ZoneId::_Effects);

		m_pAbility = cpAbility;

		AddAbility(cpAbility.GetPointer());
	}
}
void CCommanderCard::OnZoneChanged(CCard*, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pFromZone && pToZone->GetZoneId() == ZoneId::_Effects)
	{
		CGame* pGame = GetGame();
		pGame->GetStack().GetCastSpellEventSource()->AddListener(m_cpPListener.GetPointer());
		GetOwner()->GetManaAddEventSource()->AddListener(m_cpMListener.GetPointer());

		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpDListener.GetPointer());

		GetOwner()->GetZoneById(ZoneId::_Effects)->GetCardMovedEventSource()->AddListener(m_cpZListener.GetPointer());
	}
}
void CCommanderCard::OnSpellCasted(CCard* pCard)
{
	if (pCard->GetReplacementKeyword()->HasCommanderFlag() && pCard->GetOwner() == GetController())
		CastingTimes = CastingTimes+1;
}
void CCommanderCard::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (pFromCard->GetReplacementKeyword()->HasCommanderFlag() && pToPlayer == GetController() && GetController() != pFromCard->GetOwner())
	{
		DamageDealtByOtherCommander = DamageDealtByOtherCommander-GET_INTEGER(damage.m_nLifeDelta);

		if (DamageDealtByOtherCommander >= 21) 
			GetController()->SetLostByOtherReasons();
	}
}
void CCommanderCard::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pCard->GetReplacementKeyword()->HasCommanderFlag() && pFromZone && pToZone == GetOwner()->GetZoneById(ZoneId::_Effects))
	{
		m_pAbility->EndEnchantment();

			CManaCost mCost;
			mCost.AddCost(CManaCost::Color::Generic, 0);
			mCost.AddCost(CManaCost::Color::Generic, (2*(CastingTimes)));

		int time = CastingTimes*2;

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();

	}
	if (set == FALSE && pCard->GetReplacementKeyword()->HasCommanderFlag() && pFromZone && pToZone == GetOwner()->GetZoneById(ZoneId::_Effects))
	{
		if ((pCard->GetCardType() & CardType::Green).Any()) green = TRUE;
		if ((pCard->GetCardType() & CardType::Red).Any()) red = TRUE;
		if ((pCard->GetCardType() & CardType::White).Any()) white = TRUE;
		if ((pCard->GetCardType() & CardType::Blue).Any()) blue = TRUE;
		if ((pCard->GetCardType() & CardType::Black).Any()) black = TRUE;

		for (int i=0; i<pCard->GetAbilities().GetSize(); i++)
		{
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red))
				red = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green))
				green = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Blue))
				blue = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::White))
				white = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black))
				black = TRUE;
		}
		set = TRUE;
	}
}
void CCommanderCard::OnManaAdd(CPlayer* pPlayer, const CManaPool pPool)
{
	if (pPool.GetMana(CManaPoolBase::Color::Green) && pPlayer == GetOwner() && green == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Green);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(GREEN_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Red) && pPlayer == GetOwner() && red == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Red);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(RED_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Blue) && pPlayer == GetOwner() && blue == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Blue);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(BLUE_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Black) && pPlayer == GetOwner() && black == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Black);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(BLACK_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::White) && pPlayer == GetOwner() && white == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::White);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(WHITE_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}
}

//____________________________________________________________________________
//
CKarnLiberatedCard::CKarnLiberatedCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Karn Liberated"), nID,
		_T("7"),
		PlaneswalkerType::Karn, 6)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKarnLiberatedCard::OnResolutionCompleted))
				, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CKarnLiberatedCard::OnResolutionCompleted1))
			, m_WhenSelfMoved(this)
			,resolution(FALSE)
{
	pExiledCards.RemoveAll();

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CKarnLiberatedCard::OnZoneChanged));

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE);	// Notify when moving from in-play to in-play also

	{
		counted_ptr<CActivatedAbility<CTargetPlayerExileSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerExileSpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("cards")), &pExiledCards));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +4);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1 .GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -14);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->SetAbilityName(_T("Restart the game."));
		cpAbility->SetAbilityText(_T("Restart the game."));

		AddAbility(cpAbility.GetPointer());
	}
}
void CKarnLiberatedCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	pExiledCards.AddCard(pAbilityAction->GetAssociatedCard(), CardPlacement::Top);
}
void CKarnLiberatedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	//	if (GetGame()->IsThinking()) return;

	resolution = TRUE;
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

	CCountedCardContainer cards;


	if (!GetGame()->IsThinking())
	{
		GetGame()->NullMulliganPlayers();

		GetGame()->SetMulliganAgain();
		GetGame()->ResetTurnNumbers();
		GetGame()->SetActivePlayer(pAbilityAction->GetController());
		GetGame()->SetPriorityPlayer(pAbilityAction->GetController());

		//m_pGame->GetCurrentNode()->GetGraph()->SetPlayer(pAbilityAction->GetController());

		m_pGame->GetCurrentNode()->GetGraph()->SetNode(m_pGame->GetCurrentNode()->GetGraph(), pAbilityAction->GetController()->GetGraph(), NodeId::BeforeBeginningStep);
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) == pAbilityAction->GetController() && !GetGame()->IsThinking())
			GetGame()->SetStartFirst(ip);

		GetGame()->GetPlayer(ip)->ResetTurnInfo();
		GetGame()->GetPlayer(ip)->ResetPlayerTurnNumber();
		GetGame()->GetPlayer(ip)->SetPoisonCounters(0, TRUE);


		int nZoneCount = GetGame()->GetPlayer(ip)->GetZoneCount();

		for (int j = 0; j < nZoneCount; ++j)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZone(j);

			if (pZone->GetZoneId() == ZoneId::_Tokens || pZone->GetZoneId() == ZoneId::_Planes || pZone->GetZoneId() == ZoneId::_Schemes || pZone->GetZoneId() == ZoneId::Library)
				continue;

			CCardFilter::GetFilter(_T("cards"))->GetIncluded(*pZone, cards);

		}

		for (int k = 0; k <cards.GetSize(); ++k)
		{
			if (cards.GetAt(k)->GetPrintedCardName() == _T("Commander"))
			{
				((CCommanderCard*)cards.GetAt(k))->ResetCastingTime();
				continue;
			}

			if ((cards.GetAt(k)->GetCardKeyword()->IsEmblem() && (cards.GetAt(k)->GetCardType() & CardType::Legendary).Any()))
			{
				cards.GetAt(k)->Move(cards.GetAt(k)->GetOwner()->GetZoneById(ZoneId::_Effects), NULL, MoveType::Others);
				continue;
			}

			if (cards.GetAt(k)->GetPrintedCardName() == _T("Planechase") ||  
				(cards.GetAt(k)->GetCardType() & CardType::Vanguard).Any()) // Removing Card choosed as commander
				continue;

			cards.GetAt(k)->Move(cards.GetAt(k)->GetOwner()->GetZoneById(ZoneId::Library), NULL, MoveType::Others);
		}

		for (int k = 0; k <cards.GetSize(); ++k)    // Once again for movement replaced cards.
		{
			if (cards.GetAt(k)->GetPrintedCardName() == _T("Commander"))
			{
				continue;
			}

			if ((cards.GetAt(k)->GetCardKeyword()->IsEmblem() && (cards.GetAt(k)->GetCardType() & CardType::Legendary).Any()))
			{
				cards.GetAt(k)->Move(cards.GetAt(k)->GetOwner()->GetZoneById(ZoneId::_Effects), NULL, MoveType::Others);
				continue;
			}

			if (cards.GetAt(k)->GetPrintedCardName() == _T("Planechase") ||  
				(cards.GetAt(k)->GetCardType() & CardType::Vanguard).Any()) // Removing Card choosed as commander
				continue;

			cards.GetAt(k)->Move(cards.GetAt(k)->GetOwner()->GetZoneById(ZoneId::Library), NULL, MoveType::Others);
		}

		GetGame()->GetPlayer(ip)->GetTriggeredActionContainer()->RemoveAll();

		GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Library)->Shuffle();
		cards.RemoveAll();


	}

	for (int k = 0; k <pExiledCards.GetSize(); ++k)   
	{
		if (pExiledCards.GetAt(k)->GetCardType().IsPermanent() && !(pExiledCards.GetAt(k)->GetCardType() & CardType::_Aura).Any())
			pExiledCards.GetAt(k)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield), NULL, MoveType::Others);
	}

	pExiledCards.RemoveAll();

	if (!GetGame()->IsThinking())
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CCardFilter temp;
			temp.AddComparer(new CardTypeComparer(CardType::Vanguard, FALSE));

			int LifeModifier = 0;		

			for (int i = 0; i < GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::_Effects)->GetSize(); ++i)
			{
				if ((GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::_Effects)->GetAt(i)->GetCardType() & CardType::Vanguard).Any())
				{
					LifeModifier = LifeModifier + ((CVanguardCard*)GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::_Effects)->GetAt(i))->GetStartingLifeModifier();
				}
			}

			GetGame()->GetPlayer(ip)->SetLife(GetGame()->GetPlayer(ip)->GetDeck().GetStartingLife() + LifeModifier);

			for (int i = 0; i <  GetGame()->GetPlayer(ip)->GetMaxHandSize(); ++i)
			{
				CCard* pCard =  GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Library)->GetTopCard();
				GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Hand)->AddCard(pCard);
			}

		}

		resolution = FALSE;
}
void CKarnLiberatedCard::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (resolution != FALSE) return;
	if (moveType == MoveType::Phasing) return;

	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{			
		pExiledCards.RemoveAll();
	}
}
//____________________________________________________________________________
//
CShrineOfBoundlessGrowthCard::CShrineOfBoundlessGrowthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrine of Boundless Growth"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CShrineOfBoundlessGrowthCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetAbilityText(_T("add {1} to your mana pool for each charge counter on Shrine of Boundless Growth"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShrineOfBoundlessGrowthCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CShrineOfBoundlessGrowthCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CShrineOfBoundlessGrowthCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = m_nCounterCount;

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n != 0) for (int i = 0; i < n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

void CShrineOfBoundlessGrowthCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CShrineOfLimitlessPowerCard::CShrineOfLimitlessPowerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrine of Limitless Power"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CShrineOfLimitlessPowerCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("4"),
				0, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShrineOfLimitlessPowerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CShrineOfLimitlessPowerCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CShrineOfLimitlessPowerCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = m_nCounterCount;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = n;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
	it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
	}
		
	return true;
}

void CShrineOfLimitlessPowerCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CShrineOfPiercingVisionCard::CShrineOfPiercingVisionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shrine of Piercing Vision"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CShrineOfPiercingVisionCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShrineOfPiercingVisionCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CShrineOfPiercingVisionCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CShrineOfPiercingVisionCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = m_nCounterCount;

	if (n > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CShrineOfPiercingVisionCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CGlisteningOilCard::CGlisteningOilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glistening Oil"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				CardKeyword::Infect));

		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifySingleCard);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlisteningOilCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("-1/-1"), +1));

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

bool CGlisteningOilCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

//____________________________________________________________________________
//
CBrutalizerExarchCard::CBrutalizerExarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brutalizer Exarch"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBrutalizerExarchCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrutalizerExarchCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	    cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	    cpAbility->SetToZone(ZoneId::Library);

		cpAbility->SetAbilityName(_T("Mode 1 - search"));
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrutalizerExarchCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Mode 2 - targeted move"));
		AddAbility(cpAbility.GetPointer());
	}	
}

BOOL CBrutalizerExarchCard::TargetCheck(CCard* pCard)
{
	if (pCard->HasProtectionFrom(this, FALSE))
		return FALSE;

	if (pCard->GetCardKeyword()->HasShroud(this))
		return FALSE;

	if (pCard->GetCardKeyword()->HasHexproof() && (GetController() != pCard->GetController()))
	{
		if (!pCard->GetCardType().IsCreature()) return FALSE;
		if (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IgnoreHexproofOnCreatures)) return FALSE;
	}

	return TRUE;
}

bool CBrutalizerExarchCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	bool bSecondModeAllowed = false;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (!pCard->GetCardType().IsCreature() && TargetCheck(pCard))
			{
				bSecondModeAllowed = true;
				break;
			}
		}

		if (bSecondModeAllowed) break;
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: Search your library for a creature card, reveal it, then shuffle your library and put that card on top of it"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	if (bSecondModeAllowed)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: Put target noncreature permanent on the bottom of its owner's library"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());


	return false;
}

void CBrutalizerExarchCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CBrutalizerExarchCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();

	pTarget->Move(pTarget->GetOwner()->GetZoneById(ZoneId::Library), pAction->GetController(), MoveType::Others, CardPlacement::Bottom);

	return true;
}

//____________________________________________________________________________
//
CEntomberExarchCard::CEntomberExarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Entomber Exarch"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEntomberExarchCard::OnModeSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEntomberExarchCard::OnCardSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEntomberExarchCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetAbilityName(_T("Mode 1 - return a creature from graveyard"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEntomberExarchCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Mode 2 - make opponent discard a noncreature card"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));
		AddAbility(cpAbility.GetPointer());
	}	
}

BOOL CEntomberExarchCard::TargetCheckGraveyard(CCard* pCard)
{
	if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GraveShroud, FALSE))
		return FALSE;

	return TRUE;
}

BOOL CEntomberExarchCard::TargetCheckPlayer(CPlayer* pPlayer)
{
	const CPlayerEffect_& playerEffect = pPlayer->GetPlayerEffect();

	if (playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities))
		return FALSE;

	if ( GetController() != pPlayer && playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedByOpponentsAbilities))
            return FALSE;

	std::set<const CCardFilter*> cardFilters;
	if (playerEffect.HasPlayerEffect(PlayerEffectType::Protection, cardFilters))
	{
		if (!cardFilters.size())
			return FALSE; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(this))
				return FALSE;
	}

	return TRUE;
}

bool CEntomberExarchCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	bool bFirstModeAllowed = false;
	bool bSecondModeAllowed = false;
		
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);

		if (TargetCheckGraveyard(pCard))
		{
			bFirstModeAllowed = true;
			break;
		}
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if ((pPlayer != GetController()) && (TargetCheckPlayer(pPlayer)))
		{
			bSecondModeAllowed = true;
			break;
		}

		if (bSecondModeAllowed) break;
	}

	if (bFirstModeAllowed || bSecondModeAllowed)
	{
		std::vector<SelectionEntry> entries;
		if (bFirstModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("%s: Return target creature card from your graveyard to your hand"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		if (bSecondModeAllowed)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("%s: Target opponent reveals his or her hand, you choose a noncreature card from it, then that player discards that card"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}

	return false;
}

void CEntomberExarchCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CEntomberExarchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.ApplyTo(pTarget);

		if (CCardFilter::GetFilter(_T("non-creatures"))->CountIncluded(pHand->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pHand->GetSize(); ++i)
			{
				CCard* pCard = pHand->GetAt(i);

				if (!pCard->GetCardType().IsCreature())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Make %s discard %s"),
						pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
		}
	}

	return true;
}

void CEntomberExarchCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s makes %s discard %s"), pSelectionPlayer->GetPlayerName(), pCard->GetOwner()->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pCard->GetOwner());
			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//