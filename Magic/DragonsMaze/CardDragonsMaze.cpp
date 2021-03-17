#include "stdafx.h"
#include "CardDragonsMaze.h"

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
		DEFINE_CARD(CAdventOfTheWurmCard);
		DEFINE_CARD(CAEtherlingCard);
		DEFINE_CARD(CAliveWellCard);
		DEFINE_CARD(CArmedDangerousCard);
		DEFINE_CARD(CArmoredWolfRiderCard);
		DEFINE_CARD(CAscendedLawmageCard);
		DEFINE_CARD(CAweForTheGuildsCard);
		DEFINE_CARD(CAzoriusCluestoneCard);
		DEFINE_CARD(CBaneAlleyBlackguardCard);
		DEFINE_CARD(CBatteringKrasisCard);
		DEFINE_CARD(CBeckCallCard);
		DEFINE_CARD(CBeetleformMageCard);
		DEFINE_CARD(CBlastOfGeniusCard);
		DEFINE_CARD(CBorosCluestoneCard);
		DEFINE_CARD(CBorosMastiffCard);
		DEFINE_CARD(CBreakingEnteringCard);
		DEFINE_CARD(CBredForTheHuntCard);
		DEFINE_CARD(CBronzebeakMoaCard);
		DEFINE_CARD(CCarnageGladiatorCard);
		DEFINE_CARD(CCatchReleaseCard);
		DEFINE_CARD(CClearAPathCard);
		DEFINE_CARD(CCryptIncursionCard);
		DEFINE_CARD(CDeadbridgeChantCard);
		DEFINE_CARD(CDebtToTheDeathlessCard);
		DEFINE_CARD(CDeputyOfAcquittalsCard);
		DEFINE_CARD(CDimirCluestoneCard);
		DEFINE_CARD(CDownDirtyCard);
		DEFINE_CARD(CDrownInFilthCard);
		DEFINE_CARD(CEmmaraTandrisCard);
		DEFINE_CARD(CExavaRakdosBloodWitchCard);
		DEFINE_CARD(CFarAwayCard);
		DEFINE_CARD(CFatalFumesCard);
		DEFINE_CARD(CFluxchargerCard);
		DEFINE_CARD(CGazeOfGraniteCard);
		DEFINE_CARD(CGiveTakeCard);
		DEFINE_CARD(CGleamOfBattleCard);
		DEFINE_CARD(CGolgariCluestoneCard);
		DEFINE_CARD(CGruulCluestoneCard);
		DEFINE_CARD(CGruulWarChantCard);
		DEFINE_CARD(CHaazdaSnareSquadCard);
		DEFINE_CARD(CHaunterOfNightveilCard);
		DEFINE_CARD(CHiddenStringsCard);
		DEFINE_CARD(CHiredTorturerCard);
		DEFINE_CARD(CIzzetCluestoneCard);
		DEFINE_CARD(CJelennSphinxCard);
		DEFINE_CARD(CKorozdaGorgonCard);
		DEFINE_CARD(CKraulWarriorCard);
		DEFINE_CARD(CLaviniaOfTheTenthCard);
		DEFINE_CARD(CLegionsInitiativeCard);
		DEFINE_CARD(CLyevDecreeCard);
		DEFINE_CARD(CMawOfTheObzedatCard);
		DEFINE_CARD(CMazeAbominationCard);
		DEFINE_CARD(CMazeBehemothCard);
		DEFINE_CARD(CMazeGliderCard);
		DEFINE_CARD(CMazeRusherCard);
		DEFINE_CARD(CMazeSentinelCard);
		DEFINE_CARD(CMazesEndCard);
		DEFINE_CARD(CMelekIzzetParagonCard);
		DEFINE_CARD(CMendingTouchCard);
		DEFINE_CARD(CMindstaticCard);
		DEFINE_CARD(CMirkoVoskMindDrinkerCard);
		DEFINE_CARD(CMorgueBurstCard);
		DEFINE_CARD(CMurmuringPhantasmCard);
		DEFINE_CARD(CMutantsPreyCard);
		DEFINE_CARD(CNivixCyclopsCard);
		DEFINE_CARD(CObzedatsAidCard);
		DEFINE_CARD(COpalLakeGatekeepersCard);
		DEFINE_CARD(COrzhovCluestoneCard);
		DEFINE_CARD(CPhytoburstCard);
		DEFINE_CARD(CPilferedPlansCard);
		DEFINE_CARD(CPlasmCaptureCard);
		DEFINE_CARD(CPontiffOfBlightCard);
		DEFINE_CARD(CProfitLossCard);
		DEFINE_CARD(CProtectServeCard);
		DEFINE_CARD(CPunishTheEnemyCard);
		DEFINE_CARD(CRakdosCluestoneCard);
		DEFINE_CARD(CRakdosDrakeCard);
		DEFINE_CARD(CRalZarekCard);
		DEFINE_CARD(CReadyWillingCard);
		DEFINE_CARD(CReapIntellectCard);
		DEFINE_CARD(CRenderSilentCard);
		DEFINE_CARD(CRenegadeKrasisCard);
		DEFINE_CARD(CRenounceTheGuildsCard);
		DEFINE_CARD(CRestoreThePeaceCard);
		DEFINE_CARD(CRiotControlCard);
		DEFINE_CARD(CRiotPikerCard);
		DEFINE_CARD(CRubblebeltMaakaCard);
		DEFINE_CARD(CRuricTharTheUnbowedCard);
		DEFINE_CARD(CSaruliGatekeepersCard);
		DEFINE_CARD(CSavagebornHydraCard);
		DEFINE_CARD(CScionOfVituGhaziCard);
		DEFINE_CARD(CSelesnyaCluestoneCard);
		DEFINE_CARD(CSimicCluestoneCard);
		DEFINE_CARD(CSinCollectorCard);
		DEFINE_CARD(CSinisterPossessionCard);
		DEFINE_CARD(CSireOfInsanityCard);
		DEFINE_CARD(CSkylasherCard);
		DEFINE_CARD(CSmeltWardGatekeepersCard);
		DEFINE_CARD(CSpeciesGorgerCard);
		DEFINE_CARD(CSpikeJesterCard);
		DEFINE_CARD(CSteepleRocCard);
		DEFINE_CARD(CSunspireGatekeepersCard);
		DEFINE_CARD(CTajicBladeOfTheLegionCard);
		DEFINE_CARD(CTeysaEnvoyOfGhostsCard);
		DEFINE_CARD(CThrashingMossdogCard);
		DEFINE_CARD(CTitheDrinkerCard);
		DEFINE_CARD(CToilTroubleCard);
		DEFINE_CARD(CTrostanisSummonerCard);
		DEFINE_CARD(CUbulSarGatekeepersCard);
		DEFINE_CARD(CUncoveredCluesCard);
		DEFINE_CARD(CUnflinchingCourageCard);
		DEFINE_CARD(CViashinoFirstbladeCard);
		DEFINE_CARD(CVoiceOfResurgenceCard);
		DEFINE_CARD(CVorelOfTheHullCladeCard);
		DEFINE_CARD(CWakeTheReflectionsCard);
		DEFINE_CARD(CWarleadersHelixCard);
		DEFINE_CARD(CWarpedPhysiqueCard);
		DEFINE_CARD(CWeaponSurgeCard);
		DEFINE_CARD(CWearTearCard);
		DEFINE_CARD(CWoodlotCrawlerCard);
		DEFINE_CARD(CZhurTaaAncientCard);
		DEFINE_CARD(CZhurTaaDruidCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CRuricTharTheUnbowedCard::CRuricTharTheUnbowedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ruric Thar, the Unbowed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRuricTharTheUnbowedCard::SetTriggerContext));		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRuricTharTheUnbowedCard::BeforeResolution));		

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CRuricTharTheUnbowedCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.nValue1 = (DWORD)pCard->GetController();
		return true;
}

bool CRuricTharTheUnbowedCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;

	CLifeModifier pModifier = CLifeModifier(Life(-6), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pPlayer);
	
	return true;
}

//____________________________________________________________________________
//
CMazesEndCard::CMazesEndCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Maze's End"), nID)
	, m_CardFilter(_T("a Gate"), _T("Gates"), new CardTypeComparer(CardType::Gate, false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CMazesEndCard::OnResolutionCompleted))
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("3"), 
				&m_CardFilter, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddReturnThisCardCost(this);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CMazesEndCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pGates;

	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if ((pCard->GetCardType() & CardType::Gate).Any())
		{
			bool bSame = false;

			for (int j = 0; j < pGates.GetSize(); ++j)
			{
				CCard* pGate = pGates.GetAt(j);
				if (pGate->GetPrintedCardName() == pCard->GetPrintedCardName())
				{
					bSame = true;
					break;
				}
			}

			if (!bSame)
				pGates.AddCard(pCard, CardPlacement::Top);
		}
	}

	if (pGates.GetSize() >= 10)
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (GetGame()->GetPlayer(ip) != pController)
				GetGame()->GetPlayer(ip)->SetLostByOtherReasons();
}

//____________________________________________________________________________
//
CBeckCallCard::CBeckCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beck // Call"), CardType::Sorcery, nID)
{
	{
		//Beck
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery, 
				GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeckCallCard::BeforeResolution));
		
		cpSpell->SetAbilityText(_T("Beck. Casts"));
		cpSpell->SetAbilityName(_T("Beck"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Call
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Bird G"), 2732,
				4));

		cpSpell->SetAbilityText(_T("Call. Casts"));
		cpSpell->SetAbilityName(_T("Call"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Beck & Call
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Bird G"), 2732,
				4));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeckCallCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Beck and Call. Casts"));
		cpSpell->SetAbilityName(_T("Beck and Call"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CBeckCallCard::BeforeResolution(CAbilityAction* pAction)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Beck Effect"), 61116, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDeputyOfAcquittalsCard::CDeputyOfAcquittalsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deputy of Acquittals"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRenderSilentCard::CRenderSilentCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Render Silent"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRenderSilentCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CRenderSilentCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = pAbilityAction->GetAssociatedCard()->GetController();

	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::CantPlaySpells);
	CScheduledPlayerModifier pModifier2 = CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);
		
	if (bResult)
	{
		pModifier1->ApplyTo(pPlayer);
		pModifier2.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CAdventOfTheWurmCard::CAdventOfTheWurmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Advent of the Wurm"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
			_T("Wurm F"), 2750,
			1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________________
//
CMelekIzzetParagonCard::CMelekIzzetParagonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Melek, Izzet Paragon"), CardType::_LegendaryCreature, CREATURE_TYPE2(Weird, Wizard), nID,
		_T("4") BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMelekIzzetParagonCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);

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
			(int)CCardFilter::GetFilter(_T("instant cards or sorcery cards"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Library, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMelekIzzetParagonCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

void CMelekIzzetParagonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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

bool CMelekIzzetParagonCard::SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						triggerContext.m_pStackAction = const_cast<CStackAbilityAction*>(stack.GetStackAction(l).GetPointer());
						if (triggerContext.m_pStackAction->IsSpell() && (triggerContext.m_pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}
	return true;
}

//____________________________________________________________________________
//
CRalZarekCard::CRalZarekCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Ral Zarek"), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Ral, 4)
	, nFlipCount(0)
	, nHeadsCount(0)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRalZarekCard::OnFlipSelected))
{
	{
		counted_ptr<CActivatedAbility<CDoubleTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetSpell>>(this,
				_T(""),
				new TrueCardComparer, false, 
				new TrueCardComparer, false, _T(""), TRUE));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRalZarekCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());			
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRalZarekCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRalZarekCard::BeforeResolution1(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

	if (pTarget1)
		pModifier1.ApplyTo(pTarget1);

	if (pTarget2)
		pModifier2.ApplyTo(pTarget2);

	return true;
}

bool CRalZarekCard::BeforeResolution2(CAbilityAction* pAction)
{
	nFlipCount = 0;
	nHeadsCount = 0;

	FlipCoin(pAction->GetController());

	return true;
}

void CRalZarekCard::FlipCoin(CPlayer* pController)
{
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
		strMessage.Format(_T("%s flips heads"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		nFlipCount++;
		nHeadsCount++;

		if (nFlipCount < 5)
			FlipCoin(pController);
		else
			Finale(pController);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s flips tails"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		nFlipCount++;

		if (nFlipCount < 5)
			FlipCoin(pController);
		else
			Finale(pController);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("flip heads"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("flip tails"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
}

void CRalZarekCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s flips heads"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nFlipCount++;
				nHeadsCount++;

				if (nFlipCount < 5)
					FlipCoin(pSelectionPlayer);
				else
					Finale(pSelectionPlayer);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s flips tails"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nFlipCount++;

				if (nFlipCount < 5)
					FlipCoin(pSelectionPlayer);
				else
					Finale(pSelectionPlayer);
				
				return;
			}
		}
}

void CRalZarekCard::Finale(CPlayer* pController)
{
	if (!m_pGame->IsThinking())
	{
		CString strMessage;
		if (nHeadsCount == 0)
			strMessage.Format(_T("%s gets no extra turns"), pController->GetPlayerName());
		else if (nHeadsCount == 1)
			strMessage.Format(_T("%s gets 1 extra turn"), pController->GetPlayerName());
		else
			strMessage.Format(_T("%s gets %d extra turns"), pController->GetPlayerName(), (int)nHeadsCount);
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
	}

	CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);

	for (int i = 0; i < nHeadsCount; ++i)
		pModifier->ApplyTo(pController);
}

//____________________________________________________________________________
//
CToilTroubleCard::CToilTroubleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Toil // Trouble"), CardType::Sorcery, nID)
{
	{
		//Toil
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT, 
			2));

		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(
			new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpSpell->SetAbilityText(_T("Toil. Casts"));
		cpSpell->SetAbilityName(_T("Toil"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Trouble
		counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
			::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				ZoneId::Hand, FALSE,
				new TrueCardComparer, PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Trouble. Casts"));
		cpSpell->SetAbilityName(_T("Trouble"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Toil & Trouble
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				FALSE_CARD_COMPARER, true,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CToilTroubleCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Toil and Trouble. Casts"));
		cpSpell->SetAbilityName(_T("Toil and Trouble"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CToilTroubleCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CPlayer* pTarget1 = (CPlayer*)pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject();
	CPlayer* pTarget2 = (CPlayer*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();
	
	if (pTarget1)
	{
		CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
		CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTarget1);
		pModifier2.ApplyTo(pTarget1);
	}

	if (pTarget2)
	{
		int nHand = pTarget2->GetZoneById(ZoneId::Hand)->GetSize();

		CLifeModifier pModifier3 = CLifeModifier(Life(-nHand), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		pModifier3.ApplyTo(pTarget2);
	}

	return true;
}

//____________________________________________________________________________
//
CSinCollectorCard::CSinCollectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sin Collector"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSinCollectorCard::OnCardSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSinCollectorCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSinCollectorCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pTarget);
	
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));

	if (m_CardFilter.CountIncluded(pHand->GetCardContainer()) > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.ApplyTo(pTarget);

		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			if (pCard->GetCardType().IsInstant() || pCard->GetCardType().IsSorcery())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Exile %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CSinCollectorCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s exiles %s from %s's hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);

			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CVorelOfTheHullCladeCard::CVorelOfTheHullCladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vorel of the Hull Clade"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Merfolk), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			GREEN_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false), FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCounterMultiplyModifier(2));

	cpAbility->AddTapCost();
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWearTearCard::CWearTearCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wear // Tear"), CardType::Instant, nID)
{
	{
		//Wear
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Wear. Casts"));
		cpSpell->SetAbilityName(_T("Wear"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Tear
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Tear. Casts"));
		cpSpell->SetAbilityName(_T("Tear"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Wear & Tear
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false), false,
				new CardTypeComparer(CardType::_Enchantment, false), false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWearTearCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Wear and Tear. Casts"));
		cpSpell->SetAbilityName(_T("Wear and Tear"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CWearTearCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
		
	if (pTarget1)
		pModifier.ApplyTo(pTarget1);

	if (pTarget2)
		pModifier.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
COpalLakeGatekeepersCard::COpalLakeGatekeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Opal Lake Gatekeepers"), CardType::Creature, CREATURE_TYPE2(Vedalken, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
										&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COpalLakeGatekeepersCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COpalLakeGatekeepersCard::BeforeResolution));
		
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool COpalLakeGatekeepersCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool COpalLakeGatekeepersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CExavaRakdosBloodWitchCard::CExavaRakdosBloodWitchCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Exava, Rakdos Blood Witch"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CExavaRakdosBloodWitchCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void CExavaRakdosBloodWitchCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CRenounceTheGuildsCard::CRenounceTheGuildsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Renounce the Guilds"), CardType::Instant, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			1,
			new CardMulticoloredComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSaruliGatekeepersCard::CSaruliGatekeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saruli Gatekeepers"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
										&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSaruliGatekeepersCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSaruliGatekeepersCard::BeforeResolution));
		
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSaruliGatekeepersCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSaruliGatekeepersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CSmeltWardGatekeepersCard::CSmeltWardGatekeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Smelt-Ward Gatekeepers"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CSmeltWardGatekeepersCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1->LinkCardModifier(pModifier2);

	cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSmeltWardGatekeepersCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSmeltWardGatekeepersCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CSmeltWardGatekeepersCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSmeltWardGatekeepersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

void CSmeltWardGatekeepersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier1;
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);

	pModifier1.ApplyTo(pTarget);

	CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

	pModifier2.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CArmedDangerousCard::CArmedDangerousCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Armed // Dangerous"), CardType::Sorcery, nID)
{
	{
		//Armed
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Armed. Casts"));
		cpSpell->SetAbilityName(_T("Armed"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Dangerous
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Lure, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Dangerous. Casts"));
		cpSpell->SetAbilityName(_T("Dangerous"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Armed & Dangerous
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArmedDangerousCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Armed and Dangerous. Casts"));
		cpSpell->SetAbilityName(_T("Armed and Dangerous"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CArmedDangerousCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCreatureCard* pTarget1 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCreatureCard* pTarget2 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	if (pTarget1)
	{
		CPowerModifier pModifier1 = CPowerModifier(Power(+1));
		CLifeModifier pModifier2 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		CCreatureKeywordModifier pModifier3 = CCreatureKeywordModifier(CreatureKeyword::DoubleStrike, TRUE);

		pModifier1.ApplyTo(pTarget1);
		pModifier2.ApplyTo(pTarget1);
		pModifier3.ApplyTo(pTarget1);
	}

	if (pTarget2)
	{
		CCreatureKeywordModifier pModifier4 = CCreatureKeywordModifier(CreatureKeyword::Lure, TRUE);
		pModifier4.ApplyTo(pTarget2);
	}

	return true;
}

//____________________________________________________________________________
//
CLaviniaOfTheTenthCard::CLaviniaOfTheTenthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lavinia of the Tenth"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLaviniaOfTheTenthCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CLaviniaOfTheTenthCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(5));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CDetainModifier()));
			
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
			pModifier.ApplyTo(pPlayer);
	}

	return true;
}

//____________________________________________________________________________
//
CSunspireGatekeepersCard::CSunspireGatekeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunspire Gatekeepers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
										&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Knight D"), 2967, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunspireGatekeepersCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSunspireGatekeepersCard::BeforeResolution));
		
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CSunspireGatekeepersCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CSunspireGatekeepersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CTeysaEnvoyOfGhostsCard::CTeysaEnvoyOfGhostsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teysa, Envoy of Ghosts"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("5") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CTeysaEnvoyOfGhostsCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("creatures")));

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTeysaEnvoyOfGhostsCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
	AddAbility(cpAbility.GetPointer());
}

bool CTeysaEnvoyOfGhostsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage)
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;

	else triggerContext.m_pCard = pCard;

	return TRUE;
}

void CTeysaEnvoyOfGhostsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit C"), 2815, 1);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CUbulSarGatekeepersCard::CUbulSarGatekeepersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ubul Sar Gatekeepers"), CardType::Creature, CREATURE_TYPE2(Zombie, Soldier), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
										&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUbulSarGatekeepersCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUbulSarGatekeepersCard::BeforeResolution));
		
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CUbulSarGatekeepersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

bool CUbulSarGatekeepersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Gates"))->CountIncluded(pInplay->GetCardContainer()) > 1);
}

//____________________________________________________________________________
//
CBreakingEnteringCard::CBreakingEnteringCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Breaking // Entering"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CBreakingEnteringCard::OnResolutionCompleted))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBreakingEnteringCard::OnCardSelected))
{
	{
		//Breaking
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				8));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		cpSpell->SetAbilityText(_T("Breaking. Casts"));
		cpSpell->SetAbilityName(_T("Breaking"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entering
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityText(_T("Entering. Casts"));
		cpSpell->SetAbilityName(_T("Entering"));
		
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Breaking & Entering
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				8));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		cpSpell->SetHandOnly();
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityText(_T("Breaking and Entering. Casts"));
		cpSpell->SetAbilityName(_T("Breaking and Entering"));
		AddSpell(cpSpell.GetPointer());
 	}
}

void CBreakingEnteringCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();

	int nCreatures = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCreatures += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	if (nCreatures > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

			for (int i = 0; i < pGraveyard->GetSize(); ++i)
			{
				CCard* pCard = pGraveyard->GetAt(i);

				if (pCard->GetCardType().IsCreature())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					if (pPlayer == pController)
						entry.strText.Format(_T("Return %s from your graveyard to the battlefield"),
							pCard->GetCardName(TRUE));
					else
						entry.strText.Format(_T("Return %s from %s's graveyard onto the battlefield under your control"),
							pCard->GetCardName(TRUE), pPlayer->GetPlayerName());

					entries.push_back(entry);
				}
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
}

void CBreakingEnteringCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCreature = (CCreatureCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (pCreature->GetOwner() == pSelectionPlayer)
					strMessage.Format(_T("%s returns %s from his graveyard onto the battlefield"), pSelectionPlayer->GetPlayerName(), pCreature->GetCardName(TRUE));
				else
					strMessage.Format(_T("%s returns %s from %s's graveyard onto the battlefield under his control"), pSelectionPlayer->GetPlayerName(), pCreature->GetCardName(TRUE), pCreature->GetOwner()->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pCreature->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);

			if (pCreature->IsInplay())
			{
				CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
				pModifier.ApplyTo(pCreature);
			}

			return;
		}
}

//____________________________________________________________________________
//
CSireOfInsanityCard::CSireOfInsanityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sire of Insanity"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSireOfInsanityCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSireOfInsanityCard::BeforeResolution(CAbilityAction* pAction)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CTrostanisSummonerCard::CTrostanisSummonerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trostani's Summoner"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Rhino"), 2749, 1);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Knight D"), 2967, 1));
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Centaur A"), 2790, 1));
	
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZhurTaaAncientCard::CZhurTaaAncientCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhur-Taa Ancient"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZhurTaaAncientCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}

bool CZhurTaaAncientCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
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

bool CZhurTaaAncientCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CMirkoVoskMindDrinkerCard::CMirkoVoskMindDrinkerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mirko Vosk, Mind Drinker"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMirkoVoskMindDrinkerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMirkoVoskMindDrinkerCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CMirkoVoskMindDrinkerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const
{
	triggerContext.nValue1 = (int)pPlayer;
	return true;
}

bool CMirkoVoskMindDrinkerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	int nLands = 0;
	int nLibrarySize = pLibrary->GetSize();
	int nPosition = nLibrarySize - 1;
	int nValue = 0;

	while ((nLands < 4) && (nPosition >= 0))
	{
		CCard* pCard = pLibrary->GetAt(nPosition);
		if (pCard->GetCardType().IsLand())
			nLands++;
		nPosition--;
		nValue++;
	}

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nValue, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
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
CBredForTheHuntCard::CBredForTheHuntCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bred for the Hunt"), CardType::GlobalEnchantment, nID, 
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CardCounterComparer<std::greater<int>>(_T("+1/+1"), 0));
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFarAwayCard::CFarAwayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Far // Away"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFarAwayCard::OnCardSelected))
{
	{
		//Far
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Far. Casts"));
		cpSpell->SetAbilityName(_T("Far"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Away
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,					
				_T("2") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFarAwayCard::BeforeResolution1));

		cpSpell->SetAbilityText(_T("Away. Casts"));
		cpSpell->SetAbilityName(_T("Away"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Far & Away
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false,
				FALSE_CARD_COMPARER, true,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFarAwayCard::BeforeResolution2));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Far and Away. Casts"));
		cpSpell->SetAbilityName(_T("Far and Away"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CFarAwayCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	
	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}

	return true;
}

bool CFarAwayCard::BeforeResolution2(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CPlayer* pTarget2 = (CPlayer*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();
	
	if (pTarget1)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pAction->GetController());
		pModifier1.ApplyTo(pTarget1);
	}
	
	if (pTarget2)
	{
		CZone* pBattlefield = pTarget2->GetZoneById(ZoneId::Battlefield);
	
		if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard->GetCardType().IsCreature())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Sacrifice %s"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget2);
		}
	}
	return true;
}

void CFarAwayCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
				
			return;
		}
}

//____________________________________________________________________________
//
CObzedatsAidCard::CObzedatsAidCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Obzedat's Aid"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Permanent, false),
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CRenegadeKrasisCard::CRenegadeKrasisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Renegade Krasis"), CardType::Creature, CREATURE_TYPE2(Beast, Mutant), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRenegadeKrasisCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRenegadeKrasisCard::BeforeResolution1));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRenegadeKrasisCard::BeforeResolution2));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CRenegadeKrasisCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CRenegadeKrasisCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if ((pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife())) return false;

	if (!IsInplay() || !GetCardKeyword()->HasCantGetCounters()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(this);

	CSpecialEffectModifier pModifier2 = CSpecialEffectModifier(this, 1);
	pModifier2.ApplyTo(this);

	return true;
}

bool CRenegadeKrasisCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), 1)));

	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CVoiceOfResurgenceCard::CVoiceOfResurgenceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voice of Resurgence"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	
		cpAbility->SetCreateTokenOption(TRUE, _T("Elemental R"), 62048, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoiceOfResurgenceCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Elemental R"), 62048, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVoiceOfResurgenceCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (m_pGame->GetActivePlayer() == GetController());
}

//____________________________________________________________________________
//
CAzoriusCluestoneCard::CAzoriusCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Azorius Cluestone"), CardType::Artifact, nID,
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				WHITE_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBorosCluestoneCard::CBorosCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Boros Cluestone"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDimirCluestoneCard::CDimirCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dimir Cluestone"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGiveTakeCard::CGiveTakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Give // Take"), CardType::Sorcery, nID)
{
	{
		//Give
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +3));

		cpSpell->SetAbilityText(_T("Give. Casts"));
		cpSpell->SetAbilityName(_T("Give"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Take
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiveTakeCard::BeforeResolution1));

		cpSpell->SetAbilityText(_T("Take. Casts"));
		cpSpell->SetAbilityName(_T("Take"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Give & Take
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiveTakeCard::BeforeResolution2));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Give and Take. Casts"));
		cpSpell->SetAbilityName(_T("Give and Take"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CGiveTakeCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	int nCounters = pTarget->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -nCounters);
	pModifier1.ApplyTo(pTarget);

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(nCounters), MaximumValue(nCounters));
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

bool CGiveTakeCard::BeforeResolution2(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	if (pTarget1)
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
		pModifier1.ApplyTo(pTarget1);
	}

	if (pTarget2)
	{
		int nCounters = pTarget2->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -nCounters);
		pModifier1.ApplyTo(pTarget2);

		CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(nCounters), MaximumValue(nCounters));
		pModifier2.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CGolgariCluestoneCard::CGolgariCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golgari Cluestone"), CardType::Artifact, nID,
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGruulCluestoneCard::CGruulCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gruul Cluestone"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIzzetCluestoneCard::CIzzetCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Izzet Cluestone"), CardType::Artifact, nID,
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrzhovCluestoneCard::COrzhovCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orzhov Cluestone"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRakdosCluestoneCard::CRakdosCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rakdos Cluestone"), CardType::Artifact, nID,
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLACK_MANA_TEXT RED_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSelesnyaCluestoneCard::CSelesnyaCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Selesnya Cluestone"), CardType::Artifact, nID,
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
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				GREEN_MANA_TEXT WHITE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSimicCluestoneCard::CSimicCluestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Simic Cluestone"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTajicBladeOfTheLegionCard::CTajicBladeOfTheLegionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tajic, Blade of the Legion"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))

{
	GetCardKeyword()->AddIndestructible(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTajicBladeOfTheLegionCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+5));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CTajicBladeOfTheLegionCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CLegionsInitiativeCard::CLegionsInitiativeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Legion's Initiative"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+0), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
				RED_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddExileCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLegionsInitiativeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLegionsInitiativeCard::BeforeResolution(CAbilityAction* pAction)
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

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Legion's Initiative Effect"), 61118, &pSubjects);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSavagebornHydraCard::CSavagebornHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savageborn Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSavagebornHydraCard::OnZoneChanged))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

void CSavagebornHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CAliveWellCard::CAliveWellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Alive // Well"), CardType::Sorcery, nID)
{
	{
		//Alive
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Centaur A"), 2790,
				1));

		cpSpell->SetAbilityText(_T("Alive. Casts"));
		cpSpell->SetAbilityName(_T("Alive"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Well
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT));

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

		cpSpell->SetAbilityText(_T("Well. Casts"));
		cpSpell->SetAbilityName(_T("Well"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alive & Well
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAliveWellCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Alive and Well. Casts"));
		cpSpell->SetAbilityName(_T("Alive and Well"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CAliveWellCard::BeforeResolution(CAbilityAction* pAction)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Centaur A"), 2790, 1);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDeadbridgeChantCard::CDeadbridgeChantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deadbridge Chant"), CardType::GlobalEnchantment, nID, 
		_T("4") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(10);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		ATLASSERT(cpAbility);

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDeadbridgeChantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeadbridgeChantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pZone = pController->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("cards"))->GetIncluded(*pZone, cards)) return false;
	cards.Shuffle(pAction->GetController());

	CCard* pCard = cards.GetAt(0);
	
	if (pCard->GetCardType().IsCreature())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(pCard);
	}
	else
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pController);
		pModifier2.ApplyTo(pCard);

		if (!GetGame()->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("%s puts %s in his hand"), 
				pController, pCard->GetCardName(TRUE));
			GetGame()->Message(strMessage, 
				GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
				MessageImportance::High);	
		}
	}

	return true;
}

//____________________________________________________________________________
//
CNivixCyclopsCard::CNivixCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nivix Cyclops"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarpedPhysiqueCard::CWarpedPhysiqueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Warped Physique"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWarpedPhysiqueCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CWarpedPhysiqueCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	int nHand = pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize();

	CPowerModifier pModifier1 = CPowerModifier(Power(+nHand));
	CLifeModifier pModifier2 = CLifeModifier(Life(-nHand), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CCatchReleaseCard::CCatchReleaseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Catch // Release"), CardType::Sorcery, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCatchReleaseCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCatchReleaseCard::OnResolutionCompleted2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCatchReleaseCard::OnCardSelected))
	, nReleaseCounter(0)
{
	{
		//Catch
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpSpell->SetAbilityText(_T("Catch. Casts"));
		cpSpell->SetAbilityName(_T("Catch"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Release
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCatchReleaseCard::BeforeResolution));

		cpSpell->SetAbilityText(_T("Release. Casts"));
		cpSpell->SetAbilityName(_T("Release"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Catch & Release
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("5") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Catch and Release. Casts"));
		cpSpell->SetAbilityName(_T("Catch and Release"));
		AddSpell(cpSpell.GetPointer());
 	}
}

void CCatchReleaseCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(FALSE);

	pModifier1.ApplyTo(pTarget);

	if (pTarget->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
		pModifier2.ApplyTo((CCreatureCard*)pTarget);
	}
	else
	{
		CCardKeywordModifier pModifier3 = CCardKeywordModifier(CardKeyword::CardHaste, TRUE);
		pModifier3.ApplyTo(pTarget);
	}
}

bool CCatchReleaseCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	nReleaseCounter = 0;
	pSacrificed.RemoveAll();
	ReleaseFunction(pActivePlayerID);

	return true;
}

void CCatchReleaseCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(FALSE);

	pModifier1.ApplyTo(pTarget);

	if (pTarget->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
		pModifier2.ApplyTo((CCreatureCard*)pTarget);
	}
	else
	{
		CCardKeywordModifier pModifier3 = CCardKeywordModifier(CardKeyword::CardHaste, TRUE);
		pModifier3.ApplyTo(pTarget);
	}

	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	nReleaseCounter = 0;
	pSacrificed.RemoveAll();
	ReleaseFunction(pActivePlayerID);
}

void CCatchReleaseCard::ReleaseFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	CCardFilter m_CardFilter;

	if (nReleaseCounter == 0)
		m_CardFilter.SetComparer(new CardTypeComparer(CardType::Artifact, false));
	else if (nReleaseCounter == 1)
		m_CardFilter.SetComparer(new AnyCreatureComparer);
	else if (nReleaseCounter == 2)
		m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Enchantment, false));
	else if (nReleaseCounter == 3)
		m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));
	else 
		m_CardFilter.SetComparer(new CardTypeComparer(CardType::Planeswalker, false));

	m_CardFilter.AddNegateComparer(new ContainedinComparer(&pSacrificed));
	
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
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
									
				if (nReleaseCounter == 0)
					entry.strText.Format(_T("Sacrifice %s (as an artifact)"),
						pCard->GetCardName(TRUE));
				else if (nReleaseCounter == 1)
					entry.strText.Format(_T("Sacrifice %s (as a creature)"),
						pCard->GetCardName(TRUE));
				else if (nReleaseCounter == 2)
					entry.strText.Format(_T("Sacrifice %s (as an enchantment)"),
						pCard->GetCardName(TRUE));
				else if (nReleaseCounter == 3)
					entry.strText.Format(_T("Sacrifice %s (as a land)"),
						pCard->GetCardName(TRUE));
				else
					entry.strText.Format(_T("Sacrifice %s (as a planeswalker)"),
						pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
	}
	else
		Advance(PlayerID);
}

void CCatchReleaseCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
			pSacrificed.AddCard(pCard, CardPlacement::Top);

			Advance(dwContext1);
				
			return;
		}
}

void CCatchReleaseCard::Advance(int PlayerID)
{
	if (nReleaseCounter < 4)
	{
		nReleaseCounter++;
		ReleaseFunction(PlayerID);
	}
	else
	{
		nReleaseCounter = 0;

		int NextPlayer = PlayerID + 1;
		int PlayerCount = GetGame()->GetPlayerCount();
		CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

		if (NextPlayer >= PlayerCount)
			NextPlayer -= PlayerCount;
		if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
			ReleaseFunction(NextPlayer);
		else
		{
			for (int i = 0; i < pSacrificed.GetSize(); ++i)
			{
				CCard* pCard = pSacrificed.GetAt(i);

				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pCard->GetController());
				pModifier.ApplyTo(pCard);
			}
		}
	}
}

//____________________________________________________________________________
//
CMazeAbominationCard::CMazeAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maze Abomination"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMazeBehemothCard::CMazeBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maze Behemoth"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMazeGliderCard::CMazeGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Maze Glider"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMazeRusherCard::CMazeRusherCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Maze Rusher"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT, Power(6), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMazeSentinelCard::CMazeSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maze Sentinel"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Vigilance));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUncoveredCluesCard::CUncoveredCluesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Uncovered Clues"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			4));

	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);

	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(2), CZoneModifier::RoleType::PrimaryPlayer,
		CZoneModifier::RoleType::AllPlayers, CCardFilter::GetFilter(_T("instant cards or sorcery cards")),
		ZoneId::Hand, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::NotApplicable,
		MoveType::Others, CZoneModifier::RoleType::PrimaryPlayer);

	cpSpell->GetZoneModifier().SetReorderInformation(true, ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CViashinoFirstbladeCard::CViashinoFirstbladeCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Viashino Firstblade"), CardType::Creature, CREATURE_TYPE2(Viashino, Soldier), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmmaraTandrisCard::CEmmaraTandrisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Emmara Tandris"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(7))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWakeTheReflectionsCard::CWakeTheReflectionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wake the Reflections"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWakeTheReflectionsCard::OnResolutionCompleted))
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CWakeTheReflectionsCard::OnSelectionDone))
		, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CWakeTheReflectionsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CWakeTheReflectionsCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CWarleadersHelixCard::CWarleadersHelixCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Warleader's Helix"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, new AnyCreatureComparer, TRUE,
		Life(-4), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CAEtherlingCard::CAEtherlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("AEtherling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID, 
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAEtherlingCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Unblockable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(+1), Life(-1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1"),
				Power(-1), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

void CAEtherlingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!IsInplay()) return;

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAbilityAction->GetController());
	pModifier1.ApplyTo(this);

	CCountedCardContainer pSubjects;
	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBlastOfGeniusCard::CBlastOfGeniusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blast of Genius"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBlastOfGeniusCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlastOfGeniusCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CBlastOfGeniusCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
	pModifier.ApplyTo(pController);

	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature, (DWORD)pTargetPlayer);
	}

	return true;
}

void CBlastOfGeniusCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
			int nCMC = pCard->GetConvertedManaCost();
			pModifier1.ApplyTo(pCard);

			if (nCMC > 0)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				if ((CCreatureCard*)dwContext1)
					pModifier2.ApplyTo((CCreatureCard*)dwContext1);
				else
					pModifier2.ApplyTo((CPlayer*)dwContext2);
				}	
			return;
		}
}

//____________________________________________________________________________
//
CKorozdaGorgonCard::CKorozdaGorgonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Korozda Gorgon"), CardType::Creature, CREATURE_TYPE(Gorgon), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CUnflinchingCourageCard::CUnflinchingCourageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Unflinching Courage"), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Trample)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
}

//____________________________________________________________________________
//
CBorosMastiffCard::CBorosMastiffCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boros Mastiff"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBorosMastiffCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
 	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CBorosMastiffCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CHaazdaSnareSquadCard::CHaazdaSnareSquadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haazda Snare Squad"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLyevDecreeCard::CLyevDecreeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lyev Decree"), CardType::Sorcery, nID)
{
	{
		// 0 targets
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT));
		ATLASSERT(cpSpell);

		AddSpell(cpSpell.GetPointer());
	}
	{
		// 1-2 targets
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				false));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting()->SetSubjectCount(1, 2);

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CDetainModifier());

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiotControlCard::CRiotControlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Riot Control"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiotControlCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRiotControlCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	int nCreatures = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) != pController)
			nCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	CLifeModifier pModifier1 = CLifeModifier(Life(+nCreatures), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pController);

	CPlayerEffectModifier* pModifier2 = new CPlayerEffectModifier(PlayerEffectType::PreventAllPlayerDamage);	

	CScheduledPlayerModifier* pModifier3 = new CScheduledPlayerModifier(
		GetGame(), pModifier2, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pModifier2->ApplyTo(pController);
	pModifier3->ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CScionOfVituGhaziCard::CScionOfVituGhaziCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scion of Vitu-Ghazi"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CScionOfVituGhaziCard::OnZoneChanged))
	, m_bHandStack(false)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CScionOfVituGhaziCard::OnResolutionCompleted))
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CScionOfVituGhaziCard::OnSelectionDone))
	, m_CardFilter(_T("a creature token"), _T("creature tokens"), new CardTypeComparer(CardType::Creature | CardType::Token, true))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Bird G"), 2732, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScionOfVituGhaziCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
			
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CScionOfVituGhaziCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (pFromZone->GetPlayer() == pByPlayer && pFromZone->GetZoneId() == ZoneId::Stack &&
			moveType == MoveType::Cast && m_bHandStack);
}

void CScionOfVituGhaziCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;
	if (pToZone->GetZoneId() != ZoneId::Stack) return;

	if (pFromZone->GetZoneId() == ZoneId::Hand && moveType == MoveType::Cast)
		m_bHandStack = true;
	else
		m_bHandStack = false;
}

void CScionOfVituGhaziCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CScionOfVituGhaziCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CSteepleRocCard::CSteepleRocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Steeple Roc"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CHiddenStringsCard::CHiddenStringsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hidden Strings"), CardType::Sorcery, nID)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CHiddenStringsCard::OnSelected))
	, m_TapSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CHiddenStringsCard::OnTapSelected1))
	, m_TapSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CHiddenStringsCard::OnTapSelected2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHiddenStringsCard::OnZoneChanged))
{
	{		
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,
				new TrueCardComparer, false,
				new TrueCardComparer, false,
				_T(""), TRUE));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHiddenStringsCard::BeforeResolution));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CHiddenStringsCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHiddenStringsCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHiddenStringsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHiddenStringsCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	if (pTarget1)
		if (pTarget1->GetOrientation()->IsTapped())
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't untap %s"), pTarget1->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("Untap %s"), pTarget1->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
		
			m_TapSelection1.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 0, (DWORD)pTarget1, (DWORD)pTarget2);
		}
		else
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't tap %s"), pTarget1->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("Tap %s"), pTarget1->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
		
			m_TapSelection1.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 1, (DWORD)pTarget1, (DWORD)pTarget2);
		}
	else
		if (pTarget2->GetOrientation()->IsTapped())
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't untap %s"), pTarget2->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("Untap %s"), pTarget2->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			
			m_TapSelection2.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 0, (DWORD)pTarget2);
		}
		else
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't tap %s"), pTarget2->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("Tap %s"), pTarget2->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
		
			m_TapSelection2.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 1, (DWORD)pTarget2);
		}

	return true;
}

void CHiddenStringsCard::OnTapSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard1 = (CCard*)dwContext2;
				CCard* pCard2 = (CCard*)dwContext3;

				CCardOrientationModifier pModifier = CCardOrientationModifier(dwContext1);
				pModifier.ApplyTo(pCard1);

				if (pCard2)
					if (pCard2->GetOrientation()->IsTapped())
					{
						std::vector<SelectionEntry> entries;
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 0;
							selectionEntry.strText.Format(_T("Don't untap %s"), pCard2->GetCardName(TRUE));

							entries.push_back(selectionEntry);
						}
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 1;
							selectionEntry.strText.Format(_T("Untap %s"), pCard2->GetCardName(TRUE));

							entries.push_back(selectionEntry);
						}
			
						m_TapSelection2.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, 0, (DWORD)pCard2);
					}
					else
					{
						std::vector<SelectionEntry> entries;
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 0;
							selectionEntry.strText.Format(_T("Don't tap %s"), pCard2->GetCardName(TRUE));

							entries.push_back(selectionEntry);
						}
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = 1;
							selectionEntry.strText.Format(_T("Tap %s"), pCard2->GetCardName(TRUE));

							entries.push_back(selectionEntry);
						}
		
						m_TapSelection2.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, 1, (DWORD)pCard2);
					}
				else
					Cipher(pSelectionPlayer);

				return;
			
			}
			return;
		}
}

void CHiddenStringsCard::OnTapSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext2;

				CCardOrientationModifier pModifier = CCardOrientationModifier(dwContext1);
				pModifier.ApplyTo(pCard);

				Cipher(pSelectionPlayer);

				return;
			}
			return;
		}
}

bool CHiddenStringsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CHiddenStringsCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CHiddenStringsCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CHiddenStringsCard::Cipher(CPlayer* pController)
{	
	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pController->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pController->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CHiddenStringsCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CHiddenStringsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMindstaticCard::CMindstaticCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mindstatic"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("6"));
}

//____________________________________________________________________________
//
CMurmuringPhantasmCard::CMurmuringPhantasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Murmuring Phantasm"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CBaneAlleyBlackguardCard::CBaneAlleyBlackguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bane Alley Blackguard"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CCryptIncursionCard::CCryptIncursionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crypt Incursion"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCryptIncursionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCryptIncursionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	int nOldCreatures = m_CardFilter.CountIncluded(pTarget->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController)));
	pModifier1.ApplyTo(pTarget);

	int nNewCreatures = m_CardFilter.CountIncluded(pTarget->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	if (nNewCreatures < nOldCreatures)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(+3*(nOldCreatures - nNewCreatures)), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CFatalFumesCard::CFatalFumesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Fatal Fumes"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") BLACK_MANA_TEXT,
		Power(-4), Life(-2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CHiredTorturerCard::CHiredTorturerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hired Torturer"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHiredTorturerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CHiredTorturerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pTarget);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//
CRakdosDrakeCard::CRakdosDrakeCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Rakdos Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(2), NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRakdosDrakeCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddUnleash(FALSE);
}

void CRakdosDrakeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CSinisterPossessionCard::CSinisterPossessionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sinister Possession"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSinisterPossessionCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSinisterPossessionCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAweForTheGuildsCard::CAweForTheGuildsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Awe for the Guilds"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Awe for the Guilds Effect"), 61119, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CClearAPathCard::CClearAPathCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Clear a Path"), CardType::Sorcery, nID,
		RED_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Defender, false));
}

//____________________________________________________________________________
//
CPunishTheEnemyCard::CPunishTheEnemyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Punish the Enemy"), CardType::Instant, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject<CDoubleTargetSpell>(this, AbilityType::Instant,
			_T("4") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true,
			new AnyCreatureComparer, false, _T("")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPunishTheEnemyCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPunishTheEnemyCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CPlayer* pTargetPlayer = (CPlayer*)pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTargetPlayer);
	pModifier.ApplyTo(pTargetCreature);

	return true;
}

//____________________________________________________________________________
//
CPontiffOfBlightCard::CPontiffOfBlightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pontiff of Blight"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(7))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
			&CPontiffOfBlightCard::CreateAbility));

		cpAbility->GetOtherCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPontiffOfBlightCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
		DamageType::NotDealingDamage)));

	cpAbility->SetAbilityName(_T("Extort ability"));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiotPikerCard::CRiotPikerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Riot Piker"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CRubblebeltMaakaCard::CRubblebeltMaakaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rubblebelt Maaka"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+3), Life(+3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CWeaponSurgeCard::CWeaponSurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Weapon Surge"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				Power(+1), Life(0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
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
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(0), CreatureKeyword::FirstStrike));
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
CBatteringKrasisCard::CBatteringKrasisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battering Krasis"), CardType::Creature, CREATURE_TYPE2(Fish, Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBatteringKrasisCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBatteringKrasisCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBatteringKrasisCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CBatteringKrasisCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CKraulWarriorCard::CKraulWarriorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kraul Warrior"), CardType::Creature, CREATURE_TYPE2(Insect, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		_T("5") GREEN_MANA_TEXT, Power(+3), Life(+3))
{
}

//____________________________________________________________________________
//
CMendingTouchCard::CMendingTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mending Touch"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMutantsPreyCard::CMutantsPreyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mutant's Prey"), CardType::Instant, nID)
{
	{
	counted_ptr<CMutantsPreySpell> cpSpell(
		::CreateObject <CMutantsPreySpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CMutantsPreyCard::CMutantsPreySpell::CMutantsPreySpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting1()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));

	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CMutantsPreyCard::CMutantsPreySpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
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
CPhytoburstCard::CPhytoburstCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Phytoburst"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT,
		Power(+5), Life(+5),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSkylasherCard::CSkylasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skylasher"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CThrashingMossdogCard::CThrashingMossdogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrashing Mossdog"), CardType::Creature, CREATURE_TYPE2(Plant, Hound), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	m_CardFilter.AddComparer(new SpecificCardComparer(this));

	//Scavenge ability
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
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
CArmoredWolfRiderCard::CArmoredWolfRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Wolf-Rider"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
{
}

//____________________________________________________________________________
//
CAscendedLawmageCard::CAscendedLawmageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ascended Lawmage"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CBeetleformMageCard::CBeetleformMageCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Beetleform Mage"), CardType::Creature, CREATURE_TYPE3(Human, Insect, Wizard), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(+2), Life(+2), CreatureKeyword::Flying)
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}
//____________________________________________________________________________
//
CBronzebeakMoaCard::CBronzebeakMoaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bronzebeak Moa"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarnageGladiatorCard::CCarnageGladiatorCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Carnage Gladiator"), CardType::Creature, CREATURE_TYPE2(Skeleton, Warrior), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(2),
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDebtToTheDeathlessCard::CDebtToTheDeathlessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Debt to the Deathless"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->AddAbilityTag(AbilityTag::LifeLost);
	cpSpell->AddAbilityTag(AbilityTag::LifeGain);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDebtToTheDeathlessCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDebtToTheDeathlessCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	if (n > 0)
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(-2*n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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
	}

	return true;
}

//____________________________________________________________________________
//
CDownDirtyCard::CDownDirtyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Down // Dirty"), CardType::Sorcery, nID)
{
	{
		//Down
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAbilityText(_T("Down. Casts"));
		cpSpell->SetAbilityName(_T("Down"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Dirty
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Dirty. Casts"));
		cpSpell->SetAbilityName(_T("Dirty"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Down & Dirty
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				new TrueCardComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDownDirtyCard::BeforeResolution));
		cpSpell->GetTargeting2()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Down and Dirty. Casts"));
		cpSpell->SetAbilityName(_T("Down and Dirty"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CDownDirtyCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CPlayer* pTarget1 = (CPlayer*)pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
		
	if (pTarget1)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Discard, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		pModifier.ApplyTo(pTarget1);
	}

	if (pTarget2)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(pTarget2);
	}

	return true;
}

//____________________________________________________________________________
//
CDrownInFilthCard::CDrownInFilthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Drown in Filth"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDrownInFilthCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CDrownInFilthCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.AddSelection(MinimumValue(4), MaximumValue(4), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier1.ApplyTo(pController);

	int nLands = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	if (nLands > 0)
	{
		CPowerModifier pModifier2 = CPowerModifier(Power(-nLands));
		CLifeModifier pModifier3 = CLifeModifier(Life(-nLands), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier2.ApplyTo(pTarget);
		pModifier3.ApplyTo(pTarget);
	}

	return true;
}

//____________________________________________________________________________
//
CFluxchargerCard::CFluxchargerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fluxcharger"), CardType::Creature, CREATURE_TYPE(Weird), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT, Power(1), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::SwitchedPT);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGazeOfGraniteCard::CGazeOfGraniteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaze of Granite"), CardType::Sorcery, nID)
{
	counted_ptr<CPerniciousDeedSpell> cpSpell(
		::CreateObject<CPerniciousDeedSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("non-lands"))));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGleamOfBattleCard::CGleamOfBattleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gleam of Battle"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGleamOfBattleCard::SetTriggerContext));

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGleamOfBattleCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCard = pCreature;
	return true;
}

//____________________________________________________________________________
//
CGruulWarChantCard::CGruulWarChantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gruul War Chant"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+0), CreatureKeyword::CantBeBlockedBy1));

	cpAbility->SetToAttackingOnly();
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHaunterOfNightveilCard::CHaunterOfNightveilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haunter of Nightveil"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(-1), Life(+0)));

	cpAbility->SetAffectOpponentCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJelennSphinxCard::CJelennSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jelenn Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMawOfTheObzedatCard::CMawOfTheObzedatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maw of the Obzedat"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+1), Life(+1),
			new AnyCreatureComparer));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMorgueBurstCard::CMorgueBurstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morgue Burst"), CardType::Sorcery, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false,
			new AnyCreatureComparer, true,
			_T("")));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMorgueBurstCard::BeforeResolution));
	cpSpell->GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
	cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

bool CMorgueBurstCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCreatureCard* pTarget1 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCreatureCard* pTargetCreature2 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	CPlayer* pTargetPlayer2 = (CPlayer*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();
		
	if (pTarget1)
	{
		int nPower = GET_INTEGER(pTarget1->GetPower());

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pAction->GetController());
		
		pModifier1.ApplyTo(pTarget1);

		if ((nPower > 0) && (pTarget1->GetZoneId() == ZoneId::Hand))
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

			if (pTargetCreature2)
				pModifier2.ApplyTo(pTargetCreature2);
			else if (pTargetPlayer2)
				pModifier2.ApplyTo(pTargetPlayer2);

		}
	}

	return true;
}

//____________________________________________________________________________
//
CPilferedPlansCard::CPilferedPlansCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pilfered Plans"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPilferedPlansCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CPilferedPlansCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 2, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier1.ApplyTo(pTarget);

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CPlasmCaptureCard::CPlasmCaptureCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Plasm Capture"), CardType::Instant, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlasmCaptureCard::BeforeResolution));
}

bool CPlasmCaptureCard::BeforeResolution(CAbilityAction* pAction) const
{
	DWORD nCMC = pAction->GetAssociatedCard()->GetConvertedManaCost();

	CNumberEffectModifier pModifier = CNumberEffectModifier(GetGame(), _T("Plasm Capture Effect"), 61121, nCMC);
	pModifier.ApplyTo(pAction->GetController());
	
	return true;
}

//____________________________________________________________________________
//
CProfitLossCard::CProfitLossCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Profit // Loss"), CardType::Instant, nID)
{
	{
		//Profit
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				new AnyCreatureComparer));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Profit. Casts"));
		cpSpell->SetAbilityName(_T("Profit"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Loss
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				new AnyCreatureComparer));

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->SetAbilityText(_T("Loss. Casts"));
		cpSpell->SetAbilityName(_T("Loss"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Profit & Loss
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				new AnyCreatureComparer));

		cpSpell->SetAffectOpponentCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfitLossCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Profit and Loss. Casts"));
		cpSpell->SetAbilityName(_T("Profit and Loss"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CProfitLossCard::BeforeResolution(CAbilityAction* pAction)
{
	CPowerModifier pModifier1 = CPowerModifier(Power(+1));
	CLifeModifier pModifier2 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	
	CCountedCardContainer pCreatures;

	m_CardFilter.GetIncluded(*pBattlefield, pCreatures);

	for (int ic = 0; ic < pCreatures.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCreatures.GetAt(ic);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CProtectServeCard::CProtectServeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Protect // Serve"), CardType::Instant, nID)
{
	{
		//Protect
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				Power(+2), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Protect. Casts"));
		cpSpell->SetAbilityName(_T("Protect"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Serve
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				Power(-6), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Serve. Casts"));
		cpSpell->SetAbilityName(_T("Serve"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Protect & Serve
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProtectServeCard::BeforeResolution));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Protect and Serve. Casts"));
		cpSpell->SetAbilityName(_T("Protect and Serve"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CProtectServeCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCreatureCard* pTarget1 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCreatureCard* pTarget2 = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	if (pTarget1)
	{
		CPowerModifier pModifier1 = CPowerModifier(Power(+2));
		CLifeModifier pModifier2 = CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTarget1);
		pModifier2.ApplyTo(pTarget1);
	}

	if (pTarget2)
	{
		CPowerModifier pModifier3 = CPowerModifier(Power(-6));
		pModifier3.ApplyTo(pTarget2);
	}

	return true;
}

//____________________________________________________________________________
//
CReadyWillingCard::CReadyWillingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ready // Willing"), CardType::Instant, nID)
{
	{
		//Ready
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadyWillingCard::BeforeResolution1));

		cpSpell->SetAbilityText(_T("Ready. Casts"));
		cpSpell->SetAbilityName(_T("Ready"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Willing
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadyWillingCard::BeforeResolution2));

		cpSpell->SetAbilityText(_T("Willing. Casts"));
		cpSpell->SetAbilityName(_T("Willing"));
		AddSpell(cpSpell.GetPointer());
 	}
	{
		//Ready & Willing
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadyWillingCard::BeforeResolution3));

		cpSpell->SetHandOnly();
		
		cpSpell->SetAbilityText(_T("Ready and Willing. Casts"));
		cpSpell->SetAbilityName(_T("Ready and Willing"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CReadyWillingCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pController);
	pModifier2->ApplyTo(pController);

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));

	pModifier3.ApplyTo(pController);

	return true;
}

bool CReadyWillingCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Deathtouch, TRUE)));
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Lifelink, TRUE)));

	pModifier1.ApplyTo(pController);
	pModifier2.ApplyTo(pController);

	return true;
}

bool CReadyWillingCard::BeforeResolution3(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pController);
	pModifier2->ApplyTo(pController);

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
	CZoneCardModifier pModifier4 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Deathtouch, TRUE)));
	CZoneCardModifier pModifier5 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Lifelink, TRUE)));

	pModifier3.ApplyTo(pController);
	pModifier4.ApplyTo(pController);
	pModifier5.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CReapIntellectCard::CReapIntellectCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reap Intellect"), CardType::Sorcery, nID)
	, nValue(0)
	, m_CardSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CReapIntellectCard::OnCardSelected1))
	, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CReapIntellectCard::OnCardSelected2))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReapIntellectCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CReapIntellectCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pTarget);

	nValue = GetLastCastingExtraValue();

	pSelected.RemoveAll();
	pExiled.RemoveAll();

	SelectionLoop(pController, pTarget);

	return true;
}

void CReapIntellectCard::SelectionLoop(CPlayer* pController, CPlayer* pTarget)
{
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new ContainedinComparer(&pSelected));

	int n = m_CardFilter.CountIncluded(pHand->GetCardContainer());

	if ((n == 0) || (pSelected.GetSize() >= nValue))
	{
		if (pSelected.GetSize() > 0)
		{
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pController);

			for (int i = 0; i < pSelected.GetSize(); ++i)
				pModifier.ApplyTo(pSelected.GetAt(i));

			ExileLoop(pController, pTarget);
		}
	}
	else
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;

			entry.dwContext = 0;
									
			entry.strText.Format(_T("Stop selecting cards (%d selected so far)"),
				pSelected.GetSize());

			entries.push_back(entry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			if (!pCard->GetCardType().IsLand() && !pSelected.HasCard(pCard))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s (card %d of %d)"),
					pCard->GetCardName(TRUE), pSelected.GetSize() + 1, GET_INTEGER(nValue));

				entries.push_back(entry);
			}
		}
		m_CardSelection1.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}
}

void CReapIntellectCard::OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops the selection"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CPlayer* pTarget = (CPlayer*)dwContext1;

				if (pSelected.GetSize() > 0)
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);

					for (int i = 0; i < pSelected.GetSize(); ++i)
						pModifier.ApplyTo(pSelected.GetAt(i));

					ExileLoop(pSelectionPlayer, pTarget);
				}

				return;
			}
			else
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
				pSelected.AddCard(pCard, CardPlacement::Top);

				SelectionLoop(pSelectionPlayer, (CPlayer*)dwContext1);
				
				return;
			}
		}
}

void CReapIntellectCard::ExileLoop(CPlayer* pController, CPlayer* pTarget)
{
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	CZone* pGraveyard = pTarget->GetZoneById(ZoneId::Graveyard);
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop exiling cards (%d exiled so far)"),
			pExiled.GetSize());

		entries.push_back(entry);
	}
	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);

		bool bMatch = false;

		for (int j = 0; j < pSelected.GetSize(); j++)
			if (pCard->GetPrintedCardName() == pSelected.GetAt(j)->GetPrintedCardName())
			{
				bMatch = true;
				break;
			}

		if (bMatch && !pExiled.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Exile %s from %s's graveyard"),
				pCard->GetCardName(TRUE), pTarget->GetPlayerName());

			entries.push_back(entry);
		}
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		bool bMatch = false;

		for (int j = 0; j < pSelected.GetSize(); j++)
			if (pCard->GetPrintedCardName() == pSelected.GetAt(j)->GetPrintedCardName())
			{
				bMatch = true;
				break;
			}

		if (bMatch && !pExiled.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Exile %s from %s's hand"),
				pCard->GetCardName(TRUE), pTarget->GetPlayerName());

			entries.push_back(entry);
		}
	}
	for (int i = 0; i < pLibrary->GetSize(); ++i)
	{
		CCard* pCard = pLibrary->GetAt(i);

		bool bMatch = false;

		for (int j = 0; j < pSelected.GetSize(); j++)
			if ((pCard->GetPrintedCardName() == pSelected.GetAt(j)->GetPrintedCardName()) && (pSelected.GetAt(j)->GetZoneId() == ZoneId::Exile))
			{
				bMatch = true;
				break;
			}

		if (bMatch && !pExiled.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Exile %s from %s's library"),
				pCard->GetCardName(TRUE), pTarget->GetPlayerName());

			entries.push_back(entry);
		}
	}
	m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
}

void CReapIntellectCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops exiling cards"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < pExiled.GetSize(); ++i)
					pExiled.GetAt(i)->Move(pExiled.GetAt(i)->GetOwner()->GetZoneById(ZoneId::Exile), pSelectionPlayer, MoveType::Others);

				((CPlayer*)dwContext1)->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s exiles %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pExiled.AddCard(pCard, CardPlacement::Top);

				ExileLoop(pSelectionPlayer, (CPlayer*)dwContext1);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CRestoreThePeaceCard::CRestoreThePeaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Restore the Peace"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetGlobalCardFilter().AddComparer(new CardFlagComparer(CardFlag::_DealtDamage, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpeciesGorgerCard::CSpeciesGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("SpeciesGorger"), CardType::Creature, CREATURE_TYPE2(Frog, Beast), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
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
		new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpikeJesterCard::CSpikeJesterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Spike Jester"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CTitheDrinkerCard::CTitheDrinkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tithe Drinker"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodlotCrawlerCard::CWoodlotCrawlerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Woodlot Crawler"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Forestwalk)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CZhurTaaDruidCard::CZhurTaaDruidCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Zhur-Taa Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
			
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

    AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
