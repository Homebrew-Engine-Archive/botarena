#include "stdafx.h"
#include "CardBornOfTheGods.h"

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
		DEFINE_CARD(CAcolytesRewardCard);
		DEFINE_CARD(CAerieWorshippersCard);
		DEFINE_CARD(CAkroanConscriptorCard);
		DEFINE_CARD(CAkroanPhalanxCard);
		DEFINE_CARD(CAkroanSkyguardCard);
		DEFINE_CARD(CAshioksAdeptCard);
		DEFINE_CARD(CAspectOfHydraCard);
		DEFINE_CARD(CAsphyxiateCard);
		DEFINE_CARD(CBileBlightCard);
		DEFINE_CARD(CBlackOakOfOdunosCard);
		DEFINE_CARD(CBoltOfKeranosCard);
		DEFINE_CARD(CChargingBadgerCard);
		DEFINE_CARD(CChorusOfTheTidesCard);
		DEFINE_CARD(CClaimOfErebosCard);
		DEFINE_CARD(CCourserOfKruphixCard);
		DEFINE_CARD(CCrypsisCard);
		DEFINE_CARD(CCyclopsOfOneEyedPassCard);
		DEFINE_CARD(CDawnToDuskCard);
		DEFINE_CARD(CDeepwaterHypnotistCard);
		DEFINE_CARD(CDrownInSorrowCard);
		DEFINE_CARD(CEaterOfHopeCard);
		DEFINE_CARD(CEliteSkirmisherCard);
		DEFINE_CARD(CEpharasRadianceCard);
		DEFINE_CARD(CEpiphanyStormCard);
		DEFINE_CARD(CEvanescentIntellectCard);
		DEFINE_CARD(CExcoriateCard);
		DEFINE_CARD(CEyeGougeCard);
		DEFINE_CARD(CFallOfTheHammerCard);
		DEFINE_CARD(CFanaticOfXenagosCard);
		DEFINE_CARD(CFatedConflagrationCard);
		DEFINE_CARD(CFatedInfatuationCard);
		DEFINE_CARD(CFatedInterventionCard);
		DEFINE_CARD(CFatedRetributionCard);
		DEFINE_CARD(CFatedReturnCard);
		DEFINE_CARD(CFateUnravelerCard);
		DEFINE_CARD(CFearsomeTemperCard);
		DEFINE_CARD(CFelhideBrawlerCard);
		DEFINE_CARD(CForgestokerDragonCard);
		DEFINE_CARD(CForlornPseudammaCard);
		DEFINE_CARD(CForsakenDriftersCard);
		DEFINE_CARD(CGlimpseTheSunGodCard);
		DEFINE_CARD(CGodFavoredGeneralCard);
		DEFINE_CARD(CGorgonsHeadCard);
		DEFINE_CARD(CGraverobberSpiderCard);
		DEFINE_CARD(CGreatHartCard);
		DEFINE_CARD(CGriffinDreamfinderCard);
		DEFINE_CARD(CGrislyTransformationCard);
		DEFINE_CARD(CHeroOfIroasCard);
		// DEFINE_CARD(CHeroOfLeinaTowerCard);
		DEFINE_CARD(CHoldAtBayCard);
		DEFINE_CARD(CHuntersProwessCard);
		DEFINE_CARD(CImpetuousSunchaserCard);
		DEFINE_CARD(CKarametrasFavorCard);
		DEFINE_CARD(CKiorasFollowerCard);
		DEFINE_CARD(CKragmaButcherCard);
		// DEFINE_CARD(CLightningVolleyCard);
		DEFINE_CARD(CMeletisAstronomerCard);
		DEFINE_CARD(CMischiefAndMayhemCard);
		DEFINE_CARD(CMortalsArdorCard);
		DEFINE_CARD(CMortalsResolveCard);
		DEFINE_CARD(CNessianDemolokCard);
		DEFINE_CARD(CNullifyCard);
		DEFINE_CARD(COdunosRiverTrawlerCard);
		DEFINE_CARD(COraclesInsightCard);
		DEFINE_CARD(COreskosSunGuideCard);
		DEFINE_CARD(COrnitharchCard);
		DEFINE_CARD(CPainSeerCard);
		DEFINE_CARD(CPeregrinationCard);
		DEFINE_CARD(CPharagaxGiantCard);
		DEFINE_CARD(CPheresBandRaidersCard);
		DEFINE_CARD(CPheresBandTromperCard);
		DEFINE_CARD(CPillarOfWarCard);
		DEFINE_CARD(CPinnacleOfRageCard);
		DEFINE_CARD(CPleaForGuidanceCard);
		DEFINE_CARD(CRagemongerCard);
		DEFINE_CARD(CRaisedByWolvesCard);
		DEFINE_CARD(CReapWhatIsSownCard);
		DEFINE_CARD(CRecklessRevelerCard);
		DEFINE_CARD(CRetractionHelixCard);
		DEFINE_CARD(CRiseToTheChallengeCard);
		DEFINE_CARD(CSanguimancyCard);
		// DEFINE_CARD(CSatyrFiredancerCard);
		DEFINE_CARD(CSatyrNyxSmithCard);
		DEFINE_CARD(CScourgeOfSkolaValeCard);
		DEFINE_CARD(CScouringSandsCard);
		DEFINE_CARD(CSearingBloodCard);
		DEFINE_CARD(CServantOfTymaretCard);
		DEFINE_CARD(CSetessanOathswornCard);
		DEFINE_CARD(CSetessanStarbreakerCard);
		DEFINE_CARD(CShrikeHarpyCard);
		DEFINE_CARD(CSilentSentinelCard);
		DEFINE_CARD(CSirenSongLyreCard);
		DEFINE_CARD(CSkyreapingCard);
		DEFINE_CARD(CSnakeOfTheGoldenGroveCard);
		DEFINE_CARD(CSphinxsDiscipleCard);
		DEFINE_CARD(CSpiritOfTheLabyrinthCard);
		DEFINE_CARD(CStormcallerOfKeranosCard);
		DEFINE_CARD(CSuddenStormCard);
		DEFINE_CARD(CSunbondCard);
		DEFINE_CARD(CSwordwiseCentaurCard);
		DEFINE_CARD(CTempleOfEnlightenmentCard);
		DEFINE_CARD(CTempleOfMaliceCard);
		DEFINE_CARD(CTempleOfPlentyCard);
		DEFINE_CARD(CThassasRebuffCard);
		DEFINE_CARD(CThunderBruteCard);
		DEFINE_CARD(CThunderousMightCard);
		DEFINE_CARD(CUnravelTheAetherCard);
		DEFINE_CARD(CVanguardOfBrimazCard);
		DEFINE_CARD(CWarchanterOfMogisCard);
		DEFINE_CARD(CWhelmingWaveCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAshioksAdeptCard::CAshioksAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashiok's Adept"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshioksAdeptCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CAshioksAdeptCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
										  CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CVanguardOfBrimazCard::CVanguardOfBrimazCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vanguard of Brimaz"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanguardOfBrimazCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->SetCreateTokenOption(TRUE, _T("Cat Soldier A"), 62069, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CVanguardOfBrimazCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
											  CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CDawnToDuskCard::CDawnToDuskCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dawn to Dusk"), CardType::Sorcery, nID)
{
	/*
		Currently does not work for the following scenario.
		Have an enchantment in the graveyard and an enhantment in play.
		Cast Dask to Dawn, option to destroy target enchantment (in play) and
		return the enchantment that was in the graveyard is not appearing.
	*/
	{
		//Return target enchantment card from your graveyard to your hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others));
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target enchantment.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose both.
		//Spell1 - Return target enchantment card from your graveyard to your hand.
		//Spell2 - Destroy target enchantment.
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false), false, 
				new CardTypeComparer(CardType::_Enchantment, false), false, _T("")));
		
		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDawnToDuskCard::BeforeResolution));
		
		AddSpell(cpSpell.GetPointer());
	}
}

bool CDawnToDuskCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	// Return target enchantment card from your graveyard to your hand.
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others, pAction->GetController());
	pModifier1.ApplyTo(pTarget1);
	// Destroy target enchantment.
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
	pModifier2.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
COreskosSunGuideCard::COreskosSunGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oreskos Sun Guide"), CardType::Creature, CREATURE_TYPE2(Cat, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // Only you gain 2 life not opponents
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAspectOfHydraCard::CAspectOfHydraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Aspect of Hydra"), CardType::Instant, nID, AbilityType::Instant,
	    GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAspectOfHydraCard::BeforeResolution));
}

bool CAspectOfHydraCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetController()->GetDevotion(CManaCost::Color::Green); 

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;
	Context.nValue2 = nCount;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()), const_cast<const ContextValue&>(Context));
	}

	return true;
}
//____________________________________________________________________________
//
CSanguimancyCard::CSanguimancyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sanguimancy"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSanguimancyCard::OnResolutionCompleted))
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSanguimancyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCount = pAbilityAction->GetController()->GetDevotion(CManaCost::Color::Black); 
	
	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(nCount), MaximumValue(nCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(-nCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CAcolytesRewardCard::CAcolytesRewardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Acolyte's Reward"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT, 
			new AnyCreatureComparer, 
			FALSE,
			Life(0), SourceColor::Null));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcolytesRewardCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAcolytesRewardCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetController()->GetDevotion(CManaCost::Color::White); 
	
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue context(nCount);

	const CCard* pCard = pTargetAction->GetTargetGroup().GetFirstCardSubject();
	pTargetAction->GetTargetGroup().SetValue(pCard, context);

	return true;
}
//____________________________________________________________________________
//
CHeroOfIroasCard::CHeroOfIroasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hero of Iroas"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{   // Aura spells you cast cost 1 less to cast. 
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::_Aura, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{   
		// Heroic start
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeroOfIroasCard::SetTriggerContext));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		// Heroic end
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}

}

// entire SetTriggerContext function is for implementation of Heroic
bool CHeroOfIroasCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CAkroanSkyguardCard::CAkroanSkyguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Akroan Skyguard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkroanSkyguardCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CAkroanSkyguardCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										    CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}
//____________________________________________________________________________
//
CPleaForGuidanceCard::CPleaForGuidanceCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Plea for Guidance"), CardType::Sorcery, nID,
		_T("5") WHITE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("enchantments")),
		ZoneId::Hand, TRUE, TRUE, FALSE) 
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
}

//____________________________________________________________________________
//
CSilentSentinelCard::CSilentSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silent Sentinel"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkroanPhalanxCard::CAkroanPhalanxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Phalanx"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("2") RED_MANA_TEXT,
			Power(+1), Life(+0),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CGlimpseTheSunGodCard::CGlimpseTheSunGodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glimpse the Sun God"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGlimpseTheSunGodCard::OnResolutionCompleted))
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			TRUE, FALSE, // TRUE->Tap
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false)));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGlimpseTheSunGodCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	//Scry 2 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}
//____________________________________________________________________________
//
CGodFavoredGeneralCard::CGodFavoredGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("God-Favored General"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
/*
	Messaging
		Whenever this card, God-Favored General, is untapped in the Action Window 
		the player is asked the standard questions i.e.
			"* put triggered ability of God-Favored General on stack"
		Then in stack window appears, "User put triggered ability of God-Favored General on the stack(God-Favored General)"
		Then in the Action Window the player is asked
			"* Has no more responses"
		and to
			"* Resolves triggered ability of God-Favored General"
			
		After the standard questions are completed then the player is given the choice to			
			"* Passes on using the triggered ability of God-Favored General"
		Choosing the above option means that the player has choosen not to pay 2W.

		If the player wishes to pay the 2W and put the two 1/1 white soldiers onto the battlefield.
		The player must tap 2W worth of mana at this stage. After the mana has been tapped the option
			"* Pays triggered ability cost of God-Favored General" will appear.
		The user must select this option to pay the 2W, then the two 1/1 white soldiers 
		will appear on the battlefield.
*/

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionCost(_T("2") WHITE_MANA_TEXT);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGodFavoredGeneralCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CGodFavoredGeneralCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Soldier Q"), 62070, 2);
	pModifier->ApplyTo(pAction->GetController());
	return true;
}
//____________________________________________________________________________
//
CAerieWorshippersCard::CAerieWorshippersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aerie Worshippers"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(4))
{
/*
	Messaging
		Whenever this card, Aerie Worshippers, is untapped in the Action Window 
		the player is asked the standard questions i.e.
			"* put triggered ability of Aerie Worshippers on stack"
		Then in stack window appears, "User put triggered ability of Aerie Worshippers on the stack(Aerie Worshippers)"
		Then in the Action Window the player is asked
			"* Has no more responses"
		and to
			"* Resolves triggered ability of Aerie Worshippers"
			
		After the standard questions are completed then the player is given the choice to			
			"* Passes on using the triggered ability of Aerie Worshippers"
		Choosing the above option means that the player has choosen not to pay 2U.

		If the player wishes to pay the 2U and put 2/2 blue Bird onto the battlefield.
		The player must tap 2U worth of mana at this stage. After the mana has been tapped the option
			"* Pays triggered ability cost of Aerie Worshippers" will appear.
		The user must select this option to pay the 2U, then the 2/2 blue Bird 
		will appear on the battlefield.
*/

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionCost(_T("2") BLUE_MANA_TEXT);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAerieWorshippersCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CAerieWorshippersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Bird J"), 62071, 1);
	pModifier->ApplyTo(pAction->GetController());
	return true;
}
//____________________________________________________________________________
//
CForlornPseudammaCard::CForlornPseudammaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forlorn Pseudamma"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
/*
	Messaging
		Whenever this card, Forlorn Pseudamma, is untapped in the Action Window 
		the player is asked the standard questions i.e.
			"* put triggered ability of Forlorn Pseudamma on stack"
		Then in stack window appears, "User put triggered ability of Forlorn Pseudamma on the stack(Forlorn Pseudamma)"
		Then in the Action Window the player is asked
			"* Has no more responses"
		and to
			"* Resolves triggered ability of Forlorn Pseudamma"
			
		After the standard questions are completed then the player is given the choice to			
			"* Passes on using the triggered ability of Forlorn Pseudamma"
		Choosing the above option means that the player has choosen not to pay 2B.

		If the player wishes to pay the 2B and put the 2/2 black Zombie onto the battlefield.
		The player must tap 2B worth of mana at this stage. After the mana has been tapped the option
			"* Pays triggered ability cost of Forlorn Pseudamma" will appear.
		The user must select this option to pay the 2B, then the black Zombie 
		will appear on the battlefield.
*/
	GetCreatureKeyword()->AddIntimidate(FALSE);
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CForlornPseudammaCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CForlornPseudammaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Zombie N"), 62072, 1);
	pModifier->ApplyTo(pAction->GetController());
	return true;
}
//____________________________________________________________________________
//
CSatyrNyxSmithCard::CSatyrNyxSmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Nyx-Smith"), CardType::Creature, CREATURE_TYPE2(Satyr, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
/*
	Messaging
		Whenever this card, Satyr Nyx-Smith, is untapped in the Action Window 
		the player is asked the standard questions i.e.
			"* put triggered ability of Satyr Nyx-Smith on stack"
		Then in stack window appears, "User put triggered ability of Satyr Nyx-Smith on the stack(Satyr Nyx-Smith)"
		Then in the Action Window the player is asked
			"* Has no more responses"
		and to
			"* Resolves triggered ability of Satyr Nyx-Smith"
			
		After the standard questions are completed then the player is given the choice to			
			"* Passes on using the triggered ability of Satyr Nyx-Smith"
		Choosing the above option means that the player has choosen not to pay 2R.

		If the player wishes to pay the 2R and put the 3/1 red Elemental onto the battlefield.
		The player must tap 2R worth of mana at this stage. After the mana has been tapped the option
			"* Pays triggered ability cost of Satyr Nyx-Smith" will appear.
		The user must select this option to pay the 2R, then the 3/1 red Elemental 
		will appear on the battlefield.
*/
	GetCreatureKeyword()->AddHaste(FALSE);
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSatyrNyxSmithCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSatyrNyxSmithCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Elemental W"), 62073, 1);
	pModifier->ApplyTo(pAction->GetController());
	return true;
}
//____________________________________________________________________________
//
CPheresBandRaidersCard::CPheresBandRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pheres-Band Raiders"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(5))
{
/*
	Messaging
		Whenever this card, Pheres-Band Raiders, is untapped in the Action Window 
		the player is asked the standard questions i.e.
			"* put triggered ability of Pheres-Band Raiders on stack"
		Then in stack window appears, "User put triggered ability of Pheres-Band Raiders on the stack(Pheres-Band Raiders)"
		Then in the Action Window the player is asked
			"* Has no more responses"
		and to
			"* Resolves triggered ability of Pheres-Band Raiders"
			
		After the standard questions are completed then the player is given the choice to			
			"* Passes on using the triggered ability of Pheres-Band Raiders"
		Choosing the above option means that the player has choosen not to pay 2G.

		If the player wishes to pay the 2G and put the 3/3 green Centaur onto the battlefield.
		The player must tap 2G worth of mana at this stage. After the mana has been tapped the option
			"* Pays triggered ability cost of Pheres-Band Raiders" will appear.
		The user must select this option to pay the 2G, then the 3/3 green Centaur 
		will appear on the battlefield.
*/
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionCost(_T("2") GREEN_MANA_TEXT);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPheresBandRaidersCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CPheresBandRaidersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Centaur D"), 62074, 1);
	pModifier->ApplyTo(pAction->GetController());
	return true;
}
//____________________________________________________________________________
//
CDeepwaterHypnotistCard::CDeepwaterHypnotistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepwater Hypnotist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-0));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClaimOfErebosCard::CClaimOfErebosCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Claim of Erebos"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
			&CClaimOfErebosCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CClaimOfErebosCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	// Add enchant ability 1B, Tap: Target player loses 2 life." 
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T("1") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-2), PreventableType::NotPreventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::NotDealingDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CEpharasRadianceCard::CEpharasRadianceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ephara's Radiance"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
			&CEpharasRadianceCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CEpharasRadianceCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	// Add enchant ability 1W, Tap: You gain 3 life." 
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pEnchantedCard,
			_T("1") WHITE_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CEpiphanyStormCard::CEpiphanyStormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Epiphany Storm"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
			&CEpiphanyStormCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CEpiphanyStormCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	// Add enchant ability R, Tap: Discard a card: Draw a card." 
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pEnchantedCard,
			RED_MANA_TEXT, 1));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetDiscard(1, FALSE, MoveType::Discard);
	
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvanescentIntellectCard::CEvanescentIntellectCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Evanescent Intellect"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
			&CEvanescentIntellectCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CEvanescentIntellectCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	// Add enchant ability "1U, Tap: Target player puts the top three cards of his or her library into his or her graveyard." 
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(pEnchantedCard,
			_T("1") BLUE_MANA_TEXT, 3));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->SetRevealCardsToOthers(true);
	cpEnchantAbility->SetReorder(true, ZoneId::Graveyard);

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrislyTransformationCard::CGrislyTransformationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Grisly Transformation"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Intimidate)
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
CKarametrasFavorCard::CKarametrasFavorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Karametra's Favor"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0))
{
// start draw a card code
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(1);
// end draw a card code 

// start Enchanted creature has "Tap: Add one mana of any color to your mana pool." code 
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarametrasFavorCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarametrasFavorCard::CreateAdditionalAbility2));
	CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarametrasFavorCard::CreateAdditionalAbility3));
	CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarametrasFavorCard::CreateAdditionalAbility4));
	CCardAbilityModifier* pModifier5 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarametrasFavorCard::CreateAdditionalAbility5));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier3);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier4);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier5);
// end Enchanted creature has "Tap: Add one mana of any color to your mana pool." code 
	
	AddAbility(cpAbility.GetPointer()); // draw a card code
}

counted_ptr<CAbility> CKarametrasFavorCard::CreateAdditionalAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKarametrasFavorCard::CreateAdditionalAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKarametrasFavorCard::CreateAdditionalAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKarametrasFavorCard::CreateAdditionalAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKarametrasFavorCard::CreateAdditionalAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COraclesInsightCard::COraclesInsightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Oracle's Insight"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
			&COraclesInsightCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> COraclesInsightCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	// Add enchant ability Tap: Scry 1, then draw a card."
	counted_ptr<CActivatedAbility<CGenericSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pEnchantedCard,
			_T("")));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COraclesInsightCard::BeforeResolution));
	// sample message "TAP: Fire Elemental(5/4): Scry 1, then draw a card. Activates Fire Elemental" 
	cpEnchantAbility->SetAbilityText(_T("Scry 1, then draw a card. Activates"));
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

bool COraclesInsightCard::BeforeResolution(CAbilityAction* pAction)
{
//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(pAction->GetOriginatingCard());

// start draw a card code
	CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pDrawModifier.ApplyTo(pAction->GetController());
// end draw a card code
	return true;
}
//____________________________________________________________________________
//
CFatedRetributionCard::CFatedRetributionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fated Retribution"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFatedRetributionCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CFatedRetributionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (GetGame()->GetActivePlayer() != pAbilityAction->GetController()) return; // if it is not your turn, don't scry
	//Scry 2 start----------------------
	int SCRY_NUMBER = 2;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CFatedInfatuationCard::CFatedInfatuationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fated Infatuation"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFatedInfatuationCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell( 
			::CreateObject<CTargetSpell>(this,  AbilityType::Instant,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

	cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCopyModifier(GetGame(), this));
		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());				
		
	AddSpell(cpSpell.GetPointer());
}

void CFatedInfatuationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (GetGame()->GetActivePlayer() != pAbilityAction->GetController()) return; // if it is not your turn, don't scry
	//Scry 2 start----------------------
	int SCRY_NUMBER = 2;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}
//____________________________________________________________________________
//
CFatedConflagrationCard::CFatedConflagrationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fated Conflagration"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFatedConflagrationCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false), FALSE, 
			Life(-5), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());				
		
	AddSpell(cpSpell.GetPointer());
}

void CFatedConflagrationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (GetGame()->GetActivePlayer() != pAbilityAction->GetController()) return; // if it is not your turn, don't scry
	//Scry 2 start----------------------
	int SCRY_NUMBER = 2;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CFatedReturnCard::CFatedReturnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fated Return"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFatedReturnCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));
	
	//GetCardKeyword()->AddIndestructible(FALSE);		
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());				
		
	AddSpell(cpSpell.GetPointer());
}

void CFatedReturnCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCardKeywordModifier pModifier1 = CCardKeywordModifier(CardKeyword::Indestructible, TRUE, FALSE);
	pModifier1.ApplyTo(pTarget);
	
	if (GetGame()->GetActivePlayer() != pAbilityAction->GetController())	// if it is not your turn, don't scry
		return; 
	//Scry 2 start----------------------
	int SCRY_NUMBER = 2;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CFatedInterventionCard::CFatedInterventionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fated Intervention"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFatedInterventionCard::OnResolutionCompleted))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			_T("Centaur D"), 62074,
			2));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());				
		
	AddSpell(cpSpell.GetPointer());
}

void CFatedInterventionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (GetGame()->GetActivePlayer() != pAbilityAction->GetController()) return; // if it is not your turn, don't scry
	//Scry 2 start----------------------
	int SCRY_NUMBER = 2;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}
//____________________________________________________________________________
//
CSpiritOfTheLabyrinthCard::CSpiritOfTheLabyrinthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spirit of the Labyrinth"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::DrawCardLimit, 1));

	AddAbility(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CFateUnravelerCard::CFateUnravelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fate Unraveler"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Hag), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
/*CSatyrFiredancerCard::CSatyrFiredancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Firedancer"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Satyr), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::DamageEventCallback, 
								 &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);                               // you control
	// Currently this code when an instant or sorcery does damage to any creature or player 
	// Satyr Firedancer deals that much damage to target creature that the opponent controls. 
	// cpAbility->GetTrigger().SetToOpponentsOnly(TRUE); is not restricting Satyr Firedancer ability to trigger 
	// only when the instant/sorcery does damamge to an opponent
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);                                     // damage to an opponent

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);// target creature
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();                         // only include creatures opponent controls

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSatyrFiredancerCard::SetTriggerContext));
	
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSatyrFiredancerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}*/

//____________________________________________________________________________
//
CCourserOfKruphixCard::CCourserOfKruphixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Courser of Kruphix"), CardType::Creature | CardType::GlobalEnchantment, CREATURE_TYPE(Centaur), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCourserOfKruphixCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
	{
		// Play with the top card of your library revealed
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		// You may play the top card of your library if it's a land card.
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromLibraryTop,
			(int)CCardFilter::GetFilter(_T("lands"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void CCourserOfKruphixCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !GetGame()->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
						  GetController()->GetPlayerName(), 
						  GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
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

CEaterOfHopeCard::CEaterOfHopeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Eater of Hope"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	{ // B, sacrifice another creature: Regenerate Eater of Hope
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				BLACK_MANA_TEXT));
		
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{ // 2B, sacrifice two other creatures: Destroy target creature.
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddSacrificeCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*
	To activate Forgestoker Dragon ability
	
	1R: Forgestoker Dragon deals 1 damage to target creature. That creature can't block this combat. 
	    Activate this ability only if Forgestoker Dragon is attacking.
	Player must attack with Forgestoker Dragon, then during the End of Attacker Declaration Phase tap
	1R and select from actions list "Activate Forgestoker Dragon and targets <creature> to deal 1 damage"
	<creature> is now unable to block during this combat.
*/
CForgestokerDragonCard::CForgestokerDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Forgestoker Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable)); 

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier();
	pModifier->GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargetModifier().CCreatureModifiers::Add(pModifier);

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CForgestokerDragonCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CForgestokerDragonCard::CanPlay(BOOL bIncludeTricks)
{
	return (IsAttacking() == TRUE);
}
//____________________________________________________________________________
//
CChargingBadgerCard::CChargingBadgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charging Badger"), CardType::Creature, CREATURE_TYPE(Badger), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.
	
	Pharagax Giant 4R
	Creature — Giant (3/3)
	Tribute 2 (As this creature enters the battlefield, an opponent of your choice may place two +1/+1 counters on it.)
	When Pharagax Giant enters the battlefield, if tribute wasn't paid, Pharagax Giant deals 5 damage to each opponent.
*/
CPharagaxGiantCard::CPharagaxGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pharagax Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPharagaxGiantCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPharagaxGiantCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPharagaxGiantCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CPharagaxGiantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void CPharagaxGiantCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void CPharagaxGiantCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				int iPlayer = 0;
				int PlayerCount = GetGame()->GetPlayerCount();
				CPlayer* pController = GetGame()->GetPlayer(dwContext1);
				while (iPlayer < PlayerCount)                        
				{
					CPlayer* pPlayer = GetGame()->GetPlayer(iPlayer);	
					if (GetGame()->GetPlayer(iPlayer) != pController) // damage all opponents 
					{	
						CLifeModifier* pModifier = new CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
						pModifier->ApplyTo(pPlayer);
					}
					iPlayer++;
				}
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2, false); // Tribute 2
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CPharagaxGiantCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place two +1/+1 counters on Pharagax Giant"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}
//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.	
*/
CFanaticOfXenagosCard::CFanaticOfXenagosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fanatic of Xenagos"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFanaticOfXenagosCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFanaticOfXenagosCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFanaticOfXenagosCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CFanaticOfXenagosCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void CFanaticOfXenagosCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void CFanaticOfXenagosCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				// gets +1/+1 until end of turn
				CPowerModifier* pModifier1 = new CPowerModifier(Power(+1)); // defaults to bOneTurnOnly = TRUE 
				CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
				pModifier1->ApplyTo((CCreatureCard*)this);
				pModifier2->ApplyTo((CCreatureCard*)this);
		
				// gains haste until end of turn
				CCreatureKeywordModifier pModifier3;
				pModifier3.GetModifier().SetToAdd(CreatureKeyword::Haste);
				pModifier3.GetModifier().SetOneTurnOnly(TRUE);
				pModifier3.ApplyTo((CCreatureCard*)this);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 1, false); // Tribute 1
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CFanaticOfXenagosCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place a +1/+1 counter on Fanatic of Xenagos"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

//____________________________________________________________________________
//
CGreatHartCard::CGreatHartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Great Hart"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CRecklessRevelerCard::CRecklessRevelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reckless Reveler"), CardType::Creature, CREATURE_TYPE(Satyr), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRetractionHelixCard::CRetractionHelixCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Retraction Helix"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRetractionHelixCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRetractionHelixCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(pCard,
			_T(""),
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiseToTheChallengeCard::CRiseToTheChallengeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Rise to the Challenge"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CUnravelTheAetherCard::CUnravelTheAetherCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unravel the Aether"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CUnravelTheAetherCard::OnResolutionCompleted))

{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CUnravelTheAetherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pCard->GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	if (bResult) pLibrary->Shuffle();
}

//____________________________________________________________________________
//
CGorgonsHeadCard::CGorgonsHeadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gorgon's Head"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Deathtouch);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrownInSorrowCard::CDrownInSorrowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Drown in Sorrow"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDrownInSorrowCard::OnResolutionCompleted))
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-2),	// power delta
			Life(-2)));	// life delta
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CDrownInSorrowCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
CPainSeerCard::CPainSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pain Seer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPainSeerCard::OnResolutionCompleted))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CPainSeerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
	if (cont->GetZoneById(ZoneId::Library)->GetSize() == 0)  // if library contains no cards
	{
		cont->SetDrawFailed();								 // can not draw a card to put into your hand, so draw has failed
		return;												 // no point continuing
	}
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	int nCost = 0;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer,				  // select by 
		CZoneModifier::RoleType::AllPlayers,				  // reveal to
		NULL,												  // any cards
		ZoneId::Hand,										  // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer,				  // select by this player
		CardPlacement::Top,									  // put selected cards on top
		MoveType::Others,									  // move type
		CZoneModifier::RoleType::PrimaryPlayer);			  // order selected cards by this player

	if (!pNextDraw->GetCardType().IsLand())
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

    CLifeModifier* pModifier1 = new CLifeModifier(Life(-nCost), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1->ApplyTo(cont);
	pModifier->ApplyTo(cont);
}

//____________________________________________________________________________
//
CRagemongerCard::CRagemongerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ragemonger"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false),
			BLACK_MANA_TEXT RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNullifyCard::CNullifyCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Nullify"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::_Aura, false))
{
}

//____________________________________________________________________________
//
/*
	You can choose to search for only one basic land card with Peregrination. 
	If you do, you'll put that card onto the battlefield tapped.
	Source Born of the Gods Release Notes
*/
CPeregrinationCard::CPeregrinationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Peregrination"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CPeregrinationCard::OnResolutionCompleted))
{
	counted_ptr<CKodamasReachSpell> cpSpell(
		::CreateObject<CKodamasReachSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")), ZoneId::Library, ZoneId::Library, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpSpell->SetRevealCards(FALSE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CPeregrinationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
CTempleOfEnlightenmentCard::CTempleOfEnlightenmentCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Enlightenment"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by 
			CZoneModifier::RoleType::PrimaryPlayer,				  // reveal to
			NULL,												  // any cards
			ZoneId::Library,									  // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by this player
			CardPlacement::Bottom,								  // put selected cards on top
			MoveType::Others,									  // move type
			CZoneModifier::RoleType::PrimaryPlayer);			  // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,				  // this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfMaliceCard::CTempleOfMaliceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Malice"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by 
			CZoneModifier::RoleType::PrimaryPlayer,				  // reveal to
			NULL,												  // any cards
			ZoneId::Library,									  // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by this player
			CardPlacement::Bottom,								  // put selected cards on top
			MoveType::Others,									  // move type
			CZoneModifier::RoleType::PrimaryPlayer);			  // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,				  // this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfPlentyCard::CTempleOfPlentyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Plenty"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by 
			CZoneModifier::RoleType::PrimaryPlayer,				  // reveal to
			NULL,												  // any cards
			ZoneId::Library,									  // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,				  // select by this player
			CardPlacement::Bottom,								  // put selected cards on top
			MoveType::Others,									  // move type
			CZoneModifier::RoleType::PrimaryPlayer);			  // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,				  // this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CReapWhatIsSownCard::CReapWhatIsSownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reap What is Sown"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAsphyxiateCard::CAsphyxiateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Asphyxiate"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new UntappedComparer);
}

//____________________________________________________________________________
//
CBileBlightCard::CBileBlightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bile Blight"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBileBlightCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBileBlightCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Target creature and all other creatures with the same name as that creature get -3/-3 until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CBileBlightCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CBileBlightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CPowerModifier modifier1 = CPowerModifier(Power(-3));
	CLifeModifier modifier2 = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(ic));
		if (!pCreature) continue;

		modifier1.ApplyTo(pCreature);
		modifier2.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CBlackOakOfOdunosCard::CBlackOakOfOdunosCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Black Oak of Odunos"), CardType::Creature, CREATURE_TYPE2(Zombie, Treefolk), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(5),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	m_CardFilter.AddComparer(new CardControllerComparer(this));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_pPumpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);
	
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CFelhideBrawlerCard::CFelhideBrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Felhide Brawler"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false));
	{
		//Can't block unless...
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFelhideBrawlerCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CFelhideBrawlerCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CAkroanConscriptorCard::CAkroanConscriptorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Conscriptor"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(2))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CAkroanConscriptorCard::OnResolutionCompleted))
{
	// Heroic start
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkroanConscriptorCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // can not target itself

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(pGame, pModifier1_return, TurnNumberDelta(-1), 
																	NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1->LinkCardModifier(pModifier2);

	cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CAkroanConscriptorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										       CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

void CAkroanConscriptorCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier1;
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);

	pModifier1.ApplyTo((CCreatureCard*)pTarget);

	CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

	pModifier2.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CBoltOfKeranosCard::CBoltOfKeranosCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bolt of Keranos"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CBoltOfKeranosCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, 
			TRUE,							// TRUE->Target players
			Life(-3),						// life delta
			PreventableType::Preventable));	// Preventable?
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CBoltOfKeranosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
CCyclopsOfOneEyedPassCard::CCyclopsOfOneEyedPassCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cyclops of One Eyed-Pass"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(2))
{

}

//____________________________________________________________________________
//

CImpetuousSunchaserCard::CImpetuousSunchaserCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Impetuous Sunchaser"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CFearsomeTemperCard::CFearsomeTemperCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Fearsome Temper"), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		Power(+2), Life(+2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFearsomeTemperCard::OnResolutionCompleted))
	,m_WhenNodeChanged(this, NodeId::CleanupStep1, FALSE)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFearsomeTemperCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CFearsomeTemperCard::CreateAdditionalAbility(CCard* pCard)
{
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CFearsomeTemperCard::OnNodeChanged));
	m_CardFilter.AddNegateComparer(new  ContainedinComparer(&m_AffectedCards));

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CFearsomeTemperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	m_AffectedCards.AddCard(pAbilityAction->GetAssociatedCard(),CardPlacement::Top);
}

void CFearsomeTemperCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
}
//____________________________________________________________________________
//
CKragmaButcherCard::CKragmaButcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kragma Butcher"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
/*
Lightning Volley 3R
Until end of turn, creatures you control gain 
"Tap: This creature deals 1 damage to target creature or player."
Currently "Tap: This creature deals 1 damage to target creature or player." is 
added to creatures but is not being removed.  This code needs to be changed
so ability is removed after end of turn.

CLightningVolleyCard::CLightningVolleyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lightning Volley"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Null));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CLightningVolleyCard::CreateAdditionalAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CLightningVolleyCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}*/
//____________________________________________________________________________
//
CPinnacleOfRageCard::CPinnacleOfRageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Pinnacle of Rage"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,							// allow targeting of players->TRUE
		Life(-3),						// life delta
		PreventableType::Preventable)	// TRUE->Is Preventable
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(2, 2); // must be two targets
}

//____________________________________________________________________________
//
CScouringSandsCard::CScouringSandsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scouring Sands"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CScouringSandsCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			Life(-1),
			new AnyCreatureComparer, FALSE,												// FALSE->don't allow targeting of players
			PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CardControllerComparer(this)); // "your opponents control"
	cpSpell->SetAbilityText(_T("Deal 1 damage to each creature opponents control"));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CScouringSandsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
CStormcallerOfKeranosCard::CStormcallerOfKeranosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stormcaller of Keranos"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLUE_MANA_TEXT));


	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStormcallerOfKeranosCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CStormcallerOfKeranosCard::BeforeResolution(CAbilityAction* pAction)
{
	int SCRY_NUMBER = 1;
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.
*/
CThunderBruteCard::CThunderBruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thunder Brute"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CThunderBruteCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CThunderBruteCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThunderBruteCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CThunderBruteCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void CThunderBruteCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void CThunderBruteCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
				pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);
				pModifier->ApplyTo(this);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 3, false); // Tribute 3
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CThunderBruteCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place three +1/+1 counters on Thunder Brute"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

//____________________________________________________________________________
//
CThunderousMightCard::CThunderousMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thunderous Might"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CThunderousMightCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CThunderousMightCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;


	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	int nPower = pEnchantedCard->GetController()->GetDevotion(CManaCost::Color::Red);
	
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+nPower));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEyeGougeCard::CEyeGougeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Eye Gouge"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CEyeGougeCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->FlagTargets(TRUE,													 // flag targets
						 TRUE);													 // until end of turn

	m_CardFilter.AddComparer(new CardAbilityFlagComparer(cpSpell.GetPointer())); // flagged by this spell

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CEyeGougeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Cyclops), false)); // only destroy Cyclops
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier->ApplyTo(GetController());
}

//____________________________________________________________________________
//
CForsakenDriftersCard::CForsakenDriftersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forsaken Drifters"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CGriffinDreamfinderCard::CGriffinDreamfinderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Griffin Dreamfinder"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COdunosRiverTrawlerCard::COdunosRiverTrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Odunos River Trawler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));  // target enchantment creature card

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false)); // target enchantment creature card
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CServantOfTymaretCard::CServantOfTymaretCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Servant of Tymaret"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3),
		_T("2") BLACK_MANA_TEXT) // regenerate cost
{
	
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CServantOfTymaretCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CServantOfTymaretCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife  = 0;
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
/*
	Pharagax Giant is the reference card for Tribute mechanic.
	
*/
CShrikeHarpyCard::CShrikeHarpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shrike Harpy"), CardType::Creature, CREATURE_TYPE(Harpy), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShrikeHarpyCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShrikeHarpyCard::OnOpponentSelected))
	, m_OnOpponentSCSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShrikeHarpyCard::OnOpponentSCSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShrikeHarpyCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CShrikeHarpyCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID, pAction->GetController());
	return true;
}

void CShrikeHarpyCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	//CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID, (DWORD)pController);
}

void CShrikeHarpyCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
	// choose an opponent that will be required sacrifice a creature
		CPlayer* pController = GetGame()->GetPlayer(dwContext1);
		std::vector<SelectionEntry> entries;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
		{
			CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
			if (pSelectedPlayer != pController)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pSelectedPlayer;
				entry.strText.Format(_T("%s to sacrifice a creature"), pSelectedPlayer->GetPlayerName());
				entries.push_back(entry);
			}
		}
		m_OnOpponentSCSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2, false); // Tribute 2
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CShrikeHarpyCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place two +1/+1 counters on Shrike Harpy"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

/*
	The opponent that will be required to sacrifice a creature has already been selected.  In this
	procedure, if the opponent has more than one creature they must select a creature to sacrifice. 
	If they have one creature it is sacrificed automatically.  For an opponent with no creatures
	nothing happens.

	In the more than one creature case, a dialog box appears listing all the cards the opponent 
	has on the battlefield, only when a creature has been selected the 'OK' button is enabled.
	
	Name is OnOpponentSCSelected which is OnOpponentSacrificeCreatureSelected abbreviated.  
*/
void CShrikeHarpyCard::OnOpponentSCSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
			
			CZoneModifier pModifier2 = CZoneModifier(GetGame(),
				ZoneId::Battlefield, SpecialNumber::All,
				CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			
			pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer,				  // select by 
				CZoneModifier::RoleType::PrimaryPlayer,				  // reveal to
				CCardFilter::GetFilter(_T("creatures")),			  // what cards
				ZoneId::Graveyard,									  // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer,				  // select by this player
				CardPlacement::Top,									  // put selected cards on 
				MoveType::Sacrifice,								  // move type
				CZoneModifier::RoleType::PrimaryPlayer);			  // order selected cards by this player

			CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));
				
			if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 1)  // target player has more than one
																											   // creature, they must select a creature
				pModifier2.ApplyTo(pPlayer);
			else													  // target player has one creature, no need to go through selection process, just
																	  // just sacrifice it automatically.
				pModifier3.ApplyTo(pPlayer);
		}
}

//____________________________________________________________________________
//
CWarchanterOfMogisCard::CWarchanterOfMogisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warchanter of Mogis"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGraverobberSpiderCard::CGraverobberSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graverobber Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);
		
		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGraverobberSpiderCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGraverobberSpiderCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer());
	
	CPowerModifier pModifier1 = CPowerModifier(Power(nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(GET_INTEGER(nDomainCount)));

	pModifier1.ApplyTo((CCreatureCard*)this);
	pModifier2.ApplyTo((CCreatureCard*)this);

	return true;
}

//____________________________________________________________________________
//
/*CHeroOfLeinaTowerCard::CHeroOfLeinaTowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hero of Leina Tower"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshioksAdeptCard::SetTriggerContext));
	// Heroic end
	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);	
	cpAbility->SetAbilityText(_T("Put X +1/+1 counters on. Activates"));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeroOfLeinaTowerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CHeroOfLeinaTowerCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										      CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

bool CHeroOfLeinaTowerCard::BeforeResolution(CAbilityAction* pAction)
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();
	CCardCounterModifier modifier1 = CCardCounterModifier(_T("+1/+1"), nExtra);

	modifier1.ApplyTo(this);

	return true;
}*/

//____________________________________________________________________________
//
CHuntersProwessCard::CHuntersProwessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Hunter's Prowess"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CHuntersProwessCard::CreateAdditionalAbility));

	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));
}

counted_ptr<CAbility> CHuntersProwessCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntersProwessCard::SetTriggerContext));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CHuntersProwessCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CMischiefAndMayhemCard::CMischiefAndMayhemCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Mischief and Mayhem"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(0,2);
}

//____________________________________________________________________________
//
CMortalsResolveCard::CMortalsResolveCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Mortal's Resolve"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
}

//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.
*/
CNessianDemolokCard::CNessianDemolokCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nessian Demolok"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNessianDemolokCard::OnPunisherSelected))
	, m_PlayerSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNessianDemolokCard::OnPlayerSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNessianDemolokCard::OnCardSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNessianDemolokCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNessianDemolokCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CNessianDemolokCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void CNessianDemolokCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void CNessianDemolokCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				// choose the player to destroy target noncreature permanent of.
				CPlayer* pController = GetGame()->GetPlayer(dwContext1);
				Players.RemoveAll();
				std::vector<SelectionEntry> entries;
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					Players.Add(GetGame()->GetPlayer(ip));
					SelectionEntry selectionEntry;
					selectionEntry.dwContext = (DWORD) Players.GetAt(ip);
					// sample message "Destroy computer's noncreature permanent"
					selectionEntry.strText.Format(_T("Destroy %s's noncreature permanent"), Players.GetAt(ip)->GetPlayerName());
					entries.push_back(selectionEntry);
				}
				m_PlayerSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 3, false); // Tribute 3
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CNessianDemolokCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place three +1/+1 counters on Nessian Demolok"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

void CNessianDemolokCard::OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
			CCardFilter m_CardFilter;
			m_CardFilter.AddComparer(new TrueCardComparer);
			m_CardFilter.AddNegateComparer(new AnyCreatureComparer);
			m_CardFilter.SetFilterName(_T("a noncreature permanent"), _T("noncreature permanents"));
			int nCardFnd = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
			if (nCardFnd > 0)
			{
				// choose the target noncreature permanent to destroy.
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < pBattlefield->GetSize(); ++i)
				{
					CCard* pCard = pBattlefield->GetAt(i);

					SelectionEntry entry;

					if (pCard->GetCardType().IsPermanent() && !pCard->GetCardType().IsCreature())
					{
						entry.dwContext = (DWORD)pCard;
						entry.cpAssociatedCard = pCard;
				
						entry.strText.Format(_T("Destroy %s"),
							pCard->GetCardName(TRUE));

						entries.push_back(entry);
					}
				}
				m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}
		}
}

void CNessianDemolokCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s destroys %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
				);
			}
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Others);
			return;
		}
}

//____________________________________________________________________________
//
CPheresBandTromperCard::CPheresBandTromperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pheres-Band Tromper"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRaisedByWolvesCard::CRaisedByWolvesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Raised by Wolves"), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0))
{
	// When Raised by Wolves enters the battlefield, put two 2/2 green Wolf creature tokens onto the battlefield.
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Wolf J"), 62075, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
	
	// Enchanted creature gets +1/+1 for each Wolf you control.
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRaisedByWolvesCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CRaisedByWolvesCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Wolf), false)));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScourgeOfSkolaValeCard::CScourgeOfSkolaValeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scourge of Skola Vale"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("") ));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScourgeOfSkolaValeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}


bool CScourgeOfSkolaValeCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) 
		return false;

	int nCounterCount = pCreature->GetLastKnownToughness();
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nCounterCount, true);

	pModifier.ApplyTo(this);

	return true;
}
//____________________________________________________________________________
//
CSetessanOathswornCard::CSetessanOathswornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Setessan Oathsworn"), CardType::Creature, CREATURE_TYPE2(Satyr, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSetessanOathswornCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CSetessanOathswornCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										       CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CSetessanStarbreakerCard::CSetessanStarbreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Setessan Starbreaker"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Aura, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyreapingCard::CSkyreapingCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Skyreaping"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT,
		Life(0),
		new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pGlobalChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkyreapingCard::BeforeResolution));
}

bool CSkyreapingCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetController()->GetDevotion(CManaCost::Color::Green); 

	if (nCount == 0) 
		return false;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCount;
	pAction->SetValue(Context);	
	
	return true;
}

//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.
*/
CSnakeOfTheGoldenGroveCard::CSnakeOfTheGoldenGroveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snake of the Golden Grove"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSnakeOfTheGoldenGroveCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSnakeOfTheGoldenGroveCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSnakeOfTheGoldenGroveCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSnakeOfTheGoldenGroveCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void CSnakeOfTheGoldenGroveCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void CSnakeOfTheGoldenGroveCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				CPlayer* pController = GetGame()->GetPlayer(dwContext1);
				CLifeModifier pModifier1 = CLifeModifier(Life(4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier1.ApplyTo(pController);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 3, false); // Tribute 3
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void CSnakeOfTheGoldenGroveCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place three +1/+1 counters on Snake of the Golden Grove"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

//____________________________________________________________________________
//
CSwordwiseCentaurCard::CSwordwiseCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Swordwise Centaur"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{

}

//____________________________________________________________________________
//
CKiorasFollowerCard::CKiorasFollowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiora's Follower"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,																				 // bTap, bUntap
			new TrueCardComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CSirenSongLyreCard::CSirenSongLyreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Siren Song Lyre"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSirenSongLyreCard::CreateEquipmentAbility)));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSirenSongLyreCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(pCard,
			_T("2"),
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	cpEquipAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CChorusOfTheTidesCard::CChorusOfTheTidesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chorus of the Tides"), CardType::Creature, CREATURE_TYPE(Siren), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
	// Heroic start
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChorusOfTheTidesCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Heroic end
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
		CZoneModifier::RoleType::PrimaryPlayer,							// select by 
		CZoneModifier::RoleType::PrimaryPlayer,							// reveal to
		NULL,															// any cards
		ZoneId::Library,											    // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer,						    // select by this player
		CardPlacement::Bottom,										    // put selected cards on top
		MoveType::Others,												// move type
		CZoneModifier::RoleType::PrimaryPlayer);					    // order selected cards by this player

	// and finally put the last ones on top of the library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,							// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
	//Scry 1 end----------------------

	CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CChorusOfTheTidesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											  CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}
//____________________________________________________________________________
//
/*
	Pharagax Giant is the reference card for Tribute mechanic.
*/
COrnitharchCard::COrnitharchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ornitharch"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("3") WHITE_MANA_TEXT  WHITE_MANA_TEXT, Power(3), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &COrnitharchCard::OnPunisherSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &COrnitharchCard::OnOpponentSelected))
	, nOpponentPaid(0) // 0->choosen opponent did not pay tribute,
					   // 1->choosen opponent paid tribute
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrnitharchCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool COrnitharchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	nOpponentPaid = 0;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID);
	return true;
}

void COrnitharchCard::PunisherFunction(int PlayerID)
{
	CPlayer* pController = GetGame()->GetPlayer(PlayerID);
	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CPlayer* pSelectedPlayer = GetGame()->GetPlayer(ip);
		if (pSelectedPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pSelectedPlayer;
			entry.strText.Format(_T("%s to pay tribute"), pSelectedPlayer->GetPlayerName());
			entries.push_back(entry);
		}
	}

	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, PlayerID);
}

void COrnitharchCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)								// opponent chooses not pay tribute 
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not pay tribute"), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
// consequence of not paying Tribute code start------			
				CPlayer* pController = GetGame()->GetPlayer(dwContext1);
				CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Bird K"), 62077, 2);
				pModifier->ApplyTo(pController);
// consequence of not paying Tribute code end------
				return;
			}
			else										 // opponent chooses to pay tribute
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays tribute"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentPaid++;                        // keep track of whether chosen opponent paid tribute
// pay Tribute code start------		
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2, false); // Tribute 2
				pModifier.ApplyTo((CCard*)this);
// pay Tribute code end--------	
				return;
			}
		}
}

void COrnitharchCard::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	int PlayerID = dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = (CPlayer*)it->dwContext;
			std::vector<SelectionEntry> entries;            // opponent player chose not to pay tribute
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("does not pay tribute"));
				entries.push_back(selectionEntry);
			}
			{                                               // opponent player chose to pay tribute i.e. put +1/+1 counters on this creature.
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("pay tribute, place two +1/+1 counters on Ornitharch"));
				entries.push_back(selectionEntry);
			}
			m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
		}
}

//____________________________________________________________________________
//
CEliteSkirmisherCard::CEliteSkirmisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elite Skirmisher"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(1))
{
	// Heroic start
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEliteSkirmisherCard::SetTriggerContext));
	// Heroic end
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CEliteSkirmisherCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
										      CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

//____________________________________________________________________________
//
CMeletisAstronomerCard::CMeletisAstronomerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meletis Astronomer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
	// Heroic start
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMeletisAstronomerCard::SetTriggerContext));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	// Heroic end
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMeletisAstronomerCard::BeforeResolution));		
	AddAbility(cpAbility.GetPointer());
}

// entire SetTriggerContext function is for implementation of Heroic
bool CMeletisAstronomerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											   CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard))
		return true;
	else 
		return false;
}

bool CMeletisAstronomerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, 3, CZoneModifier::RoleType::PrimaryPlayer,
											 CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pmodifier2.AddSelection(MinimumValue(0), MaximumValue(1),				// select cards to reorder
							CZoneModifier::RoleType::PrimaryPlayer,			// select by 
							CZoneModifier::RoleType::AllPlayers,			// reveal to
							&m_CardFilter_temp,								// what cards
							ZoneId::Hand,									// if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer,			// select by this player
							CardPlacement::Top,								// put selected cards on 
							MoveType::Others,								// move type
							CZoneModifier::RoleType::PrimaryPlayer);		// order selected cards by this player
	pmodifier2.SetReorderInformation(true, 
									 ZoneId::Library,	
									 CZoneModifier::RoleType::PrimaryPlayer,// this player's library
									 CardPlacement::Bottom);
	pmodifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSphinxsDiscipleCard::CSphinxsDiscipleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx's Disciple"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSuddenStormCard::CSuddenStormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sudden Storm"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CSuddenStormCard::OnResolutionCompleted))
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				TRUE, FALSE,										// Tap, Untap
				new CardTypeComparer(CardType::Creature, false)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	AddSpell(cpSpell.GetPointer());
}

void CSuddenStormCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	//Scry 1 start----------------------
	int SCRY_NUMBER = 1;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SCRY_NUMBER), MaximumValue(SCRY_NUMBER));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(SCRY_NUMBER), // select cards to bottom
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
CThassasRebuffCard::CThassasRebuffCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thassa's Rebuff"), CardType::Instant, nID)
{
	{
		counted_ptr<CThassasRebuffAbility> cpSpell(
			::CreateObject<CThassasRebuffAbility>(this, _T("1") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}

CThassasRebuffCard::CThassasRebuffAbility::CThassasRebuffAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CThassasRebuffCard::CThassasRebuffAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	int SymDevotionCnt = pPlayer->GetDevotion(CManaCost::Color::Blue);
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, SymDevotionCnt);
	CCost& newCost = this->GetDenialCost();
	newCost.SetManaCost(mCost.ToString());
	return newCost;
}

//____________________________________________________________________________
//
CWhelmingWaveCard::CWhelmingWaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whelming Wave"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));
	//cpSpell->
	//cpSpell->GetGlobalCardFilter().AddComparer(new CardFlagComparer(CardFlag::_DealtDamage, false));
	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Kraken) | CREATURE_TYPE(Octopus) | CREATURE_TYPE(Serpent), false));
	//new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Kraken) | CREATURE_TYPE(Octopus) | CREATURE_TYPE(Serpent), false)),
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CExcoriateCard::CExcoriateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Excoriate"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CHoldAtBayCard::CHoldAtBayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hold at Bay"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(7), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMortalsArdorCard::CMortalsArdorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Mortal's Ardor"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
}

//____________________________________________________________________________
//
CPillarOfWarCard::CPillarOfWarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pillar of War"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(3), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	{
		// Pillar of War is enchanted, it can attack as though it didn't have defender.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Pillar of War is NOT enchanted, it can not attack because it has defender.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::DefenderMayAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunbondCard::CSunbondCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Sunbond"), CardType::EnchantCreature, nID,
		_T("3") WHITE_MANA_TEXT, new AnyCreatureComparer)		
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunbondCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSunbondCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSunbondCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	CCard* pCardEnchantedOn = m_pEnchantSpell->GetEnchantedOnCard();	// pCardEnchantedOn stores card that Sunbond is enchanting
	triggerContext.nValue1 = 0;											// nValue1 contains amount of life gain
	if (!pCardEnchantedOn)												
		return false;
	triggerContext.nValue2 = (DWORD)pCardEnchantedOn;					// nValue2 contains card Sunbond is enchanting
	if (nToLife > nFromLife)											// only use "positive" life gain to determine number of counters to add
	{
		triggerContext.nValue1 = GET_INTEGER(nToLife - nFromLife);			 
		return true;
	}
	return false;
}

bool CSunbondCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCardEnchantedOn = (CCard*)pAction->GetTriggerContext().nValue2;
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (!pCardEnchantedOn->IsInplay()) 
		return true;

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1);
	pModifier.ApplyTo(pCardEnchantedOn);
	
	return true;
}

//____________________________________________________________________________
//
CCrypsisCard::CCrypsisCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Crypsis"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CCrypsisCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

void CCrypsisCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();						   // card targeted by this instant spell

	m_CardFilter.RemoveAllComparers();										   // had to declare m_CardFilter outside CCrypsisCard it was causing
																			   // a game engine exception.
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CardControllerComparer(this));		   // creatures you opponents control, ie not creatures you control. 
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);	   // bToTap = FALSE, ie Untap
	
	if (bResult) 
	{
		pCard->GetCardKeyword()->AddSpecialProtection(TRUE, &m_CardFilter);	   // TRUE->this turn only
		pModifier.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CSearingBloodCard::CSearingBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Searing Blood"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSearingBloodCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSearingBloodCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	pSubjects.AddCard(pTarget, CardPlacement::Top);
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier1.ApplyTo(pTarget);
	
	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("Searing Blood Effect"), 61137, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CFallOfTheHammerCard::CFallOfTheHammerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fall of the Hammer"), CardType::Instant, nID)
{
	counted_ptr<CSoulsFireSpell> cpSpell(
		::CreateObject <CSoulsFireSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CFallOfTheHammerCard::CSoulsFireSpell::CSoulsFireSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,	//false->do not allow player targets
		new AnyCreatureComparer, false, //false->do not allow player targets
		_T(""), true)					//true->target another creature (do not allow the same target for both parts of the spell)
{
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CFallOfTheHammerCard::CSoulsFireSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
														 const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) 
		return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	
	if (!pCreature1) 
		return;

	CLifeModifier modifier = CLifeModifier(Life(-GET_INTEGER(pCreature1->GetPower())),
										   pCreature1, PreventableType::Preventable, DamageType::NonCombatDamage);
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		if (pCreature2) 
			modifier.ApplyTo(pCreature2);
	}
	else 
		if (pPContainer2.GetSize()) modifier.ApplyTo(pPContainer2.GetAt(0));
}

//____________________________________________________________________________
//